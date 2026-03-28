#include "PySUIBridge.h"
#include "PyUserWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Blueprint/UserWidget.h"
#include "Components/Widget.h"
#include "Framework/Docking/TabManager.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/SWindow.h"
#include "Widgets/Layout/SBox.h"
#include "Framework/Application/SlateApplication.h"
#include "Editor.h"

TMap<FName, TWeakObjectPtr<UUserWidget>> UPySUIBridge::RegisteredTabWidgets;
TMap<FName, TWeakPtr<SWindow>> UPySUIBridge::OpenWindows;

// ===== Widget Creation =====

UUserWidget* UPySUIBridge::CreateUserWidget(
	UObject* WorldContextObject,
	TSubclassOf<UUserWidget> WidgetClass,
	APlayerController* OwningPlayer)
{
	if (!WidgetClass)
	{
		WidgetClass = UPyUserWidget::StaticClass();
	}

	UWorld* World = nullptr;
	if (WorldContextObject)
	{
		World = WorldContextObject->GetWorld();
	}
	if (!World && GEditor)
	{
		World = GEditor->GetEditorWorldContext().World();
	}
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("PySUIBridge::CreateUserWidget - Cannot find a valid World."));
		return nullptr;
	}

	UUserWidget* Widget = nullptr;
	if (OwningPlayer)
	{
		Widget = CreateWidget<UUserWidget>(OwningPlayer, WidgetClass);
	}
	else
	{
		Widget = CreateWidget<UUserWidget>(World, WidgetClass);
	}

	if (!Widget)
	{
		UE_LOG(LogTemp, Error, TEXT("PySUIBridge::CreateUserWidget - CreateWidget returned null for class %s."),
			*WidgetClass->GetName());
	}

	return Widget;
}

UWidget* UPySUIBridge::ConstructWidget(
	UUserWidget* OwnerWidget,
	TSubclassOf<UWidget> WidgetClass,
	FName WidgetName)
{
	if (!OwnerWidget)
	{
		UE_LOG(LogTemp, Error, TEXT("PySUIBridge::ConstructWidget - OwnerWidget is null."));
		return nullptr;
	}

	if (!WidgetClass)
	{
		UE_LOG(LogTemp, Error, TEXT("PySUIBridge::ConstructWidget - WidgetClass is null."));
		return nullptr;
	}

	UWidgetTree* Tree = OwnerWidget->WidgetTree;
	if (!Tree)
	{
		UE_LOG(LogTemp, Error, TEXT("PySUIBridge::ConstructWidget - WidgetTree is null. Was the UserWidget properly initialized?"));
		return nullptr;
	}

	UWidget* NewWidget = nullptr;
	if (WidgetClass->IsChildOf(UUserWidget::StaticClass()))
	{
		// For UUserWidget-derived types, must use CreateWidget which calls Initialize()
		TSubclassOf<UUserWidget> AsUserWidgetClass;
		AsUserWidgetClass = *WidgetClass;
		NewWidget = CreateWidget<UUserWidget>(Tree, AsUserWidgetClass, WidgetName);
	}
	else
	{
		// For plain UWidget types, use NewObject with WidgetTree as Outer
		NewWidget = NewObject<UWidget>(Tree, WidgetClass, WidgetName, RF_Transactional);
	}

	if (!NewWidget)
	{
		UE_LOG(LogTemp, Error, TEXT("PySUIBridge::ConstructWidget - Failed to construct widget of class %s."),
			*WidgetClass->GetName());
	}

	return NewWidget;
}

void UPySUIBridge::SetRootWidget(UUserWidget* OwnerWidget, UWidget* RootWidget)
{
	if (!OwnerWidget)
	{
		UE_LOG(LogTemp, Error, TEXT("PySUIBridge::SetRootWidget - OwnerWidget is null."));
		return;
	}

	UWidgetTree* Tree = OwnerWidget->WidgetTree;
	if (!Tree)
	{
		UE_LOG(LogTemp, Error, TEXT("PySUIBridge::SetRootWidget - WidgetTree is null."));
		return;
	}

	Tree->RootWidget = RootWidget;
}

UWidget* UPySUIBridge::GetRootWidget(UUserWidget* OwnerWidget)
{
	if (!OwnerWidget)
	{
		return nullptr;
	}
	return OwnerWidget->GetRootWidget();
}

void UPySUIBridge::ForceRebuildWidget(UWidget* Widget)
{
	if (!Widget)
	{
		return;
	}
	Widget->TakeWidget();
}

void UPySUIBridge::SynchronizeWidgetProperties(UWidget* Widget)
{
	if (!Widget)
	{
		return;
	}
	Widget->SynchronizeProperties();
}

// ===== Editor Tab =====

bool UPySUIBridge::RegisterEditorTab(FName TabId, const FText& DisplayName, UUserWidget* Widget)
{
	if (TabId.IsNone())
	{
		UE_LOG(LogTemp, Error, TEXT("PySUIBridge::RegisterEditorTab - TabId is None."));
		return false;
	}

	if (!Widget)
	{
		UE_LOG(LogTemp, Error, TEXT("PySUIBridge::RegisterEditorTab - Widget is null."));
		return false;
	}

	if (FGlobalTabmanager::Get()->HasTabSpawner(TabId))
	{
		FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(TabId);
	}

	RegisteredTabWidgets.Add(TabId, Widget);

	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(TabId,
		FOnSpawnTab::CreateLambda([TabId](const FSpawnTabArgs& Args) -> TSharedRef<SDockTab>
		{
			TSharedRef<SDockTab> DockTab = SNew(SDockTab)
				.TabRole(ETabRole::NomadTab);

			TWeakObjectPtr<UUserWidget>* WidgetPtr = RegisteredTabWidgets.Find(TabId);
			if (WidgetPtr && WidgetPtr->IsValid())
			{
				UUserWidget* TabWidget = WidgetPtr->Get();
				DockTab->SetContent(TabWidget->TakeWidget());
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("PySUIBridge - Widget for tab '%s' is no longer valid."),
					*TabId.ToString());
			}

			DockTab->SetOnTabClosed(SDockTab::FOnTabClosedCallback::CreateLambda([TabId](TSharedRef<SDockTab>)
			{
			}));

			return DockTab;
		}))
		.SetDisplayName(DisplayName);

	return true;
}

void UPySUIBridge::OpenEditorTab(FName TabId)
{
	if (TabId.IsNone())
	{
		return;
	}
	FGlobalTabmanager::Get()->TryInvokeTab(TabId);
}

void UPySUIBridge::CloseEditorTab(FName TabId)
{
	if (TabId.IsNone())
	{
		return;
	}

	TSharedPtr<SDockTab> Tab = FGlobalTabmanager::Get()->FindExistingLiveTab(TabId);
	if (Tab.IsValid())
	{
		Tab->RequestCloseTab();
	}
}

void UPySUIBridge::UnregisterEditorTab(FName TabId)
{
	if (TabId.IsNone())
	{
		return;
	}

	CloseEditorTab(TabId);

	if (FGlobalTabmanager::Get()->HasTabSpawner(TabId))
	{
		FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(TabId);
	}

	RegisteredTabWidgets.Remove(TabId);
}

// ===== Standalone Window =====

FName UPySUIBridge::OpenWindow(const FText& Title, UUserWidget* Widget, float Width, float Height)
{
	if (!Widget)
	{
		UE_LOG(LogTemp, Error, TEXT("PySUIBridge::OpenWindow - Widget is null."));
		return NAME_None;
	}

	if (!FSlateApplication::IsInitialized())
	{
		UE_LOG(LogTemp, Error, TEXT("PySUIBridge::OpenWindow - SlateApplication is not initialized."));
		return NAME_None;
	}

	static int32 WindowCounter = 0;
	FName WindowId = *FString::Printf(TEXT("PySUIWindow_%d"), WindowCounter++);

	TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(Title)
		.ClientSize(FVector2D(Width, Height))
		.SupportsMaximize(true)
		.SupportsMinimize(true)
		[
			Widget->TakeWidget()
		];

	FSlateApplication::Get().AddWindow(Window);
	OpenWindows.Add(WindowId, Window);

	return WindowId;
}

void UPySUIBridge::CloseWindow(FName WindowId)
{
	if (WindowId.IsNone())
	{
		return;
	}

	TWeakPtr<SWindow>* WindowPtr = OpenWindows.Find(WindowId);
	if (WindowPtr)
	{
		TSharedPtr<SWindow> Window = WindowPtr->Pin();
		if (Window.IsValid())
		{
			Window->RequestDestroyWindow();
		}
		OpenWindows.Remove(WindowId);
	}
}

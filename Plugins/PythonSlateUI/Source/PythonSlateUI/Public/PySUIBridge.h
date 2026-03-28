#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Blueprint/UserWidget.h"
#include "Components/Widget.h"
#include "Components/PanelWidget.h"
#include "Widgets/Docking/SDockTab.h"
#include "PySUIBridge.generated.h"

/**
 * Bridge function library that fills API gaps for creating UE UI from Python.
 * 
 * These functions supplement the existing unreal Python API, enabling workflows
 * that are blocked by BlueprintInternalUseOnly, C++ templates, or non-reflection APIs:
 *   - CreateUserWidget:  bypasses UUserWidget being Abstract + BlueprintInternalUseOnly on Create()
 *   - ConstructWidget:   wraps WidgetTree->ConstructWidget (C++ template, not UFUNCTION)
 *   - SetRootWidget:     wraps WidgetTree->RootWidget assignment (UPROPERTY not script-exposed)
 *   - RegisterEditorTab: wraps FGlobalTabmanager (non-reflection Slate API)
 *   - OpenWindow:        wraps SNew(SWindow) + FSlateApplication::AddWindow
 */
UCLASS()
class PYTHONSLATEUI_API UPySUIBridge : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	// ===== Widget Creation =====

	/**
	 * Create a UUserWidget instance with proper initialization.
	 * Bypasses the BlueprintInternalUseOnly restriction on WidgetBlueprintLibrary::Create
	 * and the Abstract flag on UUserWidget.
	 * 
	 * @param WorldContextObject  World context (e.g. unreal.get_editor_world())
	 * @param WidgetClass         The UUserWidget subclass to create (default: UPyUserWidget)
	 * @param OwningPlayer        Optional owning player controller
	 * @return The created and initialized UUserWidget
	 */
	UFUNCTION(BlueprintCallable, Category="PySUI|Widget", meta=(WorldContext="WorldContextObject", DeterminesOutputType="WidgetClass"))
	static UUserWidget* CreateUserWidget(
		UObject* WorldContextObject,
		TSubclassOf<UUserWidget> WidgetClass,
		APlayerController* OwningPlayer = nullptr);

	/**
	 * Construct a child UWidget within a UserWidget's WidgetTree.
	 * Wraps WidgetTree->ConstructWidget<T>() which is a C++ template not exposed to Python.
	 * The created widget has proper Outer (the WidgetTree) for correct lifecycle management.
	 * 
	 * @param OwnerWidget  The parent UUserWidget that owns the WidgetTree
	 * @param WidgetClass  The UWidget subclass to create (e.g. unreal.VerticalBox)
	 * @param WidgetName   Optional name for the widget
	 * @return The newly constructed UWidget
	 */
	UFUNCTION(BlueprintCallable, Category="PySUI|Widget", meta=(DeterminesOutputType="WidgetClass"))
	static UWidget* ConstructWidget(
		UUserWidget* OwnerWidget,
		TSubclassOf<UWidget> WidgetClass,
		FName WidgetName = NAME_None);

	/**
	 * Set the root widget of a UUserWidget.
	 * Wraps WidgetTree->RootWidget assignment which is not script-exposed.
	 * 
	 * @param OwnerWidget  The UUserWidget to set root on
	 * @param RootWidget   The widget to set as root (typically a layout panel)
	 */
	UFUNCTION(BlueprintCallable, Category="PySUI|Widget")
	static void SetRootWidget(UUserWidget* OwnerWidget, UWidget* RootWidget);

	/**
	 * Get the root widget of a UUserWidget.
	 * 
	 * @param OwnerWidget  The UUserWidget to query
	 * @return The current root widget, or nullptr
	 */
	UFUNCTION(BlueprintCallable, Category="PySUI|Widget")
	static UWidget* GetRootWidget(UUserWidget* OwnerWidget);

	/**
	 * Force rebuild of the underlying Slate widget.
	 * Wraps TakeWidget() which returns TSharedRef<SWidget> (not Python-compatible).
	 * Call this after building a widget tree to ensure Slate widgets are constructed.
	 * Usually not needed since AddToViewport/AddChild trigger this internally.
	 */
	UFUNCTION(BlueprintCallable, Category="PySUI|Widget")
	static void ForceRebuildWidget(UWidget* Widget);

	/**
	 * Force synchronize UWidget properties to the underlying Slate widget.
	 * Useful after modifying properties if the visual doesn't update.
	 */
	UFUNCTION(BlueprintCallable, Category="PySUI|Widget")
	static void SynchronizeWidgetProperties(UWidget* Widget);

	// ===== Editor Tab =====

	/**
	 * Register a nomad editor tab that will display the given UUserWidget.
	 * The tab appears in Window menu and can be docked like any editor panel.
	 * 
	 * @param TabId        Unique identifier for the tab
	 * @param DisplayName  Human-readable name shown in the tab header
	 * @param Widget       The UUserWidget to display (must already be created via CreateUserWidget)
	 * @return True if registration succeeded
	 */
	UFUNCTION(BlueprintCallable, Category="PySUI|EditorTab")
	static bool RegisterEditorTab(FName TabId, const FText& DisplayName, UUserWidget* Widget);

	/**
	 * Open (invoke) a previously registered editor tab.
	 * If the tab is already open, it will be brought to focus.
	 */
	UFUNCTION(BlueprintCallable, Category="PySUI|EditorTab")
	static void OpenEditorTab(FName TabId);

	/**
	 * Close an editor tab. The tab remains registered and can be reopened.
	 */
	UFUNCTION(BlueprintCallable, Category="PySUI|EditorTab")
	static void CloseEditorTab(FName TabId);

	/**
	 * Unregister an editor tab completely. Closes it if open.
	 */
	UFUNCTION(BlueprintCallable, Category="PySUI|EditorTab")
	static void UnregisterEditorTab(FName TabId);

	// ===== Standalone Window =====

	/**
	 * Open a standalone OS window displaying a UUserWidget.
	 * 
	 * @param Title   Window title
	 * @param Widget  The UUserWidget to display
	 * @param Width   Window width in pixels
	 * @param Height  Window height in pixels
	 * @return Window ID that can be used with CloseWindow
	 */
	UFUNCTION(BlueprintCallable, Category="PySUI|Window")
	static FName OpenWindow(
		const FText& Title,
		UUserWidget* Widget,
		float Width = 800.f,
		float Height = 600.f);

	/**
	 * Close a standalone window opened via OpenWindow.
	 */
	UFUNCTION(BlueprintCallable, Category="PySUI|Window")
	static void CloseWindow(FName WindowId);

private:
	/** Registered widgets keyed by TabId, prevent GC */
	static TMap<FName, TWeakObjectPtr<UUserWidget>> RegisteredTabWidgets;

	/** Open windows keyed by WindowId */
	static TMap<FName, TWeakPtr<SWindow>> OpenWindows;
};

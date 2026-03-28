#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PyUserWidget.generated.h"

/**
 * Concrete UUserWidget subclass that can be instantiated from Python.
 * UUserWidget itself is Abstract and cannot be created via NewObject.
 * This class provides the minimal concrete container needed to:
 * - Host a widget tree built from Python
 * - Be displayed via AddToViewport() or added to editor tabs
 */
UCLASS(BlueprintType, Blueprintable, meta=(DisplayName="Python User Widget"))
class PYTHONSLATEUI_API UPyUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPyUserWidget(const FObjectInitializer& ObjectInitializer);
};

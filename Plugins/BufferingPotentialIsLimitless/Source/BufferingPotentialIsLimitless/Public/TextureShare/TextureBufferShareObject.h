#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "TextureBufferShareObject.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class BUFFERINGPOTENTIALISLIMITLESS_API UTextureBufferShareObject : public UObject
{
	GENERATED_BODY()
public:
	virtual bool CreateShareHandle(const FString& InName, int InWidth, int InHeight, EPixelFormat Format) { return false; }

	virtual bool CreateShareHandleByRenderTarget(const FString& InName, UTextureRenderTarget2D* Source) { return false; }

	virtual bool OpenShareHandle(const FString& InName) { return false; }

	FTextureRHIRef GetTextureRHI() { return mBufferRHI; }

	int GetMemorySize() const { return MemorySize; }

	int GetWidth() const { return Width; }

	int GetHeight() const { return Height; }

protected:
	int MemorySize = 0;

	int Width = 0;

	int Height = 0;

	FString ShareName;

	FTextureRHIRef mBufferRHI = nullptr;

	bool bExtendRHI = false;
};
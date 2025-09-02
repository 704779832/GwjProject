#pragma once

#include "TextureBufferShareObject.h"
#include "TextureBufferShareObjectDX12.generated.h"

UCLASS()
class UTextureBufferShareObjectDX12 : public UTextureBufferShareObject
{
	GENERATED_BODY()
public:
	virtual ~UTextureBufferShareObjectDX12();

	virtual bool CreateShareHandle(const FString& InName, int InWidth, int InHeight, EPixelFormat Format) override;

	virtual bool CreateShareHandleByRenderTarget(const FString& InName, UTextureRenderTarget2D* Source) override;

	virtual bool OpenShareHandle(const FString& InName) override;
private:
	bool CreateDX12BufferShareHandle();
private:
	void* DX_ShareHandle_NT = nullptr;

	void* DX_ShareHandle = nullptr;
};
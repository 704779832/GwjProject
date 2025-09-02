#pragma once
#include "TextureBufferShareObject.h"
#include "TextureBufferShareObjectVulkan.generated.h"

class FRHITexture;


UCLASS()
class UTextureBufferShareObjectVulkan : public UTextureBufferShareObject
{
	GENERATED_BODY()
public:
	virtual ~UTextureBufferShareObjectVulkan();

	virtual bool CreateShareHandle(const FString& InName, int InWidth, int InHeight, EPixelFormat Format) override;

	virtual bool CreateShareHandleByRenderTarget(const FString& InName, UTextureRenderTarget2D* Source) override;

	virtual bool OpenShareHandle(const FString& InName) override;

public:
	typedef struct VulkanShareTextureShmStruct_st {
		int Linux_HandleFd = 0;//不能通过值传递FD

		int Offset;
		int MemorySize;

		int32 UETexture_SizeX;
		int32 UETexture_SizeY;
		uint16 UETexture_Depth;

		ETextureCreateFlags UETexture_Flags;
		EPixelFormat UETexture_Format;
		ETextureDimension UETexture_Dimension;
		uint8 UETexture_NumMips;
		uint16 UETexture_ArraySize;
		uint8 UETexture_NumSamples;
	} VulkanShareTextureShmStruct;

private:
	static bool CreateVulkanBufferShareHandle(FRHITexture* Source, VulkanShareTextureShmStruct& Out);

	static bool OpenVulkanBufferShareHandle(const VulkanShareTextureShmStruct& Source, FRHITexture*& OutRHITexture);


	VulkanShareTextureShmStruct ShmStruct;
//根据输入名称映射共享显存或Socket消息中传递

//Unix Socket相关 用于传递Linux平台上的共享句柄
private:
	static bool CreateUnixSocket(const FString& Name, int& OutSocketFD,int& OutClientSocketFD);

	static bool ConnectUnixSocket(const FString& Name, int& OutSocketFD);

	static bool ClosedSocketFD(int SocketFD);

	static bool SendDataToUnixSocket(int SocketFD, const VulkanShareTextureShmStruct& InData);

	static bool ReadDataFromUnixSocket(int SocketFD, VulkanShareTextureShmStruct& OutData);

	int SocketFD = -1;

	int ClientSocketFD = -1;
};

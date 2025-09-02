#include "TextureAssetTools/UpdateTextureHelper.h"
#include "Engine/Texture2D.h"
#include "Engine/VolumeTexture.h"
#include "Engine/Texture2DArray.h"


void UUpdateTextureHelper::CopyTextureData2D(const void* Source, void* Dest, uint32 SizeY, EPixelFormat Format, uint32 SourceStride, uint32 DestStride)

{
	const uint32 BlockSizeY = GPixelFormats[Format].BlockSizeY;
	const uint32 NumBlocksY = (SizeY + BlockSizeY - 1) / BlockSizeY;

	// a DestStride of 0 means to use the SourceStride
	if (SourceStride == DestStride || DestStride == 0)
	{
		// If the source and destination have the same stride, copy the data in one block.
		if (ensure(Source))
		{
			FMemory::ParallelMemcpy(Dest, Source, NumBlocksY * SourceStride, EMemcpyCachePolicy::StoreUncached);
		}
		else
		{
			FMemory::Memzero(Dest, NumBlocksY * SourceStride);
		}
	}
	else
	{
		// If the source and destination have different strides, copy each row of blocks separately.
		const uint32 NumBytesPerRow = FMath::Min<uint32>(SourceStride, DestStride);
		for (uint32 BlockY = 0; BlockY < NumBlocksY; ++BlockY)
		{
			if (ensure(Source))
			{
				FMemory::ParallelMemcpy(
					(uint8*)Dest + DestStride * BlockY,
					(uint8*)Source + SourceStride * BlockY,
					NumBytesPerRow,
					EMemcpyCachePolicy::StoreUncached
				);
			}
			else
			{
				FMemory::Memzero((uint8*)Dest + DestStride * BlockY, NumBytesPerRow);
			}
		}
	}
}

FTexturePlatformData* UUpdateTextureHelper::SafeGetTexturePlatformData(UTexture* Target)
{
	if (!::IsValid(Target))return nullptr;
	if (UTexture2D* Texture = Cast<UTexture2D>(Target))
	{
		return Texture->GetPlatformData();
	}

	if (UVolumeTexture* Texture = Cast<UVolumeTexture>(Target))
	{
		return Texture->GetPlatformData();
	}

	if (UTexture2DArray* Texture = Cast<UTexture2DArray>(Target))
	{
		return Texture->GetPlatformData();
	}

	return *Target->GetRunningPlatformData();
}

void UUpdateTextureHelper::SafeSetTexturePlatformData(UTexture* Target, FTexturePlatformData* PlatformData)
{
	if (!::IsValid(Target))return;
	if (UTexture2D* Texture = Cast<UTexture2D>(Target))
	{
		Texture->SetPlatformData(PlatformData);
		return;
	}

	if (UVolumeTexture* Texture = Cast<UVolumeTexture>(Target))
	{
		Texture->SetPlatformData(PlatformData);
		return;
	}

	if (UTexture2DArray* Texture = Cast<UTexture2DArray>(Target))
	{
		Texture->SetPlatformData(PlatformData);
		return;
	}

}

FIntVector4 UUpdateTextureHelper::SafeGetTextureSizeAndNumMip(UTexture* Target)
{
	if (!::IsValid(Target))return { 0,0,0,0 };
	const int32 Width = FMath::Max(1, Target->GetSurfaceWidth());
	const int32 Height = FMath::Max(1, Target->GetSurfaceHeight());
	const int32 Depth = Target->GetSurfaceDepth() == 0 ? FMath::Max(1, (int)Target->GetSurfaceArraySize()) : FMath::Max(1, (int)Target->GetSurfaceDepth());

	int32 NumMip = 1;//这里可能需要根据类型获取对应的数量
	if (UTexture2D* Texture2D = Cast<UTexture2D>(Target))
	{
		NumMip= Texture2D->GetNumMips();
	}
	else if (UVolumeTexture* VolumeTexture = Cast<UVolumeTexture>(Target))
	{
		NumMip = VolumeTexture->GetNumMips();
	}
	else if (UTexture2DArray* Texture2DArray = Cast<UTexture2DArray>(Target))
	{
		NumMip = Texture2DArray->GetNumMips();
	}

	return { Width,Height,Depth,NumMip };
}

EPixelFormat UUpdateTextureHelper::SafeGetTexturePixelFormat(UTexture* Target)
{
	if (!::IsValid(Target))return EPixelFormat::PF_Unknown;

	if (UTexture2D* Texture = Cast<UTexture2D>(Target))
	{
		return Texture->GetPixelFormat();
	}

	if (UVolumeTexture* Texture = Cast<UVolumeTexture>(Target))
	{
		return Texture->GetPixelFormat();
	}

	if (UTexture2DArray* Texture = Cast<UTexture2DArray>(Target))
	{
		return Texture->GetPixelFormat();
	}

	return EPixelFormat::PF_Unknown;
}

void UUpdateTextureHelper::Editor_TextureUpdateResource(UTexture* Target)
{
#if WITH_EDITOR
	if (!::IsValid(Target))return;

	Target->UpdateResource();
	Target->MarkPackageDirty();
#endif
}

void UUpdateTextureHelper::Editor_SetTextureSRGB(UTexture* Target, bool bSRGB)
{
#if WITH_EDITOR
	if (!::IsValid(Target))return;

	Target->SRGB = bSRGB;
	Editor_TextureUpdateResource(Target);
#endif
}

void UUpdateTextureHelper::Editor_SetTextureFormat(UTexture* Target, ETextureSourceFormat Format)
{
#if WITH_EDITOR
	if (!::IsValid(Target))return;
	const FIntVector4 SizeAndNumMip = SafeGetTextureSizeAndNumMip(Target);

	Target->Source.Init(
		SizeAndNumMip.X,
		SizeAndNumMip.Y,
		SizeAndNumMip.Z,
		SizeAndNumMip.W,
		Format
	);
	Editor_TextureUpdateResource(Target);
#endif
}

void UUpdateTextureHelper::Editor_SetTextureCompressionSetting(UTexture* Target, TextureCompressionSettings CompressionSetting)
{
#if WITH_EDITOR
	if (!::IsValid(Target))return;

	Target->CompressionSettings = CompressionSetting;
	Editor_TextureUpdateResource(Target);
#endif
}

void UUpdateTextureHelper::Editor_SetTextureTextureGroup(UTexture* Target, TextureGroup InGroup)
{
#if WITH_EDITOR
	if (!::IsValid(Target))return;

	Target->LODGroup = InGroup;
	Editor_TextureUpdateResource(Target);
#endif
}

void UUpdateTextureHelper::Editor_SetTextureSize(UTexture* Target, const FVector& Size, int32 NumMip)
{
#if WITH_EDITOR
	if (!::IsValid(Target))return;

	const int32 SizeX = Size.X;
	const int32 SizeY = Size.Y;
	const int32 SizeZ = Size.Z;

	ETextureSourceFormat SourceFormat = Target->Source.GetFormat();
	
	FTexturePlatformData* PlatformData = SafeGetTexturePlatformData(Target);
	if (!PlatformData)
	{
		PlatformData = new FTexturePlatformData();
		SafeSetTexturePlatformData(Target, PlatformData);
	}

	PlatformData->SizeX = SizeX;
	PlatformData->SizeY = SizeY;
	PlatformData->SetNumSlices(SizeZ);

	while (PlatformData->Mips.Num()< NumMip)
	{
		FTexture2DMipMap* Mip = new FTexture2DMipMap();
		PlatformData->Mips.Add(Mip);
	}

	for (int i = 0; i < PlatformData->Mips.Num(); ++i)
	{
		PlatformData->Mips[i].SizeX = SizeX;
		PlatformData->Mips[i].SizeY = SizeY;
		PlatformData->Mips[i].SizeZ = SizeZ;
	}

	Target->Source.Init(SizeX, SizeY, SizeZ, NumMip, SourceFormat);

	Editor_TextureUpdateResource(Target);

#endif
}

void UUpdateTextureHelper::Editor_WriteDataToTexture(UTexture* Target, const TArray<uint8>& Data)
{
#if WITH_EDITOR
	if (!IsInGameThread())return;
	if (!::IsValid(Target))return;
	if (Data.Num() <= 0)return;

	const FIntVector4 SizeAndNumMip = SafeGetTextureSizeAndNumMip(Target);

	const int32 Width = SizeAndNumMip.X;
	const int32 Height = SizeAndNumMip.Y;
	const int32 Depth = SizeAndNumMip.Z;
	const int32 NumMip = SizeAndNumMip.W;
	EPixelFormat Format = SafeGetTexturePixelFormat(Target);

	const int32 DstTagetSize = Width * Height * Depth * GPixelFormats[Format].BlockBytes;

	FTexturePlatformData* PlatformData = SafeGetTexturePlatformData(Target);
	if (!PlatformData)
	{
		PlatformData = new FTexturePlatformData();
		SafeSetTexturePlatformData(Target, PlatformData);
	}

	PlatformData->PixelFormat = Format;
	PlatformData->SizeX = Width;
	PlatformData->SizeY = Height;
	PlatformData->SetNumSlices(Depth);

	while (PlatformData->Mips.Num() < NumMip)
	{
		FTexture2DMipMap* Mip = new FTexture2DMipMap();
		PlatformData->Mips.Add(Mip);
	}
	uint8* InitData = (uint8*)FMemory::MallocZeroed(DstTagetSize);

	for (int i = 0; i < PlatformData->Mips.Num(); ++i)
	{
		PlatformData->Mips[i].SizeX = Width;
		PlatformData->Mips[i].SizeY = Height;
		PlatformData->Mips[i].SizeZ = Depth;

		PlatformData->Mips[i].BulkData.Lock(LOCK_READ_WRITE);

		uint8* TextureData = (uint8*)PlatformData->Mips[i].BulkData.Realloc(DstTagetSize);

		FMemory::Memcpy(InitData, Data.GetData(), FMath::Min(DstTagetSize, Data.Num()));

		FMemory::Memcpy(TextureData, InitData, DstTagetSize);

		PlatformData->Mips[i].BulkData.Unlock();

	}

	Target->Source.Init(Width, Height, Depth, 1, Target->Source.GetFormat(), InitData);


	Editor_TextureUpdateResource(Target);

	FMemory::Free(InitData);
	InitData = nullptr;
#endif
}

void UUpdateTextureHelper::Editor_ClearTextureData(UTexture* Target)
{
#if WITH_EDITOR
	if (!::IsValid(Target))return;
	const FIntVector4 SizeAndNumMip = SafeGetTextureSizeAndNumMip(Target);
	EPixelFormat Format = SafeGetTexturePixelFormat(Target);

	int32 Size = SizeAndNumMip.X * SizeAndNumMip.Y * SizeAndNumMip.Z * GPixelFormats[Format].BlockBytes;
	TArray<uint8> Data;
	Data.SetNumZeroed(Size);
	Editor_WriteDataToTexture(Target, Data);
	return;
#endif
}

void UUpdateTextureHelper::Editor_ReadDataFromTexture(UTexture* Target, TArray<uint8>& Data)
{
#if WITH_EDITOR
	Data.Empty();
	if (!::IsValid(Target))return;
	FTexturePlatformData* PlatformData = SafeGetTexturePlatformData(Target);
	if (!PlatformData)return;
	if (PlatformData->Mips.IsEmpty())return;

	const FIntVector4 SizeAndNumMip = SafeGetTextureSizeAndNumMip(Target);

	const int32 Width = SizeAndNumMip.X;
	const int32 Height = SizeAndNumMip.Y;
	const int32 Depth = SizeAndNumMip.Z;

	EPixelFormat Format = SafeGetTexturePixelFormat(Target);
	int32 Size = Width * Height * Depth * GPixelFormats[Format].BlockBytes;
	Data.SetNumZeroed(Size);

	//if (Target->MipGenSettings == TMGS_NoMipmaps)
	{
		//压缩能直接拿？
		uint8* SrcData = (uint8*)PlatformData->Mips[0].BulkData.Lock(LOCK_READ_ONLY);

		FMemory::Memcpy(Data.GetData(), SrcData, Size);

		PlatformData->Mips[0].BulkData.Unlock();
	}
#endif
}

void UUpdateTextureHelper::mRuntime_WriteDataToTexture2D_RenderThread(FRHICommandListImmediate& RHICmdList, UTexture2D* Target, const TArray<uint8>& Data)
{
	if (!IsInRenderingThread())return;
	if (!::IsValid(Target))return;

	FTextureResource* Resource = Target->GetResource();
	if (!Resource)return;
	FRHITexture* TextureRHI = Resource->GetTextureRHI();
	if (!TextureRHI)return;

	const EPixelFormat Format = TextureRHI->GetFormat();
	const uint32 Width = Resource->GetSizeX();
	const uint32 Height = Resource->GetSizeY();
	const uint32 SinglePixelByte = GPixelFormats[Format].BlockBytes;
	const uint32 DestStride = Width * SinglePixelByte;

	const int32 TotalSize = Height * DestStride;

	if (Data.Num() < TotalSize)
	{
		TArray<uint8> FillData;
		FillData.SetNumZeroed(TotalSize);

		FMemory::Memcpy(FillData.GetData(), Data.GetData(), Data.Num());
		FUpdateTextureRegion2D Region(0, 0, 0, 0, Width, Height);
		RHICmdList.UpdateTexture2D(
			TextureRHI,
			0, // Mipmap层级
			Region,
			DestStride,
			FillData.GetData()
		);
	}
	else
	{
		// 直接更新纹理数据
		FUpdateTextureRegion2D Region(0, 0, 0, 0, Width, Height);
		RHICmdList.UpdateTexture2D(
			TextureRHI,
			0, // Mipmap层级
			Region,
			DestStride,
			Data.GetData()
		);
	}
}

void UUpdateTextureHelper::mRuntime_WriteDataToVolumeTexture_RenderThread(FRHICommandListImmediate& RHICmdList, UVolumeTexture* Target, const TArray<uint8>& Data)
{
	if (!IsInRenderingThread())return;
	if (!::IsValid(Target))return;

	FTextureResource* Resource = Target->GetResource();
	if (!Resource)return;
	FRHITexture* TextureRHI = Resource->GetTextureRHI();
	if (!TextureRHI)return;

	const EPixelFormat Format = TextureRHI->GetFormat();
	const uint32 Width = Resource->GetSizeX();
	const uint32 Height = Resource->GetSizeY();
	const uint32 Depth = Resource->GetSizeZ();
	const uint32 SinglePixelByte = GPixelFormats[Format].BlockBytes;
	const uint32 DestStride = Width * SinglePixelByte;

	const int32 TotalSize = Height * Depth * DestStride;
	FUpdateTextureRegion3D Region(0, 0, 0, 0, 0, 0, Width, Height, Depth);
	if (Data.Num() < TotalSize)
	{
		TArray<uint8> FillData;
		FillData.SetNumZeroed(TotalSize);

		FMemory::Memcpy(FillData.GetData(), Data.GetData(), Data.Num());

		RHICmdList.UpdateTexture3D(
			TextureRHI,
			0, // Mipmap层级
			Region,
			DestStride,
			DestStride * Height,
			FillData.GetData()
		);
	}
	else
	{
		// 直接更新纹理数据
		RHICmdList.UpdateTexture3D(
			TextureRHI,
			0, // Mipmap层级
			Region,
			DestStride,
			DestStride * Height,
			Data.GetData()
		);
	}
}

void UUpdateTextureHelper::mRuntime_WriteDataToTexture2DArray_RenderThread(FRHICommandListImmediate& RHICmdList, UTexture2DArray* Target, const TArray<uint8>& Data)
{
	if (!IsInRenderingThread())return;
	if (!::IsValid(Target))return;

	FTextureResource* Resource = Target->GetResource();
	if (!Resource)return;
	FRHITexture* TextureRHI = Resource->GetTexture2DArrayRHI();
	if (!TextureRHI)return;

	const EPixelFormat Format = TextureRHI->GetFormat();
	const uint32 Width = Resource->GetSizeX();
	const uint32 Height = Resource->GetSizeY();
	const uint32 Depth = Resource->GetSizeZ();
	const uint32 SinglePixelByte = GPixelFormats[Format].BlockBytes;
	const uint32 SrcDestStride = Width * SinglePixelByte;

	const int32 TotalSize = Height * Depth * SrcDestStride;

	if (Data.Num() < TotalSize)
	{
		TArray<uint8> FillData;
		FillData.SetNumZeroed(TotalSize);

		FMemory::Memcpy(FillData.GetData(), Data.GetData(), Data.Num());

		for (int32 MipIndex = 0; MipIndex < Target->GetNumMips(); ++MipIndex)
		{
			for (uint32 ArrayIndex = 0; ArrayIndex < Depth; ++ArrayIndex)
			{
				uint32 DestStride = 0;
				void* DestData = RHILockTexture2DArray(TextureRHI, ArrayIndex, MipIndex, RLM_WriteOnly, DestStride, false);

				CopyTextureData2D(FillData.GetData() + ArrayIndex * Height * SrcDestStride, DestData, Height, Format, Width * SinglePixelByte, DestStride);

				RHIUnlockTexture2DArray(TextureRHI, ArrayIndex, MipIndex, false);
			}
		}
	}
	else
	{
		for (int32 MipIndex = 0; MipIndex < Target->GetNumMips(); ++MipIndex)
		{
			for (uint32 ArrayIndex = 0; ArrayIndex < Depth; ++ArrayIndex)
			{
				uint32 DestStride = 0;
				void* DestData = RHILockTexture2DArray(TextureRHI, ArrayIndex, MipIndex, RLM_WriteOnly, DestStride, false);

				CopyTextureData2D(Data.GetData() + ArrayIndex * Height * SrcDestStride, DestData, Height, Format, Width * SinglePixelByte, DestStride);

				RHIUnlockTexture2DArray(TextureRHI, ArrayIndex, MipIndex, false);
			}
		}
	}
}

void UUpdateTextureHelper::mRuntime_ReadDataFromTexture2D_RenderThread(FRHICommandListImmediate& RHICmdList, UTexture2D* Target, TArray<uint8>& Data)
{
	if (!IsInRenderingThread())return;
	if (!::IsValid(Target))return;
	FTextureResource* Source = Target->GetResource();
	if (!Source)return;
	FRHITexture* RHITexture = Source->GetTextureRHI();
	if (!RHITexture)return;

	const int32 Width = Target->GetSizeX();
	const int32 Height = Target->GetSizeY();
	const EPixelFormat Format = Target->GetPixelFormat();
	const uint32 SinglePixelByte = GPixelFormats[Format].BlockBytes;

	Data.SetNum(Width * Height * SinglePixelByte);

	const FRHITextureCreateDesc StagingDesc =
		FRHITextureCreateDesc::Create2D(TEXT("ReadDataToTexture2DRenderThread"), Width, Height, Format)
		.SetFlags(ETextureCreateFlags::CPUReadback | ETextureCreateFlags::HideInVisualizeTexture);

	FTextureRHIRef StagingTexture2DSlice = RHICreateTexture(StagingDesc);

	FGPUFenceRHIRef Fence = RHICreateGPUFence(TEXT("ReadDataToTexture2DRenderThread"));
	Fence->Clear();

	FRHICopyTextureInfo CopyInfo;
	CopyInfo.Size = FIntVector(Width, Height, 1);
	CopyInfo.SourcePosition = FIntVector(0, 0, 0);
	RHICmdList.CopyTexture(RHITexture, StagingTexture2DSlice, CopyInfo);
	RHICmdList.WriteGPUFence(Fence);

	uint8* Buffer;
	int32 RowPitchInPixels;
	int32 OutHeight;
	RHICmdList.MapStagingSurface(StagingTexture2DSlice, Fence, (void*&)Buffer, RowPitchInPixels, OutHeight);


	const int32 SrcPitch = RowPitchInPixels * SinglePixelByte;
	const int32 DstPitch = Width * SinglePixelByte;


	CopyTextureData2D(Buffer, Data.GetData(), Height, Format, SrcPitch, DstPitch);

	RHICmdList.UnmapStagingSurface(StagingTexture2DSlice);
}

void UUpdateTextureHelper::mRuntime_ReadDataFromVolumeTexture_RenderThread(FRHICommandListImmediate& RHICmdList, UVolumeTexture* Target, TArray<uint8>& Data)
{
	if (!IsInRenderingThread())return;
	if (!::IsValid(Target))return;
	FTextureResource* Source = Target->GetResource();
	if (!Source)return;
	FRHITexture* RHITexture = Source->GetTexture3DRHI();
	if (!RHITexture)return;

	const FIntVector Size = RHITexture->GetSizeXYZ();
	const EPixelFormat Format = RHITexture->GetFormat();
	const uint32 SinglePixelByte = GPixelFormats[Format].BlockBytes;
	Data.SetNum(Size.X * Size.Y * Size.Z * SinglePixelByte);

	const FRHITextureCreateDesc StagingDesc =
		FRHITextureCreateDesc::Create2D(TEXT("ReadDataToVolumeTextureRenderThread"), Size.X, Size.Y, Format)
		.SetFlags(ETextureCreateFlags::CPUReadback | ETextureCreateFlags::HideInVisualizeTexture);

	FTextureRHIRef StagingTexture2DSlice = RHICreateTexture(StagingDesc);
	FGPUFenceRHIRef Fence = RHICreateGPUFence(TEXT("ReadDataToVolumeTextureRenderThread"));

	for (int32 SliceIndex = 0; SliceIndex < Size.Z; ++SliceIndex)
	{
		Fence->Clear();
		FRHICopyTextureInfo CopyInfo;
		CopyInfo.Size = FIntVector(Size.X, Size.Y, 1);
		CopyInfo.SourcePosition = FIntVector(0, 0, SliceIndex);
		RHICmdList.CopyTexture(RHITexture, StagingTexture2DSlice, CopyInfo);
		RHICmdList.WriteGPUFence(Fence);

		uint8* Buffer;
		int32 RowPitchInPixels;
		int32 OutHeight;
		RHICmdList.MapStagingSurface(StagingTexture2DSlice, Fence, (void*&)Buffer, RowPitchInPixels, OutHeight);
		const int32 SrcPitch = RowPitchInPixels * SinglePixelByte;
		const int32 DstPitch = Size.X * SinglePixelByte;

		CopyTextureData2D(Buffer, (uint8*)&Data[SliceIndex * Size.X * Size.Y * SinglePixelByte],
			OutHeight, Format, SrcPitch, DstPitch);

		RHICmdList.UnmapStagingSurface(StagingTexture2DSlice);
	}
}

void UUpdateTextureHelper::mRuntime_ReadDataFromTexture2DArray_RenderThread(FRHICommandListImmediate& RHICmdList, UTexture2DArray* Target, TArray<uint8>& Data)
{
	if (!IsInRenderingThread())return;
	if (!::IsValid(Target))return;
	FTextureResource* Source = Target->GetResource();
	if (!Source)return;
	FRHITexture* RHITexture = Source->GetTexture2DArrayRHI();
	if (!RHITexture)return;

	const FIntVector Size = RHITexture->GetSizeXYZ();
	const EPixelFormat Format = RHITexture->GetFormat();
	const uint32 SinglePixelByte = GPixelFormats[Format].BlockBytes;
	const uint32 TotalSize = Size.X * Size.Y * Size.Z * SinglePixelByte;

	Data.SetNum(TotalSize);

	for (int32 MipIndex = 0; MipIndex < Target->GetNumMips(); ++MipIndex)
	{
		for (int32 ArrayIndex = 0; ArrayIndex < Size.Z; ++ArrayIndex)
		{
			uint32 SrcStride = 0;
			void* SrcData = RHILockTexture2DArray(RHITexture, ArrayIndex, MipIndex, RLM_ReadOnly, SrcStride, false);

			CopyTextureData2D(SrcData, Data.GetData() + ArrayIndex * Size.X * Size.Y * SinglePixelByte,
				Size.Y, Format, SrcStride, Size.X * SinglePixelByte);

			RHIUnlockTexture2DArray(RHITexture, ArrayIndex, MipIndex, false);
		}
	}
}

void UUpdateTextureHelper::WriteDataToTexture(UTexture* Target, const TArray<uint8>& Data, bool bFlush)
{
	if (!::IsValid(Target))return ;
#if WITH_EDITOR
	Editor_WriteDataToTexture(Target, Data);
	return;
#endif

	if (UTexture2D* Texture = Cast<UTexture2D>(Target))
	{
		if (IsInRenderingThread())
		{
			FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();
			mRuntime_WriteDataToTexture2D_RenderThread(RHICmdList, Texture, Data);
		}
		else
		{
			ENQUEUE_RENDER_COMMAND(WriteDataToTextureCommand)([Texture, Data](
				FRHICommandListImmediate& RHICmdList) {
					mRuntime_WriteDataToTexture2D_RenderThread(RHICmdList, Texture, Data);
				});

			if (bFlush)
				FlushRenderingCommands();
		}
		return;
	}

	if (UVolumeTexture* Texture = Cast<UVolumeTexture>(Target))
	{
		if (IsInRenderingThread())
		{
			FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();
			mRuntime_WriteDataToVolumeTexture_RenderThread(RHICmdList, Texture, Data);
		}
		else
		{
			ENQUEUE_RENDER_COMMAND(WriteDataToTextureCommand)([Texture, Data](
				FRHICommandListImmediate& RHICmdList) {
					mRuntime_WriteDataToVolumeTexture_RenderThread(RHICmdList, Texture, Data);
				});
			if (bFlush)
				FlushRenderingCommands();
		}
		return;
	}

	if (UTexture2DArray* Texture = Cast<UTexture2DArray>(Target))
	{
		if (IsInRenderingThread())
		{
			FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();
			mRuntime_WriteDataToTexture2DArray_RenderThread(RHICmdList, Texture, Data);
		}
		else
		{
			ENQUEUE_RENDER_COMMAND(WriteDataToTextureCommand)([Texture, Data](
				FRHICommandListImmediate& RHICmdList) {
					mRuntime_WriteDataToTexture2DArray_RenderThread(RHICmdList, Texture, Data);
				});
			if (bFlush)
				FlushRenderingCommands();
		}
		return;
	}
}

void UUpdateTextureHelper::ClearTextureData(UTexture* Target, bool bFlush)
{
	if (!::IsValid(Target))return;
#if WITH_EDITOR
	Editor_ClearTextureData(Target);
#else
	const FIntVector4 SizeAndNumMip = SafeGetTextureSizeAndNumMip(Target);
	EPixelFormat Format = SafeGetTexturePixelFormat(Target);

	int32 Size = SizeAndNumMip.X * SizeAndNumMip.Y * SizeAndNumMip.Z * GPixelFormats[Format].BlockBytes;
	TArray<uint8> Data;
	Data.SetNumZeroed(Size);

	WriteDataToTexture(Target, Data, bFlush);
#endif
}

void UUpdateTextureHelper::ReadDataFromTexture(UTexture* Target, TArray<uint8>& Data)
{
	if (!::IsValid(Target))return;
#if WITH_EDITOR
	Editor_ReadDataFromTexture(Target, Data);
	return;
#endif

	if (UTexture2D* Texture = Cast<UTexture2D>(Target))
	{
		if (IsInRenderingThread())
		{
			FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();
			mRuntime_ReadDataFromTexture2D_RenderThread(RHICmdList, Texture, Data);
		}
		else
		{
			ENQUEUE_RENDER_COMMAND(ReadDataFromTextureCommand)([Texture, &Data](
				FRHICommandListImmediate& RHICmdList) {
					mRuntime_ReadDataFromTexture2D_RenderThread(RHICmdList, Texture, Data);
				});
			FlushRenderingCommands();
		}
		return;
	}

	if (UVolumeTexture* Texture = Cast<UVolumeTexture>(Target))
	{
		if (IsInRenderingThread())
		{
			FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();
			mRuntime_ReadDataFromVolumeTexture_RenderThread(RHICmdList, Texture, Data);
		}
		else
		{
			ENQUEUE_RENDER_COMMAND(ReadDataFromTextureCommand)([Texture, &Data](
				FRHICommandListImmediate& RHICmdList) {
					mRuntime_ReadDataFromVolumeTexture_RenderThread(RHICmdList, Texture, Data);
				});

			FlushRenderingCommands();
		}
		return;
	}

	if (UTexture2DArray* Texture = Cast<UTexture2DArray>(Target))
	{
		if (IsInRenderingThread())
		{
			FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();
			mRuntime_ReadDataFromTexture2DArray_RenderThread(RHICmdList, Texture, Data);
		}
		else
		{
			ENQUEUE_RENDER_COMMAND(ReadDataFromTextureCommand)([Texture, &Data](
				FRHICommandListImmediate& RHICmdList) {
					mRuntime_ReadDataFromTexture2DArray_RenderThread(RHICmdList, Texture, Data);
				});

			FlushRenderingCommands();
		}
		return;
	}
}
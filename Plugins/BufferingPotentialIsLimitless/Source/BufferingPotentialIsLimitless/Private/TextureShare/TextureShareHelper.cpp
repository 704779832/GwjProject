#include "TextureShare/TextureShareHelper.h"
#include "TextureShare/TextureBufferShareObjectDX12.h"
#include "TextureShare/TextureBufferShareObjectVulkan.h"

#include "Kismet/KismetRenderingLibrary.h"
#include "ScreenRendering.h"
#include "CommonRenderResources.h"
UTextureBufferShareObject* UTextureShareHelper::CreateTextureShareHandle(UObject* WorldContextObject, const FString& InName, int InWidth, int InHeight, EPixelFormat Format)
{
	switch (GDynamicRHI->GetInterfaceType())
	{
	case ERHIInterfaceType::D3D12:
	{
		UTextureBufferShareObjectDX12* Out = NewObject<UTextureBufferShareObjectDX12>(WorldContextObject);
		if (!Out->CreateShareHandle(InName, InWidth, InHeight, Format))
		{
			Out->ConditionalBeginDestroy();
			Out = nullptr;
			return nullptr;
		}
		return Out;
	}
		break;
	case ERHIInterfaceType::Vulkan:
	{
		UTextureBufferShareObjectVulkan* Out = NewObject<UTextureBufferShareObjectVulkan>(WorldContextObject);
		if (!Out->CreateShareHandle(InName, InWidth, InHeight, Format))
		{
			Out->ConditionalBeginDestroy();
			Out = nullptr;
			return nullptr;
		}
		return Out;
	}
		break;
	}
	return nullptr;
}

UTextureBufferShareObject* UTextureShareHelper::CreateTextureShareHandleByRT(UObject* WorldContextObject, const FString& InName, UTextureRenderTarget2D* Source)
{
	switch (GDynamicRHI->GetInterfaceType())
	{
	case ERHIInterfaceType::D3D12:
	{
		UTextureBufferShareObjectDX12* Out = NewObject<UTextureBufferShareObjectDX12>(WorldContextObject);
		if(!Out->CreateShareHandleByRenderTarget(InName, Source))
		{
			Out->ConditionalBeginDestroy();
			Out = nullptr;
			return nullptr;
		}
		return Out;
	}
	break;
	case ERHIInterfaceType::Vulkan:
	{
		UTextureBufferShareObjectVulkan* Out = NewObject<UTextureBufferShareObjectVulkan>(WorldContextObject);
		if (!Out->CreateShareHandleByRenderTarget(InName, Source))
		{
			Out->ConditionalBeginDestroy();
			Out = nullptr;
			return nullptr;
		}
		return Out;
	}
	break;
	}
	return nullptr;
}

UTextureBufferShareObject* UTextureShareHelper::OpenTextureShareHandle(UObject* WorldContextObject, const FString& InName)
{
	switch (GDynamicRHI->GetInterfaceType())
	{
	case ERHIInterfaceType::D3D12:
	{
		UTextureBufferShareObjectDX12* Out = NewObject<UTextureBufferShareObjectDX12>(WorldContextObject);
		if (!Out->OpenShareHandle(InName))
		{
			Out->ConditionalBeginDestroy();
			Out = nullptr;
			return nullptr;
		}
		return Out;
	}
	break;
	case ERHIInterfaceType::Vulkan:
	{
		UTextureBufferShareObjectVulkan* Out = NewObject<UTextureBufferShareObjectVulkan>(WorldContextObject);
		if (!Out->OpenShareHandle(InName))
		{
			Out->ConditionalBeginDestroy();
			Out = nullptr;
			return nullptr;
		}
		return Out;
	}
	break;
	}
	return nullptr;
}

inline void CopyTextureShareHandleToTexture_CopyTexture(FRHICommandList& RHICmdList, FTextureRHIRef SourceTexture, FTextureRHIRef DestTexture, FRHIGPUFence* Fence)
{
	if (!SourceTexture || !DestTexture)return;

	if (SourceTexture->GetDesc().Format == DestTexture->GetDesc().Format
		&& SourceTexture->GetDesc().Extent.X == DestTexture->GetDesc().Extent.X
		&& SourceTexture->GetDesc().Extent.Y == DestTexture->GetDesc().Extent.Y)
	{
		//RHICmdList.Transition(FRHITransitionInfo(SourceTexture, ERHIAccess::Unknown, ERHIAccess::CopySrc));
		//RHICmdList.Transition(FRHITransitionInfo(DestTexture, ERHIAccess::Unknown, ERHIAccess::CopyDest));

		RHICmdList.Transition(FRHITransitionInfo(SourceTexture, ERHIAccess::SRVMask, ERHIAccess::CopySrc));
		RHICmdList.Transition(FRHITransitionInfo(DestTexture, ERHIAccess::SRVMask, ERHIAccess::CopyDest));

		// source and dest are the same. simple copy
		RHICmdList.CopyTexture(SourceTexture, DestTexture, {});

		RHICmdList.Transition(FRHITransitionInfo(SourceTexture, ERHIAccess::CopySrc, ERHIAccess::SRVMask));
		RHICmdList.Transition(FRHITransitionInfo(DestTexture, ERHIAccess::CopyDest, ERHIAccess::SRVMask));
	}
	else
	{
		IRendererModule* RendererModule = &FModuleManager::GetModuleChecked<IRendererModule>("Renderer");

		RHICmdList.Transition(FRHITransitionInfo(SourceTexture, ERHIAccess::Unknown, ERHIAccess::SRVMask));
		RHICmdList.Transition(FRHITransitionInfo(DestTexture, ERHIAccess::Unknown, ERHIAccess::RTV));

		// source and destination are different. rendered copy
		FRHIRenderPassInfo RPInfo(DestTexture, ERenderTargetActions::Load_Store);
		RHICmdList.BeginRenderPass(RPInfo, TEXT("PixelCapture::CopyTexture"));
		{
			FGlobalShaderMap* ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);
			TShaderMapRef<FScreenVS> VertexShader(ShaderMap);
			TShaderMapRef<FScreenPS> PixelShader(ShaderMap);

			RHICmdList.SetViewport(0, 0, 0.0f, DestTexture->GetDesc().Extent.X, DestTexture->GetDesc().Extent.Y, 1.0f);

			FGraphicsPipelineStateInitializer GraphicsPSOInit;
			RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);
			GraphicsPSOInit.BlendState = TStaticBlendState<>::GetRHI();
			GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
			GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
			GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = GFilterVertexDeclaration.VertexDeclarationRHI;
			GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
			GraphicsPSOInit.BoundShaderState.PixelShaderRHI = PixelShader.GetPixelShader();
			GraphicsPSOInit.PrimitiveType = PT_TriangleList;
			SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit, 0);

			FRHIBatchedShaderParameters& BatchedParameters = RHICmdList.GetScratchShaderParameters();

			PixelShader->SetParameters(BatchedParameters, TStaticSamplerState<SF_Bilinear, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI(),SourceTexture.GetReference());


			FIntPoint TargetBufferSize(DestTexture->GetDesc().Extent.X, DestTexture->GetDesc().Extent.Y);
			RendererModule->DrawRectangle(RHICmdList, 0, 0, // Dest X, Y
				DestTexture->GetDesc().Extent.X,			// Dest Width
				DestTexture->GetDesc().Extent.Y,			// Dest Height
				0, 0,										// Source U, V
				1, 1,										// Source USize, VSize
				TargetBufferSize,							// Target buffer size
				FIntPoint(1, 1),							// Source texture size
				VertexShader, EDRF_Default);
		}

		RHICmdList.EndRenderPass();

		RHICmdList.Transition(FRHITransitionInfo(SourceTexture, ERHIAccess::SRVMask, ERHIAccess::CopySrc));
		RHICmdList.Transition(FRHITransitionInfo(DestTexture, ERHIAccess::RTV, ERHIAccess::CopyDest));
	}

	if (Fence != nullptr)
	{
		RHICmdList.WriteGPUFence(Fence);
	}
}

bool UTextureShareHelper::CopyTextureShareHandleToTexture(UObject* WorldContextObject, UTextureBufferShareObject* Source, UTexture* Target)
{
	if (!::IsValid(Source) || !::IsValid(Target))return false;
	//FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();
	//UCopyTexutreByShaderTools::CopyTexture_C(WorldContextObject, Source->GetTextureRHI(), Target->GetResource()->GetTextureRHI());

	if (IsInGameThread())
	{
		ENQUEUE_RENDER_COMMAND(CopyTextureShareHandleToTexture)
			(
				[Source, Target](FRHICommandListImmediate& RHICmdList)
				{
					FGPUFenceRHIRef CopyFence = GDynamicRHI->RHICreateGPUFence(*FString::Printf(TEXT("CopyTextureShareHandleToTextureFence")));
					CopyTextureShareHandleToTexture_CopyTexture(RHICmdList, Source->GetTextureRHI(), Target->GetResource()->GetTextureRHI(), CopyFence);
				}
				);
	}
	else if (IsInRenderingThread())
	{
		FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();
		FGPUFenceRHIRef CopyFence = GDynamicRHI->RHICreateGPUFence(*FString::Printf(TEXT("CopyTextureShareHandleToTextureFence")));
		CopyTextureShareHandleToTexture_CopyTexture(RHICmdList, Source->GetTextureRHI(), Target->GetResource()->GetTextureRHI(), CopyFence);
	}
	return true;
}
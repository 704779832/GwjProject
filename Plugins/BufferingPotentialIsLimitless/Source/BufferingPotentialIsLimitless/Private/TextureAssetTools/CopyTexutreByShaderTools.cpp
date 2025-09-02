#include "TextureAssetTools/CopyTexutreByShaderTools.h"
#include "Engine/Texture.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Engine/Canvas.h"
#include "GlobalShader.h"
#include "ShaderParameterUtils.h"

namespace CopyTexutreByShaderTools
{
	enum class ECopyTextureType : uint8
	{
		LeftTop,
		ClipCenter,
		ClipCenterAndCompress
	};

	struct FCopyTextureInfo
	{
		FRHITexture* SourceTexture = nullptr;

		TEnumAsByte<EPixelFormat> SourceFormat = EPixelFormat::PF_Unknown;

		FRHITexture* TargetTexture = nullptr;

		TEnumAsByte<EPixelFormat> TargetFormat = EPixelFormat::PF_Unknown;

		FIntPoint SourceSize = FIntPoint(0, 0);

		FIntPoint TargetSize = FIntPoint(0, 0);

		FIntPoint TargetSize2 = FIntPoint(0, 0);

		ECopyTextureType CopyType;
	};

	struct FSimpleTextureVertex
	{
	public:
#if ENGINE_MAJOR_VERSION == 4
		FVector4 Position;
		FVector2D UV;
#else
		FVector4f Position;
		FVector2f UV;
#endif
	};

	//顶点缓冲区
	class FSimpleVertexBuffer : public FVertexBuffer
	{
	public:
		virtual void InitRHI(FRHICommandListBase& RHICmdList) override
		{
			FRHIResourceCreateInfo VertexBufferCreateInfo(TEXT("CopyTexutreByShaderTools_FSimpleVertexBuffer")); 
			VertexBufferRHI = RHICmdList.CreateBuffer(sizeof(FSimpleTextureVertex) * 4, BUF_Static, 0, ERHIAccess::VertexOrIndexBuffer | ERHIAccess::SRVMask, VertexBufferCreateInfo);
			UpdateBufferRectSize(RHICmdList,FVector2f(1, 1), FVector2f(1, 1));
		}

		void UpdateBufferRectSize(FRHICommandListBase& RHICmdList,const FVector2f& TargetSize, const FVector2f& SourceSize)
		{
			FVector2f tempScale = SourceSize / TargetSize;

			void* VoidPtr = RHICmdList.LockBuffer(VertexBufferRHI, 0, sizeof(FSimpleTextureVertex) * 4, RLM_WriteOnly);
			FSimpleTextureVertex* Vertices = reinterpret_cast<FSimpleTextureVertex*>(VoidPtr);
			Vertices[0].Position = FVector4f(-1.0f, 1.0f, 1.0f, 1.0f);
			Vertices[1].Position = FVector4f(-1.0f + tempScale.X * 2.0f, 1.0f, 1.0f, 1.0f);
			Vertices[2].Position = FVector4f(-1.0f, 1.0f - tempScale.Y * 2.0f, 1.0f, 1.0f);
			Vertices[3].Position = FVector4f(-1.0f + tempScale.X * 2.0f, 1.0f - tempScale.Y * 2.0f, 1.0f, 1.0f);

			Vertices[0].UV = FVector2f(0.0, 0.0);
			Vertices[1].UV = FVector2f(1.0, 0.0);
			Vertices[2].UV = FVector2f(0.0, 1.0);
			Vertices[3].UV = FVector2f(1.0, 1.0);
			RHICmdList.UnlockBuffer(VertexBufferRHI);
		}

		void UpdateBufferRectUV(FRHICommandListBase& RHICmdList,const FVector2f& TargetSize, const FVector2f& SourceSize)
		{
			FVector2f tempScale = SourceSize / TargetSize;

			void* VoidPtr = RHICmdList.LockBuffer(VertexBufferRHI, 0, sizeof(FSimpleTextureVertex) * 4, RLM_WriteOnly);
			FSimpleTextureVertex* Vertices = reinterpret_cast<FSimpleTextureVertex*>(VoidPtr);
			Vertices[0].Position = FVector4f(-1.0f, 1.0f, 1.0f, 1.0f);
			Vertices[1].Position = FVector4f(1.0f, 1.0f, 1.0f, 1.0f);
			Vertices[2].Position = FVector4f(-1.0f, -1.0f, 1.0f, 1.0f);
			Vertices[3].Position = FVector4f(1.0f, -1.0f, 1.0f, 1.0f);

			Vertices[0].UV = FVector2f(0.0, 0.0);
			Vertices[1].UV = FVector2f(1.0 * tempScale.X, 0.0);
			Vertices[2].UV = FVector2f(0.0, 1.0 * tempScale.Y);
			Vertices[3].UV = FVector2f(1.0 * tempScale.X, 1.0 * tempScale.Y);
			RHICmdList.UnlockBuffer(VertexBufferRHI);
		}
	};
	TGlobalResource<FSimpleVertexBuffer> GSimpleVertexBuffer;

	class FSimpleDraw2TextureShaderVS : public FGlobalShader
	{
		DECLARE_SHADER_TYPE(FSimpleDraw2TextureShaderVS, Global, /*MYMODULE_API*/);

		FSimpleDraw2TextureShaderVS() {}
		FSimpleDraw2TextureShaderVS(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
			: FGlobalShader(Initializer)
		{
		}

		//static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters) { return true; }
		static bool ShouldCache(EShaderPlatform Platform)
		{
			return true;
		}
	};

	class FSimpleDraw2TextureShaderPS : public FGlobalShader
	{
		DECLARE_SHADER_TYPE(FSimpleDraw2TextureShaderPS, Global, /*MYMODULE_API*/);
		FSimpleDraw2TextureShaderPS() {}
		FSimpleDraw2TextureShaderPS(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
			: FGlobalShader(Initializer)
		{
			//绑定
			InputTexture.Bind(Initializer.ParameterMap, TEXT("InputTexture"));
			InputSampler.Bind(Initializer.ParameterMap, TEXT("InputSampler"));
			ConvertType.Bind(Initializer.ParameterMap, TEXT("ConvertType"));
			DrawType.Bind(Initializer.ParameterMap, TEXT("DrawType"));

			SourceSize.Bind(Initializer.ParameterMap, TEXT("SourceSize"));
			TargetSize.Bind(Initializer.ParameterMap, TEXT("TargetSize"));
			TargetSize2.Bind(Initializer.ParameterMap, TEXT("TargetSize2"));
			CanvasSize.Bind(Initializer.ParameterMap, TEXT("CanvasSize"));
		}

		//声明变量
	private:
		LAYOUT_FIELD(FShaderResourceParameter, InputTexture);
		LAYOUT_FIELD(FShaderResourceParameter, InputSampler);
		LAYOUT_FIELD(FShaderParameter, ConvertType);
		LAYOUT_FIELD(FShaderParameter, DrawType);

		LAYOUT_FIELD(FShaderParameter, SourceSize);
		LAYOUT_FIELD(FShaderParameter, TargetSize);
		LAYOUT_FIELD(FShaderParameter, TargetSize2);
		LAYOUT_FIELD(FShaderParameter, CanvasSize);
	public:
		//渲染前设置参数方法
		void SetTexture(FRHICommandList& RHICmdList, const FTexture* InTexture)
		{
			FRHIPixelShader* PixelShaderRHI = RHICmdList.GetBoundPixelShader();
			FRHIBatchedShaderParameters& BatchedParameters = RHICmdList.GetScratchShaderParameters();
			SetTextureParameter(BatchedParameters, InputTexture, InputSampler, InTexture);
			
			RHICmdList.SetBatchedShaderParameters(PixelShaderRHI, BatchedParameters);
		}

		void SetRHITexture(FRHICommandList& RHICmdList, FRHITexture* InTexture)
		{

			FRHIPixelShader* PixelShaderRHI = RHICmdList.GetBoundPixelShader();
			SetTextureParameter(RHICmdList, PixelShaderRHI, InputTexture, InputSampler,
				TStaticSamplerState<SF_Bilinear, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI(),
				InTexture);
		}

		void SetConvertType(FRHICommandList& RHICmdList, int In)
		{
			FRHIPixelShader* PixelShaderRHI = RHICmdList.GetBoundPixelShader();
			FRHIBatchedShaderParameters& BatchedParameters = RHICmdList.GetScratchShaderParameters();
			SetShaderValue(BatchedParameters, ConvertType, In);

			RHICmdList.SetBatchedShaderParameters(PixelShaderRHI, BatchedParameters);
		}

		void SetSourceSize(FRHICommandList& RHICmdList, const FVector2f& In)
		{
			FRHIPixelShader* PixelShaderRHI = RHICmdList.GetBoundPixelShader();
			FRHIBatchedShaderParameters& BatchedParameters = RHICmdList.GetScratchShaderParameters();
			SetShaderValue(BatchedParameters, SourceSize, In);

			RHICmdList.SetBatchedShaderParameters(PixelShaderRHI, BatchedParameters);
		}

		void SetTargetSize(FRHICommandList& RHICmdList, const FVector2f& In)
		{
			FRHIPixelShader* PixelShaderRHI = RHICmdList.GetBoundPixelShader();
			FRHIBatchedShaderParameters& BatchedParameters = RHICmdList.GetScratchShaderParameters();
			SetShaderValue(BatchedParameters, TargetSize, In);

			RHICmdList.SetBatchedShaderParameters(PixelShaderRHI, BatchedParameters);
		}

		void SetTargetSize2(FRHICommandList& RHICmdList, const FVector2f& In)
		{
			FRHIPixelShader* PixelShaderRHI = RHICmdList.GetBoundPixelShader();
			FRHIBatchedShaderParameters& BatchedParameters = RHICmdList.GetScratchShaderParameters();
			SetShaderValue(BatchedParameters, TargetSize2, In);

			RHICmdList.SetBatchedShaderParameters(PixelShaderRHI, BatchedParameters);
		}

		void SetDrawType(FRHICommandList& RHICmdList, int In)
		{
			FRHIPixelShader* PixelShaderRHI = RHICmdList.GetBoundPixelShader();
			FRHIBatchedShaderParameters& BatchedParameters = RHICmdList.GetScratchShaderParameters();
			SetShaderValue(BatchedParameters, DrawType, In);

			RHICmdList.SetBatchedShaderParameters(PixelShaderRHI, BatchedParameters);
		}

		void SetCanvasSize(FRHICommandList& RHICmdList, const FVector2f& In)
		{
			FRHIPixelShader* PixelShaderRHI = RHICmdList.GetBoundPixelShader();
			FRHIBatchedShaderParameters& BatchedParameters = RHICmdList.GetScratchShaderParameters();
			SetShaderValue(BatchedParameters, CanvasSize, In);

			RHICmdList.SetBatchedShaderParameters(PixelShaderRHI, BatchedParameters);
		}

	};

	//绑定到指定的usf文件中的具体方法
	IMPLEMENT_SHADER_TYPE(, FSimpleDraw2TextureShaderVS, TEXT("/Plugin/BufferingPotentialIsLimitless/Private/SimpleDrawTexture.usf"), TEXT("MainVS"), SF_Vertex);
	IMPLEMENT_SHADER_TYPE(, FSimpleDraw2TextureShaderPS, TEXT("/Plugin/BufferingPotentialIsLimitless/Private/SimpleDrawTexture.usf"), TEXT("MainPS"), SF_Pixel);

	void SimpleDrawTextureExample(FRHICommandListImmediate& RHICmdList, ERHIFeatureLevel::Type FeatureLevel, const FCopyTextureInfo& CopyInfo)
	{
		const FVector2f tempSourceSize = CopyInfo.SourceSize.GetMin() <= 0 ? FVector2f(CopyInfo.SourceTexture->GetSizeX(), CopyInfo.SourceTexture->GetSizeY()) : FVector2f(CopyInfo.SourceSize.X, CopyInfo.SourceSize.Y);
		const FVector2f tempCanvasSize = FVector2f(CopyInfo.TargetTexture->GetSizeX(), CopyInfo.TargetTexture->GetSizeY());
		FVector2f tempTargetSize, tempTargetSize2;
		switch (CopyInfo.CopyType)
		{
		case ECopyTextureType::LeftTop:
		case ECopyTextureType::ClipCenter:
		{
			tempTargetSize = CopyInfo.TargetSize.GetMin() <= 0 ? FVector2f(CopyInfo.TargetTexture->GetSizeX(), CopyInfo.TargetTexture->GetSizeY()) : FVector2f(CopyInfo.TargetSize.X, CopyInfo.TargetSize.Y);
		}
		case ECopyTextureType::ClipCenterAndCompress:
		{
			tempTargetSize = CopyInfo.TargetSize.GetMin() <= 0 ? FVector2f(CopyInfo.TargetTexture->GetSizeX(), CopyInfo.TargetTexture->GetSizeY()) : FVector2f(CopyInfo.TargetSize.X, CopyInfo.TargetSize.Y);
			tempTargetSize2 = CopyInfo.TargetSize2.GetMin() <= 0 ? FVector2f(CopyInfo.TargetTexture->GetSizeX(), CopyInfo.TargetTexture->GetSizeY()) : FVector2f(CopyInfo.TargetSize2.X, CopyInfo.TargetSize2.Y);
		}
		break;
		default:
			break;
		}


		EPixelFormat tempSourceFormat = CopyInfo.SourceFormat;
		EPixelFormat tempTargetFormat = CopyInfo.TargetFormat;

		if (tempTargetFormat == EPixelFormat::PF_Unknown)
		{
			tempTargetFormat = CopyInfo.TargetTexture->GetFormat();
		}

		if (tempSourceFormat == EPixelFormat::PF_Unknown)
		{
			tempSourceFormat = CopyInfo.SourceTexture->GetFormat();
		}


		int tempConvertType = 0;

		if (tempTargetFormat == EPixelFormat::PF_R8G8B8A8 ||
			tempTargetFormat == EPixelFormat::PF_R8G8B8A8_UINT ||
			tempTargetFormat == EPixelFormat::PF_R8G8B8A8_SNORM)
		{
			if (tempSourceFormat == EPixelFormat::PF_B8G8R8A8)
			{
				tempConvertType = 1;
			}
		}

		if (tempTargetFormat == EPixelFormat::PF_B8G8R8A8)
		{
			if (tempSourceFormat == EPixelFormat::PF_R8G8B8A8 ||
				tempSourceFormat == EPixelFormat::PF_R8G8B8A8_UINT ||
				tempSourceFormat == EPixelFormat::PF_R8G8B8A8_SNORM)
			{
				tempConvertType = 1;
			}
		}

		//UE_LOG(LogTemp, Warning, TEXT("SimpleDrawTextureExample tempConvertType:%d tempSourceSize:%f,%f tempTargetSize:%f,%f tempTargetSize2:%f,%f tempCanvasSize:%f,%f"),
		//	tempConvertType, tempSourceSize.X, tempSourceSize.Y, tempTargetSize.X, tempTargetSize.Y, tempTargetSize2.X, tempTargetSize2.Y, tempCanvasSize.X, tempCanvasSize.Y);


		FRHIRenderPassInfo RPInfo(CopyInfo.TargetTexture, ERenderTargetActions::DontLoad_Store);
		TransitionRenderPassTargets(RHICmdList, RPInfo);
		RHICmdList.BeginRenderPass(RPInfo, TEXT("SimpleDrawTextureExample"));

		{
			// 获取全局着色器集合
			auto ShaderMap = GetGlobalShaderMap(FeatureLevel);

			// 从ShaderMap获取实际的着色器实例
			TShaderMapRef<FSimpleDraw2TextureShaderVS> MyVS(ShaderMap);
			TShaderMapRef<FSimpleDraw2TextureShaderPS> MyPS(ShaderMap);

			// 使用这些着色器声明绑定着色器状态，并将其应用到命令列表
			// Set the graphic pipeline state.
			FGraphicsPipelineStateInitializer GraphicsPSOInit;
			RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);
			GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<true, CF_Always>::GetRHI();
			GraphicsPSOInit.BlendState = TStaticBlendState<>::GetRHI();
			GraphicsPSOInit.RasterizerState = TStaticRasterizerState<FM_Solid, CM_None>::GetRHI();
			GraphicsPSOInit.PrimitiveType = PT_TriangleStrip;

			FVertexDeclarationElementList Elements;
			Elements.Add(FVertexElement(0, STRUCT_OFFSET(FSimpleTextureVertex, Position), VET_Float4, 0, sizeof(FSimpleTextureVertex)));
			Elements.Add(FVertexElement(0, STRUCT_OFFSET(FSimpleTextureVertex, UV), VET_Float2, 1, sizeof(FSimpleTextureVertex)));
			GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = RHICreateVertexDeclaration(Elements);

			GraphicsPSOInit.BoundShaderState.VertexShaderRHI = MyVS.GetVertexShader();
			GraphicsPSOInit.BoundShaderState.PixelShaderRHI = MyPS.GetPixelShader();
			SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit
				, 0
			);

			// 调用函数以设置参数
			MyPS->SetRHITexture(RHICmdList, CopyInfo.SourceTexture);
			MyPS->SetConvertType(RHICmdList, tempConvertType);
			MyPS->SetSourceSize(RHICmdList, tempSourceSize);
			MyPS->SetTargetSize(RHICmdList, tempTargetSize);
			MyPS->SetTargetSize2(RHICmdList, tempTargetSize2);
			MyPS->SetCanvasSize(RHICmdList, tempCanvasSize);
			MyPS->SetDrawType(RHICmdList, (int)CopyInfo.CopyType);

			RHICmdList.SetStreamSource(0, GSimpleVertexBuffer.VertexBufferRHI, 0);

			RHICmdList.DrawPrimitive(0, 2, 1);
		}

		RHICmdList.EndRenderPass();

		RHICmdList.Transition(FRHITransitionInfo(CopyInfo.TargetTexture, ERHIAccess::RTV, ERHIAccess::SRVMask));
	}

};


void UCopyTexutreByShaderTools::CopyTexture(const UObject* WorldContextObject, UTexture* SourceTexture, UTexture* TargetTexture)
{
	if (!::IsValid(WorldContextObject) ||
		!::IsValid(SourceTexture) ||
		!::IsValid(TargetTexture))return;

	FTextureResource* Resource1 = SourceTexture->GetResource();
	if (!Resource1)return;
	FTextureResource* Resource2 = TargetTexture->GetResource();
	if (!Resource2)return;

	CopyTexture_C(WorldContextObject, Resource1->GetTextureRHI(), Resource2->GetTextureRHI());
}

void UCopyTexutreByShaderTools::CopyTexture_C(const UObject* WorldContextObject, FRHITexture* SourceTexture, FRHITexture* TargetTexture)
{
	if (!::IsValid(WorldContextObject) ||
		!SourceTexture ||
		!TargetTexture)return;
	CopyTexutreByShaderTools::FCopyTextureInfo Info;

	Info.CopyType = CopyTexutreByShaderTools::ECopyTextureType::LeftTop;
	Info.SourceTexture = SourceTexture;
	Info.TargetTexture = TargetTexture;
	Info.SourceSize = SourceTexture->GetSizeXY();
	Info.TargetSize = TargetTexture->GetSizeXY();
	ERHIFeatureLevel::Type FeatureLevel = WorldContextObject->GetWorld()->Scene->GetFeatureLevel();
	if (IsInGameThread())
	{
		ENQUEUE_RENDER_COMMAND(CopyTextureCommand)
			(
				[FeatureLevel, Info](FRHICommandListImmediate& RHICmdList)
				{
					RHICmdList.Transition(FRHITransitionInfo(Info.SourceTexture, ERHIAccess::RTV, ERHIAccess::SRVMask));
					CopyTexutreByShaderTools::SimpleDrawTextureExample
					(
						RHICmdList, FeatureLevel,
						Info
					);

					RHICmdList.Transition(FRHITransitionInfo(Info.SourceTexture, ERHIAccess::SRVMask, ERHIAccess::RTV));
				}
				);
	}
	else if (IsInRenderingThread())
	{
		FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();

		CopyTexutreByShaderTools::SimpleDrawTextureExample
		(
			RHICmdList, FeatureLevel,
			Info
		);
	}
}

void UCopyTexutreByShaderTools::CopyTextureClipToCenter(const UObject* WorldContextObject, UTexture* SourceTexture, UTexture* TargetTexture, const FIntPoint& ClipSize)
{
	if (!::IsValid(WorldContextObject) ||
		!::IsValid(SourceTexture) ||
		!::IsValid(TargetTexture))return;

	FTextureResource* Resource1 = SourceTexture->GetResource();
	if (!Resource1)return;
	FTextureResource* Resource2 = TargetTexture->GetResource();
	if (!Resource2)return;

	CopyTextureClipToCenter_C(WorldContextObject, Resource1->GetTextureRHI(), Resource2->GetTextureRHI(), ClipSize);
}

void UCopyTexutreByShaderTools::CopyTextureClipToCenter_C(const UObject* WorldContextObject, FRHITexture* SourceTexture, FRHITexture* TargetTexture, const FIntPoint& ClipSize)
{
	if (!::IsValid(WorldContextObject) ||
		!SourceTexture ||
		!TargetTexture)return;
	CopyTexutreByShaderTools::FCopyTextureInfo Info;

	Info.CopyType = CopyTexutreByShaderTools::ECopyTextureType::ClipCenter;
	Info.SourceTexture = SourceTexture;
	Info.TargetTexture = TargetTexture;
	Info.SourceSize = SourceTexture->GetSizeXY();
	Info.TargetSize = ClipSize;
	ERHIFeatureLevel::Type FeatureLevel = WorldContextObject->GetWorld()->Scene->GetFeatureLevel();
	if (IsInGameThread())
	{
		ENQUEUE_RENDER_COMMAND(CopyTextureCommand)
			(
				[FeatureLevel, &Info](FRHICommandListImmediate& RHICmdList)
				{
					CopyTexutreByShaderTools::SimpleDrawTextureExample
					(
						RHICmdList, FeatureLevel,
						Info
					);
				}
				);
	}
	else if (IsInRenderingThread())
	{
		FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();

		CopyTexutreByShaderTools::SimpleDrawTextureExample
		(
			RHICmdList, FeatureLevel,
			Info
		);
	}
}

void UCopyTexutreByShaderTools::CopyTextureClipToCenterAndCompress(const UObject* WorldContextObject, UTexture* SourceTexture, UTexture* TargetTexture, const FIntPoint& ClipSize, const FIntPoint& CompressSize)
{
	if (!::IsValid(WorldContextObject) ||
		!::IsValid(SourceTexture) ||
		!::IsValid(TargetTexture))return;

	FTextureResource* Resource1 = SourceTexture->GetResource();
	if (!Resource1)return;
	FTextureResource* Resource2 = TargetTexture->GetResource();
	if (!Resource2)return;

	CopyTextureClipToCenterAndCompress_C(WorldContextObject, Resource1->GetTextureRHI(), Resource2->GetTextureRHI(), ClipSize, CompressSize);
}

void UCopyTexutreByShaderTools::CopyTextureClipToCenterAndCompress_C(const UObject* WorldContextObject, FRHITexture* SourceTexture, FRHITexture* TargetTexture, const FIntPoint& ClipSize, const FIntPoint& CompressSize)
{
	if (!::IsValid(WorldContextObject) ||
		!SourceTexture ||
		!TargetTexture)return;
	CopyTexutreByShaderTools::FCopyTextureInfo Info;

	Info.CopyType = CopyTexutreByShaderTools::ECopyTextureType::ClipCenterAndCompress;
	Info.SourceTexture = SourceTexture;
	Info.TargetTexture = TargetTexture;
	Info.SourceSize = SourceTexture->GetSizeXY();
	Info.TargetSize = ClipSize;
	Info.TargetSize2 = CompressSize;
	ERHIFeatureLevel::Type FeatureLevel = WorldContextObject->GetWorld()->Scene->GetFeatureLevel();
	if (IsInGameThread())
	{
		ENQUEUE_RENDER_COMMAND(CopyTextureCommand)
			(
				[FeatureLevel, &Info](FRHICommandListImmediate& RHICmdList)
				{
					CopyTexutreByShaderTools::SimpleDrawTextureExample
					(
						RHICmdList, FeatureLevel,
						Info
					);
				}
				);
	}
	else if (IsInRenderingThread())
	{
		FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();

		CopyTexutreByShaderTools::SimpleDrawTextureExample
		(
			RHICmdList, FeatureLevel,
			Info
		);
	}
}

#include "MessageDialogHook.h"
#include "Misc/MessageDialog.h"

// 初始化原始函数指针
EAppReturnType::Type(*FMessageDialogHook::OriginalOpenFunction)(EAppMsgCategory, EAppMsgType::Type, const FText&, const FText&) = nullptr;

EAppReturnType::Type FMessageDialogHook::CustomOpen(EAppMsgCategory MessageCategory, EAppMsgType::Type MessageType, const FText& Message, const FText& Title)
{
    // 在这里实现您自定义的对话框逻辑
    UE_LOG(LogTemp, Warning, TEXT("Custom message dialog intercepted: %s"), *Message.ToString());

    // 返回默认值或根据需要实现自定义逻辑
    return EAppReturnType::Ok;
}

bool FMessageDialogHook::InstallHook()
{
    // 使用显式类型转换获取正确的重载版本
    OriginalOpenFunction = &FMessageDialog::Open; // 这里编译器现在可以确定是哪个重载版本

    // 获取我们自定义函数的地址
    auto CustomFunc = &FMessageDialogHook::CustomOpen;

    // 使用FHotPatch进行函数替换
    bool bSuccess = FHotPatch::Hook(OriginalOpenFunction, CustomFunc);

    if (bSuccess)
    {
        UE_LOG(LogTemp, Log, TEXT("Successfully hooked FMessageDialog::Open"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to hook FMessageDialog::Open"));
    }

    return bSuccess;
}

void FMessageDialogHook::RemoveHook()
{
    // 如果需要恢复原始函数，可以在这里实现
}
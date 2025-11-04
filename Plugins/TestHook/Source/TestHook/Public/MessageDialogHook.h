#pragma once

#include "CoreMinimal.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/HideWindowsPlatformTypes.h"

class FMessageDialogHook
{
public:
    // 替换FMessageDialog::Open函数的静态方法
    static bool InstallHook();

    // 恢复原始函数
    static void RemoveHook();

    // 自定义的Open函数实现 - 匹配具体的重载版本
    static EAppReturnType::Type CustomOpen(EAppMsgCategory MessageCategory, EAppMsgType::Type MessageType, const FText& Message, const FText& Title);

private:
    // 原始函数指针 - 使用显式类型
    static EAppReturnType::Type(*OriginalOpenFunction)(EAppMsgCategory, EAppMsgType::Type, const FText&, const FText&);

    // 热补丁工具类
    struct FHotPatch
    {
        template <typename FunctionType>
        static bool Hook(FunctionType* From, FunctionType* To)
        {
            uint64* FromAddress = reinterpret_cast<uint64*>(From);
            uint64* ToAddress = reinterpret_cast<uint64*>(To);

            uint8 Patch[] =
            {
                0x49, 0xBA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x41, 0xFF, 0xE2
            };

            FMemory::Memcpy(&Patch[2], &ToAddress, sizeof(ToAddress));

            DWORD BaseProtection;
            const DWORD NewProtection = PAGE_EXECUTE_READWRITE;
            if (!VirtualProtect(FromAddress, sizeof(Patch), NewProtection, &BaseProtection))
            {
                return false;
            }

            FMemory::Memcpy(FromAddress, Patch, sizeof(Patch));
            VirtualProtect(FromAddress, sizeof(Patch), BaseProtection, &BaseProtection);
            FlushInstructionCache(GetCurrentProcess(), nullptr, 0);

            return true;
        }
    };
};
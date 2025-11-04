// Fill out your copyright notice in the Description page of Project Settings.


#include "TestOpenDialogLibrary.h"
#include "Misc/MessageDialog.h"
void UTestOpenDialogLibrary::TestOpenDialog()
{
	//FMessageDialog::Open(EAppMsgCategory MessageCategory, EAppMsgType::Type MessageType, const FText & Message, const FText & Title)
	FMessageDialog::Open(EAppMsgCategory::Warning, EAppMsgType::Type::YesNoCancel, FText::FromString(TEXT("TTTTTTTTT")), FText::FromString(TEXT("sb?????????????")));
}

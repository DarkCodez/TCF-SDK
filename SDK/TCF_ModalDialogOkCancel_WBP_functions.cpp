// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ModalDialogOkCancel_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ModalDialogOkCancel_WBP.ModalDialogOkCancel_WBP_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UModalDialogOkCancel_WBP_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogOkCancel_WBP.ModalDialogOkCancel_WBP_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ModalDialogOkCancel_WBP.ModalDialogOkCancel_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UModalDialogOkCancel_WBP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogOkCancel_WBP.ModalDialogOkCancel_WBP_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ModalDialogOkCancel_WBP.ModalDialogOkCancel_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UModalDialogOkCancel_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogOkCancel_WBP.ModalDialogOkCancel_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ModalDialogOkCancel_WBP.ModalDialogOkCancel_WBP_C.BP_SetButtonsLayout
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EYButtonsLayout                layout                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UModalDialogOkCancel_WBP_C::BP_SetButtonsLayout(EYButtonsLayout layout)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogOkCancel_WBP.ModalDialogOkCancel_WBP_C.BP_SetButtonsLayout");

	struct
	{
		EYButtonsLayout                layout;
	} params;

	params.layout = layout;

	UObject::ProcessEvent(fn, &params);
}


// Function ModalDialogOkCancel_WBP.ModalDialogOkCancel_WBP_C.ExecuteUbergraph_ModalDialogOkCancel_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UModalDialogOkCancel_WBP_C::ExecuteUbergraph_ModalDialogOkCancel_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogOkCancel_WBP.ModalDialogOkCancel_WBP_C.ExecuteUbergraph_ModalDialogOkCancel_WBP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

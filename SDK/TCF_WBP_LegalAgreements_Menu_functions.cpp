// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_LegalAgreements_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.BP_AnimateOut
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_LegalAgreements_Menu_C::BP_AnimateOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.BP_AnimateOut");

	struct
	{
		class UWidgetAnimation*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.OnAnimateOutFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LegalAgreements_Menu_C::OnAnimateOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.OnAnimateOutFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_LegalAgreements_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LegalAgreements_Menu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.BndEvt__WBP_Common_Btn_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LegalAgreements_Menu_C::BndEvt__WBP_Common_Btn_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.BndEvt__WBP_Common_Btn_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.BndEvt__WBP_Common_Btn_Cancel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LegalAgreements_Menu_C::BndEvt__WBP_Common_Btn_Cancel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.BndEvt__WBP_Common_Btn_Cancel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.ExecuteUbergraph_WBP_LegalAgreements_Menu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LegalAgreements_Menu_C::ExecuteUbergraph_WBP_LegalAgreements_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LegalAgreements_Menu.WBP_LegalAgreements_Menu_C.ExecuteUbergraph_WBP_LegalAgreements_Menu");

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

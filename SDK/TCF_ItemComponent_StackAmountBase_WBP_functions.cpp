// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_StackAmountBase_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_StackAmountBase_WBP.ItemComponent_StackAmountBase_WBP_C.BP_HandleSetItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemComponent_StackAmountBase_WBP_C::BP_HandleSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_StackAmountBase_WBP.ItemComponent_StackAmountBase_WBP_C.BP_HandleSetItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_StackAmountBase_WBP.ItemComponent_StackAmountBase_WBP_C.BP_OnAmountUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemComponent_StackAmountBase_WBP_C::BP_OnAmountUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_StackAmountBase_WBP.ItemComponent_StackAmountBase_WBP_C.BP_OnAmountUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_StackAmountBase_WBP.ItemComponent_StackAmountBase_WBP_C.ExecuteUbergraph_ItemComponent_StackAmountBase_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_StackAmountBase_WBP_C::ExecuteUbergraph_ItemComponent_StackAmountBase_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_StackAmountBase_WBP.ItemComponent_StackAmountBase_WBP_C.ExecuteUbergraph_ItemComponent_StackAmountBase_WBP");

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

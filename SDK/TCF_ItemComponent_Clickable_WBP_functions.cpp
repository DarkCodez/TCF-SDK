// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_Clickable_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.BP_SetIsSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemComponent_Clickable_WBP_C::BP_SetIsSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.BP_SetIsSelected");

	struct
	{
		bool                           IsSelected;
	} params;

	params.IsSelected = IsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemComponent_Clickable_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.BP_ItemHoveredChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemComponent_Clickable_WBP_C::BP_ItemHoveredChanged(bool Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.BP_ItemHoveredChanged");

	struct
	{
		bool                           Hovered;
	} params;

	params.Hovered = Hovered;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.BP_ItemPressed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemComponent_Clickable_WBP_C::BP_ItemPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.BP_ItemPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.BP_ItemReleased
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemComponent_Clickable_WBP_C::BP_ItemReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.BP_ItemReleased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.ExecuteUbergraph_ItemComponent_Clickable_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_Clickable_WBP_C::ExecuteUbergraph_ItemComponent_Clickable_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Clickable_WBP.ItemComponent_Clickable_WBP_C.ExecuteUbergraph_ItemComponent_Clickable_WBP");

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

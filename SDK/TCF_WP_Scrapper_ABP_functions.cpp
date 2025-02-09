// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WP_Scrapper_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WP_Scrapper_ABP.WP_Scrapper_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UWP_Scrapper_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Scrapper_ABP.WP_Scrapper_ABP_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function WP_Scrapper_ABP.WP_Scrapper_ABP_C.SetIsInCustomizationMode
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           isInCustomizationMode          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWP_Scrapper_ABP_C::SetIsInCustomizationMode(bool isInCustomizationMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Scrapper_ABP.WP_Scrapper_ABP_C.SetIsInCustomizationMode"));

	struct
	{
		bool                           isInCustomizationMode;
	} params;

	params.isInCustomizationMode = isInCustomizationMode;

	UObject::ProcessEvent(fn, &params);
}


// Function WP_Scrapper_ABP.WP_Scrapper_ABP_C.ExecuteUbergraph_WP_Scrapper_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWP_Scrapper_ABP_C::ExecuteUbergraph_WP_Scrapper_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Scrapper_ABP.WP_Scrapper_ABP_C.ExecuteUbergraph_WP_Scrapper_ABP"));

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

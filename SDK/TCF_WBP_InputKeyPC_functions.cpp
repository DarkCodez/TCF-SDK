// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_InputKeyPC_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InputKeyPC.WBP_InputKeyPC_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InputKeyPC_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeyPC.WBP_InputKeyPC_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeyPC.WBP_InputKeyPC_C.SetBrightness
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isLight                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InputKeyPC_C::SetBrightness(bool isLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeyPC.WBP_InputKeyPC_C.SetBrightness");

	struct
	{
		bool                           isLight;
	} params;

	params.isLight = isLight;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeyPC.WBP_InputKeyPC_C.ExecuteUbergraph_WBP_InputKeyPC
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputKeyPC_C::ExecuteUbergraph_WBP_InputKeyPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeyPC.WBP_InputKeyPC_C.ExecuteUbergraph_WBP_InputKeyPC");

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

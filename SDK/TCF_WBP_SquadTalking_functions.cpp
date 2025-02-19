// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SquadTalking_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SquadTalking.WBP_SquadTalking_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SquadTalking_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadTalking.WBP_SquadTalking_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadTalking.WBP_SquadTalking_C.BP_SetTalking
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsTalking                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SquadTalking_C::BP_SetTalking(bool IsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadTalking.WBP_SquadTalking_C.BP_SetTalking");

	struct
	{
		bool                           IsTalking;
	} params;

	params.IsTalking = IsTalking;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SquadTalking.WBP_SquadTalking_C.ExecuteUbergraph_WBP_SquadTalking
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SquadTalking_C::ExecuteUbergraph_WBP_SquadTalking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SquadTalking.WBP_SquadTalking_C.ExecuteUbergraph_WBP_SquadTalking");

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

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerBotTPTask_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerBotTPTask.PlayerBotTPTask_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ownerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerBotTPTask_C::ReceiveExecute(class AActor* ownerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBotTPTask.PlayerBotTPTask_C.ReceiveExecute");

	struct
	{
		class AActor*                  ownerActor;
	} params;

	params.ownerActor = ownerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerBotTPTask.PlayerBotTPTask_C.ExecuteUbergraph_PlayerBotTPTask
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerBotTPTask_C::ExecuteUbergraph_PlayerBotTPTask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBotTPTask.PlayerBotTPTask_C.ExecuteUbergraph_PlayerBotTPTask");

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

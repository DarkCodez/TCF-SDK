// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTService_PlayBark_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTService_PlayBark.BTService_PlayBark_C.ReceiveActivationAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTService_PlayBark_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_PlayBark.BTService_PlayBark_C.ReceiveActivationAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BTService_PlayBark.BTService_PlayBark_C.ReceiveTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ownerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTService_PlayBark_C::ReceiveTick(class AActor* ownerActor, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_PlayBark.BTService_PlayBark_C.ReceiveTick");

	struct
	{
		class AActor*                  ownerActor;
		float                          DeltaSeconds;
	} params;

	params.ownerActor = ownerActor;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BTService_PlayBark.BTService_PlayBark_C.TryPlayBark
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTService_PlayBark_C::TryPlayBark()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_PlayBark.BTService_PlayBark_C.TryPlayBark");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BTService_PlayBark.BTService_PlayBark_C.ExecuteUbergraph_BTService_PlayBark
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTService_PlayBark_C::ExecuteUbergraph_BTService_PlayBark(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_PlayBark.BTService_PlayBark_C.ExecuteUbergraph_BTService_PlayBark");

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

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Onboarding_06_TalkToBadumCraftingStation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.GetNPCObjectTransformByRowHandle
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NpcRowName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              ActorTransform                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           foundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_06_TalkToBadumCraftingStation_C::GetNPCObjectTransformByRowHandle(const struct FName& NpcRowName, struct FTransform* ActorTransform, bool* foundActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.GetNPCObjectTransformByRowHandle");

	struct
	{
		struct FName                   NpcRowName;
		struct FTransform              ActorTransform;
		bool                           foundActor;
	} params;

	params.NpcRowName = NpcRowName;

	UObject::ProcessEvent(fn, &params);

	if (ActorTransform != nullptr)
		*ActorTransform = params.ActorTransform;
	if (foundActor != nullptr)
		*foundActor = params.foundActor;
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.GetNPCTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NpcRowName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           foundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTransform              ActorTransform                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_06_TalkToBadumCraftingStation_C::GetNPCTransform(const struct FName& NpcRowName, bool* foundActor, struct FTransform* ActorTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.GetNPCTransform");

	struct
	{
		struct FName                   NpcRowName;
		bool                           foundActor;
		struct FTransform              ActorTransform;
	} params;

	params.NpcRowName = NpcRowName;

	UObject::ProcessEvent(fn, &params);

	if (foundActor != nullptr)
		*foundActor = params.foundActor;
	if (ActorTransform != nullptr)
		*ActorTransform = params.ActorTransform;
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.CreateHintMarkersWithNPCNames
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   ActiveMarkerId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UOnboarding_06_TalkToBadumCraftingStation_C::CreateHintMarkersWithNPCNames(const struct FName& ActiveMarkerId, TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.CreateHintMarkersWithNPCNames");

	struct
	{
		TArray<struct FName>           Array;
		struct FName                   ActiveMarkerId;
		bool                           ReturnValue;
	} params;

	params.ActiveMarkerId = ActiveMarkerId;

	UObject::ProcessEvent(fn, &params);

	if (Array != nullptr)
		*Array = params.Array;

	return params.ReturnValue;
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.CompleteStep
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_06_TalkToBadumCraftingStation_C::CompleteStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.CompleteStep");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.BP_StartMetaQuest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOnboarding_06_TalkToBadumCraftingStation_C::BP_StartMetaQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.BP_StartMetaQuest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.OnSceneRequested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_06_TalkToBadumCraftingStation_C::OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.OnSceneRequested");

	struct
	{
		struct FDataTableRowHandle     sceneRowHandle;
	} params;

	params.sceneRowHandle = sceneRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.ServerCompleteStep
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_06_TalkToBadumCraftingStation_C::ServerCompleteStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.ServerCompleteStep");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.ClientBindSceneAdded
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_06_TalkToBadumCraftingStation_C::ClientBindSceneAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.ClientBindSceneAdded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.Step1Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_06_TalkToBadumCraftingStation_C::Step1Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.Step1Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.ExecuteUbergraph_Onboarding_06_TalkToBadumCraftingStation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_06_TalkToBadumCraftingStation_C::ExecuteUbergraph_Onboarding_06_TalkToBadumCraftingStation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.ExecuteUbergraph_Onboarding_06_TalkToBadumCraftingStation");

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

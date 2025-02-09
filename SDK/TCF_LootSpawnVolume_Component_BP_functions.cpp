// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_LootSpawnVolume_Component_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.DespawnLoot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULootSpawnVolume_Component_BP_C::DespawnLoot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.DespawnLoot"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.IsAllLootPickedUp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ULootSpawnVolume_Component_BP_C::IsAllLootPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.IsAllLootPickedUp"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.CleanUpSpawnedLoot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULootSpawnVolume_Component_BP_C::CleanUpSpawnedLoot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.CleanUpSpawnedLoot"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.OnLootActorDestroyed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSpawnVolume_Component_BP_C::OnLootActorDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.OnLootActorDestroyed"));

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.CreateLootPool
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     LootPoolRow                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// TArray<struct FLootSpawnVolume_Struct> LoopPool                       (CPF_Parm, CPF_OutParm)

void ULootSpawnVolume_Component_BP_C::CreateLootPool(const struct FDataTableRowHandle& LootPoolRow, TArray<struct FLootSpawnVolume_Struct>* LoopPool)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.CreateLootPool"));

	struct
	{
		struct FDataTableRowHandle     LootPoolRow;
		TArray<struct FLootSpawnVolume_Struct> LoopPool;
	} params;

	params.LootPoolRow = LootPoolRow;

	UObject::ProcessEvent(fn, &params);

	if (LoopPool != nullptr)
		*LoopPool = params.LoopPool;
}


// Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.VisualizeLootTransforms
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULootSpawnVolume_Component_BP_C::VisualizeLootTransforms()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.VisualizeLootTransforms"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.AttemptLootSpawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULootSpawnVolume_Component_BP_C::AttemptLootSpawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.AttemptLootSpawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSpawnVolume_Component_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.ExecuteUbergraph_LootSpawnVolume_Component_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSpawnVolume_Component_BP_C::ExecuteUbergraph_LootSpawnVolume_Component_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.ExecuteUbergraph_LootSpawnVolume_Component_BP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.OnLootPickUpActorDestroyed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  pickUpActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULootSpawnVolume_Component_BP_C::OnLootPickUpActorDestroyed__DelegateSignature(class AActor* pickUpActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.OnLootPickUpActorDestroyed__DelegateSignature"));

	struct
	{
		class AActor*                  pickUpActor;
	} params;

	params.pickUpActor = pickUpActor;

	UObject::ProcessEvent(fn, &params);
}


// Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.OnAllLootPickedUp__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULootSpawnVolume_Component_BP_C::OnAllLootPickedUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.OnAllLootPickedUp__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.OnLootSpawned__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AYPickupActor*>   LootActors                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULootSpawnVolume_Component_BP_C::OnLootSpawned__DelegateSignature(TArray<class AYPickupActor*>* LootActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LootSpawnVolume_Component_BP.LootSpawnVolume_Component_BP_C.OnLootSpawned__DelegateSignature"));

	struct
	{
		TArray<class AYPickupActor*>   LootActors;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (LootActors != nullptr)
		*LootActors = params.LootActors;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

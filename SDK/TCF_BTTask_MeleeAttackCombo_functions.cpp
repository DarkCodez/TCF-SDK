// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTTask_MeleeAttackCombo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.CleanUp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTTask_MeleeAttackCombo_C::CleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.CleanUp");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.UnbindMontageDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTTask_MeleeAttackCombo_C::UnbindMontageDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.UnbindMontageDelegates");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.BindMontageDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTTask_MeleeAttackCombo_C::BindMontageDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.BindMontageDelegates");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.OnMontageEndedOrBlendingOut
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInterrupted                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBTTask_MeleeAttackCombo_C::OnMontageEndedOrBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.OnMontageEndedOrBlendingOut");

	struct
	{
		class UAnimMontage*            Montage;
		bool                           bInterrupted;
	} params;

	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.FindPossibleComboMontage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<TSoftObjectPtr<class UAnimMontage>> possibleComboMontages          (CPF_Parm, CPF_OutParm)
// bool                           foundComboMontage              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBTTask_MeleeAttackCombo_C::FindPossibleComboMontage(TArray<TSoftObjectPtr<class UAnimMontage>>* possibleComboMontages, bool* foundComboMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.FindPossibleComboMontage");

	struct
	{
		TArray<TSoftObjectPtr<class UAnimMontage>> possibleComboMontages;
		bool                           foundComboMontage;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (possibleComboMontages != nullptr)
		*possibleComboMontages = params.possibleComboMontages;
	if (foundComboMontage != nullptr)
		*foundComboMontage = params.foundComboMontage;
}


// Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_MeleeAttackCombo_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.ReceiveExecuteAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.OnComboWindowStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTTask_MeleeAttackCombo_C::OnComboWindowStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.OnComboWindowStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.PlayNextMontage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTTask_MeleeAttackCombo_C::PlayNextMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.PlayNextMontage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.ReceiveAbortAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_MeleeAttackCombo_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.ReceiveAbortAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.ExecuteUbergraph_BTTask_MeleeAttackCombo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_MeleeAttackCombo_C::ExecuteUbergraph_BTTask_MeleeAttackCombo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MeleeAttackCombo.BTTask_MeleeAttackCombo_C.ExecuteUbergraph_BTTask_MeleeAttackCombo");

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

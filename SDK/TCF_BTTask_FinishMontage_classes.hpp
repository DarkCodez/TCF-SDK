#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTTask_FinishMontage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_FinishMontage.BTTask_FinishMontage_C
// 0x0030 (0x0140 - 0x0110)
class UBTTask_FinishMontage_C : public UYBTTask_PlayAnimation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FBlackboardKeySelector                      MustFinishMontage;                                        // 0x0118(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BTTask_FinishMontage.BTTask_FinishMontage_C");
		return ptr;
	}


	class UAnimMontage* GetAnimationToPlay(bool* allowPhysicsRotationDuringAnimation, bool* finishNodeSuccesfullyIfNoAnimIsProvided);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void BP_OnNodeEnds(bool succeeded);
	void ExecuteUbergraph_BTTask_FinishMontage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTTask_PlayScanAnimation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTTask_PlayScanAnimation.BTTask_PlayScanAnimation_C
// 0x0008 (0x0118 - 0x0110)
class UBTTask_PlayScanAnimation_C : public UYBTTask_PlayAnimation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BTTask_PlayScanAnimation.BTTask_PlayScanAnimation_C");
		return ptr;
	}


	class UAnimMontage* GetAnimationToPlay(bool* allowPhysicsRotationDuringAnimation, bool* finishNodeSuccesfullyIfNoAnimIsProvided);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_PlayScanAnimation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

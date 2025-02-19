#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerStationComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerStationComponent_BP.PlayerStationComponent_BP_C
// 0x00D9 (0x0189 - 0x00B0)
class UPlayerStationComponent_BP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TArray<float>                                      Angles;                                                   // 0x00B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         Scene_Appearance;                                         // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         Scene_Loadout;                                            // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FTimerHandle                                TimerHandleHidePlayers;                                   // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AYPlayerCharacter*>                   Players;                                                  // 0x00F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	float                                              HideOtherPlayersDistance;                                 // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	TArray<class AActor*>                              NPCs;                                                     // 0x0108(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         Scene_QuickMenu;                                          // 0x0118(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	TArray<struct FDataTableRowHandle>                 StacksToIgnoreHiding;                                     // 0x0128(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               ShouldGameplayBeHidden;                                   // 0x0138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	class UUI_MasterBackButton_WBP_C*                  MasterBackButton;                                         // 0x0140(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         Scene_Play;                                               // 0x0148(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         Scene_WeaponPurchasing;                                   // 0x0158(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         Scene_WeaponCrafting;                                     // 0x0168(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	TArray<class AOnboardingHintIndicator_C*>          FtueHintIndicators;                                       // 0x0178(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               ShouldHideFtueMarker;                                     // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PlayerStationComponent_BP.PlayerStationComponent_BP_C");
		return ptr;
	}


	void IsQuickMenuActive(bool* IsActive);
	void RemovePlaySceneFromMenu();
	void Request_Faction_Shop_Scene();
	void Request_Crafting_Station_Scene_from_Menu();
	void RequestPlaySceneFromMenu();
	bool Should_Hide_Gameplay();
	void RequestScene(const struct FDataTableRowHandle& Row_Handle, const struct FYSceneSetupData& Setup_Data);
	void RequestAppearanceSceneFromMenu();
	void Request_Loadout_Scene_from_Menu();
	void TestAngle(class AYPlayerCharacter* PlayerChar, float Angle, const struct FVector& CameraRelativeLocation, float* DistanceReturn, struct FVector* EndLocation1);
	void DetermineBestCameraAngle(const struct FVector& CameraRelativeLocation, float* Angle, struct FVector* BestEndLocation1);
	void CloseQuickMenu();
	class AYPlayerCharacter* GetPlayerCharacter();
	void GetPlayerController(class AYPlayerController** AsYPlayer_Controller);
	void EnterQuickMenu();
	void ReceiveBeginPlay();
	void HideCharacters();
	void ReceiveTick(float DeltaSeconds);
	void UpdateBannerVisibility(bool bNewHidden);
	void OnUpdateShouldShowGameplay();
	void OnStackDataChanged_Event_1(EYInputUIStackType Type);
	void ShowGameplay();
	void HideGameplay();
	void OnStackTypeChanged(EYInputUIStackType stackType, bool Visible);
	void HideFtueMarker();
	void ShowFtueMarker();
	void ExecuteUbergraph_PlayerStationComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

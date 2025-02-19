// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerStationComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.IsQuickMenuActive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsActive                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerStationComponent_BP_C::IsQuickMenuActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.IsQuickMenuActive");

	struct
	{
		bool                           IsActive;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.RemovePlaySceneFromMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::RemovePlaySceneFromMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.RemovePlaySceneFromMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.Request Faction Shop Scene
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::Request_Faction_Shop_Scene()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.Request Faction Shop Scene");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.Request Crafting Station Scene from Menu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::Request_Crafting_Station_Scene_from_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.Request Crafting Station Scene from Menu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.RequestPlaySceneFromMenu
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::RequestPlaySceneFromMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.RequestPlaySceneFromMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.Should Hide Gameplay
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPlayerStationComponent_BP_C::Should_Hide_Gameplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.Should Hide Gameplay");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.RequestScene
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     Row_Handle                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FYSceneSetupData        Setup_Data                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerStationComponent_BP_C::RequestScene(const struct FDataTableRowHandle& Row_Handle, const struct FYSceneSetupData& Setup_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.RequestScene");

	struct
	{
		struct FDataTableRowHandle     Row_Handle;
		struct FYSceneSetupData        Setup_Data;
	} params;

	params.Row_Handle = Row_Handle;
	params.Setup_Data = Setup_Data;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.RequestAppearanceSceneFromMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::RequestAppearanceSceneFromMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.RequestAppearanceSceneFromMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.Request Loadout Scene from Menu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::Request_Loadout_Scene_from_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.Request Loadout Scene from Menu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.TestAngle
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerCharacter*       PlayerChar                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 CameraRelativeLocation         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DistanceReturn                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 EndLocation1                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerStationComponent_BP_C::TestAngle(class AYPlayerCharacter* PlayerChar, float Angle, const struct FVector& CameraRelativeLocation, float* DistanceReturn, struct FVector* EndLocation1)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.TestAngle");

	struct
	{
		class AYPlayerCharacter*       PlayerChar;
		float                          Angle;
		struct FVector                 CameraRelativeLocation;
		float                          DistanceReturn;
		struct FVector                 EndLocation1;
	} params;

	params.PlayerChar = PlayerChar;
	params.Angle = Angle;
	params.CameraRelativeLocation = CameraRelativeLocation;

	UObject::ProcessEvent(fn, &params);

	if (DistanceReturn != nullptr)
		*DistanceReturn = params.DistanceReturn;
	if (EndLocation1 != nullptr)
		*EndLocation1 = params.EndLocation1;
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.DetermineBestCameraAngle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 CameraRelativeLocation         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Angle                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 BestEndLocation1               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerStationComponent_BP_C::DetermineBestCameraAngle(const struct FVector& CameraRelativeLocation, float* Angle, struct FVector* BestEndLocation1)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.DetermineBestCameraAngle");

	struct
	{
		struct FVector                 CameraRelativeLocation;
		float                          Angle;
		struct FVector                 BestEndLocation1;
	} params;

	params.CameraRelativeLocation = CameraRelativeLocation;

	UObject::ProcessEvent(fn, &params);

	if (Angle != nullptr)
		*Angle = params.Angle;
	if (BestEndLocation1 != nullptr)
		*BestEndLocation1 = params.BestEndLocation1;
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.CloseQuickMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::CloseQuickMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.CloseQuickMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.GetPlayerCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AYPlayerCharacter*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AYPlayerCharacter* UPlayerStationComponent_BP_C::GetPlayerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.GetPlayerCharacter");

	struct
	{
		class AYPlayerCharacter*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.GetPlayerController
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AYPlayerController*      AsYPlayer_Controller           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerStationComponent_BP_C::GetPlayerController(class AYPlayerController** AsYPlayer_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.GetPlayerController");

	struct
	{
		class AYPlayerController*      AsYPlayer_Controller;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsYPlayer_Controller != nullptr)
		*AsYPlayer_Controller = params.AsYPlayer_Controller;
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.EnterQuickMenu
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::EnterQuickMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.EnterQuickMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.HideCharacters
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::HideCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.HideCharacters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerStationComponent_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.UpdateBannerVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewHidden                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerStationComponent_BP_C::UpdateBannerVisibility(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.UpdateBannerVisibility");

	struct
	{
		bool                           bNewHidden;
	} params;

	params.bNewHidden = bNewHidden;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.OnUpdateShouldShowGameplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::OnUpdateShouldShowGameplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.OnUpdateShouldShowGameplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.OnStackDataChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInputUIStackType             Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerStationComponent_BP_C::OnStackDataChanged_Event_1(EYInputUIStackType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.OnStackDataChanged_Event_1");

	struct
	{
		EYInputUIStackType             Type;
	} params;

	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ShowGameplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::ShowGameplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ShowGameplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.HideGameplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::HideGameplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.HideGameplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.OnStackTypeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInputUIStackType             stackType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerStationComponent_BP_C::OnStackTypeChanged(EYInputUIStackType stackType, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.OnStackTypeChanged");

	struct
	{
		EYInputUIStackType             stackType;
		bool                           Visible;
	} params;

	params.stackType = stackType;
	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.HideFtueMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::HideFtueMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.HideFtueMarker");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ShowFtueMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerStationComponent_BP_C::ShowFtueMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ShowFtueMarker");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ExecuteUbergraph_PlayerStationComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerStationComponent_BP_C::ExecuteUbergraph_PlayerStationComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStationComponent_BP.PlayerStationComponent_BP_C.ExecuteUbergraph_PlayerStationComponent_BP");

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

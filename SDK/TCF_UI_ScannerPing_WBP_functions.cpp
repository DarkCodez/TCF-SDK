// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UI_ScannerPing_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.SequenceEvent__ENTRYPOINTUI_ScannerPing_WBP_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ScannerPing_WBP_C::SequenceEvent__ENTRYPOINTUI_ScannerPing_WBP_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.SequenceEvent__ENTRYPOINTUI_ScannerPing_WBP_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.SetOpacityBasedOnDistanceToCamera
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ScannerPing_WBP_C::SetOpacityBasedOnDistanceToCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.SetOpacityBasedOnDistanceToCamera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.SetScaleBasedOnDistanceToCamera
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ScannerPing_WBP_C::SetScaleBasedOnDistanceToCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.SetScaleBasedOnDistanceToCamera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.ProjectPositionToScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ScannerPing_WBP_C::ProjectPositionToScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.ProjectPositionToScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.PlayPingSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ScannerPing_WBP_C::PlayPingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.PlayPingSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_ScannerPing_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_ScannerPing_WBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_ScannerPing_WBP_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.OnAnimationFinished");

	struct
	{
		class UWidgetAnimation*        Animation;
	} params;

	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.OnFakeTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ScannerPing_WBP_C::OnFakeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.OnFakeTick");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.ExecuteUbergraph_UI_ScannerPing_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_ScannerPing_WBP_C::ExecuteUbergraph_UI_ScannerPing_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScannerPing_WBP.UI_ScannerPing_WBP_C.ExecuteUbergraph_UI_ScannerPing_WBP");

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

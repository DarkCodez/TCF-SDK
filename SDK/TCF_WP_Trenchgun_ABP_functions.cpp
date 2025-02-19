// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WP_Trenchgun_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UWP_Trenchgun_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWP_Trenchgun_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.OnAmmoChanged_Event_2
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYAmmoUpdateInfo        ammoUpdateInfo                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UWP_Trenchgun_ABP_C::OnAmmoChanged_Event_2(const struct FYAmmoUpdateInfo& ammoUpdateInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.OnAmmoChanged_Event_2"));

	struct
	{
		struct FYAmmoUpdateInfo        ammoUpdateInfo;
	} params;

	params.ammoUpdateInfo = ammoUpdateInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.SetIsInCustomizationMode
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           isInCustomizationMode          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWP_Trenchgun_ABP_C::SetIsInCustomizationMode(bool isInCustomizationMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.SetIsInCustomizationMode"));

	struct
	{
		bool                           isInCustomizationMode;
	} params;

	params.isInCustomizationMode = isInCustomizationMode;

	UObject::ProcessEvent(fn, &params);
}


// Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.IsTargeting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWP_Trenchgun_ABP_C::IsTargeting()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.IsTargeting"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.stopTargeting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWP_Trenchgun_ABP_C::stopTargeting(bool interupted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.stopTargeting"));

	struct
	{
		bool                           interupted;
	} params;

	params.interupted = interupted;

	UObject::ProcessEvent(fn, &params);
}


// Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWP_Trenchgun_ABP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.BlueprintInitializeAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.ExecuteUbergraph_WP_Trenchgun_ABP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWP_Trenchgun_ABP_C::ExecuteUbergraph_WP_Trenchgun_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WP_Trenchgun_ABP.WP_Trenchgun_ABP_C.ExecuteUbergraph_WP_Trenchgun_ABP"));

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

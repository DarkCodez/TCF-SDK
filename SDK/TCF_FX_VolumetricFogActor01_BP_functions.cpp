// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FX_VolumetricFogActor01_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FX_VolumetricFogActor01_BP.FX_VolumetricFogActor01_BP_C.SetMIDValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_VolumetricFogActor01_BP_C::SetMIDValues()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_VolumetricFogActor01_BP.FX_VolumetricFogActor01_BP_C.SetMIDValues"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_VolumetricFogActor01_BP.FX_VolumetricFogActor01_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_VolumetricFogActor01_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_VolumetricFogActor01_BP.FX_VolumetricFogActor01_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_VolumetricFogActor01_BP.FX_VolumetricFogActor01_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFX_VolumetricFogActor01_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_VolumetricFogActor01_BP.FX_VolumetricFogActor01_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_VolumetricFogActor01_BP.FX_VolumetricFogActor01_BP_C.ExecuteUbergraph_FX_VolumetricFogActor01_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_VolumetricFogActor01_BP_C::ExecuteUbergraph_FX_VolumetricFogActor01_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_VolumetricFogActor01_BP.FX_VolumetricFogActor01_BP_C.ExecuteUbergraph_FX_VolumetricFogActor01_BP"));

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

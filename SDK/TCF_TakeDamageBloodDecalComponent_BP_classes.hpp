#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_TakeDamageBloodDecalComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TakeDamageBloodDecalComponent_BP.TakeDamageBloodDecalComponent_BP_C
// 0x0000 (0x00B0 - 0x00B0)
class UTakeDamageBloodDecalComponent_BP_C : public UYDamageDecalSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass TakeDamageBloodDecalComponent_BP.TakeDamageBloodDecalComponent_BP_C");
		return ptr;
	}


	void BP_SpawnDamageDecal(const struct FYWeaponDecalData& weaponDecalData, const struct FVector& impactLocation, const struct FVector& impactDirection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

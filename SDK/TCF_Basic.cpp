// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
FNamePool* FName::GNames = nullptr;
TUObjectArray* UObject::GObjects = nullptr;
//---------------------------------------------------------------------------
bool FWeakObjectPtr::IsValid() const
{
	if (ObjectSerialNumber == 0)
	{
		return false;
	}
	if (ObjectIndex < 0)
	{
		return false;
	}
	auto ObjectItem = UObject::GetGlobalObjects().GetObjectPtr(ObjectIndex);
	if (!ObjectItem)
	{
		return false;
	}
	if (!SerialNumbersMatch(ObjectItem))
	{
		return false;
	}
	return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	if (IsValid())
	{
		auto ObjectItem = UObject::GetGlobalObjects().GetObjectPtr(ObjectIndex);
		if (ObjectItem)
		{
			return ObjectItem->Object;
		}
	}
	return nullptr;
}
//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

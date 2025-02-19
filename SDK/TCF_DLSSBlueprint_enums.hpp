#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DLSSBlueprint.UDLSSMode
enum class EUDLSSMode : uint8_t
{
	UDLSSMode__Off                 = 0,
	UDLSSMode__Auto                = 1,
	UDLSSMode__UltraQuality        = 2,
	UDLSSMode__Quality             = 3,
	UDLSSMode__Balanced            = 4,
	UDLSSMode__Performance         = 5,
	UDLSSMode__UltraPerformance    = 6,
	UDLSSMode__UDLSSMode_MAX       = 7
};


// Enum DLSSBlueprint.UDLSSSupport
enum class EUDLSSSupport : uint8_t
{
	UDLSSSupport__Supported        = 0,
	UDLSSSupport__NotSupported     = 1,
	UDLSSSupport__NotSupportedIncompatibleHardware = 2,
	UDLSSSupport__NotSupportedDriverOutOfDate = 3,
	UDLSSSupport__NotSupportedOperatingSystemOutOfDate = 4,
	UDLSSSupport__NotSupportedByPlatformAtBuildTime = 5,
	UDLSSSupport__UDLSSSupport_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

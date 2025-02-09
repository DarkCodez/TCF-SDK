#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_DLSS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DLSS.DLSSOverrideSettings
// 0x0008 (0x0030 - 0x0028)
class UDLSSOverrideSettings : public UObject
{
public:
	EDLSSSettingOverride                               EnableDLSSInEditorViewportsOverride;                      // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EDLSSSettingOverride                               EnableScreenpercentageManipulationInDLSSEditorViewportsOverride;// 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EDLSSSettingOverride                               EnableDLSSInPlayInEditorViewportsOverride;                // 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowDLSSIncompatiblePluginsToolsWarnings;                // 0x002B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EDLSSSettingOverride                               ShowDLSSSDebugOnScreenMessages;                           // 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DLSS.DLSSOverrideSettings");
		return ptr;
	}

};


// Class DLSS.DLSSSettings
// 0x0038 (0x0060 - 0x0028)
class UDLSSSettings : public UObject
{
public:
	bool                                               bEnableDLSSD3D12;                                         // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableDLSSD3D11;                                         // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableDLSSVulkan;                                        // 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableDLSSInEditorViewports;                             // 0x002B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableScreenpercentageManipulationInDLSSEditorViewports; // 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableDLSSInPlayInEditorViewports;                       // 0x002D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowDLSSSDebugOnScreenMessages;                          // 0x002E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002F(0x0001) MISSED OFFSET
	struct FString                                     GenericDLSSBinaryPath;                                    // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bGenericDLSSBinaryExists;                                 // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	uint32_t                                           NVIDIANGXApplicationId;                                   // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     CustomDLSSBinaryPath;                                     // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_EditConst, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCustomDLSSBinaryExists;                                  // 0x0058(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DLSS.DLSSSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ConstructionSystemRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ConstructionSystemRuntime.ConstructionSystemTool
// 0x0008 (0x0030 - 0x0028)
class UConstructionSystemTool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConstructionSystemRuntime.ConstructionSystemTool");
		return ptr;
	}

};


// Class ConstructionSystemRuntime.ConstructionSystemBuildTool
// 0x0138 (0x0168 - 0x0030)
class UConstructionSystemBuildTool : public UConstructionSystemTool
{
public:
	float                                              TraceDistance;                                            // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CursorRotationStepAngle;                                  // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UConstructionSystemCursor*                   Cursor;                                                   // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UPrefabricatorAssetInterface*                ActivePrefabAsset;                                        // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x120];                                     // 0x0048(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConstructionSystemRuntime.ConstructionSystemBuildTool");
		return ptr;
	}


	void SetActivePrefab(class UPrefabricatorAssetInterface* InActivePrefabAsset);
	void HandleInput_RotateCursorStep(float NumSteps);
	void HandleInput_CursorMovePrev();
	void HandleInput_CursorMoveNext();
	void HandleInput_ConstructAtCursor();
};


// Class ConstructionSystemRuntime.ConstructionSystemComponent
// 0x00A0 (0x0150 - 0x00B0)
class UConstructionSystemComponent : public UActorComponent
{
public:
	class UMaterialInterface*                          CursorMaterial;                                           // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInterface*                          CursorInvalidMaterial;                                    // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TraceStartDistance;                                       // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TraceSweepRadius;                                         // 0x00C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      ConstructionCameraActor;                                  // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ConstructionCameraTransitionTime;                         // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ConstructionCameraTransitionExp;                          // 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass*                                      BuildMenuUI;                                              // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UConstructionSystemUIAsset*                  BuildMenuData;                                            // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UUserWidget*                                 BuildMenuUIInstance;                                      // 0x00E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EConstructionSystemToolType                        ActiveToolType;                                           // 0x00F0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TMap<EConstructionSystemToolType, class UConstructionSystemTool*> Tools;                                                    // 0x00F8(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConstructionSystemRuntime.ConstructionSystemComponent");
		return ptr;
	}


	void ToggleConstructionSystem();
	void ShowBuildMenu();
	void SetActiveTool(EConstructionSystemToolType InToolType);
	void HideBuildMenu();
	class UConstructionSystemTool* GetTool(EConstructionSystemToolType InToolType);
	EConstructionSystemToolType GetActiveToolType();
	class UConstructionSystemTool* GetActiveTool();
	void EnableConstructionSystem(EConstructionSystemToolType InToolType);
	void DisableConstructionSystem();
};


// Class ConstructionSystemRuntime.ConstructionSystemItemUserData
// 0x0008 (0x0030 - 0x0028)
class UConstructionSystemItemUserData : public UAssetUserData
{
public:
	int                                                Seed;                                                     // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConstructionSystemRuntime.ConstructionSystemItemUserData");
		return ptr;
	}

};


// Class ConstructionSystemRuntime.ConstructionSystemCursor
// 0x0038 (0x0060 - 0x0028)
class UConstructionSystemCursor : public UObject
{
public:
	class APrefabActor*                                CursorGhostActor;                                         // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                CursorSeed;                                               // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UMaterialInterface*                          CursorMaterial;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          CursorInvalidMaterial;                                    // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<class UPrefabricatorConstructionSnapComponent*> SnapComponents;                                           // 0x0048(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	int                                                ActiveSnapComponentIndex;                                 // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConstructionSystemRuntime.ConstructionSystemCursor");
		return ptr;
	}

};


// Class ConstructionSystemRuntime.ConstructionSystemRemoveTool
// 0x0060 (0x0090 - 0x0030)
class UConstructionSystemRemoveTool : public UConstructionSystemTool
{
public:
	float                                              TraceDistance;                                            // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APrefabActor>                 FocusedActor;                                             // 0x0034(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x54];                                      // 0x003C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConstructionSystemRuntime.ConstructionSystemRemoveTool");
		return ptr;
	}


	void HandleInput_RemoveAtCursor();
};


// Class ConstructionSystemRuntime.ConstructionSystemSaveGame
// 0x0078 (0x00A0 - 0x0028)
class UConstructionSystemSaveGame : public USaveGame
{
public:
	struct FString                                     SaveSlotName;                                             // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           UserIndex;                                                // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FConstructionSystemSavePlayerInfo           PlayerInfo;                                               // 0x0040(0x0050) (CPF_Edit, CPF_EditConst, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FConstructionSystemSaveConstructedItem> ConstructedItems;                                         // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConstructionSystemRuntime.ConstructionSystemSaveGame");
		return ptr;
	}

};


// Class ConstructionSystemRuntime.ConstructionSystemSaveSystem
// 0x0000 (0x0028 - 0x0028)
class UConstructionSystemSaveSystem : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConstructionSystemRuntime.ConstructionSystemSaveSystem");
		return ptr;
	}


	static void SaveConstructionSystemLevel(class UObject* WorldContextObject, const struct FString& SaveSlotName, int UserIndex, bool bSavePlayerState);
	static void LoadConstructionSystemLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bAbsolute, const struct FString& SaveSlotName, int UserIndex);
	static void HandleConstructionSystemLevelLoad(class UObject* WorldContextObject);
};


// Class ConstructionSystemRuntime.PrefabricatorConstructionSnapComponent
// 0x0010 (0x0480 - 0x0470)
class UPrefabricatorConstructionSnapComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0470(0x0003) MISSED OFFSET
	bool                                               bAlignToGroundSlope;                                      // 0x0473(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseMaxGroundSlopeConstraint;                             // 0x0474(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	float                                              MaxGroundPlacementSlope;                                  // 0x0478(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x047C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConstructionSystemRuntime.PrefabricatorConstructionSnapComponent");
		return ptr;
	}

};


// Class ConstructionSystemRuntime.PrefabricatorConstructionSnap
// 0x0008 (0x0248 - 0x0240)
class APrefabricatorConstructionSnap : public AActor
{
public:
	class UPrefabricatorConstructionSnapComponent*     ConstructionSnapComponent;                                // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConstructionSystemRuntime.PrefabricatorConstructionSnap");
		return ptr;
	}

};


// Class ConstructionSystemRuntime.ConstructionSystemBuildUI
// 0x0000 (0x0028 - 0x0028)
class UConstructionSystemBuildUI : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConstructionSystemRuntime.ConstructionSystemBuildUI");
		return ptr;
	}


	void SetUIAsset(class UConstructionSystemUIAsset* UIAsset);
	void SetConstructionSystem(class UConstructionSystemComponent* ConstructionSystem);
};


// Class ConstructionSystemRuntime.ConstructionSystemUIAsset
// 0x0028 (0x0058 - 0x0030)
class UConstructionSystemUIAsset : public UDataAsset
{
public:
	struct FText                                       MenuTitle;                                                // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	TArray<struct FConstructionSystemUICategory>       Categories;                                               // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConstructionSystemRuntime.ConstructionSystemUIAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

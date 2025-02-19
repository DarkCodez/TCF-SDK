// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_PlayerSet_DropArea_SafeContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.OnItemSplitAfterDragBegun
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            localPlayerInventoryComponentId (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            inventoryItemComponentID       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_SafeContainer_C::OnItemSplitAfterDragBegun(const struct FYInventoryItem& Item, int localPlayerInventoryComponentId, int inventoryItemComponentID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.OnItemSplitAfterDragBegun"));

	struct
	{
		struct FYInventoryItem         Item;
		int                            localPlayerInventoryComponentId;
		int                            inventoryItemComponentID;
	} params;

	params.Item = Item;
	params.localPlayerInventoryComponentId = localPlayerInventoryComponentId;
	params.inventoryItemComponentID = inventoryItemComponentID;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.GetTargetInventoryComponentId
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            targetInventoryComponentId     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_SafeContainer_C::GetTargetInventoryComponentId(int* targetInventoryComponentId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.GetTargetInventoryComponentId"));

	struct
	{
		int                            targetInventoryComponentId;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (targetInventoryComponentId != nullptr)
		*targetInventoryComponentId = params.targetInventoryComponentId;
}


// Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.OnExecuteItemSplittingCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_SafeContainer_C::OnExecuteItemSplittingCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.OnExecuteItemSplittingCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.OnItemDroppedCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            localPlayerInventoryComponentId (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            inventoryItemComponentID       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         inventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            amountToMove                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_SafeContainer_C::OnItemDroppedCallback(int localPlayerInventoryComponentId, int inventoryItemComponentID, const struct FYInventoryItem& inventoryItem, int amountToMove)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.OnItemDroppedCallback"));

	struct
	{
		int                            localPlayerInventoryComponentId;
		int                            inventoryItemComponentID;
		struct FYInventoryItem         inventoryItem;
		int                            amountToMove;
	} params;

	params.localPlayerInventoryComponentId = localPlayerInventoryComponentId;
	params.inventoryItemComponentID = inventoryItemComponentID;
	params.inventoryItem = inventoryItem;
	params.amountToMove = amountToMove;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_SafeContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.AssignDragAndDropOperationDelegates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_SafeContainer_C::AssignDragAndDropOperationDelegates(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.AssignDragAndDropOperationDelegates"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.SetParentWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_Inventory_Base* NewParentInventoryWidget       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_SafeContainer_C::SetParentWidget(class UYWidget_Inventory_Base* NewParentInventoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.SetParentWidget"));

	struct
	{
		class UYWidget_Inventory_Base* NewParentInventoryWidget;
	} params;

	params.NewParentInventoryWidget = NewParentInventoryWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_SafeContainer_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.Destruct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea_SafeContainer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_SafeContainer_C::ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea_SafeContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C.ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea_SafeContainer"));

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

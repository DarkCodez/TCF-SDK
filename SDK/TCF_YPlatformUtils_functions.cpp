// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlatformUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPlatformUtils.YAccountLinkingManager.StartAccountLinking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   selectedPlatform               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYAccountLinkingManager::StartAccountLinking(const struct FName& selectedPlatform)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlatformUtils.YAccountLinkingManager.StartAccountLinking");

	struct
	{
		struct FName                   selectedPlatform;
	} params;

	params.selectedPlatform = selectedPlatform;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction YPlatformUtils.YAccountLinkingManager.OnAccountLinkingResultBI__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 targetPlatformUserId           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 targetUserIdPlayFabMaster      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EYAccountLinkingResultCode     resultCode                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYAccountLinkingManager::OnAccountLinkingResultBI__DelegateSignature(const struct FString& targetPlatformUserId, const struct FString& targetUserIdPlayFabMaster, EYAccountLinkingResultCode resultCode)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction YPlatformUtils.YAccountLinkingManager.OnAccountLinkingResultBI__DelegateSignature");

	struct
	{
		struct FString                 targetPlatformUserId;
		struct FString                 targetUserIdPlayFabMaster;
		EYAccountLinkingResultCode     resultCode;
	} params;

	params.targetPlatformUserId = targetPlatformUserId;
	params.targetUserIdPlayFabMaster = targetUserIdPlayFabMaster;
	params.resultCode = resultCode;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction YPlatformUtils.YAccountLinkingManager.OnAccountLinkingResultAfterTimeout__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// EYAccountLinkingResultCode     resultCode                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYAccountLinkingManager::OnAccountLinkingResultAfterTimeout__DelegateSignature(EYAccountLinkingResultCode resultCode)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction YPlatformUtils.YAccountLinkingManager.OnAccountLinkingResultAfterTimeout__DelegateSignature");

	struct
	{
		EYAccountLinkingResultCode     resultCode;
	} params;

	params.resultCode = resultCode;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction YPlatformUtils.YAccountLinkingManager.OnAccountLinkingResult__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// EYAccountLinkingResultCode     resultCode                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYAccountLinkingManager::OnAccountLinkingResult__DelegateSignature(EYAccountLinkingResultCode resultCode)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction YPlatformUtils.YAccountLinkingManager.OnAccountLinkingResult__DelegateSignature");

	struct
	{
		EYAccountLinkingResultCode     resultCode;
	} params;

	params.resultCode = resultCode;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction YPlatformUtils.YAccountLinkingManager.OnAccountLinkingProcessUpdate__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           isInProcess                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYAccountLinkingManager::OnAccountLinkingProcessUpdate__DelegateSignature(bool isInProcess)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction YPlatformUtils.YAccountLinkingManager.OnAccountLinkingProcessUpdate__DelegateSignature");

	struct
	{
		bool                           isInProcess;
	} params;

	params.isInProcess = isInProcess;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlatformUtils.YAccountLinkingManager.IsLinkingInProcess
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYAccountLinkingManager::IsLinkingInProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlatformUtils.YAccountLinkingManager.IsLinkingInProcess");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YPlatformUtils.YAccountLinkingManager.GetTimeoutThreshold
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UYAccountLinkingManager::GetTimeoutThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlatformUtils.YAccountLinkingManager.GetTimeoutThreshold");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YPlatformUtils.YAccountLinkingManager.GetAccountLinkingManager
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 objectContext                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UYAccountLinkingManager* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYAccountLinkingManager* UYAccountLinkingManager::GetAccountLinkingManager(class UObject* objectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlatformUtils.YAccountLinkingManager.GetAccountLinkingManager");

	struct
	{
		class UObject*                 objectContext;
		class UYAccountLinkingManager* ReturnValue;
	} params;

	params.objectContext = objectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YPlatformUtils.YAuthenticationManager.GetAuthenticationManager
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 objectContext                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UYAuthenticationManager* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYAuthenticationManager* UYAuthenticationManager::GetAuthenticationManager(class UObject* objectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlatformUtils.YAuthenticationManager.GetAuthenticationManager");

	struct
	{
		class UObject*                 objectContext;
		class UYAuthenticationManager* ReturnValue;
	} params;

	params.objectContext = objectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction YPlatformUtils.YFriendsImportManager.OnFriendsImportResult__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// EYFriendsImportResultCode      resultCode                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYFriendsImportManager::OnFriendsImportResult__DelegateSignature(EYFriendsImportResultCode resultCode)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction YPlatformUtils.YFriendsImportManager.OnFriendsImportResult__DelegateSignature");

	struct
	{
		EYFriendsImportResultCode      resultCode;
	} params;

	params.resultCode = resultCode;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlatformUtils.YFriendsImportManager.GetFriendsImportManager
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 objectContext                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UYFriendsImportManager*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYFriendsImportManager* UYFriendsImportManager::GetFriendsImportManager(class UObject* objectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlatformUtils.YFriendsImportManager.GetFriendsImportManager");

	struct
	{
		class UObject*                 objectContext;
		class UYFriendsImportManager*  ReturnValue;
	} params;

	params.objectContext = objectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YPlatformUtils.YLegalAgreementsManager.GetLegalAgreementsManager
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 objectContext                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UYLegalAgreementsManager* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYLegalAgreementsManager* UYLegalAgreementsManager::GetLegalAgreementsManager(class UObject* objectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlatformUtils.YLegalAgreementsManager.GetLegalAgreementsManager");

	struct
	{
		class UObject*                 objectContext;
		class UYLegalAgreementsManager* ReturnValue;
	} params;

	params.objectContext = objectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YPlatformUtils.YPlatformFunctions.GetCurrentlyUsedPlatform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EYGamePlatform                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EYGamePlatform UYPlatformFunctions::GetCurrentlyUsedPlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlatformUtils.YPlatformFunctions.GetCurrentlyUsedPlatform");

	struct
	{
		EYGamePlatform                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

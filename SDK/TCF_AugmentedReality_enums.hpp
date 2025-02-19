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

// Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
	EARTrackingState__Unknown      = 0,
	EARTrackingState__Tracking     = 1,
	EARTrackingState__NotTracking  = 2,
	EARTrackingState__StoppedTracking = 3,
	EARTrackingState__EARTrackingState_MAX = 4
};


// Enum AugmentedReality.EGeoAnchorComponentDebugMode
enum class EGeoAnchorComponentDebugMode : uint8_t
{
	EGeoAnchorComponentDebugMode__None = 0,
	EGeoAnchorComponentDebugMode__ShowGeoData = 1,
	EGeoAnchorComponentDebugMode__EGeoAnchorComponentDebugMode_MAX = 2
};


// Enum AugmentedReality.EPoseComponentDebugMode
enum class EPoseComponentDebugMode : uint8_t
{
	EPoseComponentDebugMode__None  = 0,
	EPoseComponentDebugMode__ShowSkeleton = 1,
	EPoseComponentDebugMode__EPoseComponentDebugMode_MAX = 2
};


// Enum AugmentedReality.EQRCodeComponentDebugMode
enum class EQRCodeComponentDebugMode : uint8_t
{
	EQRCodeComponentDebugMode__None = 0,
	EQRCodeComponentDebugMode__ShowQRCode = 1,
	EQRCodeComponentDebugMode__EQRCodeComponentDebugMode_MAX = 2
};


// Enum AugmentedReality.EImageComponentDebugMode
enum class EImageComponentDebugMode : uint8_t
{
	EImageComponentDebugMode__None = 0,
	EImageComponentDebugMode__ShowDetectedImage = 1,
	EImageComponentDebugMode__EImageComponentDebugMode_MAX = 2
};


// Enum AugmentedReality.EARFaceTransformMixing
enum class EARFaceTransformMixing : uint8_t
{
	EARFaceTransformMixing__ComponentOnly = 0,
	EARFaceTransformMixing__ComponentLocationTrackedRotation = 1,
	EARFaceTransformMixing__ComponentWithTracked = 2,
	EARFaceTransformMixing__TrackingOnly = 3,
	EARFaceTransformMixing__EARFaceTransformMixing_MAX = 4
};


// Enum AugmentedReality.EFaceComponentDebugMode
enum class EFaceComponentDebugMode : uint8_t
{
	EFaceComponentDebugMode__None  = 0,
	EFaceComponentDebugMode__ShowEyeVectors = 1,
	EFaceComponentDebugMode__ShowFaceMesh = 2,
	EFaceComponentDebugMode__EFaceComponentDebugMode_MAX = 3
};


// Enum AugmentedReality.EPlaneComponentDebugMode
enum class EPlaneComponentDebugMode : uint8_t
{
	EPlaneComponentDebugMode__None = 0,
	EPlaneComponentDebugMode__ShowNetworkRole = 1,
	EPlaneComponentDebugMode__ShowClassification = 2,
	EPlaneComponentDebugMode__EPlaneComponentDebugMode_MAX = 3
};


// Enum AugmentedReality.EARSessionConfigFlags
enum class EARSessionConfigFlags : uint8_t
{
	EARSessionConfigFlags__None    = 0,
	EARSessionConfigFlags__GenerateMeshData = 1,
	EARSessionConfigFlags__RenderMeshDataInWireframe = 2,
	EARSessionConfigFlags__GenerateCollisionForMeshData = 3,
	EARSessionConfigFlags__GenerateNavMeshForMeshData = 4,
	EARSessionConfigFlags__UseMeshDataForOcclusion = 5,
	EARSessionConfigFlags__EARSessionConfigFlags_MAX = 6
};


// Enum AugmentedReality.EARServicePermissionRequestResult
enum class EARServicePermissionRequestResult : uint8_t
{
	EARServicePermissionRequestResult__Granted = 0,
	EARServicePermissionRequestResult__Denied = 1,
	EARServicePermissionRequestResult__EARServicePermissionRequestResult_MAX = 2
};


// Enum AugmentedReality.EARServiceInstallRequestResult
enum class EARServiceInstallRequestResult : uint8_t
{
	EARServiceInstallRequestResult__Installed = 0,
	EARServiceInstallRequestResult__DeviceNotCompatible = 1,
	EARServiceInstallRequestResult__UserDeclinedInstallation = 2,
	EARServiceInstallRequestResult__FatalError = 3,
	EARServiceInstallRequestResult__EARServiceInstallRequestResult_MAX = 4
};


// Enum AugmentedReality.EARServiceAvailability
enum class EARServiceAvailability : uint8_t
{
	EARServiceAvailability__UnknownError = 0,
	EARServiceAvailability__UnknownChecking = 1,
	EARServiceAvailability__UnknownTimedOut = 2,
	EARServiceAvailability__UnsupportedDeviceNotCapable = 3,
	EARServiceAvailability__SupportedNotInstalled = 4,
	EARServiceAvailability__SupportedVersionTooOld = 5,
	EARServiceAvailability__SupportedInstalled = 6,
	EARServiceAvailability__EARServiceAvailability_MAX = 7
};


// Enum AugmentedReality.EARGeoTrackingAccuracy
enum class EARGeoTrackingAccuracy : uint8_t
{
	EARGeoTrackingAccuracy__Undetermined = 0,
	EARGeoTrackingAccuracy__Low    = 1,
	EARGeoTrackingAccuracy__Medium = 2,
	EARGeoTrackingAccuracy__High   = 3,
	EARGeoTrackingAccuracy__EARGeoTrackingAccuracy_MAX = 4
};


// Enum AugmentedReality.EARGeoTrackingStateReason
enum class EARGeoTrackingStateReason : uint8_t
{
	EARGeoTrackingStateReason__None = 0,
	EARGeoTrackingStateReason__NotAvailableAtLocation = 1,
	EARGeoTrackingStateReason__NeedLocationPermissions = 2,
	EARGeoTrackingStateReason__DevicePointedTooLow = 3,
	EARGeoTrackingStateReason__WorldTrackingUnstable = 4,
	EARGeoTrackingStateReason__WaitingForLocation = 5,
	EARGeoTrackingStateReason__GeoDataNotLoaded = 6,
	EARGeoTrackingStateReason__VisualLocalizationFailed = 7,
	EARGeoTrackingStateReason__WaitingForAvailabilityCheck = 8,
	EARGeoTrackingStateReason__EARGeoTrackingStateReason_MAX = 9
};


// Enum AugmentedReality.EARGeoTrackingState
enum class EARGeoTrackingState : uint8_t
{
	EARGeoTrackingState__Initializing = 0,
	EARGeoTrackingState__Localized = 1,
	EARGeoTrackingState__Localizing = 2,
	EARGeoTrackingState__NotAvailable = 3,
	EARGeoTrackingState__EARGeoTrackingState_MAX = 4
};


// Enum AugmentedReality.EARSceneReconstruction
enum class EARSceneReconstruction : uint8_t
{
	EARSceneReconstruction__None   = 0,
	EARSceneReconstruction__MeshOnly = 1,
	EARSceneReconstruction__MeshWithClassification = 2,
	EARSceneReconstruction__EARSceneReconstruction_MAX = 3
};


// Enum AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None = 0,
	EARSessionTrackingFeature__PoseDetection2D = 1,
	EARSessionTrackingFeature__PersonSegmentation = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth = 3,
	EARSessionTrackingFeature__SceneDepth = 4,
	EARSessionTrackingFeature__SmoothedSceneDepth = 5,
	EARSessionTrackingFeature__EARSessionTrackingFeature_MAX = 6
};


// Enum AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo = 0,
	EARFaceTrackingUpdate__CurvesOnly = 1,
	EARFaceTrackingUpdate__EARFaceTrackingUpdate_MAX = 2
};


// Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None = 0,
	EAREnvironmentCaptureProbeType__Manual = 1,
	EAREnvironmentCaptureProbeType__Automatic = 2,
	EAREnvironmentCaptureProbeType__EAREnvironmentCaptureProbeType_MAX = 3
};


// Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode__EARFrameSyncMode_MAX = 2
};


// Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None   = 0,
	EARLightEstimationMode__AmbientLightEstimate = 1,
	EARLightEstimationMode__DirectionalLightEstimate = 2,
	EARLightEstimationMode__EARLightEstimationMode_MAX = 3
};


// Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None    = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection = 2,
	EARPlaneDetectionMode__EARPlaneDetectionMode_MAX = 3
};


// Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
	EARSessionType__None           = 0,
	EARSessionType__Orientation    = 1,
	EARSessionType__World          = 2,
	EARSessionType__Face           = 3,
	EARSessionType__Image          = 4,
	EARSessionType__ObjectScanning = 5,
	EARSessionType__PoseTracking   = 6,
	EARSessionType__GeoTracking    = 7,
	EARSessionType__EARSessionType_MAX = 8
};


// Enum AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity     = 0,
	EARWorldAlignment__GravityAndHeading = 1,
	EARWorldAlignment__Camera      = 2,
	EARWorldAlignment__EARWorldAlignment_MAX = 3
};


// Enum AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown       = 0,
	EARDepthAccuracy__Approximate  = 1,
	EARDepthAccuracy__Accurate     = 2,
	EARDepthAccuracy__EARDepthAccuracy_MAX = 3
};


// Enum AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown        = 0,
	EARDepthQuality__Low           = 1,
	EARDepthQuality__High          = 2,
	EARDepthQuality__EARDepthQuality_MAX = 3
};


// Enum AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t
{
	EARTextureType__Unknown        = 0,
	EARTextureType__CameraImage    = 1,
	EARTextureType__CameraDepth    = 2,
	EARTextureType__EnvironmentCapture = 3,
	EARTextureType__PersonSegmentationImage = 4,
	EARTextureType__PersonSegmentationDepth = 5,
	EARTextureType__SceneDepthMap  = 6,
	EARTextureType__SceneDepthConfidenceMap = 7,
	EARTextureType__EARTextureType_MAX = 8
};


// Enum AugmentedReality.EAREye
enum class EAREye : uint8_t
{
	EAREye__LeftEye                = 0,
	EAREye__RightEye               = 1,
	EAREye__EAREye_MAX             = 2
};


// Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft = 0,
	EARFaceBlendShape__EyeLookDownLeft = 1,
	EARFaceBlendShape__EyeLookInLeft = 2,
	EARFaceBlendShape__EyeLookOutLeft = 3,
	EARFaceBlendShape__EyeLookUpLeft = 4,
	EARFaceBlendShape__EyeSquintLeft = 5,
	EARFaceBlendShape__EyeWideLeft = 6,
	EARFaceBlendShape__EyeBlinkRight = 7,
	EARFaceBlendShape__EyeLookDownRight = 8,
	EARFaceBlendShape__EyeLookInRight = 9,
	EARFaceBlendShape__EyeLookOutRight = 10,
	EARFaceBlendShape__EyeLookUpRight = 11,
	EARFaceBlendShape__EyeSquintRight = 12,
	EARFaceBlendShape__EyeWideRight = 13,
	EARFaceBlendShape__JawForward  = 14,
	EARFaceBlendShape__JawLeft     = 15,
	EARFaceBlendShape__JawRight    = 16,
	EARFaceBlendShape__JawOpen     = 17,
	EARFaceBlendShape__MouthClose  = 18,
	EARFaceBlendShape__MouthFunnel = 19,
	EARFaceBlendShape__MouthPucker = 20,
	EARFaceBlendShape__MouthLeft   = 21,
	EARFaceBlendShape__MouthRight  = 22,
	EARFaceBlendShape__MouthSmileLeft = 23,
	EARFaceBlendShape__MouthSmileRight = 24,
	EARFaceBlendShape__MouthFrownLeft = 25,
	EARFaceBlendShape__MouthFrownRight = 26,
	EARFaceBlendShape__MouthDimpleLeft = 27,
	EARFaceBlendShape__MouthDimpleRight = 28,
	EARFaceBlendShape__MouthStretchLeft = 29,
	EARFaceBlendShape__MouthStretchRight = 30,
	EARFaceBlendShape__MouthRollLower = 31,
	EARFaceBlendShape__MouthRollUpper = 32,
	EARFaceBlendShape__MouthShrugLower = 33,
	EARFaceBlendShape__MouthShrugUpper = 34,
	EARFaceBlendShape__MouthPressLeft = 35,
	EARFaceBlendShape__MouthPressRight = 36,
	EARFaceBlendShape__MouthLowerDownLeft = 37,
	EARFaceBlendShape__MouthLowerDownRight = 38,
	EARFaceBlendShape__MouthUpperUpLeft = 39,
	EARFaceBlendShape__MouthUpperUpRight = 40,
	EARFaceBlendShape__BrowDownLeft = 41,
	EARFaceBlendShape__BrowDownRight = 42,
	EARFaceBlendShape__BrowInnerUp = 43,
	EARFaceBlendShape__BrowOuterUpLeft = 44,
	EARFaceBlendShape__BrowOuterUpRight = 45,
	EARFaceBlendShape__CheekPuff   = 46,
	EARFaceBlendShape__CheekSquintLeft = 47,
	EARFaceBlendShape__CheekSquintRight = 48,
	EARFaceBlendShape__NoseSneerLeft = 49,
	EARFaceBlendShape__NoseSneerRight = 50,
	EARFaceBlendShape__TongueOut   = 51,
	EARFaceBlendShape__HeadYaw     = 52,
	EARFaceBlendShape__HeadPitch   = 53,
	EARFaceBlendShape__HeadRoll    = 54,
	EARFaceBlendShape__LeftEyeYaw  = 55,
	EARFaceBlendShape__LeftEyePitch = 56,
	EARFaceBlendShape__LeftEyeRoll = 57,
	EARFaceBlendShape__RightEyeYaw = 58,
	EARFaceBlendShape__RightEyePitch = 59,
	EARFaceBlendShape__RightEyeRoll = 60,
	EARFaceBlendShape__MAX         = 61
};


// Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative = 0,
	EARFaceTrackingDirection__FaceMirrored = 1,
	EARFaceTrackingDirection__EARFaceTrackingDirection_MAX = 2
};


// Enum AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape = 0,
	EARCandidateImageOrientation__Portrait = 1,
	EARCandidateImageOrientation__EARCandidateImageOrientation_MAX = 2
};


// Enum AugmentedReality.EARAltitudeSource
enum class EARAltitudeSource : uint8_t
{
	EARAltitudeSource__Precise     = 0,
	EARAltitudeSource__Coarse      = 1,
	EARAltitudeSource__UserDefined = 2,
	EARAltitudeSource__Unknown     = 3,
	EARAltitudeSource__EARAltitudeSource_MAX = 4
};


// Enum AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model  = 0,
	EARJointTransformSpace__ParentJoint = 1,
	EARJointTransformSpace__EARJointTransformSpace_MAX = 2
};


// Enum AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable = 0,
	EARObjectClassification__Unknown = 1,
	EARObjectClassification__Wall  = 2,
	EARObjectClassification__Ceiling = 3,
	EARObjectClassification__Floor = 4,
	EARObjectClassification__Table = 5,
	EARObjectClassification__Seat  = 6,
	EARObjectClassification__Face  = 7,
	EARObjectClassification__Image = 8,
	EARObjectClassification__World = 9,
	EARObjectClassification__SceneObject = 10,
	EARObjectClassification__HandMesh = 11,
	EARObjectClassification__Door  = 12,
	EARObjectClassification__Window = 13,
	EARObjectClassification__EARObjectClassification_MAX = 14
};


// Enum AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal = 0,
	EARPlaneOrientation__Vertical  = 1,
	EARPlaneOrientation__Diagonal  = 2,
	EARPlaneOrientation__EARPlaneOrientation_MAX = 3
};


// Enum AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable = 0,
	EARWorldMappingState__StillMappingNotRelocalizable = 1,
	EARWorldMappingState__StillMappingRelocalizable = 2,
	EARWorldMappingState__Mapped   = 3,
	EARWorldMappingState__EARWorldMappingState_MAX = 4
};


// Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted   = 0,
	EARSessionStatus__Running      = 1,
	EARSessionStatus__NotSupported = 2,
	EARSessionStatus__FatalError   = 3,
	EARSessionStatus__PermissionNotGranted = 4,
	EARSessionStatus__UnsupportedConfiguration = 5,
	EARSessionStatus__Other        = 6,
	EARSessionStatus__EARSessionStatus_MAX = 7
};


// Enum AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None = 0,
	EARTrackingQualityReason__Initializing = 1,
	EARTrackingQualityReason__Relocalizing = 2,
	EARTrackingQualityReason__ExcessiveMotion = 3,
	EARTrackingQualityReason__InsufficientFeatures = 4,
	EARTrackingQualityReason__InsufficientLight = 5,
	EARTrackingQualityReason__BadState = 6,
	EARTrackingQualityReason__EARTrackingQualityReason_MAX = 7
};


// Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking = 0,
	EARTrackingQuality__OrientationOnly = 1,
	EARTrackingQuality__OrientationAndPosition = 2,
	EARTrackingQuality__EARTrackingQuality_MAX = 3
};


// Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None     = 0,
	EARLineTraceChannels__FeaturePoint = 1,
	EARLineTraceChannels__GroundPlane = 2,
	EARLineTraceChannels__PlaneUsingExtent = 3,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon = 4,
	EARLineTraceChannels__EARLineTraceChannels_MAX = 5
};


// Enum AugmentedReality.EARCaptureType
enum class EARCaptureType : uint8_t
{
	EARCaptureType__Camera         = 0,
	EARCaptureType__QRCode         = 1,
	EARCaptureType__SpatialMapping = 2,
	EARCaptureType__SceneUnderstanding = 3,
	EARCaptureType__EARCaptureType_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

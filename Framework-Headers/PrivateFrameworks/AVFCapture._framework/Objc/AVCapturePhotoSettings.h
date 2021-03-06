//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCapture/NSCopying-Protocol.h>

@class AVCapturePhotoSettingsInternal, NSArray, NSDictionary, NSString, NSURL;

@interface AVCapturePhotoSettings : NSObject <NSCopying>
{
    AVCapturePhotoSettingsInternal *_internal;
}

@property (nonatomic, getter=isAutoContentAwareDistortionCorrectionEnabled) BOOL autoContentAwareDistortionCorrectionEnabled;
@property (nonatomic, getter=isAutoDualCameraFusionEnabled) BOOL autoDualCameraFusionEnabled;
@property (nonatomic, getter=isAutoRedEyeReductionEnabled) BOOL autoRedEyeReductionEnabled;
@property (nonatomic, getter=isAutoStillImageStabilizationEnabled) BOOL autoStillImageStabilizationEnabled;
@property (nonatomic, getter=isAutoVirtualDeviceFusionEnabled) BOOL autoVirtualDeviceFusionEnabled;
@property (readonly, nonatomic) NSArray *availableEmbeddedThumbnailPhotoCodecTypes;
@property (readonly, nonatomic) NSArray *availablePreviewPhotoPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableRawEmbeddedThumbnailPhotoCodecTypes;
@property (nonatomic, getter=isCameraCalibrationDataDeliveryEnabled) BOOL cameraCalibrationDataDeliveryEnabled;
@property (nonatomic, getter=isDepthDataDeliveryEnabled) BOOL depthDataDeliveryEnabled;
@property (nonatomic, getter=isDepthDataFiltered) BOOL depthDataFiltered;
@property (nonatomic, getter=isDualCameraDualPhotoDeliveryEnabled) BOOL dualCameraDualPhotoDeliveryEnabled;
@property (copy, nonatomic) NSDictionary *embeddedThumbnailPhotoFormat;
@property (nonatomic) BOOL embedsDepthDataInPhoto;
@property (nonatomic) BOOL embedsPortraitEffectsMatteInPhoto;
@property (nonatomic) BOOL embedsSemanticSegmentationMattesInPhoto;
@property (copy, nonatomic) NSArray *enabledSemanticSegmentationMatteTypes;
@property (nonatomic) long long flashMode;
@property (readonly, copy) NSDictionary *format;
@property (nonatomic, getter=isHighResolutionPhotoEnabled) BOOL highResolutionPhotoEnabled;
@property (copy, nonatomic) NSURL *livePhotoMovieFileURL;
@property (copy, nonatomic) NSArray *livePhotoMovieMetadata;
@property (copy, nonatomic) NSString *livePhotoVideoCodecType;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) long long photoQualityPrioritization;
@property (nonatomic, getter=isPortraitEffectsMatteDeliveryEnabled) BOOL portraitEffectsMatteDeliveryEnabled;
@property (copy, nonatomic) NSDictionary *previewPhotoFormat;
@property (readonly) NSString *processedFileType;
@property (copy, nonatomic) NSDictionary *rawEmbeddedThumbnailPhotoFormat;
@property (readonly) NSString *rawFileType;
@property (readonly) unsigned int rawPhotoPixelFormatType;
@property (readonly) long long uniqueID;
@property (copy, nonatomic) NSArray *virtualDeviceConstituentPhotoDeliveryEnabledDevices;

+ (id)burstQualityPhotoSettings;
+ (void)initialize;
+ (id)photoSettings;
+ (id)photoSettingsFromMomentCaptureSettings:(id)arg1 withFormat:(id)arg2;
+ (id)photoSettingsFromMomentCaptureSettings:(id)arg1 withRawPixelFormatType:(unsigned int)arg2 rawFileType:(id)arg3 format:(id)arg4;
+ (id)photoSettingsFromPhotoInitiationSettings:(id)arg1 format:(id)arg2;
+ (id)photoSettingsFromPhotoSettings:(id)arg1;
+ (id)photoSettingsWithFormat:(id)arg1;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1 processedFormat:(id)arg2;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4;
+ (long long)uniqueID;
- (long long)HDRMode;
- (id)HEICSFileURL;
- (id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned int)arg3 rawFileType:(id)arg4 burstQualityCaptureEnabled:(BOOL)arg5 uniqueID:(long long)arg6 exceptionReason:(id *)arg7;
- (id)_sanitizedLivePhotoMovieMetadataForArray:(id)arg1 exceptionReason:(id *)arg2;
- (void)_setPhotoQualityPrioritization:(long long)arg1;
- (void)_setPropertiesFromMomentCaptureSettings:(id)arg1;
- (id)adjustedPhotoFilters;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (long long)digitalFlashMode;
- (struct CGSize)embeddedThumbnailCGSize;
- (unsigned int)embeddedThumbnailFormatFourCC;
- (unsigned int)formatFourCC;
- (id)init;
- (BOOL)isAutoDeferredProcessingEnabled;
- (BOOL)isAutoSpatialOverCaptureEnabled;
- (BOOL)isBurstQualityCaptureEnabled;
- (BOOL)isEV0PhotoDeliveryEnabled;
- (BOOL)isProcessedPhotoZoomWithoutUpscalingEnabled;
- (BOOL)isSquareCropEnabled;
- (BOOL)isTurboModeEnabled;
- (id)livePhotoContentIdentifier;
- (id)livePhotoContentIdentifierForOriginalPhoto;
- (id)livePhotoMovieFileURLForOriginalPhoto;
- (id)livePhotoMovieMetadataForOriginalPhoto;
- (id)metadataForOriginalPhoto;
- (id)photoFilters;
- (BOOL)photoQualityPrioritizationIsSetByClient;
- (struct CGSize)previewCGSize;
- (unsigned int)previewFormatFourCC;
- (struct CGSize)rawEmbeddedThumbnailCGSize;
- (unsigned int)rawEmbeddedThumbnailFormatFourCC;
- (void)setAdjustedPhotoFilters:(id)arg1;
- (void)setAutoDeferredProcessingEnabled:(BOOL)arg1;
- (void)setAutoSpatialOverCaptureEnabled:(BOOL)arg1;
- (void)setDigitalFlashMode:(long long)arg1;
- (void)setEV0PhotoDeliveryEnabled:(BOOL)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setHEICSFileURL:(id)arg1;
- (void)setLivePhotoContentIdentifier:(id)arg1;
- (void)setLivePhotoContentIdentifierForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;
- (void)setPhotoFilters:(id)arg1;
- (void)setProcessedPhotoZoomWithoutUpscalingEnabled:(BOOL)arg1;
- (void)setShutterSound:(unsigned int)arg1;
- (void)setSpatialOverCaptureLivePhotoMovieFileURL:(id)arg1;
- (void)setSpatialOverCaptureLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (void)setSpatialOverCaptureLivePhotoMovieMetadata:(id)arg1;
- (void)setSpatialOverCaptureLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;
- (void)setSpatialOverCaptureMetadata:(id)arg1;
- (void)setSpatialOverCaptureMetadataForOriginalPhoto:(id)arg1;
- (void)setSquareCropEnabled:(BOOL)arg1;
- (void)setTurboModeEnabled:(BOOL)arg1;
- (void)setUserInitiatedPhotoRequestTime:(unsigned long long)arg1;
- (void)setVideoFileMetadata:(id)arg1;
- (void)setVideoFileURL:(id)arg1;
- (void)setVideoFormat:(id)arg1;
- (unsigned int)shutterSound;
- (id)spatialOverCaptureGroupIdentifier;
- (id)spatialOverCaptureGroupIdentifierForOriginalPhoto;
- (id)spatialOverCaptureLivePhotoContentIdentifier;
- (id)spatialOverCaptureLivePhotoContentIdentifierForOriginalPhoto;
- (id)spatialOverCaptureLivePhotoMovieFileURL;
- (id)spatialOverCaptureLivePhotoMovieFileURLForOriginalPhoto;
- (id)spatialOverCaptureLivePhotoMovieMetadata;
- (id)spatialOverCaptureLivePhotoMovieMetadataForOriginalPhoto;
- (id)spatialOverCaptureMetadata;
- (id)spatialOverCaptureMetadataForOriginalPhoto;
- (unsigned long long)userInitiatedPhotoRequestTime;
- (id)videoFileMetadata;
- (id)videoFileURL;
- (id)videoFormat;

@end


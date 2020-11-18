//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureDeviceFormatInternal, NSArray, NSString;

@interface AVCaptureDeviceFormat : NSObject
{
    AVCaptureDeviceFormatInternal *_internal;
}

@property (readonly, nonatomic) long long autoFocusSystem;
@property (readonly, nonatomic) const struct opaqueCMFormatDescription *formatDescription;
@property (readonly, nonatomic, getter=isGlobalToneMappingSupported) BOOL globalToneMappingSupported;
@property (readonly, nonatomic) CDStruct_79c71658 highResolutionStillImageDimensions;
@property (readonly, nonatomic, getter=isHighestPhotoQualitySupported) BOOL highestPhotoQualitySupported;
@property (readonly, nonatomic) CDStruct_1b6d18a9 maxExposureDuration;
@property (readonly, nonatomic) float maxISO;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) CDStruct_1b6d18a9 minExposureDuration;
@property (readonly, nonatomic) float minISO;
@property (readonly, nonatomic) NSArray *supportedColorSpaces;
@property (readonly, nonatomic) NSArray *supportedDepthDataFormats;
@property (readonly, nonatomic) NSArray *unsupportedCaptureOutputClasses;
@property (readonly, nonatomic, getter=isVideoBinned) BOOL videoBinned;
@property (readonly, nonatomic) float videoFieldOfView;
@property (readonly, nonatomic, getter=isVideoHDRSupported) BOOL videoHDRSupported;
@property (readonly, nonatomic) double videoMaxZoomFactor;
@property (readonly, nonatomic) double videoMaxZoomFactorForDepthDataDelivery;
@property (readonly, nonatomic) double videoMinZoomFactorForDepthDataDelivery;
@property (readonly, nonatomic, getter=isVideoStabilizationSupported) BOOL videoStabilizationSupported;
@property (readonly, nonatomic) NSArray *videoSupportedFrameRateRanges;
@property (readonly, nonatomic) double videoZoomFactorUpscaleThreshold;

+ (void)initialize;
- (id)AVCaptureSessionPresets;
- (id)_stringForMediaType:(unsigned int)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 frameRateRanges:(id)arg3;
- (int)baseSensorPowerConsumption;
- (void)dealloc;
- (id)debugDescription;
- (CDStruct_1b6d18a9)defaultActiveMaxFrameDuration;
- (CDStruct_1b6d18a9)defaultActiveMinFrameDuration;
- (float)defaultPortraitLightingEffectStrength;
- (float)defaultSimulatedAperture;
- (id)description;
- (id)figCaptureSourceDepthDataFormat;
- (id)figCaptureSourceVideoFormat;
- (float)geometricDistortionCorrectedVideoFieldOfView;
- (float)hardwareCost;
- (CDStruct_1b6d18a9)highestSupportedVideoFrameDuration;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
- (BOOL)isDeepFusionSupported;
- (BOOL)isDefaultActiveFormat;
- (BOOL)isDeferredPhotoProcessingSupported;
- (BOOL)isDigitalFlashSupported;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentToVirtualDeviceFormat:(id)arg1;
- (BOOL)isExperimental;
- (BOOL)isHDRSupported;
- (BOOL)isHighResPhotoFormat;
- (BOOL)isIrisSupported;
- (BOOL)isIrisVideoStabilizationSupported;
- (BOOL)isLowLightVideoCaptureSupported;
- (BOOL)isMomentCaptureMovieRecordingSupported;
- (BOOL)isMultiCamSupported;
- (BOOL)isNonDestructiveCropSupported;
- (BOOL)isPhotoFormat;
- (BOOL)isPortraitEffectsMatteStillImageDeliverySupported;
- (BOOL)isSISSupported;
- (BOOL)isSpatialOverCaptureSupported;
- (BOOL)isStereoFusionSupported;
- (BOOL)isStillImageDepthSupported;
- (BOOL)isStillImageDisparitySupported;
- (BOOL)isStreamingDepthSupported;
- (BOOL)isStreamingDisparitySupported;
- (BOOL)isVideoHDRSuspensionSupported;
- (BOOL)isVideoStabilizationModeSupported:(long long)arg1;
- (BOOL)isVisionDataDeliverySupported;
- (BOOL)isWideColorSupported;
- (int)ispPowerConsumption;
- (CDStruct_1b6d18a9)lowestSupportedVideoFrameDuration;
- (float)maxPortraitLightingEffectStrength;
- (float)maxSimulatedAperture;
- (float)minPortraitLightingEffectStrength;
- (float)minSimulatedAperture;
- (BOOL)needsPhotoPreviewDPCC;
- (id)optimizedPhotoFilterNames;
- (id)optimizedVideoPreviewFilterNames;
- (BOOL)prefersVideoHDREnabledForSessionPreset:(id)arg1;
- (CDStruct_79c71658)previewDimensions;
- (int)rawBitDepth;
- (CDStruct_79c71658)sensorDimensions;
- (float)spatialOverCapturePercentage;
- (int)supportedFormatsArrayIndex;
- (unsigned int)supportedRawPixelFormat;
- (id)supportedSemanticSegmentationMatteTypes;
- (int)supportedStabilizationMethod;
- (BOOL)supportsDynamicCrop;
- (BOOL)supportsHighProfileH264;
- (BOOL)supportsHighResolutionStillImageOutput;
- (BOOL)supportsQuadraHighResolutionStillImageOutput;
- (BOOL)supportsRedEyeReduction;
- (int)variableSensorPowerConsumption;
- (long long)videoHDRFlavor;
- (id)videoZoomSupportedDownscaleStages;
- (id)videoZoomSupportedUpscaleStages;
- (id)vtScalingMode;

@end

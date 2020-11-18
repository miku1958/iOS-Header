//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureDeviceFormatInternal, NSArray, NSString;

@interface AVCaptureDeviceFormat : NSObject
{
    AVCaptureDeviceFormatInternal *_internal;
}

@property (readonly, nonatomic) long long autoFocusSystem;
@property (readonly, nonatomic) struct opaqueCMFormatDescription *formatDescription;
@property (readonly, nonatomic) CDStruct_79c71658 highResolutionStillImageDimensions;
@property (readonly, nonatomic) CDStruct_1b6d18a9 maxExposureDuration;
@property (readonly, nonatomic) float maxISO;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) CDStruct_1b6d18a9 minExposureDuration;
@property (readonly, nonatomic) float minISO;
@property (readonly, nonatomic) NSArray *supportedColorSpaces;
@property (readonly, nonatomic, getter=isVideoBinned) BOOL videoBinned;
@property (readonly, nonatomic) float videoFieldOfView;
@property (readonly, nonatomic, getter=isVideoHDRSupported) BOOL videoHDRSupported;
@property (readonly, nonatomic) double videoMaxZoomFactor;
@property (readonly, nonatomic, getter=isVideoStabilizationSupported) BOOL videoStabilizationSupported;
@property (readonly, nonatomic) NSArray *videoSupportedFrameRateRanges;
@property (readonly, nonatomic) double videoZoomFactorUpscaleThreshold;

+ (void)initialize;
- (id)AVCaptureSessionPresets;
- (id)_stringForFormatDescription:(struct opaqueCMFormatDescription *)arg1 frameRateRanges:(id)arg2;
- (void)dealloc;
- (CDStruct_1b6d18a9)defaultActiveMaxFrameDuration;
- (CDStruct_1b6d18a9)defaultActiveMinFrameDuration;
- (id)description;
- (id)figCaptureSourceFormat;
- (CDStruct_1b6d18a9)highestSupportedVideoFrameDuration;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
- (BOOL)isDefaultActiveFormat;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExperimental;
- (BOOL)isHighResPhotoFormat;
- (BOOL)isIrisSupported;
- (BOOL)isIrisVideoStabilizationSupported;
- (BOOL)isPhotoFormat;
- (BOOL)isSISSupported;
- (BOOL)isVideoStabilizationModeSupported:(long long)arg1;
- (BOOL)isWideColorSupported;
- (CDStruct_1b6d18a9)lowestSupportedVideoFrameDuration;
- (BOOL)needsPhotoPreviewDPCC;
- (BOOL)prefersVideoHDREnabledForSessionPreset:(id)arg1;
- (CDStruct_79c71658)previewDimensions;
- (int)rawBitDepth;
- (CDStruct_79c71658)sensorDimensions;
- (int)supportedFormatsArrayIndex;
- (unsigned int)supportedRawPixelFormat;
- (int)supportedStabilizationMethod;
- (BOOL)supportsDynamicCrop;
- (BOOL)supportsHighProfileH264;
- (BOOL)supportsHighResolutionStillImageOutput;
- (BOOL)supportsLowLightBoost;
- (BOOL)supportsQuadraHighResolutionStillImageOutput;
- (id)videoZoomSupportedDownscaleStages;
- (id)videoZoomSupportedUpscaleStages;
- (id)vtScalingMode;

@end

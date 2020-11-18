//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/FigCaptureSourceFormat.h>

@class FigCaptureSourceCompanionFormat, NSArray;

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat
{
    BOOL _isMultiStreamFormat;
    BOOL _isExternalFormat;
    NSArray *_frontEndScalerCompanionFormats;
    BOOL _sifrSupported;
    FigCaptureSourceCompanionFormat *_nonSIFRCompanionFormat;
    FigCaptureSourceCompanionFormat *_depthCompanionFormat;
    NSArray *_supportedDepthDataFormats;
    BOOL _isStreamingDisparitySupported;
    BOOL _isStreamingDepthSupported;
    BOOL _isStillImageDisparitySupported;
    BOOL _isStillImageDepthSupported;
}

@property (readonly) NSArray *AVCaptureSessionPresets;
@property (readonly, getter=isSIFRSupported) BOOL SIFRSupported;
@property (readonly) int autoFocusSystem;
@property (readonly, getter=isBinned) BOOL binned;
@property (readonly) BOOL configureForStillImageStabilizationSupport;
@property (readonly) float defaultMaxFrameRate;
@property (readonly) float defaultMinFrameRate;
@property (readonly) float defaultSimulatedAperture;
@property (readonly) CDStruct_79c71658 dimensions;
@property (readonly, getter=isExternalFormat) BOOL externalFormat;
@property (readonly) float fieldOfView;
@property (readonly) int formatIndex;
@property (readonly) BOOL hasSensorHDRCompanionIndex;
@property (readonly, getter=isHDRSupported) BOOL hdrSupported;
@property (readonly, getter=isHighProfileH264Supported) BOOL highProfileH264Supported;
@property (readonly, getter=isHighResPhotoFormat) BOOL highResPhotoFormat;
@property (readonly) CDStruct_79c71658 highResStillImageDimensions;
@property (readonly, getter=isHighResStillImageSupported) BOOL highResStillImageSupported;
@property (readonly, getter=isIrisSupported) BOOL irisSupported;
@property (readonly, getter=isIrisVideoStabilizationSupported) BOOL irisVideoStabilizationSupported;
@property (readonly, getter=isISPMultiBandNoiseReductionSupported) BOOL ispMultiBandNoiseReductionSupported;
@property (readonly, getter=isLowLightVideoCaptureSupported) BOOL lowLightVideoCaptureSupported;
@property (readonly) CDStruct_1b6d18a9 maxExposureDuration;
@property (readonly) float maxISO;
@property (readonly) float maxSimulatedAperture;
@property (readonly) float maxSupportedFrameRate;
@property (readonly) float maxZoomFactor;
@property (readonly) float maxZoomFactorForDepthDataDelivery;
@property (readonly) CDStruct_1b6d18a9 minExposureDuration;
@property (readonly) float minISO;
@property (readonly) float minSimulatedAperture;
@property (readonly) float minSupportedFrameRate;
@property (readonly) float minZoomFactorForDepthDataDelivery;
@property (readonly) BOOL needsPreviewDPCC;
@property (readonly, getter=isPhotoFormat) BOOL photoFormat;
@property (readonly) BOOL prefersSensorHDREnabled;
@property (readonly) CDStruct_79c71658 previewDimensions;
@property (readonly, getter=isQuadraHighResStillImageSupported) BOOL quadraHighResStillImageSupported;
@property (readonly) int rawBitDepth;
@property (readonly, getter=isRedEyeReductionSupported) BOOL redEyeReductionSupported;
@property (readonly, getter=isSecondaryScalerUnavailable) BOOL secondaryScalerUnavailable;
@property (readonly) CDStruct_79c71658 sensorDimensions;
@property (readonly, getter=isStagePreviewRenderingSupported) BOOL stagePreviewRenderingSupported;
@property (readonly, getter=isStereoFusionSupported) BOOL stereoFusionSupported;
@property (readonly, getter=isStillImageDepthSupported) BOOL stillImageDepthSupported;
@property (readonly, getter=isStillImageDisparitySupported) BOOL stillImageDisparitySupported;
@property (readonly, getter=isStillImageISPMultiBandNoiseReductionSupported) BOOL stillImageISPMultiBandNoiseReductionSupported;
@property (readonly, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;
@property (readonly, getter=isStreamingDepthSupported) BOOL streamingDepthSupported;
@property (readonly, getter=isStreamingDisparitySupported) BOOL streamingDisparitySupported;
@property (readonly, getter=isStudioAndContourPreviewRenderingSupported) BOOL studioAndContourPreviewRenderingSupported;
@property (readonly) NSArray *supportedColorSpaces;
@property (readonly) NSArray *supportedDepthDataFormats;
@property (readonly) unsigned int supportedRawPixelFormat;
@property (readonly, getter=isVisionDataDeliverySupported) BOOL visionDataDeliverySupported;
@property (readonly, getter=isWideAsStatsMasterEnabled) BOOL wideAsStatsMasterEnabled;
@property (readonly, getter=isWideColorSupported) BOOL wideColorSupported;
@property (readonly) BOOL zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
@property (readonly, getter=isZeroShutterLagSupported) BOOL zeroShutterLagSupported;
@property (readonly, getter=isZoomDynamicSensorCropSupported) BOOL zoomDynamicSensorCropSupported;
@property (readonly) float zoomFactorUpscaleThreshold;
@property (readonly, getter=isZoomSupported) BOOL zoomSupported;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (CDStruct_79c71658)_highQualitySensorDimensions;
- (CDStruct_79c71658)_maxUseableSensorDimensions;
- (CDStruct_79c71658)_outputDimensions;
- (void)_resolveProperties;
- (CDStruct_79c71658)_visibleSensorDimensionsIncludingCinematic:(BOOL)arg1;
- (float)aeMaxGain;
- (BOOL)capturesStillsFromVideoStream;
- (id)copyWithNewPixelFormat:(unsigned int)arg1;
- (CDStruct_79c71658)cropDimensionsForFES;
- (void)dealloc;
- (id)depthCompanionFormat;
- (int)fesBinningFactorHorizontal;
- (int)fesBinningFactorVertical;
- (CDStruct_79c71658)fesInputCropDimensions;
- (struct opaqueCMFormatDescription *)formatDescription;
- (id)frontEndScalerCompanionFormats;
- (int)horizontalSensorBinningFactor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isCompatibleWithInfraredFormat:(id)arg1;
- (BOOL)isMultiStreamFormat;
- (BOOL)isStabilizationModeSupported:(int)arg1;
- (BOOL)isStillImageISPChromaNoiseReductionEnabled;
- (BOOL)isValidDerivedBravoFormatForUnderlyingFormat:(id)arg1;
- (BOOL)ispChromaNoiseReductionEnabled;
- (int)maxIntegrationTimeOverride;
- (struct CGRect)maxVisibleSensorRect;
- (unsigned int)mediaType;
- (CDStruct_79c71658)nativeDimensions;
- (id)nonSIFRCompanionFormat;
- (int)previewImageQueueSyncStrategy;
- (id)rawLensShadingCorrection;
- (CDStruct_79c71658)sensorCropDimensions;
- (int)sensorHDRCompanionIndex;
- (CDStruct_79c71658)sourceCropAspectRatio;
- (struct CGSize)stabilizationOverscanPercentageFromSensorForFESCropDimensions:(CDStruct_79c71658)arg1;
- (float)stabilizationOverscanPercentageOverrideForCinematic;
- (int)stabilizationTypeOverrideForCinematic;
- (int)stabilizationTypeOverrideForStandard;
- (int)stillImageNoiseReductionAndStabilizationScheme;
- (BOOL)sushiRawBlackBorderingEnabled;
- (int)temporalNoiseReductionMode;
- (int)verticalSensorBinningFactor;

@end


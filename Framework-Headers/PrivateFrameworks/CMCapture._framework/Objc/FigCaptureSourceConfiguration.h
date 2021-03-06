//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CMCapture/FigXPCCoding-Protocol.h>
#import <CMCapture/NSCopying-Protocol.h>

@class FigCaptureSourceDepthDataFormat, FigCaptureSourceVideoFormat, NSDictionary, NSString;

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSString *_sourceID;
    struct OpaqueFigCaptureSource *_source;
    int _sourceType;
    NSDictionary *_sourceAttributes;
    FigCaptureSourceVideoFormat *_requiredFormat;
    float _requiredMaxFrameRate;
    float _requiredMinFrameRate;
    float _maxFrameRateClientOverride;
    float _maxGainClientOverride;
    BOOL _hasSetVideoZoomFactorOnCaptureSource;
    float _videoZoomFactor;
    float _videoZoomRampAcceleration;
    int _imageControlMode;
    BOOL _applyMaxExposureDurationFrameworkOverrideWhenAvailable;
    CDStruct_1b6d18a9 _maxExposureDurationClientOverride;
    NSDictionary *_faceDetectionConfiguration;
    BOOL _sensorHDREnabled;
    BOOL _highlightRecoveryEnabled;
    int _colorSpace;
    BOOL _depthDataDeliveryEnabled;
    FigCaptureSourceDepthDataFormat *_depthDataFormat;
    float _depthDataMaxFrameRate;
    BOOL _lowLightVideoCaptureEnabled;
    BOOL _spatialOverCaptureEnabled;
    BOOL _nonDestructiveCropEnabled;
    BOOL _geometricDistortionCorrectionEnabled;
    BOOL _variableFrameRateVideoCaptureEnabled;
}

@property (nonatomic) BOOL applyMaxExposureDurationFrameworkOverrideWhenAvailable; // @synthesize applyMaxExposureDurationFrameworkOverrideWhenAvailable=_applyMaxExposureDurationFrameworkOverrideWhenAvailable;
@property (nonatomic) int colorSpace; // @synthesize colorSpace=_colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL depthDataDeliveryEnabled; // @synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled;
@property (strong, nonatomic) FigCaptureSourceDepthDataFormat *depthDataFormat; // @synthesize depthDataFormat=_depthDataFormat;
@property (nonatomic) float depthDataMaxFrameRate; // @synthesize depthDataMaxFrameRate=_depthDataMaxFrameRate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *faceDetectionConfiguration; // @synthesize faceDetectionConfiguration=_faceDetectionConfiguration;
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled; // @synthesize geometricDistortionCorrectionEnabled=_geometricDistortionCorrectionEnabled;
@property (nonatomic) BOOL hasSetVideoZoomFactorOnCaptureSource; // @synthesize hasSetVideoZoomFactorOnCaptureSource=_hasSetVideoZoomFactorOnCaptureSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL highlightRecoveryEnabled; // @synthesize highlightRecoveryEnabled=_highlightRecoveryEnabled;
@property (nonatomic) int imageControlMode; // @synthesize imageControlMode=_imageControlMode;
@property (nonatomic) BOOL lowLightVideoCaptureEnabled; // @synthesize lowLightVideoCaptureEnabled=_lowLightVideoCaptureEnabled;
@property (nonatomic) CDStruct_1b6d18a9 maxExposureDurationClientOverride; // @synthesize maxExposureDurationClientOverride=_maxExposureDurationClientOverride;
@property (nonatomic) float maxFrameRateClientOverride; // @synthesize maxFrameRateClientOverride=_maxFrameRateClientOverride;
@property (nonatomic) float maxGainClientOverride; // @synthesize maxGainClientOverride=_maxGainClientOverride;
@property (nonatomic) BOOL nonDestructiveCropEnabled; // @synthesize nonDestructiveCropEnabled=_nonDestructiveCropEnabled;
@property (strong, nonatomic) FigCaptureSourceVideoFormat *requiredFormat; // @synthesize requiredFormat=_requiredFormat;
@property (nonatomic) float requiredMaxFrameRate; // @synthesize requiredMaxFrameRate=_requiredMaxFrameRate;
@property (nonatomic) float requiredMinFrameRate; // @synthesize requiredMinFrameRate=_requiredMinFrameRate;
@property (nonatomic) BOOL sensorHDREnabled; // @synthesize sensorHDREnabled=_sensorHDREnabled;
@property (readonly, nonatomic) struct OpaqueFigCaptureSource *source;
@property (readonly, nonatomic) int sourceDeviceType;
@property (copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property (readonly, nonatomic) int sourcePosition;
@property (readonly, nonatomic) int sourceType;
@property (nonatomic) BOOL spatialOverCaptureEnabled; // @synthesize spatialOverCaptureEnabled=_spatialOverCaptureEnabled;
@property (readonly) Class superclass;
@property (nonatomic) BOOL variableFrameRateVideoCaptureEnabled; // @synthesize variableFrameRateVideoCaptureEnabled=_variableFrameRateVideoCaptureEnabled;
@property (nonatomic) float videoZoomFactor; // @synthesize videoZoomFactor=_videoZoomFactor;
@property (nonatomic) float videoZoomRampAcceleration; // @synthesize videoZoomRampAcceleration=_videoZoomRampAcceleration;

+ (int)sourceTypeForString:(id)arg1;
+ (id)stringForSourceDeviceType:(int)arg1;
+ (id)stringForSourcePosition:(int)arg1;
+ (id)stringForSourceType:(int)arg1;
- (BOOL)_isCameraSource;
- (BOOL)_isMicSource;
- (id)_sourceAttributes;
- (int)_sourceToken;
- (id)_sourceUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithSource:(struct OpaqueFigCaptureSource *)arg1;
- (id)initWithSourceType:(int)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Celestial/FigXPCCoding-Protocol.h>
#import <Celestial/NSCopying-Protocol.h>

@class FigCaptureSourceFormat, NSDictionary, NSString;

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSString *_sourceID;
    struct OpaqueFigCaptureSource *_source;
    int _sourceType;
    NSDictionary *_sourceAttributes;
    FigCaptureSourceFormat *_requiredFormat;
    float _requiredMaxFrameRate;
    float _requiredMinFrameRate;
    BOOL _hasSetVideoZoomFactorOnCaptureSource;
    float _videoZoomFactor;
    float _videoZoomRampAcceleration;
    int _imageControlMode;
    BOOL _automaticallyEnablesLowLightBoostWhenAvailable;
    BOOL _applyMaxIntegrationTimeOverrideWhenAvailable;
    NSDictionary *_faceDetectionConfiguration;
    BOOL _sensorHDREnabled;
    int _colorSpace;
}

@property (nonatomic) BOOL applyMaxIntegrationTimeOverrideWhenAvailable; // @synthesize applyMaxIntegrationTimeOverrideWhenAvailable=_applyMaxIntegrationTimeOverrideWhenAvailable;
@property (nonatomic) BOOL automaticallyEnablesLowLightBoostWhenAvailable; // @synthesize automaticallyEnablesLowLightBoostWhenAvailable=_automaticallyEnablesLowLightBoostWhenAvailable;
@property (nonatomic) int colorSpace; // @synthesize colorSpace=_colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *faceDetectionConfiguration; // @synthesize faceDetectionConfiguration=_faceDetectionConfiguration;
@property (nonatomic) BOOL hasSetVideoZoomFactorOnCaptureSource; // @synthesize hasSetVideoZoomFactorOnCaptureSource=_hasSetVideoZoomFactorOnCaptureSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) int imageControlMode; // @synthesize imageControlMode=_imageControlMode;
@property (strong, nonatomic) FigCaptureSourceFormat *requiredFormat; // @synthesize requiredFormat=_requiredFormat;
@property (nonatomic) float requiredMaxFrameRate; // @synthesize requiredMaxFrameRate=_requiredMaxFrameRate;
@property (nonatomic) float requiredMinFrameRate; // @synthesize requiredMinFrameRate=_requiredMinFrameRate;
@property (nonatomic) BOOL sensorHDREnabled; // @synthesize sensorHDREnabled=_sensorHDREnabled;
@property (readonly, nonatomic) struct OpaqueFigCaptureSource *source;
@property (copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property (readonly, nonatomic) int sourcePosition;
@property (readonly, nonatomic) int sourceType;
@property (readonly) Class superclass;
@property (nonatomic) float videoZoomFactor; // @synthesize videoZoomFactor=_videoZoomFactor;
@property (nonatomic) float videoZoomRampAcceleration; // @synthesize videoZoomRampAcceleration=_videoZoomRampAcceleration;

+ (void)initialize;
+ (int)sourceTypeForString:(id)arg1;
+ (id)stringForSourceType:(int)arg1;
- (BOOL)_isCameraSource;
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


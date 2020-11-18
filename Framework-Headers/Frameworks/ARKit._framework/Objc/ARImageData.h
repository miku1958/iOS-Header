//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensorData-Protocol.h>
#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class ARFaceData, AVDepthData, NSDate, NSString;

@interface ARImageData : NSObject <ARSensorData, NSCopying, NSSecureCoding>
{
    BOOL _pixelBufferIsMirrored;
    BOOL _shouldRestrictFrameRate;
    float _exposureTargetOffset;
    float _temperature;
    float _tint;
    float _ISO;
    double _timestamp;
    NSDate *_captureDate;
    struct __CVBuffer *_pixelBuffer;
    double _exposureDuration;
    ARFaceData *_faceData;
    AVDepthData *_depthData;
    double _depthDataTimestamp;
    long long _cameraPosition;
    long long _captureFramesPerSecond;
    long long _renderFramesPerSecond;
    CDStruct_8e0628e6 _cameraIntrinsics;
}

@property (nonatomic) float ISO; // @synthesize ISO=_ISO;
@property (nonatomic) CDStruct_8e0628e6 cameraIntrinsics; // @synthesize cameraIntrinsics=_cameraIntrinsics;
@property (nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property (strong, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property (nonatomic) long long captureFramesPerSecond; // @synthesize captureFramesPerSecond=_captureFramesPerSecond;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) AVDepthData *depthData; // @synthesize depthData=_depthData;
@property (nonatomic) double depthDataTimestamp; // @synthesize depthDataTimestamp=_depthDataTimestamp;
@property (readonly, copy) NSString *description;
@property (nonatomic) double exposureDuration; // @synthesize exposureDuration=_exposureDuration;
@property (nonatomic) float exposureTargetOffset; // @synthesize exposureTargetOffset=_exposureTargetOffset;
@property (strong, nonatomic) ARFaceData *faceData; // @synthesize faceData=_faceData;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGSize imageResolution;
@property (nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property (nonatomic) BOOL pixelBufferIsMirrored; // @synthesize pixelBufferIsMirrored=_pixelBufferIsMirrored;
@property (nonatomic) long long renderFramesPerSecond; // @synthesize renderFramesPerSecond=_renderFramesPerSecond;
@property (nonatomic) BOOL shouldRestrictFrameRate; // @synthesize shouldRestrictFrameRate=_shouldRestrictFrameRate;
@property (readonly) Class superclass;
@property (nonatomic) float temperature; // @synthesize temperature=_temperature;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) float tint; // @synthesize tint=_tint;

+ (id)captureDateFromPresentationTimestamp:(CDStruct_1b6d18a9)arg1 session:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 captureFramePerSecond:(long long)arg2 renderFramePerSecond:(long long)arg3 captureDevice:(id)arg4 captureSession:(id)arg5;

@end


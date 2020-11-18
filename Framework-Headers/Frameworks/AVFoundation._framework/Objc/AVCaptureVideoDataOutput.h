//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureVideoDataOutputInternal, NSArray, NSDictionary, NSObject;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureVideoDataOutput : AVCaptureOutput
{
    AVCaptureVideoDataOutputInternal *_internal;
}

@property (nonatomic) BOOL alwaysDiscardsLateVideoFrames;
@property (readonly, nonatomic) NSArray *availableVideoCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property (nonatomic) CDStruct_1b6d18a9 minFrameDuration;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (readonly, nonatomic) id<AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate;
@property (copy, nonatomic) NSDictionary *videoSettings;

+ (void)initialize;
+ (id)supportedVideoSettingsKeys;
- (void)_setMinFrameDuration:(CDStruct_1b6d18a9)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (BOOL)hasRequiredOutputFormatForConnection:(id)arg1;
- (id)init;
- (int)outputFormat;
- (id)outputScalingModeForSourceFormat:(id)arg1;
- (struct CGSize)outputSizeForSourceFormat:(id)arg1;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (void)removeConnection:(id)arg1;
- (unsigned int)requiredOutputFormatForConnection:(id)arg1;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (id)supportedAssetWriterOutputFileTypes;
- (BOOL)usesPreviewSizedBuffers;
- (id)vettedVideoSettingsForSettingsDictionary:(id)arg1;

@end


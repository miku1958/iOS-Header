//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCapture/AVCaptureOutput.h>

@class AVCaptureStillImageOutputInternal, NSArray, NSDictionary;

@interface AVCaptureStillImageOutput : AVCaptureOutput
{
    AVCaptureStillImageOutputInternal *_internal;
}

@property (nonatomic) BOOL automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (readonly, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableImageDataCodecTypes;
@property (readonly, getter=isCapturingStillImage) BOOL capturingStillImage;
@property (nonatomic, getter=isHighResolutionStillImageOutputEnabled) BOOL highResolutionStillImageOutputEnabled;
@property (copy, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic, getter=isStillImageStabilizationActive) BOOL stillImageStabilizationActive;
@property (readonly, nonatomic, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;

+ (struct __CFDictionary *)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (void)initialize;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer *)arg1;
+ (id)jpegStillImageNSDataRepresentationForSurface:(struct __IOSurface *)arg1 size:(unsigned long long)arg2 metadata:(id)arg3;
+ (unsigned long long)maxStillImageJPEGDataSize;
+ (id)new;
- (BOOL)_bracketedSettingsAreValid:(id)arg1 fromConnection:(id)arg2 exceptionReason:(id *)arg3;
- (id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)arg1 fromConnection:(id)arg2;
- (id)_figCaptureStillImageSettingsForConnection:(id)arg1;
- (BOOL)_preparedForBracketedCaptureWithSettings:(id)arg1;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1;
- (void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)arg1;
- (void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (BOOL)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearPreparedBracketIfNeeded;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)firstActiveConnection;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)handleNotificationForPrepareRequest:(id)arg1 withPayload:(id)arg2;
- (void)handleNotificationForRequest:(id)arg1 withPayload:(id)arg2 imageIsEV0:(BOOL *)arg3;
- (BOOL)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
- (unsigned int)imageDataFormatType;
- (id)init;
- (BOOL)isLensStabilizationDuringBracketedCaptureEnabled;
- (BOOL)isLensStabilizationDuringBracketedCaptureSupported;
- (BOOL)isNoiseReductionEnabled;
- (unsigned long long)maxBracketedCaptureStillImageCount;
- (struct CGSize)outputSizeForSourceFormat:(id)arg1;
- (void)prepareToCaptureStillImageBracketFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct CGSize)previewImageSize;
- (void)removeConnection:(id)arg1;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)setLensStabilizationDuringBracketedCaptureEnabled:(BOOL)arg1;
- (void)setNoiseReductionEnabled:(BOOL)arg1;
- (void)setPreviewImageSize:(struct CGSize)arg1;
- (void)setShutterSound:(unsigned int)arg1;
- (void)setSquareCropEnabled:(BOOL)arg1;
- (unsigned int)shutterSound;
- (BOOL)squareCropEnabled;
- (void)updateSISSupportedForSourceDevice:(id)arg1;

@end


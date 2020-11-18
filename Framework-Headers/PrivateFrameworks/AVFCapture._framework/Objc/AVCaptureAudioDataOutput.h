//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCapture/AVCaptureOutput.h>

#import <AVFCapture/AVCaptureDataOutputDelegateOverride-Protocol.h>

@class AVCaptureAudioDataOutputInternal, NSDictionary, NSObject, NSString;
@protocol AVCaptureAudioDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureAudioDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride>
{
    AVCaptureAudioDataOutputInternal *_internal;
}

@property (copy, nonatomic) NSDictionary *audioSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (readonly, nonatomic) id<AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)new;
- (void)_handleConfigurationLiveEventForID:(long long)arg1 updatedFormatDescription:(struct opaqueCMFormatDescription *)arg2;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleSampleBufferEventForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_updateLocalQueue:(struct localQueueOpaque *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (BOOL)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)init;
- (id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (id)supportedAssetWriterOutputFileTypes;

@end

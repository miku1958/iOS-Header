//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCapture/AVCaptureOutput.h>

#import <AVFCapture/AVCaptureDataOutputDelegateOverride-Protocol.h>

@class AVCaptureDepthDataOutputInternal, NSObject, NSString;
@protocol AVCaptureDepthDataOutputDelegate, OS_dispatch_queue;

@interface AVCaptureDepthDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride>
{
    AVCaptureDepthDataOutputInternal *_internal;
}

@property (nonatomic) BOOL alwaysDiscardsLateDepthData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AVCaptureDepthDataOutputDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFilteringEnabled) BOOL filteringEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)new;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_updateLocalQueue:(struct localQueueOpaque *)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (BOOL)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeConnection:(id)arg1;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;

@end

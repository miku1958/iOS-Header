//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCapture/AVCaptureOutput.h>

#import <AVFCapture/AVCaptureDataOutputDelegateOverride-Protocol.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSObject, NSString;
@protocol AVCaptureCameraCalibrationDataOutputDelegate, OS_dispatch_queue;

@interface AVCaptureCameraCalibrationDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride>
{
    AVCaptureDataOutputDelegateCallbackHelper *_delegateCallbackHelper;
    AVWeakReference *_weakReference;
    BOOL _alwaysDiscardsLateCameraCalibrationData;
}

@property (nonatomic) BOOL alwaysDiscardsLateCameraCalibrationData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AVCaptureCameraCalibrationDataOutputDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)new;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_updateLocalQueue:(struct localQueueOpaque *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (BOOL)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)init;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;

@end


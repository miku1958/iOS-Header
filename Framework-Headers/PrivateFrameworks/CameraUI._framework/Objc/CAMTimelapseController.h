//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMNebulaDaemonTimelapseClientProtocol-Protocol.h>
#import <CameraUI/CAMStillImageCaptureRequestDelegate-Protocol.h>
#import <CameraUI/UIAlertViewDelegate-Protocol.h>

@class CAMFocusResult, CAMLocationController, CAMLowDiskSpaceAlertView, CAMMotionController, CAMNebulaDaemonProxyManager, CAMPersistenceController, CAMTimelapseState, CUCaptureController, NSCountedSet, NSDate, NSMutableSet, NSString;
@protocol CAMTimelapseControllerDelegate, OS_dispatch_source;

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, UIAlertViewDelegate, CAMNebulaDaemonTimelapseClientProtocol>
{
    BOOL __ignoringTimerCallbacksForTearDown;
    BOOL __ignoringTimerCallbacksWaitingForCaptureResponse;
    BOOL __shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
    BOOL __backendRecoveryNeeded;
    BOOL __previewStarted;
    BOOL __focusAndExposureAdjusted;
    id<CAMTimelapseControllerDelegate> _delegate;
    CAMFocusResult *_lastFocusResult;
    CAMTimelapseState *__state;
    NSObject<OS_dispatch_source> *__captureTimer;
    NSCountedSet *__inFlightTimelapseUUIDs;
    NSMutableSet *__pendingCompletedStates;
    CAMLowDiskSpaceAlertView *__diskSpaceAlert;
    CUCaptureController *__captureController;
    CAMLocationController *__locationController;
    CAMMotionController *__motionController;
    CAMPersistenceController *__persistenceController;
    CAMNebulaDaemonProxyManager *__nebulaDaemonProxyManager;
}

@property (nonatomic, setter=_setBackendRecoveryNeeded:) BOOL _backendRecoveryNeeded; // @synthesize _backendRecoveryNeeded=__backendRecoveryNeeded;
@property (readonly, nonatomic) CUCaptureController *_captureController; // @synthesize _captureController=__captureController;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *_captureTimer; // @synthesize _captureTimer=__captureTimer;
@property (readonly, nonatomic) CAMLowDiskSpaceAlertView *_diskSpaceAlert; // @synthesize _diskSpaceAlert=__diskSpaceAlert;
@property (nonatomic, getter=_isFocusAndExposureAdjusted, setter=_setFocusAndExposureAdjusted:) BOOL _focusAndExposureAdjusted; // @synthesize _focusAndExposureAdjusted=__focusAndExposureAdjusted;
@property (readonly, nonatomic) BOOL _ignoringTimerCallbacksForTearDown; // @synthesize _ignoringTimerCallbacksForTearDown=__ignoringTimerCallbacksForTearDown;
@property (readonly, nonatomic) BOOL _ignoringTimerCallbacksWaitingForCaptureResponse; // @synthesize _ignoringTimerCallbacksWaitingForCaptureResponse=__ignoringTimerCallbacksWaitingForCaptureResponse;
@property (readonly, nonatomic) NSCountedSet *_inFlightTimelapseUUIDs; // @synthesize _inFlightTimelapseUUIDs=__inFlightTimelapseUUIDs;
@property (readonly, nonatomic) CAMLocationController *_locationController; // @synthesize _locationController=__locationController;
@property (readonly, nonatomic) CAMMotionController *_motionController; // @synthesize _motionController=__motionController;
@property (readonly, nonatomic) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager; // @synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager;
@property (readonly, nonatomic) NSMutableSet *_pendingCompletedStates; // @synthesize _pendingCompletedStates=__pendingCompletedStates;
@property (readonly, nonatomic) CAMPersistenceController *_persistenceController; // @synthesize _persistenceController=__persistenceController;
@property (nonatomic, setter=_setPreviewStarted:) BOOL _previewStarted; // @synthesize _previewStarted=__previewStarted;
@property (nonatomic, setter=_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:) BOOL _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes; // @synthesize _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes=__shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
@property (readonly, nonatomic) CAMTimelapseState *_state; // @synthesize _state=__state;
@property (readonly, nonatomic) NSDate *captureStartTime;
@property (readonly, nonatomic, getter=isCapturing) BOOL capturing;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CAMTimelapseControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CAMFocusResult *lastFocusResult; // @synthesize lastFocusResult=_lastFocusResult;
@property (readonly) Class superclass;

+ (id)createPlaceholderResultForTimelapseState:(id)arg1;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (BOOL)_canCapturePhoto;
- (void)_captureTimerFired;
- (id)_createThumbnailImageFromPlaceholderResult:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (void)_dismissDiskSpaceAlert;
- (BOOL)_enqueueCaptureRequest;
- (void)_notifyAGGDForDidStopCapturingWithState:(id)arg1;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2;
- (void)_prepareForTimelapseCaptureSetModeAndDevice:(BOOL)arg1;
- (void)_previewStarted:(id)arg1;
- (void)_reserveDiskSpaceForTimelapseUUID:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (void)_restoreCaptureStateFromDisk;
- (void)_saveStateToDisk:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_setNewCaptureStateForCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
- (void)_startCaptureTimer;
- (void)_startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
- (id)_stillImageCaptureRequestWithCurrentSettings;
- (void)_stopCapturingWithReasons:(long long)arg1;
- (void)_teardownCaptureTimer;
- (void)_triggerBackendCrashRecoveryIfNeeded;
- (void)_updateFocusAndExposureForStartCapturing;
- (void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(BOOL)arg3;
- (void)_updateLocationIfNecessary;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dealloc;
- (void)forceStopTimelapseCaptureWithReasons:(long long)arg1;
- (id)init;
- (id)initWithCaptureController:(id)arg1 locationController:(id)arg2 motionController:(id)arg3 persistenceController:(id)arg4 nebulaDaemonProxyManager:(id)arg5;
- (void)restoreConfiguration;
- (BOOL)startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
- (void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (BOOL)stopCapturingWithReasons:(long long)arg1;

@end


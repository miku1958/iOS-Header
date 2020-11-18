//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMCaptureRequestIntervalometerDelegate-Protocol.h>
#import <CameraUI/CAMCaptureService-Protocol.h>

@class AVCaptureVideoPreviewLayer, CAMBurstController, CAMCaptureEngine, CAMCaptureRequest, CAMCaptureRequestIntervalometer, CAMKeyValueCoalescer, CAMLocationController, CAMMotionController, CAMPanoramaCaptureRequest, CAMPanoramaPreviewView, CAMPowerController, CAMProtectionController, CAMRemoteShutterController, CAMThumbnailGenerator, CAMVideoCaptureRequest, NSCountedSet, NSMutableSet, NSString;
@protocol CAMAvailabilityDelegate, CAMBurstDelegate, CAMCaptureInterruptionDelegate, CAMCaptureRecoveryDelegate, CAMCaptureRunningDelegate, CAMConfigurationDelegate, CAMExposureDelegate, CAMFacesDelegate, CAMFocusDelegate, CAMPanoramaConfigurationDelegate, CAMStillImageCapturingVideoDelegate, CAMSuggestionDelegate, CAMZoomDelegate, OS_dispatch_queue;

@interface CUCaptureController : NSObject <CAMCaptureService, CAMCaptureRequestIntervalometerDelegate>
{
    CAMPanoramaPreviewView *_panoramaPreviewView;
    BOOL _previewDisabled;
    BOOL _capturingTimelapse;
    BOOL _flashActive;
    BOOL _torchActive;
    BOOL _HDRSuggested;
    BOOL _captureAvailable;
    BOOL _configurationAvailable;
    BOOL _flashAvailable;
    BOOL _torchAvailable;
    BOOL __capturingPairedVideoPaused;
    BOOL __needsInitialPairedVideoUpdate;
    BOOL _failedConfigurationPreventingCapture;
    BOOL __isVideoCaptureAvailable;
    BOOL __shouldResetFocusAndExposureAfterIrisVideoCapture;
    id<CAMStillImageCapturingVideoDelegate> _stillImageCapturingVideoDelegate;
    id<CAMPanoramaConfigurationDelegate> _panoramaConfigurationDelegate;
    id<CAMBurstDelegate> _burstDelegate;
    id<CAMConfigurationDelegate> _configurationDelegate;
    id<CAMSuggestionDelegate> _suggestionDelegate;
    id<CAMAvailabilityDelegate> _availabilityDelegate;
    id<CAMFocusDelegate> _focusDelegate;
    id<CAMExposureDelegate> _exposureDelegate;
    id<CAMFacesDelegate> _facesDelgate;
    id<CAMZoomDelegate> _zoomDelegate;
    id<CAMCaptureRecoveryDelegate> _recoveryDelegate;
    id<CAMCaptureRunningDelegate> _runningDelegate;
    id<CAMCaptureInterruptionDelegate> _interruptionDelegate;
    CAMCaptureEngine *__captureEngine;
    NSObject<OS_dispatch_queue> *__responseQueue;
    CAMThumbnailGenerator *__responseThumbnailGenerator;
    CAMVideoCaptureRequest *__capturingVideoRequest;
    CAMVideoCaptureRequest *__pendingVideoCaptureRequest;
    CAMPanoramaCaptureRequest *__capturingPanoramaRequest;
    CAMCaptureRequestIntervalometer *_currentBurstIntervalometer;
    CAMCaptureRequest *__pendingBurstCaptureRequest;
    CAMKeyValueCoalescer *__focusCoalescer;
    CAMKeyValueCoalescer *__exposureCoalescer;
    NSCountedSet *__numberOfInflightRequestsByType;
    long long __maximumNumberOfStillImageRequests;
    NSMutableSet *__identifiersForRecordingVideoForStillImageRequests;
    CAMLocationController *__locationController;
    CAMMotionController *__motionController;
    CAMBurstController *__burstController;
    CAMProtectionController *__protectionController;
    CAMPowerController *__powerController;
    CAMRemoteShutterController *__remoteShutterController;
}

@property (nonatomic, getter=isHDRSuggested) BOOL HDRSuggested; // @synthesize HDRSuggested=_HDRSuggested;
@property (readonly, nonatomic) CAMBurstController *_burstController; // @synthesize _burstController=__burstController;
@property (readonly, nonatomic) CAMCaptureEngine *_captureEngine; // @synthesize _captureEngine=__captureEngine;
@property (nonatomic, getter=_isCapturingPairedVideoPaused, setter=_setCapturingPairedVideoPaused:) BOOL _capturingPairedVideoPaused; // @synthesize _capturingPairedVideoPaused=__capturingPairedVideoPaused;
@property (strong, nonatomic, setter=_setCapturingPanoramaRequest:) CAMPanoramaCaptureRequest *_capturingPanoramaRequest; // @synthesize _capturingPanoramaRequest=__capturingPanoramaRequest;
@property (strong, nonatomic, setter=_setCapturingVideoRequest:) CAMVideoCaptureRequest *_capturingVideoRequest; // @synthesize _capturingVideoRequest=__capturingVideoRequest;
@property (readonly, nonatomic) CAMKeyValueCoalescer *_exposureCoalescer; // @synthesize _exposureCoalescer=__exposureCoalescer;
@property (readonly, nonatomic) CAMKeyValueCoalescer *_focusCoalescer; // @synthesize _focusCoalescer=__focusCoalescer;
@property (readonly, nonatomic) NSMutableSet *_identifiersForRecordingVideoForStillImageRequests; // @synthesize _identifiersForRecordingVideoForStillImageRequests=__identifiersForRecordingVideoForStillImageRequests;
@property (nonatomic, getter=_isVideoCaptureAvailable, setter=_setVideoCaptureAvailable:) BOOL _isVideoCaptureAvailable; // @synthesize _isVideoCaptureAvailable=__isVideoCaptureAvailable;
@property (readonly, nonatomic) CAMLocationController *_locationController; // @synthesize _locationController=__locationController;
@property (nonatomic, setter=_setMaximumNumberOfStillImageRequests:) long long _maximumNumberOfStillImageRequests; // @synthesize _maximumNumberOfStillImageRequests=__maximumNumberOfStillImageRequests;
@property (readonly, nonatomic) CAMMotionController *_motionController; // @synthesize _motionController=__motionController;
@property (nonatomic, setter=_setNeedsInitialPairedVideoUpdate:) BOOL _needsInitialPairedVideoUpdate; // @synthesize _needsInitialPairedVideoUpdate=__needsInitialPairedVideoUpdate;
@property (readonly, nonatomic) NSCountedSet *_numberOfInflightRequestsByType; // @synthesize _numberOfInflightRequestsByType=__numberOfInflightRequestsByType;
@property (strong, nonatomic, setter=_setPendingBurstCaptureRequest:) CAMCaptureRequest *_pendingBurstCaptureRequest; // @synthesize _pendingBurstCaptureRequest=__pendingBurstCaptureRequest;
@property (strong, nonatomic, setter=_setPendingVideoCaptureRequest:) CAMVideoCaptureRequest *_pendingVideoCaptureRequest; // @synthesize _pendingVideoCaptureRequest=__pendingVideoCaptureRequest;
@property (readonly, nonatomic) CAMPowerController *_powerController; // @synthesize _powerController=__powerController;
@property (readonly, nonatomic) CAMProtectionController *_protectionController; // @synthesize _protectionController=__protectionController;
@property (readonly, nonatomic) CAMRemoteShutterController *_remoteShutterController; // @synthesize _remoteShutterController=__remoteShutterController;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_responseQueue; // @synthesize _responseQueue=__responseQueue;
@property (readonly, nonatomic) CAMThumbnailGenerator *_responseThumbnailGenerator; // @synthesize _responseThumbnailGenerator=__responseThumbnailGenerator;
@property (nonatomic, setter=_setShouldResetFocusAndExposureAfterIrisVideoCapture:) BOOL _shouldResetFocusAndExposureAfterIrisVideoCapture; // @synthesize _shouldResetFocusAndExposureAfterIrisVideoCapture=__shouldResetFocusAndExposureAfterIrisVideoCapture;
@property (weak, nonatomic) id<CAMAvailabilityDelegate> availabilityDelegate; // @synthesize availabilityDelegate=_availabilityDelegate;
@property (weak, nonatomic) id<CAMBurstDelegate> burstDelegate; // @synthesize burstDelegate=_burstDelegate;
@property (nonatomic, getter=isCaptureAvailable) BOOL captureAvailable; // @synthesize captureAvailable=_captureAvailable;
@property (readonly, nonatomic, getter=isCapturingBurst) BOOL capturingBurst;
@property (readonly, nonatomic, getter=isCapturingPanorama) BOOL capturingPanorama;
@property (readonly, nonatomic, getter=isCapturingStillImagePairedVideo) BOOL capturingStillImagePairedVideo;
@property (nonatomic, getter=isCapturingTimelapse) BOOL capturingTimelapse; // @synthesize capturingTimelapse=_capturingTimelapse;
@property (readonly, nonatomic, getter=isCapturingVideo) BOOL capturingVideo;
@property (nonatomic, getter=isConfigurationAvailable) BOOL configurationAvailable; // @synthesize configurationAvailable=_configurationAvailable;
@property (weak, nonatomic) id<CAMConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
@property (readonly, nonatomic) unsigned long long currentBurstCount;
@property (strong, nonatomic, setter=_setCurrentBurstIntervalometer:) CAMCaptureRequestIntervalometer *currentBurstIntervalometer; // @synthesize currentBurstIntervalometer=_currentBurstIntervalometer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<CAMExposureDelegate> exposureDelegate; // @synthesize exposureDelegate=_exposureDelegate;
@property (weak, nonatomic) id<CAMFacesDelegate> facesDelgate; // @synthesize facesDelgate=_facesDelgate;
@property (nonatomic, getter=_isFailedConfigurationPreventingCapture, setter=_setFailedConfigurationPreventingCapture:) BOOL failedConfigurationPreventingCapture; // @synthesize failedConfigurationPreventingCapture=_failedConfigurationPreventingCapture;
@property (nonatomic, getter=isFlashActive) BOOL flashActive; // @synthesize flashActive=_flashActive;
@property (nonatomic, getter=isFlashAvailable) BOOL flashAvailable; // @synthesize flashAvailable=_flashAvailable;
@property (weak, nonatomic) id<CAMFocusDelegate> focusDelegate; // @synthesize focusDelegate=_focusDelegate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isInterrupted) BOOL interrupted;
@property (weak, nonatomic) id<CAMCaptureInterruptionDelegate> interruptionDelegate; // @synthesize interruptionDelegate=_interruptionDelegate;
@property (weak, nonatomic) id<CAMPanoramaConfigurationDelegate> panoramaConfigurationDelegate; // @synthesize panoramaConfigurationDelegate=_panoramaConfigurationDelegate;
@property (readonly, nonatomic) CAMPanoramaPreviewView *panoramaPreviewView;
@property (readonly, nonatomic, getter=isPreviewDisabled) BOOL previewDisabled; // @synthesize previewDisabled=_previewDisabled;
@property (weak, nonatomic) id<CAMCaptureRecoveryDelegate> recoveryDelegate; // @synthesize recoveryDelegate=_recoveryDelegate;
@property (weak, nonatomic) id<CAMCaptureRunningDelegate> runningDelegate; // @synthesize runningDelegate=_runningDelegate;
@property (readonly, nonatomic) BOOL shouldAllowUserToChangeFocusAndExposure;
@property (weak, nonatomic) id<CAMStillImageCapturingVideoDelegate> stillImageCapturingVideoDelegate; // @synthesize stillImageCapturingVideoDelegate=_stillImageCapturingVideoDelegate;
@property (weak, nonatomic) id<CAMSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate=_suggestionDelegate;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTorchActive) BOOL torchActive; // @synthesize torchActive=_torchActive;
@property (nonatomic, getter=isTorchAvailable) BOOL torchAvailable; // @synthesize torchAvailable=_torchAvailable;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (weak, nonatomic) id<CAMZoomDelegate> zoomDelegate; // @synthesize zoomDelegate=_zoomDelegate;

+ (float)focusLensPositionCurrentSentinel;
- (void).cxx_destruct;
- (id)_availabilityKeyPaths;
- (void)_availabilityResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_beginTrackingVideoRecordingForStillImageRequest:(id)arg1;
- (void)_cancelDelayedFocusAndExposureReset;
- (BOOL)_captureStillImageWithRequest:(id)arg1;
- (id)_commandForChangeToMode:(struct CAMCaptureModeWithOptions)arg1 device:(long long)arg2;
- (id)_commandForConfiguration:(id)arg1;
- (void)_didPlayBeginVideoRecordingSound;
- (void)_endTrackingVideoRecordingForStillImageRequest:(id)arg1;
- (id)_exposureKVOKeyPaths;
- (void)_exposureResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (id)_faceDetectionCommandForMode:(long long)arg1 capturing:(BOOL)arg2;
- (id)_focusKVOKeyPaths;
- (void)_focusResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleCaptureEngineExecutionNotification:(id)arg1;
- (id)_identifierForPendingVideoForStillImageRequest:(id)arg1;
- (BOOL)_kvoDidEndForChange:(id)arg1;
- (BOOL)_kvoDidStartForChange:(id)arg1;
- (void)_notifyDelegateOfCaptureAvailabilityChanged:(BOOL)arg1;
- (void)_notifyDelegateOfConfigurationAvailabilityChanged:(BOOL)arg1;
- (void)_playBongIfNecessary;
- (void)_processCapturedBurstRequest:(id)arg1 withResult:(id)arg2;
- (void)_processPendingVideoCaptureRequest:(id)arg1;
- (id)_resetFocus:(BOOL)arg1 resetExposure:(BOOL)arg2 resetExposureTargetBias:(BOOL)arg3;
- (void)_resetFocusAndExposureAfterCapture;
- (void)_resetFocusAndExposureIfAppropriateForReason:(long long)arg1;
- (void)_resetMaximumNumberOfStillImageRequests;
- (id)_sanitizeLegacyStillImageRequest:(id)arg1;
- (id)_sanitizePanoramaRequest:(id)arg1;
- (id)_sanitizeStillImageRequest:(id)arg1;
- (id)_sanitizeVideoRequest:(id)arg1;
- (void)_scheduleFocusAndExposureResetAfterCaptureIfNecessary;
- (void)_setCaptureAvailable:(BOOL)arg1;
- (void)_setConfigurationAvailable:(BOOL)arg1;
- (void)_setFlashActive:(BOOL)arg1;
- (void)_setFlashAvailable:(BOOL)arg1;
- (void)_setHDRSuggested:(BOOL)arg1;
- (void)_setTorchActive:(BOOL)arg1;
- (void)_setTorchAvailable:(BOOL)arg1;
- (void)_setupAvailabilityMonitoring;
- (void)_setupExposureMonitoring;
- (void)_setupFocusAndExposureMonitoring;
- (void)_setupFocusMonitoring;
- (void)_setupSuggestionMonitoring;
- (void)_setupZoomMonitoring;
- (void)_subjectAreaDidChange:(id)arg1;
- (id)_suggestionKeyPaths;
- (void)_suggestionResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_teardownAvailabilityMonitoring;
- (void)_teardownFocusAndExposureMonitoring;
- (void)_teardownSuggestionMonitoring;
- (void)_teardownZoomMonitoring;
- (id)_thumbnailImageFromStillImageCaptureResult:(id)arg1 imageOrientation:(long long)arg2;
- (void)_updateAvailabilityAfterCapturedRequest:(id)arg1;
- (void)_updateAvailabilityAfterEnqueuedRequest:(id)arg1;
- (void)_updateAvailabilityAfterStopCapturingForRequest:(id)arg1;
- (void)_updateAvailabilityForRequestType:(long long)arg1;
- (void)_updateAvailabilityWhenPreparingToStopCapturingForRequest:(id)arg1;
- (id)_updateFocusAndExposureForStartBurstCapture;
- (id)_updateFocusAndExposureForStartPanorama;
- (void)_updateMaximumNumberOfStillImageRequestsAfterRequestWithFlashMode:(long long)arg1 HDRMode:(long long)arg2;
- (BOOL)_useSmoothFocus;
- (id)_zoomKeyPaths;
- (void)_zoomResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)applyCaptureConfiguration:(id)arg1;
- (void)attemptToEndInterruptions;
- (void)cancelDelayedFocusAndExposureReset;
- (BOOL)captureLegacyStillImageWithRequest:(id)arg1 error:(id *)arg2;
- (BOOL)captureStillImageWithRequest:(id)arg1 error:(id *)arg2;
- (void)changeExposureTargetBias:(float)arg1;
- (void)changeToDevice:(long long)arg1;
- (void)changeToEffectsPreviewVideoDataOutputEnabled:(BOOL)arg1;
- (void)changeToFlashMode:(long long)arg1;
- (void)changeToLockedExposure;
- (void)changeToMode:(struct CAMCaptureModeWithOptions)arg1;
- (void)changeToMode:(struct CAMCaptureModeWithOptions)arg1 device:(long long)arg2;
- (void)changeToPanoramaDirection:(long long)arg1;
- (void)changeToPreviewDisabled;
- (void)changeToPreviewEnabledWithConfiguration:(long long)arg1;
- (void)changeToPreviewLayerEnabled:(BOOL)arg1;
- (void)changeToTorchLevel:(float)arg1;
- (void)changeToTorchMode:(long long)arg1;
- (void)changeToVideoRecordingCaptureOrientation:(long long)arg1;
- (void)changeToVideoZoomFactor:(double)arg1;
- (void)dealloc;
- (void)focusAndExposeAtPoint:(struct CGPoint)arg1 resetExposureTargetBias:(BOOL)arg2;
- (void)focusAtCenterForVideoRecording;
- (void)forceDisableSubjectAreaChangeMonitoring;
- (void)handleSessionDidStartRunning;
- (void)handleSessionDidStopRunning;
- (void)handleSessionInterruptionEnded;
- (void)handleSessionInterruptionForReason:(long long)arg1;
- (id)init;
- (id)initWithCaptureConfiguration:(id)arg1 locationController:(id)arg2 motionController:(id)arg3 burstController:(id)arg4 protectionController:(id)arg5 powerController:(id)arg6 remoteShutterController:(id)arg7;
- (BOOL)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2;
- (void)intervalometerDidReachMaximumCount:(id)arg1;
- (void)legacyStillImageRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)legacyStillImageRequestDidStartCapturing:(id)arg1;
- (void)legacyStillImageRequestDidStopCapturing:(id)arg1;
- (void)lockFocusAtLensPosition:(float)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)metadataWasRecognized:(id)arg1;
- (void)notifyTimelapseControllerFinishedUpdatingWithLocation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)panoramaConfigurationDidChangeWithDirection:(long long)arg1;
- (void)panoramaRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)panoramaRequest:(id)arg1 didReceiveNotification:(long long)arg2;
- (void)panoramaRequestDidStartCapturing:(id)arg1;
- (void)panoramaRequestDidStopCapturing:(id)arg1;
- (void)pauseCapturingStillImagePairedVideo;
- (void)queryTimelapseDimensionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)queryVideoDimensionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)registerCaptureService:(id)arg1;
- (void)registerEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)resumeCapturingStillImagePairedVideo;
- (void)startCaptureSession;
- (BOOL)startCapturingBurstWithRequest:(id)arg1 error:(id *)arg2;
- (BOOL)startCapturingPanoramaWithRequest:(id)arg1 error:(id *)arg2;
- (BOOL)startCapturingVideoWithRequest:(id)arg1 error:(id *)arg2;
- (void)startMonitoringForHDRSuggestions;
- (void)startRampToVideoZoomFactor:(double)arg1 withRate:(float)arg2;
- (void)stillImageRequest:(id)arg1 didCompleteStillImageCaptureWithResult:(id)arg2;
- (void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2;
- (void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
- (void)stillImageRequestDidStartCapturing:(id)arg1;
- (void)stillImageRequestDidStopCapturing:(id)arg1;
- (void)stillImageRequestWillStartCapturingVideo:(id)arg1;
- (void)stopCaptureSession;
- (void)stopCapturingBurst;
- (void)stopCapturingPanorama;
- (void)stopCapturingVideo;
- (void)stopMonitoringForHDRSuggestions;
- (void)stopRampToVideoZoomFactor;
- (void)unregisterCaptureService:(id)arg1;
- (void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)updateImageQueueForPanoramaPreviewView:(id)arg1;
- (void)videoRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)videoRequestDidStartCapturing:(id)arg1;
- (void)videoRequestDidStopCapturing:(id)arg1;
- (void)willPerformRecoveryFromRuntimeError:(id)arg1;

@end


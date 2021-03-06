//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMPanoramaCaptureRequestDelegate-Protocol.h>
#import <CameraUI/CAMStillImageCaptureRequestDelegate-Protocol.h>
#import <CameraUI/CAMStillImageCapturingVideoDelegate-Protocol.h>
#import <CameraUI/CAMVideoCaptureRequestDelegate-Protocol.h>

@class NSString, NSTimer;

@interface CAMIdleController : NSObject <CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate, CAMPanoramaCaptureRequestDelegate, CAMStillImageCapturingVideoDelegate>
{
    BOOL _updatingIdleTimer;
    NSTimer *_enableIdleTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic, getter=_enableIdleTimer, setter=_setEnableIdleTimer:) NSTimer *enableIdleTimer; // @synthesize enableIdleTimer=_enableIdleTimer;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_isIdleTimerIndefinitelyDisabled) BOOL idleTimerIndefinitelyDisabled;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUpdatingIdleTimer, setter=_setUpdatingIdleTimer:) BOOL updatingIdleTimer; // @synthesize updatingIdleTimer=_updatingIdleTimer;

- (void).cxx_destruct;
- (void)_delayIdleTimerByTimeInterval:(double)arg1;
- (void)_delayIdleTimerByTimeIntervalUnlessIndefinitelyDisabled:(double)arg1;
- (void)_immediatelyEnableApplicationIdleTimer;
- (void)_indefinitelyDisableApplicationIdleTimer;
- (void)_teardownEnableIdleTimer;
- (void)dealloc;
- (id)init;
- (void)panoramaRequestDidStartCapturing:(id)arg1;
- (void)panoramaRequestDidStopCapturing:(id)arg1 interrupted:(BOOL)arg2;
- (void)startUpdatingIdleTimer;
- (void)stillImageRequestDidStopCapturingStillImage:(id)arg1;
- (void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)arg1;
- (void)stillImageRequestsDidStopCapturingCTMVideo;
- (void)stopUpdatingIdleTimer;
- (void)timelapseRequestDidResumeCapturing;
- (void)timelapseRequestDidStartCapturing;
- (void)timelapseRequestDidStopCapturing;
- (void)videoRequestDidStartCapturing:(id)arg1;
- (void)videoRequestDidStopCapturing:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDVideoStreamLastDecodedFrameDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDCameraStreamSessionID, HMDVideoStreamInterface, HMFTimer, NSObject, NSString;
@protocol HMDCameraStreamSnapshotCaptureDelegate, OS_dispatch_queue;

@interface HMDCameraStreamSnapshotCapture : HMFObject <HMDVideoStreamLastDecodedFrameDelegate, HMFTimerDelegate, HMFLogging>
{
    BOOL _capturingLastFrame;
    BOOL _capturingCurrentFrame;
    HMDVideoStreamInterface *_videoStreamInterface;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMDCameraStreamSnapshotCaptureDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDCameraStreamSessionID *_streamSessionID;
    HMFTimer *_lastDecodedFrameTimer;
}

@property (nonatomic) BOOL capturingCurrentFrame; // @synthesize capturingCurrentFrame=_capturingCurrentFrame;
@property (nonatomic) BOOL capturingLastFrame; // @synthesize capturingLastFrame=_capturingLastFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HMDCameraStreamSnapshotCaptureDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMFTimer *lastDecodedFrameTimer; // @synthesize lastDecodedFrameTimer=_lastDecodedFrameTimer;
@property (readonly, nonatomic) HMDCameraStreamSessionID *streamSessionID; // @synthesize streamSessionID=_streamSessionID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMDVideoStreamInterface *videoStreamInterface; // @synthesize videoStreamInterface=_videoStreamInterface;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_callDidGetLastSnapshot:(id)arg1;
- (void)_callDidGetNewSnapshot:(id)arg1;
- (void)_callSnapshotDelegate:(id)arg1;
- (void)_captureFrame;
- (void)captureCurrentFrame;
- (void)captureLastFrame;
- (id)initWithWorkQueue:(id)arg1 videoStreamInterface:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;
- (void)videoStream:(id)arg1 didGetLastDecodedFrame:(id)arg2;

@end


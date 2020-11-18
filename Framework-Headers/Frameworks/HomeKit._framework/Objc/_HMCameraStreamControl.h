//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/_HMCameraControl.h>

@class HMCameraStream, NSString;
@protocol _HMCameraStreamControlDelegate;

@interface _HMCameraStreamControl : _HMCameraControl
{
    unsigned long long _streamState;
    HMCameraStream *_cameraStream;
    id<_HMCameraStreamControlDelegate> _delegate;
    NSString *_streamSessionID;
}

@property (readonly, nonatomic) HMCameraStream *cameraStream; // @synthesize cameraStream=_cameraStream;
@property (weak, nonatomic) id<_HMCameraStreamControlDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSString *streamSessionID; // @synthesize streamSessionID=_streamSessionID;
@property (nonatomic) unsigned long long streamState; // @synthesize streamState=_streamState;

- (void).cxx_destruct;
- (void)_callVideoStartedDelegate;
- (void)_callVideoStoppedDelegate:(id)arg1;
- (void)_handleNegotiateStreamResponse:(id)arg1 error:(id)arg2;
- (void)_handleVideoStreamStartResponse:(id)arg1 error:(id)arg2;
- (void)_handleVideoStreamStopped:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_resetState:(id)arg1;
- (void)_startStream;
- (void)_stopStream;
- (void)dealloc;
- (void)homedRestarted;
- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3;
- (void)setCameraStream:(id)arg1;
- (void)startStream;
- (void)stopStream;

@end


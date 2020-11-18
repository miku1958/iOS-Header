//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCConnectionChangedHandler-Protocol.h>
#import <AVConference/VCMediaStreamSyncDestination-Protocol.h>

@class NSString;
@protocol VCMediaStreamSyncSource, VCVideoReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCVideoReceiverBase : NSObject <VCMediaStreamSyncDestination, VCConnectionChangedHandler>
{
    int _remoteVideoOrientation;
    id<VCVideoReceiverDelegate> _delegate;
    id<VCMediaStreamSyncSource> _syncSource;
    double _roundTripTime;
    double _lastReceivedVideoRTPPacketTime;
    double _lastReceivedVideoRTCPPacketTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<VCVideoReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
@property (readonly) double lastReceivedVideoRTCPPacketTime; // @synthesize lastReceivedVideoRTCPPacketTime=_lastReceivedVideoRTCPPacketTime;
@property (readonly) double lastReceivedVideoRTPPacketTime; // @synthesize lastReceivedVideoRTPPacketTime=_lastReceivedVideoRTPPacketTime;
@property int remoteVideoOrientation; // @synthesize remoteVideoOrientation=_remoteVideoOrientation;
@property double roundTripTime; // @synthesize roundTripTime=_roundTripTime;
@property (readonly) Class superclass;
@property (nonatomic) id<VCMediaStreamSyncSource> syncSource; // @synthesize syncSource=_syncSource;

- (void)collectChannelMetrics:(CDStruct_3ab08b48 *)arg1 interval:(float)arg2;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)pauseVideo;
- (void)rtcpSendIntervalElapsed;
- (void)setEnableCVO:(BOOL)arg1 cvoExtensionID:(unsigned long long)arg2;
- (void)setEnableRateAdaptation:(BOOL)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)setTargetStreamID:(unsigned short)arg1;
- (BOOL)startSynchronization:(id)arg1;
- (void)startVideo;
- (void)stopSynchronization;
- (void)stopVideo;
- (void)updateSourcePlayoutTimestamp:(CDStruct_1b6d18a9 *)arg1;

@end

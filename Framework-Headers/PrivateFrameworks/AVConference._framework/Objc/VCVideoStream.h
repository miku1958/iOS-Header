//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaStream.h>

#import <AVConference/VCMediaStreamSyncDestination-Protocol.h>
#import <AVConference/VCVideoStreamReceiverDelegate-Protocol.h>

@class NSObject, NSString, VCVideoStreamReceiver, VCVideoStreamTransmitter;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCVideoStream : VCMediaStream <VCVideoStreamReceiverDelegate, VCMediaStreamSyncDestination>
{
    NSObject<OS_dispatch_queue> *_lastDecodedFrameQueue;
    NSObject<OS_dispatch_source> *_rtcpSendHeartBeat;
    struct _opaque_pthread_mutex_t _remoteLayerLock;
    struct _opaque_pthread_mutex_t _localLayerLock;
    unsigned int _uplinkOperatingBitrate;
    struct __CVBuffer *_cachedRemoteVideoFrame;
    long long _streamToken;
    VCVideoStreamTransmitter *_videoTransmitter;
    VCVideoStreamReceiver *_videoReceiver;
    struct opaqueRTCReporting *_reportingAgent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long streamToken; // @synthesize streamToken=_streamToken;
@property (readonly) Class superclass;

+ (id)capabilities;
+ (id)supportedVideoPayloads;
- (void)cacheRemoteVideoFrame:(struct __CVBuffer *)arg1;
- (void)checkPacketTimeouts;
- (void)collectVideoConfigMetrics:(struct __CFDictionary *)arg1;
- (void)collectVideoStreamStartMetrics:(struct __CFDictionary *)arg1;
- (void)dealloc;
- (void)destroyVideoModules;
- (void)destroyVideoReceiver;
- (void)destroyVideoTransmitter;
- (unsigned int)generateStreamToken;
- (id)init;
- (void)initVideoTransmitter:(id)arg1;
- (void)onCallIDChanged;
- (BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)onPause;
- (void)onResume;
- (void)onRtcpEnabledChanged;
- (void)onRtcpSendIntervalChanged;
- (void)onStart;
- (void)onStop;
- (void)overrideConfigWithDefaults;
- (void)reportRTCPPackets:(struct _RTCPPacketList *)arg1;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (void)requestLastDecodedFrame;
- (void)resetRtcpSendHeartBeatTimer:(unsigned long long)arg1;
- (void)sendLastRemoteVideoFrame:(struct __CVBuffer *)arg1;
- (BOOL)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;
- (void)setupRTPPayloads;
- (void)startRtcpSendHeartBeat;
- (BOOL)startSynchronization:(id)arg1;
- (void)stopRtcpSendHeartBeat;
- (void)stopSynchronization;
- (id)supportedPayloads;
- (void)updateVideoConfig:(id)arg1;
- (void)updateVideoReceiver:(id)arg1;
- (BOOL)vcVideoStreamReceiver:(id)arg1 didReceiveRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 newVideoAttributes:(id)arg4 isFirstFrame:(BOOL)arg5;
- (void)vcVideoStreamReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (unsigned int)vcVideoStreamReceiver:(id)arg1 receivedTMMBR:(unsigned int)arg2;
- (void)vcVideoStreamReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned int)arg2;

@end


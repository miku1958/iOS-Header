//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCMediaStreamProtocol-Protocol.h>
#import <AVConference/VCVideoStreamReceiverDelegate-Protocol.h>
#import <AVConference/VCVideoStreamTransmitterDelegate-Protocol.h>

@class AVCMediaStreamConfig, NSString, VCVideoStreamReceiver, VCVideoStreamTransmitter;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCVideoStream : NSObject <VCMediaStreamProtocol, VCVideoStreamTransmitterDelegate, VCVideoStreamReceiverDelegate>
{
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    int _state;
    BOOL _isSRTPInitialized;
    NSString *_callID;
    struct _opaque_pthread_mutex_t _streamLock;
    struct _opaque_pthread_mutex_t _remoteLayerLock;
    struct _opaque_pthread_mutex_t _localLayerLock;
    struct _opaque_pthread_rwlock_t _stateLock;
    struct tagHANDLE *_videoRTP;
    double _rtpTimeoutEnabledTime;
    double _rtcpTimeoutEnabledTime;
    double _lastRTPTimeoutReportTime;
    double _lastRTCPTimeoutReportTime;
    id<VCMediaStreamDelegate> _delegate;
    unsigned int _conferenceID;
    BOOL _isValid;
    AVCMediaStreamConfig *_streamConfig;
    VCVideoStreamTransmitter *_videoTransmitter;
    VCVideoStreamReceiver *_videoReceiver;
}

@property (readonly) unsigned int conferenceID; // @synthesize conferenceID=_conferenceID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<VCMediaStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL isValid; // @synthesize isValid=_isValid;
@property (strong, nonatomic) AVCMediaStreamConfig *streamConfig; // @synthesize streamConfig=_streamConfig;
@property (readonly) Class superclass;

+ (BOOL)isSameSRTPKey:(id)arg1 newKey:(id)arg2;
- (int)SRTPCipherSuiteForLTECipherSuite:(long long)arg1;
- (void)checkPacketTimeouts;
- (BOOL)configureVideoStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)destroyVideoModules;
- (void)didReceiveLocalVideoFrame:(struct __CVBuffer *)arg1 atTime:(CDStruct_198678f7)arg2;
- (int)getCryptoSet:(struct tagSRTPExchangeInfo *)arg1 withMasterKey:(id)arg2;
- (int)getSRTPMasterKeyLength:(long long)arg1;
- (id)init;
- (BOOL)isSameSRTPConfig:(id)arg1;
- (void)lock;
- (void)reportRTCPPackets:(struct tagRTCPPACKET *)arg1 withCount:(int)arg2;
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id *)arg3;
- (unsigned int)setLocalVideoDestination:(void *)arg1;
- (void)setPause:(BOOL)arg1;
- (BOOL)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;
- (unsigned int)setRemoteVideoDestination:(void *)arg1;
- (void)setRtcpEnabled:(BOOL)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeOutEnabled:(BOOL)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtpTimeOutEnabled:(BOOL)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (BOOL)setStreamConfig:(id)arg1 withError:(id *)arg2;
- (void)setStreamDirection:(long long)arg1;
- (void)setupRTPPayloadsWithDestinationIPPort:(struct tagIPPORT *)arg1;
- (id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithSockets:(id)arg1 error:(id *)arg2;
- (int)setupSRTP:(struct tagHANDLE *)arg1 forVideo:(BOOL)arg2;
- (void)start;
- (void)stop;
- (long long)streamDirection;
- (id)supportedVideoPayloads;
- (void)unlock;
- (BOOL)vcVideoStreamReceiver:(id)arg1 didReceiveRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_198678f7)arg3;

@end

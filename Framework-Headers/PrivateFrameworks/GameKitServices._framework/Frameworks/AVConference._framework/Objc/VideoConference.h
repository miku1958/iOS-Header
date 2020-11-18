//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/GKNATObserverDelegate-Protocol.h>
#import <AVConference/VCAudioIOClient-Protocol.h>
#import <AVConference/VCAudioPowerLevelMonitorDelegate-Protocol.h>
#import <AVConference/VCCallSessionDelegate-Protocol.h>
#import <AVConference/VCVideoCaptureClient-Protocol.h>

@class FFTMeter, GKNATObserver, NSArray, NSDictionary, NSMutableDictionary, NSString, VCAudioManager, VCAudioPowerLevelMonitor, VCCallSession, VCVideoRule, VideoConferenceManager;
@protocol OS_dispatch_queue, VCCaptionsSourceDelegate, VideoConferenceChannelQualityDelegate, VideoConferenceDelegate, VideoConferenceSpeakingDelegate;

@interface VideoConference : NSObject <VCCallSessionDelegate, VCVideoCaptureClient, GKNATObserverDelegate, VCAudioIOClient, VCAudioPowerLevelMonitorDelegate>
{
    NSObject<VideoConferenceDelegate> *delegate;
    id<VCCaptionsSourceDelegate> _captionsDelegate;
    VideoConferenceManager *manager;
    VCAudioManager *audioManager;
    struct _opaque_pthread_rwlock_t stateLock;
    NSMutableDictionary *sessionDict;
    NSArray *sessionArray;
    BOOL outputMeteringEnabled;
    BOOL inputMeteringEnabled;
    BOOL inputFrequencyMeteringEnabled;
    BOOL outputFrequencyMeteringEnabled;
    FFTMeter *_inputFFTMeter;
    FFTMeter *_outputFFTMeter;
    float outputMeterLevel;
    float inputMeterLevel;
    BOOL microphoneMuted;
    NSObject<OS_dispatch_queue> *audioManagerQueue;
    double dAudioHostTime;
    struct _opaque_pthread_mutex_t xRemoteLayer;
    struct _opaque_pthread_mutex_t xAudioTS;
    unsigned int dwAudioTS;
    BOOL forceNoICE;
    BOOL useViceroyBlobFormat;
    int chatMode;
    BOOL isFocus;
    NSString *currentFocus;
    VCCallSession *currentFocusSession;
    BOOL hasMic;
    float conferenceVolume;
    NSArray *mutedPeers;
    NSArray *connectedPeers;
    unsigned int talkingPeersLimit;
    unsigned char speakingArray[16];
    NSObject<VideoConferenceSpeakingDelegate> *speakingDelegate;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    float longTerm;
    float shortTerm;
    BOOL isTalking;
    unsigned int talkTime;
    int packetsPerBundle;
    unsigned int recvRTPTimeStamp;
    BOOL disableVAD;
    BOOL requiresWifi;
    unsigned int preferredCodec;
    int upstreamBandwidth;
    int downstreamBandwidth;
    BOOL useAFRC;
    BOOL isGKVoiceChat;
    BOOL isUsingSuppression;
    BOOL shouldTimeoutPackets;
    unsigned char requestedCameraType;
    BOOL useCompressedConnectionData;
    NSDictionary *natTypeDictionary;
    struct _opaque_pthread_mutex_t natMutex;
    unsigned int lastSentAudioSampleTime;
    double lastReceivedAudioTimestamp;
    VCAudioPowerLevelMonitor *_remoteAudioPowerLevelMonitor;
    int audioTimeStampDelta;
    GKNATObserver *natObserver;
    unsigned int mostRecentStartedCall;
    unsigned int lastActiveCall;
    BOOL _isWarmedUp;
    BOOL bweOperatingModeInitialized;
    BOOL useNewBWEMode;
    BOOL useActiveProbingSenderLog;
    BOOL useFakeLargeFrameMode;
    BOOL shouldPrioritizeParticipantIDForSIPInvite;
    BOOL shouldResumeAudio;
    BOOL shouldResumeVideo;
    unsigned int timeStampUpdateCounter;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    unsigned int _transportType;
    int conferenceOperatingMode;
    int _deviceRole;
    BOOL isValid;
    int localFrameWidth;
    int localFrameHeight;
    VCVideoRule *conferenceCaptureRule;
}

@property (nonatomic) int chatMode; // @synthesize chatMode;
@property (readonly, nonatomic) VCVideoRule *conferenceCaptureRule; // @synthesize conferenceCaptureRule;
@property float conferenceVolume;
@property (copy, nonatomic) NSString *currentFocus; // @synthesize currentFocus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<VideoConferenceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property BOOL disableVAD; // @synthesize disableVAD;
@property int downstreamBandwidth; // @synthesize downstreamBandwidth;
@property (getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property BOOL hasMic;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isInputFrequencyMeteringEnabled) BOOL inputFrequencyMeteringEnabled;
@property (readonly, nonatomic) float inputMeterLevel;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (nonatomic) BOOL isFocus; // @synthesize isFocus;
@property (nonatomic) BOOL isGKVoiceChat; // @synthesize isGKVoiceChat;
@property (nonatomic) BOOL isUsingSuppression; // @synthesize isUsingSuppression;
@property BOOL isValid; // @synthesize isValid;
@property unsigned int lastActiveCall; // @synthesize lastActiveCall;
@property (readonly) int localFrameHeight; // @synthesize localFrameHeight;
@property (readonly) int localFrameWidth; // @synthesize localFrameWidth;
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (nonatomic, getter=isOutputFrequencyMeteringEnabled) BOOL outputFrequencyMeteringEnabled;
@property (readonly, nonatomic) float outputMeterLevel;
@property (nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (nonatomic) int packetsPerBundle; // @synthesize packetsPerBundle;
@property (nonatomic) unsigned int preferredCodec; // @synthesize preferredCodec;
@property NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
@property (nonatomic) BOOL requiresWifi; // @synthesize requiresWifi;
@property (nonatomic) BOOL shouldPrioritizeParticipantIDForSIPInvite; // @synthesize shouldPrioritizeParticipantIDForSIPInvite;
@property BOOL shouldTimeoutPackets; // @synthesize shouldTimeoutPackets;
@property NSObject<VideoConferenceSpeakingDelegate> *speakingDelegate; // @synthesize speakingDelegate;
@property (readonly) Class superclass;
@property unsigned int talkingPeersLimit; // @synthesize talkingPeersLimit;
@property (nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property int upstreamBandwidth; // @synthesize upstreamBandwidth;
@property (nonatomic) BOOL useCompressedConnectionData; // @synthesize useCompressedConnectionData;
@property (nonatomic) BOOL useViceroyBlobFormat; // @synthesize useViceroyBlobFormat;

- (void)NATTypeDictionaryUpdated:(id)arg1;
- (void)avConferencePreviewError:(id)arg1;
- (void)avConferenceScreenCaptureError:(id)arg1;
- (void)calculateMixingArrays:(unsigned int *)arg1 talkingMask:(unsigned int)arg2;
- (unsigned int)calculateTalkingMaskAtTimeStamp:(unsigned int)arg1 samples:(char *)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
- (unsigned int)callIDForOpenSessionWithParticipantID:(id)arg1;
- (id)callMetadataForCallID:(unsigned int)arg1;
- (BOOL)canProcessAudio;
- (void)cancelCallID:(unsigned int)arg1;
- (void)cancelCallID:(unsigned int)arg1 error:(id)arg2;
- (int)captureAsFocus:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 averagePower:(unsigned char)arg6;
- (int)captureAsFocusClient:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(unsigned char)arg5;
- (int)captureMeshMode:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hostTime:(double)arg6;
- (void)cleanupManager;
- (void)cleanupProc:(id)arg1;
- (void)cleanupQueues;
- (void)cleanupSession:(id)arg1 didRemoteCancel:(BOOL)arg2;
- (void)cleanupSession:(id)arg1 withDelay:(unsigned long long)arg2;
- (id)clientCaptureRule;
- (BOOL)conferenceMatchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (int)conferenceOperatingMode;
- (void)connectionBlobForParticipantID:(id)arg1 callID:(unsigned int)arg2 block:(CDUnknownBlockType)arg3 queue:(id)arg4 caller:(id)arg5;
- (id)connectionBlobForParticipantID:(id)arg1 callID:(unsigned int *)arg2 error:(id *)arg3;
- (void)dealloc;
- (void)defaultCleanupSession:(id)arg1;
- (void)didChangeLocalVariablesForSession:(id)arg1;
- (BOOL)didDetectBandwidth:(BOOL)arg1 upstreamBandwidth:(int)arg2 downstreamBandwidth:(int)arg3;
- (void)didReceiveCaptions:(id)arg1 remoteClient:(unsigned int)arg2;
- (void)forceNoICE:(BOOL)arg1;
- (BOOL)getIsAudioPaused:(BOOL *)arg1 callID:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)getIsVideoPaused:(BOOL *)arg1 callID:(unsigned int)arg2 error:(id *)arg3;
- (void)handleCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;
- (BOOL)hasSessionWaitingForSIPInvite;
- (id)init;
- (unsigned int)initializeNewCallWithDeviceRole:(int)arg1;
- (BOOL)initiateResolutionChangeToWidth:(int)arg1 height:(int)arg2 rate:(int)arg3;
- (void)inviteDataForParticipantID:(id)arg1 callID:(unsigned int)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5 queue:(id)arg6 caller:(id)arg7;
- (id)inviteDataForParticipantID:(id)arg1 callID:(unsigned int *)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id *)arg5;
- (double)localBitrateForCallID:(unsigned int)arg1;
- (double)localFramerateForCallID:(unsigned int)arg1;
- (double)localPacketLossRateForCallID:(unsigned int)arg1;
- (id)loopbackSessionWaitingForSIPInvite;
- (void)markUnfinishedSessions;
- (BOOL)matchesCallID:(unsigned int)arg1;
- (BOOL)matchesOpenSessionForParticipantID:(id)arg1;
- (BOOL)matchesParticipantID:(id)arg1;
- (int)natType;
- (int)natTypeForCallSessions:(const char *)arg1;
- (double)networkQualityForCallID:(unsigned int)arg1;
- (id)newSessionWithDeviceRole:(int)arg1;
- (void)notifyDelegateOfLocalVariablesChange;
- (BOOL)onCaptureFrame:(struct __CVBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (BOOL)onCaptureSound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned int)arg9;
- (BOOL)onPlaySound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(float)arg5;
- (id)openSessionForParticipant:(id)arg1;
- (double)packetLossRateForCallID:(unsigned int)arg1;
- (unsigned char)powerFloatToInt:(float)arg1;
- (float)powerIntToFloat:(unsigned char)arg1;
- (void)processRelayRequestResponse:(unsigned int)arg1 responseDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRelayUpdate:(unsigned int)arg1 updateDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRemoteIPChange:(id)arg1 callID:(unsigned int)arg2;
- (unsigned int)pruneQuietestPeers:(unsigned int)arg1 talking:(unsigned int)arg2 mask:(unsigned int)arg3 meters:(char *)arg4;
- (int)pullDecodedAsFocus:(char *)arg1 timestamp:(unsigned int)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
- (int)pullDecodedAsFocusClient:(char *)arg1 timestamp:(unsigned int)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
- (int)pullDecodedMeshMode:(char *)arg1 timestamp:(unsigned int)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
- (void)rdlock;
- (BOOL)recvSamplesForSession:(id)arg1 samples:(char *)arg2 numBytes:(int)arg3 numSamples:(int)arg4 storeTimestamp:(unsigned int)arg5;
- (void)remoteAudioDidPause:(BOOL)arg1 callID:(unsigned int)arg2;
- (double)remoteBitrateForCallID:(unsigned int)arg1;
- (void)remoteCancelledCallID:(unsigned int)arg1;
- (struct CGSize)remoteFrameSizeForCallID:(unsigned int)arg1;
- (double)remoteFramerateForCallID:(unsigned int)arg1;
- (double)remotePacketLossRateForCallID:(unsigned int)arg1;
- (void)remoteVideoDidPause:(BOOL)arg1 callID:(unsigned int)arg2;
- (double)roundTripTimeForCallID:(unsigned int)arg1;
- (void)sendARPLData:(id)arg1 toCallID:(unsigned int)arg2;
- (void)sendData:(id)arg1 toCallID:(unsigned int)arg2 encrypted:(BOOL)arg3;
- (void)session:(id)arg1 cancelRelayRequest:(id)arg2;
- (void)session:(id)arg1 changeVideoRulesToCaptureRule:(id)arg2 encodeRule:(id)arg3 featuresListString:(id)arg4;
- (void)session:(id)arg1 cleanUpWithDelay:(long long)arg2 error:(id)arg3;
- (void)session:(id)arg1 connectionDidChangeWithLocalInterfaceType:(id)arg2 remoteInterfaceType:(id)arg3 callID:(unsigned int)arg4;
- (void)session:(id)arg1 didChangeRemoteScreenAttributes:(id)arg2;
- (void)session:(id)arg1 didChangeVideoRule:(id)arg2;
- (void)session:(id)arg1 didPauseAudio:(BOOL)arg2 error:(id)arg3;
- (void)session:(id)arg1 didPauseVideo:(BOOL)arg2 error:(id)arg3;
- (void)session:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned int)arg3;
- (void)session:(id)arg1 didReceiveData:(id)arg2 messageType:(unsigned int)arg3 withCallID:(unsigned int)arg4;
- (void)session:(id)arg1 didStart:(BOOL)arg2 connectionType:(unsigned int)arg3 localInterfaceType:(id)arg4 remoteInterfaceType:(id)arg5 error:(id)arg6;
- (BOOL)session:(id)arg1 didStopVideoIO:(BOOL)arg2 error:(id *)arg3;
- (void)session:(id)arg1 didStopWithError:(id)arg2;
- (void)session:(id)arg1 initiateRelayRequest:(id)arg2;
- (void)session:(id)arg1 localAudioEnabled:(BOOL)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)session:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned int)arg3;
- (void)session:(id)arg1 packMeters:(char *)arg2 withLength:(char *)arg3;
- (void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2;
- (BOOL)session:(id)arg1 receivedRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 withScreenAttributes:(id)arg4 videoAttributes:(id)arg5 isFirstFrame:(BOOL)arg6 isVideoPaused:(BOOL)arg7;
- (void)session:(id)arg1 remoteAudioEnabled:(BOOL)arg2 withCallID:(unsigned int)arg3;
- (void)session:(id)arg1 remoteCallingModeChanged:(unsigned int)arg2 withCallID:(unsigned int)arg3;
- (void)session:(id)arg1 remoteMediaStalled:(BOOL)arg2;
- (void)session:(id)arg1 sendRelayResponse:(id)arg2;
- (BOOL)session:(id)arg1 startVideoIO:(id *)arg2 captureRule:(id)arg3 isUnpausing:(BOOL)arg4;
- (BOOL)session:(id)arg1 startVideoReceive:(id *)arg2;
- (BOOL)session:(id)arg1 startVideoSend:(id *)arg2 captureRule:(id)arg3 isUnpausing:(BOOL)arg4;
- (BOOL)session:(id)arg1 stopVideoReceive:(id *)arg2 isPausing:(BOOL)arg3;
- (void)session:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(BOOL)arg3;
- (void)session:(id)arg1 withCallID:(unsigned int)arg2 videoIsDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (id)sessionForIncomingParticipantID:(id)arg1;
- (id)sessionForParticipantID:(id)arg1;
- (id)sessionForSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (BOOL)setActive:(BOOL)arg1;
- (void)setBWEOptions:(BOOL)arg1 UseNewBWEMode:(BOOL)arg2 FakeLargeFrameMode:(BOOL)arg3 ProbingSenderLog:(BOOL)arg4;
- (void)setCallReport:(unsigned int)arg1 withReport:(id)arg2;
- (void)setCallReportProtobuf:(unsigned int)arg1 withProtobufData:(id)arg2 forMetricID:(long long)arg3;
- (void)setCanProcessAudio:(BOOL)arg1;
- (void)setConferenceOperatingMode:(int)arg1;
- (void)setConferenceState:(unsigned int)arg1 forCallID:(unsigned int)arg2;
- (void)setConferenceVisualRectangle:(struct CGRect)arg1 forCallID:(unsigned int)arg2;
- (BOOL)setPauseAudio:(BOOL)arg1;
- (BOOL)setPauseAudio:(BOOL)arg1 callID:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)setPauseVideo:(BOOL)arg1;
- (BOOL)setPauseVideo:(BOOL)arg1 callID:(unsigned int)arg2 error:(id *)arg3;
- (void)setPeerCN:(id)arg1 callID:(unsigned int)arg2;
- (void)setPeerProtocolVersion:(unsigned int)arg1 forCallID:(unsigned int)arg2;
- (unsigned int)setRemoteVideoDestination:(void *)arg1 facing:(BOOL)arg2;
- (void)setSendAudio:(BOOL)arg1 forCallID:(unsigned int)arg2;
- (void)setSessionID:(id)arg1 callID:(unsigned int)arg2;
- (void)setupNATObserver;
- (BOOL)shouldReinitializeCallWithDuration:(double)arg1 forCallID:(unsigned int)arg2;
- (BOOL)shouldSendAudioForCallID:(unsigned int)arg1;
- (void)shouldSendBlackFrame:(BOOL)arg1 callID:(id)arg2;
- (int)sipCallbackNotification:(int)arg1 callID:(unsigned int)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void *)arg5 confIndex:(int *)arg6;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 oldCallID:(unsigned int)arg3 usingInviteData:(id)arg4 isCaller:(BOOL)arg5 relayResponseDict:(id)arg6 didOriginateRelayRequest:(BOOL)arg7 capabilities:(id)arg8 idsSocket:(int)arg9 destination:(id)arg10 error:(id *)arg11;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 destination:(id)arg7 error:(id *)arg8;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 destination:(id)arg9 error:(id *)arg10;
- (int)stateForCallID:(unsigned int)arg1;
- (id)statsForCallID:(unsigned int)arg1;
- (void)stopAllCalls:(id)arg1;
- (void)stopCallID:(unsigned int)arg1;
- (void)stopCallID:(unsigned int)arg1 didRemoteCancel:(BOOL)arg2 error:(id)arg3;
- (BOOL)stopVideoSend:(BOOL)arg1 error:(id *)arg2;
- (void)threadSafeCleanupSession:(id)arg1;
- (void)triggerInterfaceChange;
- (int)tryrdlock;
- (void)unlock;
- (void)updateCapabilities:(id)arg1 forCallID:(unsigned int)arg2;
- (void)updateMeter:(unsigned char)arg1 forParticipant:(id)arg2 atIndex:(unsigned int)arg3;
- (void)updateMeters:(unsigned short)arg1;
- (BOOL)updateSpeaking:(unsigned int)arg1 timeStamp:(unsigned int)arg2;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2;
- (void)vcAudioPowerLevelMonitor:(id)arg1 isAudioBelowThreshold:(BOOL)arg2;
- (void)warmupForCall;
- (void)wrlock;

@end


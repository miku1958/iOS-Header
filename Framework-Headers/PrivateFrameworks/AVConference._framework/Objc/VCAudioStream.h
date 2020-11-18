//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaStream.h>

#import <AVConference/VCAudioIODelegate-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioIOSource-Protocol.h>
#import <AVConference/VCMediaStreamSyncSource-Protocol.h>
#import <AVConference/WRMClientDelegate-Protocol.h>

@class AVCStatisticsCollector, DTMFEventHandler, NSMutableArray, NSObject, NSString, VCAudioIO, VCAudioPayload, VCAudioTransmitter, WRMClient;
@protocol OS_dispatch_source, VCMediaStreamSyncSourceDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioStream : VCMediaStream <WRMClientDelegate, VCMediaStreamSyncSource, VCAudioIOSource, VCAudioIOSink, VCAudioIODelegate>
{
    int _clientPid;
    int numBufferBytesAvailable;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    double dAudioHostTime;
    BOOL lastVoiceActive;
    unsigned int conferenceID;
    unsigned int lastInputAudioTimeStamp;
    unsigned int lastSentAudioSampleTime;
    unsigned int packetTimeoutCheckCounter;
    unsigned int awdTime;
    long long sampleRate;
    long long samplesPerFrame;
    struct _opaque_pthread_rwlock_t stateLock;
    NSMutableArray *audioPayloads;
    struct AudioStreamBasicDescription vpioFormat;
    int preferredAudioCodec;
    DTMFEventHandler *dtmfEventHandler;
    WRMClient *wrmClient;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    struct tagVCAudioReceiver *_audioReceiver;
    VCAudioTransmitter *_audioTransmitter;
    AVCStatisticsCollector *_statisticsCollector;
    struct opaqueRTCReporting *reportingAgent;
    struct _METER_INFO soundMeter[2];
    BOOL isValid;
    int deviceRole;
    int operatingMode;
    void *_audioMediaControlInfoGenerator;
    id syncSourceDelegate;
    struct tagWRMMetricsInfo wrmInfo;
    VCAudioIO *_audioIO;
    BOOL _isMuted;
    BOOL _isRemoteMuted;
}

@property (strong) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property (strong) VCAudioTransmitter *audioTransmitter; // @synthesize audioTransmitter=_audioTransmitter;
@property (readonly) unsigned int conferenceID; // @synthesize conferenceID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceRole; // @synthesize deviceRole;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isValid; // @synthesize isValid;
@property (nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_isMuted;
@property (nonatomic) int operatingMode; // @synthesize operatingMode;
@property (nonatomic, getter=isRemoteMuted) BOOL remoteMuted; // @synthesize remoteMuted=_isRemoteMuted;
@property (strong, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property (readonly) Class superclass;
@property (nonatomic) NSObject<VCMediaStreamSyncSourceDelegate> *syncSourceDelegate; // @synthesize syncSourceDelegate;

+ (unsigned char)audioIODirectionWithMediaStreamDirection:(long long)arg1;
+ (id)capabilities;
+ (id)supportedAudioPayloads;
- (void)_computeInternalFormatForAudioConfig:(id)arg1;
- (id)addAudioPayload:(int)arg1;
- (int)bundlingSchemeForOperatingMode:(int)arg1 payloadType:(int)arg2;
- (BOOL)canProcessAudio;
- (int)captureMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (void)checkPacketTimeouts;
- (BOOL)choosePayload:(int *)arg1 count:(int)arg2;
- (void)cleanupAudio;
- (unsigned int)codecTypeFromAudioPayload:(int)arg1;
- (unsigned int)computePacketTimestampWithInputTimestamp:(unsigned int)arg1 numSamples:(int)arg2 hostTime:(double)arg3;
- (id)configForPayloadType:(int)arg1;
- (BOOL)createAudioReceiver;
- (BOOL)createAudioTransmitter:(long long)arg1;
- (void)dealloc;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (BOOL)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
- (void)generateWRMReport;
- (int)getPacketsPerBundle;
- (id)getReportingClientName;
- (int)getReportingClientType;
- (id)getReportingServiceID;
- (long long)getSyncSourceSampleRate;
- (void)handleCodecRateModeChange:(int)arg1 payload:(int)arg2;
- (id)initWithClientPid:(int)arg1;
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2;
- (void)initializeWRM;
- (unsigned int)internalSampleRateForCodecType:(long long)arg1;
- (BOOL)isFrequencyMeteringEnabled:(int)arg1;
- (void)onCallIDChanged;
- (BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)onPause;
- (void)onResume;
- (void)onRtcpEnabledChanged;
- (void)onRtcpSendIntervalChanged;
- (void)onStart;
- (void)onStop;
- (int)operatingModeForAudioStreamMode:(long long)arg1;
- (unsigned int)preferredAudioBitrateForPayload:(int)arg1;
- (void)prepareAudio;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pullDecodedMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)registerCodecRateModeChangeNotifications;
- (void)reportRTCPPackets:(struct _RTCPPacketList *)arg1;
- (void)reportWRMMetrics:(const CDStruct_0db8e210 *)arg1;
- (void)reportingAudioStreamEvent:(unsigned short)arg1;
- (void)restartPausedHeartbeat;
- (void)sendDTMFEvent:(id)arg1;
- (BOOL)setAudioStreamConfig:(id)arg1 error:(id *)arg2;
- (void)setCanProcessAudio:(BOOL)arg1;
- (void)setDTXPayload:(id)arg1;
- (void)setFrequencyMeteringEnabled:(BOOL)arg1 meterType:(int)arg2;
- (void)setInputTimestamp:(unsigned int)arg1 packetTimestamp:(int)arg2 hostTime:(double)arg3;
- (BOOL)setMediaQueueStreamSettings;
- (BOOL)setReceiverPayloads:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStreamDirection:(long long)arg1;
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;
- (void)setWRMNotification:(CDStruct_d2860d30 *)arg1;
- (BOOL)setupAudioCodecWithPayload:(int)arg1;
- (void)setupRTPPayloads;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startPausedHeartbeat;
- (void)startWRM;
- (void)stateEnter;
- (void)stateExit;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopPausedHeartbeat;
- (void)stopSendDTMFEvent;
- (void)stopWRM;
- (id)supportedPayloads;
- (void)uninitializeWRM;
- (void)unregisterCodecRateModeChangeNotifications;
- (void)updateSoundMeter:(int)arg1 sampleBuffer:(struct opaqueVCAudioBufferList *)arg2;

@end


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

@class AVTelephonyInterface, DTMFEventHandler, NSMutableArray, NSNumber, NSObject, NSString, VCAudioIO, VCAudioPayload, VCAudioTransmitter, WRMClient;
@protocol OS_dispatch_source, VCMediaStreamSyncSourceDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioStream : VCMediaStream <VCMediaStreamSyncSource, VCAudioIOSource, VCAudioIOSink, VCAudioIODelegate>
{
    int _clientPid;
    int numBufferBytesAvailable;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    double dAudioHostTime;
    BOOL lastVoiceActive;
    unsigned int conferenceID;
    unsigned int lastInputAudioTimeStamp;
    unsigned int lastSentAudioSampleTime;
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
    int _reportingModuleID;
    AVTelephonyInterface *_telephonyInterface;
    struct _METER_INFO soundMeter[2];
    BOOL isValid;
    int deviceRole;
    void *_audioMediaControlInfoGenerator;
    id syncSourceDelegate;
    VCAudioIO *_audioIO;
    BOOL _isMuted;
    BOOL _isRemoteMuted;
    unsigned int _lastRTPTimestamp;
    unsigned int *_reportingSSRCList;
    unsigned int _reportingSSRCCount;
    BOOL _sendActiveVoiceOnly;
    BOOL _isRemoteMediaStalled;
    int _packetsSinceStallCount;
    double _lastReceivedAudioTimestamp;
    BOOL _currentDTXEnable;
    NSNumber *_targetStreamID;
    float _volume;
    BOOL _rtpEnabledBeforeInterrupt;
    BOOL _rtcpEnabledBeforeInterrupt;
    unsigned int _pullAudioSamplesCount;
}

@property (strong) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property (strong) VCAudioTransmitter *audioTransmitter; // @synthesize audioTransmitter=_audioTransmitter;
@property (readonly) unsigned int conferenceID; // @synthesize conferenceID;
@property (nonatomic, getter=isCurrentDTXEnabled) BOOL currentDTXEnable; // @synthesize currentDTXEnable=_currentDTXEnable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceRole; // @synthesize deviceRole;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isValid; // @synthesize isValid;
@property (nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_isMuted;
@property (nonatomic, getter=isRemoteMuted) BOOL remoteMuted; // @synthesize remoteMuted=_isRemoteMuted;
@property (nonatomic) BOOL sendActiveVoiceOnly;
@property (readonly) Class superclass;
@property (nonatomic) NSObject<VCMediaStreamSyncSourceDelegate> *syncSourceDelegate; // @synthesize syncSourceDelegate;
@property (strong, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;
@property (nonatomic) float volume; // @synthesize volume=_volume;

+ (unsigned char)audioIODirectionWithMediaStreamDirection:(long long)arg1;
+ (id)capabilities;
+ (id)supportedAudioPayloads;
- (void)_computeInternalFormatForAudioConfig:(id)arg1;
- (id)addAudioPayload:(int)arg1;
- (int)bundlingSchemeForOperatingMode:(int)arg1 payloadType:(int)arg2;
- (BOOL)canProcessAudio;
- (int)captureMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (void)cleanupAudio;
- (void)cleanupBeforeReconfigure:(id)arg1;
- (unsigned int)codecTypeFromAudioPayload:(int)arg1;
- (void)collectRxChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_1c8e0384 *)arg1 interval:(float)arg2;
- (void)collectTxChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (unsigned int)computePacketTimestampWithInputTimestamp:(unsigned int)arg1 numSamples:(int)arg2 hostTime:(double)arg3;
- (id)configForPayloadType:(int)arg1;
- (BOOL)createAudioReceiver;
- (BOOL)createAudioTransmitter:(long long)arg1 streamIDs:(id)arg2;
- (void)createReportSSRCListWithStreamConfigs:(id)arg1;
- (id)createTransport;
- (void)dealloc;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (BOOL)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
- (struct __CFDictionary *)getClientSpecificUserInfo:(id)arg1;
- (void)getCodecConfigForPayload:(int)arg1 block:(CDUnknownBlockType)arg2;
- (int)getPacketsPerBundleForStreamConfig:(id)arg1;
- (struct __CFString *)getReportingClientName;
- (int)getReportingClientType;
- (id)getReportingServiceID;
- (id)getSupportedPayloads;
- (long long)getSyncSourceSampleRate;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)handleCodecRateModeChange:(int)arg1 payload:(int)arg2;
- (id)initWithClientPid:(int)arg1;
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2;
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2 transportSessionID:(unsigned int)arg3;
- (unsigned int)internalSampleRateForCodecType:(long long)arg1;
- (BOOL)isFrequencyMeteringEnabled:(int)arg1;
- (double)lastReceivedRTCPPacketTime;
- (double)lastReceivedRTPPacketTime;
- (void)onCallIDChanged;
- (BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onRTCPTimeout;
- (void)onRTPTimeout;
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onSendRTCPPacket;
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)operatingModeForAudioStreamMode:(long long)arg1;
- (unsigned int)preferredAudioBitrateForPayload:(int)arg1;
- (void)prepareAudio;
- (void)processPulledSamples:(struct opaqueVCAudioBufferList *)arg1 rtpTimestamp:(unsigned int)arg2;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pullDecodedMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)registerActiveAudioStreamChangeNotifications;
- (void)registerCodecRateModeChangeNotifications;
- (void)reportingAudioStreamEvent:(unsigned short)arg1;
- (double)rtcpHeartbeatLeeway;
- (void)sendDTMFEvent:(id)arg1;
- (void)setCanProcessAudio:(BOOL)arg1;
- (void)setDTXPayload:(id)arg1;
- (void)setFrequencyMeteringEnabled:(BOOL)arg1 meterType:(int)arg2;
- (void)setInputTimestamp:(unsigned int)arg1 packetTimestamp:(int)arg2 hostTime:(double)arg3;
- (BOOL)setReceiverPayloads;
- (void)setState:(int)arg1;
- (void)setStreamDirection:(long long)arg1;
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;
- (BOOL)setupAudioStreamWithClientPid:(int)arg1;
- (BOOL)setupPayloads;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stateEnter;
- (void)stateExit;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopSendDTMFEvent;
- (id)streamIDsFromTransport;
- (id)supportedPayloads;
- (void)unregisterCodecRateModeChangeNotifications;
- (void)updateRemoteMediaStallState:(double)arg1;
- (void)updateSoundMeter:(int)arg1 sampleBuffer:(struct opaqueVCAudioBufferList *)arg2;
- (BOOL)validateAudioStreamConfigurations:(id)arg1;
- (void)vcMediaStreamTransport:(id)arg1 updateSourceNTPTime:(double)arg2 rtpTimeStamp:(unsigned int)arg3;

@end


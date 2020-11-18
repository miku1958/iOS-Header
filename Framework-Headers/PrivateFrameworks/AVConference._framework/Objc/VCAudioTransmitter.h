//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCAudioIOSink-Protocol.h>

@class AVCStatisticsCollector, NSDictionary, NSMutableArray, NSString, VCAudioPayload, VCAudioPayloadConfig, VCAudioRedBuilder, VCAudioTier, VCAudioTierPicker, VCPacketBundler, VCRedundancyControllerAudio, VCTransportSession;
@protocol VCAudioTransmitterDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioTransmitter : NSObject <VCAudioIOSink>
{
    VCPacketBundler *_audioBundler;
    VCAudioRedBuilder *_redBuilder;
    VCRedundancyControllerAudio *_redundancyController;
    struct opaqueVCAudioBufferList *_encodeBuffer;
    BOOL _lastIsTalking;
    double _lastTierSwitch;
    double _audioInterval;
    int _audioTierChangeRequestCount;
    int _audioTxBitrate;
    unsigned int _lastSentAudioSampleTime;
    unsigned int _sampleRate;
    unsigned int _samplesPerFrame;
    unsigned char _inputMeter;
    long long _blockSize;
    float _blockSeconds;
    VCAudioTierPicker *_audioTierPicker;
    VCAudioTier *_currentAudioTier;
    VCAudioTier *_requestedAudioTier;
    char *_lastInputSampleBuffer;
    unsigned int _lastInputSampleBufferSize;
    int _audioHeaderSize;
    BOOL _audioTierHysteresis;
    void *_packetThread;
    unsigned int _packetSent;
    unsigned int _targetBitrate;
    unsigned int _currentTargetBitrate;
    unsigned int _currentDuplication;
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    unsigned int _redundancyControllerNumPaylaods;
    unsigned int _redundancyControllerMaxDelay20ms;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _sentAudioBytes;
    unsigned int _totalTxAudioBytes;
    unsigned int _estimateTxAudioBytes;
    unsigned int _audioFrameCounter;
    unsigned int _silenceFrameCounter;
    unsigned int _vadSegmentCounter;
    struct tagHANDLE *_rtpHandle;
    struct tagHANDLE *_afrc;
    struct tagHANDLE *_mediaQueue;
    struct tagHANDLE *_rtpVideo;
    void *_controlInfoGenerator;
    BOOL _useAFRC;
    BOOL _isUseCaseWatchContinuity;
    BOOL _allowAudioSwitching;
    BOOL _supportsAdaptation;
    BOOL _needsPacketThread;
    BOOL _isLocalCellular_LowestConnectionQuality;
    BOOL _isRemoteCellular_LowestConnectionQuality;
    BOOL _isConnectedOnIPv6_LowestConnectionQuality;
    BOOL _isRedEnabled;
    BOOL _includeRedSequenceOffset;
    unsigned int _redNumPayloads;
    unsigned int _redMaxDelay20ms;
    BOOL _transmitROC;
    NSMutableArray *_audioPayloads;
    VCAudioPayload *_currentDTXPayload;
    VCAudioPayload *_currentAudioPayload;
    int _currentRedPayloadType;
    unsigned int _currentAudioCap;
    struct AudioStreamBasicDescription _inputFormat;
    struct opaqueRTCReporting *_reportingAgent;
    int _operatingMode;
    VCTransportSession *_transportSession;
    id _delegate;
    BOOL _ignoreSilence;
    double _lastReportingCallbackTime;
}

@property (readonly, nonatomic) VCPacketBundler *audioBundler; // @synthesize audioBundler=_audioBundler;
@property (readonly, nonatomic) int audioTxBitrate; // @synthesize audioTxBitrate=_audioTxBitrate;
@property (readonly, nonatomic) VCAudioPayloadConfig *currentAudioPayloadConfig;
@property (readonly, nonatomic) VCAudioTier *currentAudioTier; // @synthesize currentAudioTier=_currentAudioTier;
@property (readonly, copy) NSString *debugDescription;
@property id<VCAudioTransmitterDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dtxMetrics;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL ignoreSilence; // @synthesize ignoreSilence=_ignoreSilence;
@property unsigned char inputMeter; // @synthesize inputMeter=_inputMeter;
@property (readonly, nonatomic) BOOL isRedEnabled; // @synthesize isRedEnabled=_isRedEnabled;
@property (readonly, nonatomic) unsigned int lastSentAudioSampleTime; // @synthesize lastSentAudioSampleTime=_lastSentAudioSampleTime;
@property (nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property (readonly, nonatomic) unsigned int redMaxDelay20ms;
@property (readonly, nonatomic) unsigned int redNumPayloads;
@property (readonly, nonatomic) unsigned int sentAudioBytes;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;

- (BOOL)allocateLastInputSampleBuffer:(unsigned int)arg1;
- (int)bundleAndSendSamples:(char *)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hasNewSamples:(BOOL)arg6 voiceActivity:(BOOL)arg7;
- (BOOL)chooseAudioNetworkBitrate;
- (void)dealloc;
- (int)encodeAudio:(struct opaqueVCAudioBufferList *)arg1 numInputSamples:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4 withPayload:(int *)arg5 isTalking:(BOOL)arg6;
- (void)encodeBundleAndSendAudio:(struct opaqueVCAudioBufferList *)arg1 sampleCount:(unsigned int)arg2;
- (void *)generateControlInfo;
- (void)handleCodecRateModeChange:(unsigned char)arg1 withBitrate:(unsigned int)arg2;
- (void)initAudioValues;
- (id)initWithConfig:(id)arg1;
- (BOOL)isLocalOrRemoteOnCellular;
- (void)logTierInfo:(int)arg1;
- (unsigned int)maximumSamplesPerFrame;
- (float)nextAudioInterval:(int)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (unsigned int)redundancyControllerModeForOperatingMode:(int)arg1 isRedEnabled:(BOOL)arg2;
- (void)registerReportingTask;
- (void)removeUnusedAudioPayloads;
- (int)sendAudioBundle:(BOOL)arg1 atTimeStamp:(unsigned int)arg2 nextInterval:(float)arg3;
- (int)sendAudioPacket:(struct tagAudioPacketData)arg1;
- (int)sendAudioPacket:(char *)arg1 payloadLength:(int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4 marker:(int)arg5 nextInterval:(float)arg6 padding:(char *)arg7 paddingLength:(unsigned char)arg8 sendReport:(int)arg9;
- (BOOL)sendAudioPacketImpl:(struct tagAudioPacketData *)arg1 bytesSent:(int *)arg2;
- (void)setCellTech:(int)arg1 remoteCellular:(int)arg2 isIPV6:(int)arg3 audioCap:(unsigned int)arg4;
- (void)setRedNumPayloads:(int)arg1 withMaxDelay:(int)arg2;
- (BOOL)setupAudio:(id)arg1;
- (BOOL)setupAudioEncoders;
- (void)setupAudioHeaderSize;
- (BOOL)setupAudioTierPicker;
- (BOOL)shouldUseDtx;
- (void)start;
- (void)stop;
- (id)supportedRedNumPayloadsForMode:(int)arg1;
- (void)updateAudioTxBitrate;
- (void)useAudioPayload:(id)arg1 withBitrate:(unsigned int)arg2;
- (void)useAudioTier:(id)arg1;
- (id)usedAudioPayloadForType:(int)arg1;

@end


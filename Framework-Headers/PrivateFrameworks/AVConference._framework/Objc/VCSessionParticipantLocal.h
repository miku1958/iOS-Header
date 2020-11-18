//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCSessionParticipant.h>

#import <AVConference/VCSessionUplinkVideoStreamControllerDelegate-Protocol.h>
#import <AVConference/VCVideoCaptureClient-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, VCSessionUplinkBandwidthAllocator, VCSessionUplinkVideoStreamController, VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantLocal : VCSessionParticipant <VCVideoCaptureClient, VCSessionUplinkVideoStreamControllerDelegate>
{
    VCSessionUplinkBandwidthAllocator *_uplinkBandwidthAllocator;
    NSMutableDictionary *_activeUplinkAudioStreams;
    NSMutableDictionary *_pendingActiveUplinkVideoStreams;
    BOOL _encryptionInfoReceived;
    int _shouldUpdateActiveVideoStream;
    unsigned int _currentUplinkTargetBitrate;
    struct opaqueCMSimpleQueue *_audioStreamUpdateEventQueue;
    struct opaqueCMSimpleQueue *_audioRedundancyChangeEventQueue;
    struct opaqueCMSimpleQueue *_videoRedundancyChangeEventQueue;
    unsigned int _lastSentAudioSampleTime;
    double _lastSentAudioHostTime;
    struct _opaque_pthread_rwlock_t _audioTimestampRWLock;
    unsigned char _audioPriority;
    unsigned short _connectionStatsStreamID;
    VCSessionUplinkVideoStreamController *_uplinkVideoStreamController;
    struct tagVCMediaQueue *_mediaQueue;
    unsigned int _uplinkBitrateCapWifi;
    unsigned int _uplinkBitrateCapCell;
    struct tagVCMemoryPool *_audioStreamUpdatePool;
    struct tagVCMemoryPool *_redundancyPool;
    struct tagVCMemoryPool *_videoRedundancyPool;
    _Atomic unsigned char _videoPriority;
    BOOL _shouldResize;
    BOOL _enableRedundancy;
    BOOL _enableVADFiltering;
    NSMutableArray *_peerSubscribedStreams;
    NSMutableSet *_localPublishedStreams;
    float _averageSilenceAudioPower;
    unsigned char _audioPriorityRampUp;
    unsigned char _audioPriorityDecaySlow;
    unsigned char _audioPriorityDecayFast;
    float _audioVoiceDetectionSensitivity;
    float _audioSilencePowerAverageMultiplier;
    unsigned char _forcedAudioPriorityValue;
    double _forcedAudioPriorityLastUpdateTime;
    BOOL _forcedAudioPriorityEnabled;
    VCVideoRule *_videoRule;
    BOOL _speechDetected;
    struct opaqueVCVoiceDetector *_voiceDetector;
    double _fecRatio;
    NSMutableSet *_audioPayloadTypes;
    NSMutableSet *_videoPayloadTypes;
    unsigned int _currentUplinkTotalBitrateVideo;
    unsigned int _currentUplinkTotalBitrateAudio;
}

@property (readonly, nonatomic) NSSet *audioPayloadTypes; // @synthesize audioPayloadTypes=_audioPayloadTypes;
@property (readonly, nonatomic) unsigned short connectionStatsStreamID; // @synthesize connectionStatsStreamID=_connectionStatsStreamID;
@property (readonly, nonatomic) unsigned int currentUplinkTotalBitrateAudio; // @synthesize currentUplinkTotalBitrateAudio=_currentUplinkTotalBitrateAudio;
@property (readonly, nonatomic) unsigned int currentUplinkTotalBitrateVideo; // @synthesize currentUplinkTotalBitrateVideo=_currentUplinkTotalBitrateVideo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableVADFiltering; // @synthesize enableVADFiltering=_enableVADFiltering;
@property (nonatomic) BOOL encryptionInfoReceived; // @synthesize encryptionInfoReceived=_encryptionInfoReceived;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property (copy, nonatomic) NSArray *peerSubscribedStreams; // @synthesize peerSubscribedStreams=_peerSubscribedStreams;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int uplinkBitrateCapCell; // @synthesize uplinkBitrateCapCell=_uplinkBitrateCapCell;
@property (nonatomic) unsigned int uplinkBitrateCapWifi; // @synthesize uplinkBitrateCapWifi=_uplinkBitrateCapWifi;
@property (readonly, nonatomic) NSSet *videoPayloadTypes; // @synthesize videoPayloadTypes=_videoPayloadTypes;

- (void)addCallInfoBlobToParticipantInfo:(id)arg1;
- (void)applyVideoEnabledSetting:(BOOL)arg1;
- (id)audioRuleCollectionWithAudioStreamConfig:(id)arg1;
- (void)avConferencePreviewError:(id)arg1;
- (unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg1;
- (BOOL)checkSubscribedStreamsConsistency:(id)arg1;
- (id)clientCaptureRule;
- (void)collectAudioChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)collectVideoChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (BOOL)computeMediaBlob;
- (BOOL)containsStreamWithIDSStreamID:(unsigned short)arg1;
- (BOOL)containsStreamWithSSRC:(unsigned int)arg1;
- (void)controller:(id)arg1 didChangeActiveVideoStreams:(id)arg2;
- (void)createOpaqueData;
- (BOOL)createParticipantInfo;
- (void)dealloc;
- (void)deregisterForVideoCapture;
- (void)dispatchedUpdateUplinkMediaStreamsWithTargetBitrate:(unsigned int)arg1;
- (void)enableRedundancy:(BOOL)arg1;
- (void)flushAudioEventQueue;
- (void)flushAudioRedundancyEventQueue;
- (void)flushVideoRedundancyEventQueue;
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(BOOL)arg2 powerLevelDidChange:(BOOL)arg3;
- (void)generateKeyFrameForStreamsWithNewCompoundStreamIDsWithActiveVideoStreams:(id)arg1;
- (void)generateKeyFrameWithStreamID:(unsigned short)arg1;
- (unsigned int)generateSSRC;
- (unsigned short)generateStreamID;
- (id)getAudioDumpName;
- (void)handleActiveConnectionChange:(id)arg1;
- (id)initWithIDSDestination:(id)arg1 delegate:(id)arg2 processId:(int)arg3 sessionUUID:(id)arg4;
- (void)initializeUplinkVideoStreamController;
- (BOOL)isHighPriorityAudioWithPower:(float)arg1 voiceActive:(BOOL)arg2;
- (id)multiwayAudioStreamConfigs;
- (id)multiwayVideoStreamConfigs;
- (BOOL)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)processAudioRedundancyChangeEvent;
- (void)processAudioStreamUpdateEvent;
- (void)processEventQueues;
- (void)processVideoEventQueue;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)registerForVideoCapture;
- (void)setMuted:(BOOL)arg1;
- (BOOL)setState:(unsigned int)arg1;
- (BOOL)setupAudioStreamWithConfiguration:(id)arg1;
- (BOOL)setupAudioStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2;
- (BOOL)setupAudioStreamsWithConfigProvider:(id)arg1;
- (void)setupEncodingModeWithVideoStreamConfig:(id)arg1;
- (id)setupStreamRTP:(id)arg1;
- (void)setupVideoStreamConfig:(id)arg1 initialConfiguration:(id)arg2;
- (BOOL)setupVideoStreamWithConfiguration:(id)arg1;
- (BOOL)setupVideoStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2;
- (BOOL)setupVideoStreamsWithConfigProvider:(id)arg1;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (void)start;
- (void)startVoiceActivityDetection;
- (void)stop;
- (void)stopAudioIOCompletion;
- (void)stopVoiceActivityDetection;
- (id)supportedAudioRules;
- (void)thermalLevelDidChange:(int)arg1;
- (void)updateActiveAudioStreamWithTargetBitrate:(unsigned int)arg1;
- (void)updateActiveAudioStreams:(id)arg1 allStreamIds:(id)arg2;
- (void)updateActiveVideoStreamWithTargetBitrate:(unsigned int)arg1;
- (void)updateActiveVoiceOnly;
- (void)updateAudioPriorityWithSampleBuffer:(struct opaqueVCAudioBufferList *)arg1;
- (void)updatePayloadTypesWithConfigProvider:(id)arg1;
- (void)updateStreamIDsWithActiveVideoStreams:(id)arg1;
- (void)updateSupportedAudioRules:(id)arg1;
- (void)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1;
- (void)updateUplinkTargetBitrate:(unsigned int)arg1;
- (void)updateVideoPaused:(BOOL)arg1;

@end


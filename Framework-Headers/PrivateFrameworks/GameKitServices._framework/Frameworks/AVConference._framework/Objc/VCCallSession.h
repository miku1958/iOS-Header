//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/LoopbackSocketTunnelDelegate-Protocol.h>
#import <AVConference/VCSecureDataChannelDelegate-Protocol.h>

@class GKInterfaceListener, GKRingBuffer, LoopbackIDSTunnel, LoopbackSocketTunnel, NSArray, NSCondition, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TCPTunnelClient, TimingCollection, VCAudioPayload, VCAudioTier, VCAudioTierPicker, VCBitrateArbiter, VCCallInfo, VCCallLinkCongestionDetector, VCCapabilities, VCImageAttributeRules, VCJitterBuffer, VCSecureDataChannel, VCSessionMessaging, VCTransport, VCWCMClient, VideoAttributes;
@protocol OS_dispatch_queue, OS_dispatch_source, VCCallSessionDelegate, VideoConferenceChannelQualityDelegate, VideoConferenceRealTimeChannel;

__attribute__((visibility("hidden")))
@interface VCCallSession : NSObject <VCSecureDataChannelDelegate, LoopbackSocketTunnelDelegate>
{
    NSObject<VCCallSessionDelegate> *delegate;
    VCCallInfo *localCallInfo;
    VCCallInfo *remoteCallInfo;
    long long packetMultiplexMode;
    struct tagHANDLE *rtpHandle;
    struct tagHANDLE *rtpVideo;
    int numEncodedBytes;
    int numBufferBytesAvailable;
    BOOL didUseICE;
    struct tagCONNRESULT connectionResult;
    struct tagCONNRESULT origConnectionResult;
    struct tagCONNRESULT activeConnectionResult;
    long long connectionChangeState;
    NSObject<OS_dispatch_queue> *connectionChangeQueue;
    long long state;
    NSMutableArray *audioPayloads;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    VCAudioTierPicker *audioTierPicker_AppleCalling;
    VCAudioTierPicker *audioTierPicker_FaceTime;
    VCAudioTier *currentAudioTier;
    VCAudioTier *requestedAudioTier;
    int audioTierChangeRequestCount;
    long long videoPayload;
    long long sampleRate;
    long long samplesPerFrame;
    long long blockSize;
    float blockSeconds;
    struct tagHANDLE *hSIP;
    BOOL isAudioRunning;
    BOOL isWaitingForICEResult;
    BOOL didSend200OK;
    NSObject<VideoConferenceRealTimeChannel> *rtChannel;
    LoopbackSocketTunnel *tunnel;
    struct _opaque_pthread_mutex_t mutex;
    BOOL useLoopback;
    BOOL receivedSIPInvite;
    VCImageAttributeRules *imageAttributeRules;
    int iRemoteRTPPort;
    int iRemoteRTCPPort;
    VCCapabilities *caps;
    int _deviceRole;
    struct tagHANDLE *hMediaQueue;
    struct tagHANDLE *hAFRC;
    GKRingBuffer *ringBuf;
    unsigned int lastReceived;
    char *lastInputSampleBuffer;
    char *bundleBuffer;
    int bundledPackets;
    int packetsPerBundle;
    unsigned int bundleTimestamp;
    int bundlePayload;
    int canUseSpecialAACBundle;
    int preferredAudioCodec;
    int audioTxBitrate;
    int audioHeaderSize;
    unsigned int afrcBitrate;
    unsigned int afrcDuplication;
    double audioInterval;
    BOOL useSBR;
    BOOL useControlByte;
    BOOL useUEP;
    NSDictionary *_allPayloadsLocalFeaturesString;
    NSMutableDictionary *featuresListStringDict;
    unsigned char inputMeter;
    BOOL audioIsPaused;
    struct _opaque_pthread_mutex_t pauseLock;
    NSObject<OS_dispatch_queue> *videoQueue;
    NSArray *mutedPeers;
    int bandwidthUpstream;
    int bandwidthDownstream;
    BOOL allowAudioRecording;
    int aacBlockSize;
    BOOL fInitialBandwidthDetection;
    int carrierBitrateCap;
    struct AudioStreamBasicDescription vpioFormat;
    BOOL allowAudioSwitching;
    BOOL shouldUpdateLastReceivedPacketTimestamp;
    double lastReceivedPacketTimestamp;
    BOOL isRemoteMediaStalled;
    int packetsSinceStall;
    long long relayState;
    BOOL allowsRelay;
    int pendingRelayCount;
    BOOL initialSecondaryRelaySetupDone;
    BOOL requiresWifi;
    BOOL useCompressedConnectionData;
    int natType;
    unsigned int lastSentAudioSampleTime;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    TCPTunnelClient *_tcpTunnelClient;
    LoopbackIDSTunnel *_idsTunnel;
    TimingCollection *perfTimers;
    double packetLossRate;
    double timeLastCheckedNetworkConditions;
    double timeLastKnowGoodNetworkPLR;
    double timeLastKnowGoodNetworkRTT;
    double networkConditionsTimeoutInSeconds;
    NSString *peerCN;
    NSString *sessionID;
    unsigned int roundTripTime;
    float packetLateAndMissingRatio;
    float callerPreEmptiveTimeoutInSecs;
    int sampleLogCount;
    double timeSinceLastReportedNoPackets;
    double noRemotePacketsTimeout;
    BOOL didAttemptSIPInvite;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    struct _opaque_pthread_mutex_t qualityDelegateLock;
    NSObject<OS_dispatch_queue> *qualityQueue;
    NSObject<OS_dispatch_queue> *managerQueue;
    BOOL shouldTimeoutPackets;
    struct _opaque_pthread_mutex_t srtpLock;
    BOOL didPrepareSRTP;
    BOOL useAFRC;
    BOOL isRTCPFBEnabled;
    VCCallLinkCongestionDetector *congestionDetector;
    BOOL shouldSendAudio;
    BOOL isGKVoiceChat;
    void *packetThread;
    int signalStrength;
    int signalRaw;
    int signalGrade;
    BOOL bBWEstOperatingModeInitialized;
    BOOL bBWEstNewBWEstModeEnabled;
    BOOL bBWEstFakeLargeFrameModeEnabled;
    BOOL bBWEstActiveProbingSenderLog;
    struct CGSize remoteScreenPortraitAspectRatio;
    struct CGSize remoteScreenLandscapeAspectRatio;
    struct CGSize remoteExpectedPortraitAspectRatio;
    struct CGSize remoteExpectedLandscapeAspectRatio;
    BOOL isStarted;
    NSData *srtpKeyBytes;
    BOOL isInitiator;
    BOOL sentClientSuccessfulDidStart;
    double videoThrottlingTimeout;
    unsigned int awdCallNonce;
    VCSessionMessaging *messaging;
    BOOL isCurrentNetworkBad;
    BOOL requestedTimeoutRelay;
    unsigned int callSessionBitrate;
    NSObject<OS_dispatch_queue> *cellTechQueue;
    NSObject<OS_dispatch_source> *cellTechChangeSource;
    VCBitrateArbiter *callSessionBitrateArbiter;
    NSObject<OS_dispatch_source> *connectionTimeoutSource;
    unsigned short maxPacketLength;
    double lastTierSwitch;
    BOOL audioTierHysteresis;
    long long initialSentBytes;
    long long initialReceivedBytes;
    VCJitterBuffer *vcJitterBuffer;
    struct tagHANDLE *hVideoReceiver;
    struct tagHANDLE *hVideoTransmitter;
    BOOL remoteSupportsVisibleRect;
    BOOL remoteSupportsExpectedAspectRatio;
    BOOL canLocalResizePIP;
    BOOL canRemoteResizePIP;
    BOOL receivedFirstRemoteFrame;
    int fecMode;
    NSObject<OS_dispatch_source> *sessionHealthMonitor;
    VideoAttributes *remoteVideoAttributes;
    double lastVideoQualityNotificationUpdate;
    unsigned int remoteFrameWidth;
    unsigned int remoteFrameHeight;
    GKInterfaceListener *interfaceListener;
    VCWCMClient *vcWCMClient;
    NSCondition *connectionDataTimeoutCondVar;
    VCTransport *transport;
    struct OpaqueVTPixelTransferSession *hdTransferSession;
    struct __CVPixelBufferPool *hdBufferPool;
    struct CGSize expectedDecodeSize;
    struct opaqueRTCReporting *reportingAgent;
    int reportUpdateInterval;
    int reportReportFrequency;
    BOOL enableAFRCDump;
    int operatingMode;
    unsigned int receivedAudioBytes;
    unsigned int sentAudioBytes;
    unsigned int totalTxAudioBytes;
    unsigned int estimateTxAudioBytes;
    unsigned int audioFrameCounter;
    unsigned int silenceFrameCounter;
    unsigned int vadSegmentCounter;
    BOOL lastIsTalking;
    double lastVCLogCallbackTime;
    struct SKEStateOpaque *skeState;
    struct __CFData *secretKey;
    VCSecureDataChannel *secureDataChannel;
    NSString *basebandCodecType;
    NSNumber *basebandCodecSampleRate;
    BOOL _didSendBasebandCodec;
    unsigned int dwRTT_ice;
    NSObject<OS_dispatch_queue> *timestampQueue;
    BOOL shouldSendBlackFrame;
    NSObject<OS_dispatch_source> *relaySetupTimer;
    unsigned int _peerProtocolVersion;
}

@property struct tagCONNRESULT activeConnectionResult; // @synthesize activeConnectionResult;
@property (readonly) BOOL audioIsPaused; // @synthesize audioIsPaused;
@property (readonly, nonatomic) int audioTierAudioBitrate;
@property (readonly, nonatomic) int audioTierNetworkBitrate;
@property (readonly, nonatomic) int audioTierPacketsPerBundle;
@property (readonly, nonatomic) int audioTierPayload;
@property (readonly, nonatomic) int audioTxBitrate; // @synthesize audioTxBitrate;
@property int bandwidthDownstream; // @synthesize bandwidthDownstream;
@property int bandwidthUpstream; // @synthesize bandwidthUpstream;
@property (strong, nonatomic) NSNumber *basebandCodecSampleRate; // @synthesize basebandCodecSampleRate;
@property (copy, nonatomic) NSString *basebandCodecType; // @synthesize basebandCodecType;
@property int bundledPackets; // @synthesize bundledPackets;
@property (strong) VCCapabilities *capabilities;
@property long long connectionChangeState; // @synthesize connectionChangeState;
@property struct tagCONNRESULT connectionResult; // @synthesize connectionResult;
@property (readonly, nonatomic) VCAudioPayload *currentAudioPayload; // @synthesize currentAudioPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (strong) NSObject<VCCallSessionDelegate> *delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property int deviceRole; // @synthesize deviceRole=_deviceRole;
@property BOOL didUseICE; // @synthesize didUseICE;
@property (readonly, nonatomic) NSDictionary *dtxMetrics;
@property struct tagHANDLE *hAFRC; // @synthesize hAFRC;
@property struct tagHANDLE *hMediaQueue; // @synthesize hMediaQueue;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VCImageAttributeRules *imageAttributeRules; // @synthesize imageAttributeRules;
@property BOOL initialSecondaryRelaySetupDone; // @synthesize initialSecondaryRelaySetupDone;
@property unsigned char inputMeter; // @synthesize inputMeter;
@property (readonly) BOOL isAudioRunning; // @synthesize isAudioRunning;
@property (readonly, nonatomic) BOOL isCaller;
@property BOOL isGKVoiceChat;
@property (nonatomic) BOOL isRTCPFBEnabled; // @synthesize isRTCPFBEnabled;
@property (readonly) BOOL isRemoteMediaStalled; // @synthesize isRemoteMediaStalled;
@property (readonly) BOOL isSKEOptimizationEnabled;
@property (nonatomic) BOOL isStarted; // @synthesize isStarted;
@property (readonly) BOOL isVideoRunning;
@property BOOL isWaitingForICEResult; // @synthesize isWaitingForICEResult;
@property unsigned int lastReceived; // @synthesize lastReceived;
@property (nonatomic) unsigned int lastSentAudioSampleTime; // @synthesize lastSentAudioSampleTime;
@property unsigned short maxPacketLength; // @synthesize maxPacketLength;
@property (strong, nonatomic) NSArray *mutedPeers; // @synthesize mutedPeers;
@property (nonatomic) int natType; // @synthesize natType;
@property (nonatomic) double networkConditionsTimeoutInSeconds; // @synthesize networkConditionsTimeoutInSeconds;
@property (readonly) double networkQuality;
@property int numBufferBytesAvailable; // @synthesize numBufferBytesAvailable;
@property int numEncodedBytes; // @synthesize numEncodedBytes;
@property (nonatomic) int operatingMode; // @synthesize operatingMode;
@property struct tagCONNRESULT origConnectionResult; // @synthesize origConnectionResult;
@property (nonatomic) float packetLateAndMissingRatio; // @synthesize packetLateAndMissingRatio;
@property (nonatomic) double packetLossRate; // @synthesize packetLossRate;
@property int packetsPerBundle;
@property (copy, nonatomic) NSString *peerCN; // @synthesize peerCN;
@property int pendingRelayCount; // @synthesize pendingRelayCount;
@property int preferredAudioCodec; // @synthesize preferredAudioCodec;
@property NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
@property BOOL receivedSIPInvite; // @synthesize receivedSIPInvite;
@property unsigned int remoteFrameHeight; // @synthesize remoteFrameHeight;
@property unsigned int remoteFrameWidth; // @synthesize remoteFrameWidth;
@property (strong, nonatomic) VideoAttributes *remoteVideoAttributes; // @synthesize remoteVideoAttributes;
@property (nonatomic) BOOL requiresWifi; // @synthesize requiresWifi;
@property (strong, nonatomic) GKRingBuffer *ringBuf; // @synthesize ringBuf;
@property (nonatomic) unsigned int roundTripTime; // @synthesize roundTripTime;
@property NSObject<VideoConferenceRealTimeChannel> *rtChannel; // @synthesize rtChannel;
@property struct tagHANDLE *rtpHandle; // @synthesize rtpHandle;
@property long long sampleRate; // @synthesize sampleRate;
@property (copy, nonatomic) NSString *sessionID; // @synthesize sessionID;
@property (nonatomic) BOOL shouldSendAudio; // @synthesize shouldSendAudio;
@property BOOL shouldTimeoutPackets; // @synthesize shouldTimeoutPackets;
@property (nonatomic) int signalGrade; // @synthesize signalGrade;
@property (nonatomic) int signalRaw; // @synthesize signalRaw;
@property (nonatomic) int signalStrength; // @synthesize signalStrength;
@property (strong) NSData *srtpKeyBytes; // @synthesize srtpKeyBytes;
@property long long state; // @synthesize state;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useAFRC; // @synthesize useAFRC;
@property (nonatomic) BOOL useCompressedConnectionData; // @synthesize useCompressedConnectionData;
@property BOOL useControlByte; // @synthesize useControlByte;
@property BOOL useUEP; // @synthesize useUEP;
@property (readonly) VCJitterBuffer *vcJitterBuffer; // @synthesize vcJitterBuffer;
@property (readonly) BOOL videoIsPaused;
@property long long videoPayload; // @synthesize videoPayload;

+ (id)keyPathsForValuesAffectingNetworkQuality;
- (int)Conference_SetBWEstMode:(BOOL)arg1 bFakeLargeFrameMode:(BOOL)arg2;
- (id)addAudioPayload:(int)arg1;
- (void)adjustBitrateForConnectionType;
- (id)allPayloadsLocalFeaturesString;
- (BOOL)allocateBundleBuffer;
- (BOOL)allocateLastInputSampleBuffer;
- (BOOL)allowAdditionalConnection:(unsigned int)arg1;
- (int)applyFeaturesListStringForPayload:(int)arg1;
- (unsigned int)audioCapForConnectionResult:(const struct tagCONNRESULT *)arg1;
- (unsigned int)audioRTPID;
- (int)bundleAndSendSamples:(char *)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hasNewSamples:(BOOL)arg6;
- (BOOL)bundleAudio:(void *)arg1 withPayload:(int)arg2 numInputBytes:(int)arg3;
- (long long)calculateSIPEndAction:(BOOL)arg1 currentState:(long long)arg2 error:(id)arg3;
- (void)callAlarmsWithRTPTimeStamp:(unsigned int)arg1;
- (unsigned int)callID;
- (id)callMetadata;
- (BOOL)canNegotiateVideoPayload:(int)arg1 forConnectionResult:(struct tagCONNRESULT *)arg2;
- (void)cancelConnectionTimeoutTimer;
- (BOOL)chooseAudioNetworkBitrate;
- (BOOL)chooseDTXPayloads:(int *)arg1 count:(int)arg2;
- (BOOL)choosePayload:(int *)arg1 count:(int)arg2;
- (BOOL)chooseSecondaryPayloads:(int *)arg1 count:(int)arg2;
- (BOOL)chooseVideoPayload:(int *)arg1 count:(int)arg2 forConnectionResult:(struct tagCONNRESULT *)arg3;
- (BOOL)chooseVideoPayloadForInterface:(int)arg1 connectionResult:(struct tagCONNRESULT *)arg2;
- (void)cleanupMedia;
- (unsigned int)codecBitmapForPayloads:(int *)arg1 count:(int)arg2;
- (unsigned int)connectionResultCallback:(struct tagCONNRESULT *)arg1 didReceiveICEPacket:(BOOL)arg2 didUseRelay:(BOOL)arg3 secretKey:(struct __CFData *)arg4 skeResult:(int)arg5;
- (void)connectionResultFromSIP:(struct tagSIPCallbackData *)arg1;
- (unsigned int)connectionType;
- (BOOL)createConnectionDataForParticipantID:(id)arg1 pCallID:(unsigned int *)arg2 nonCellularCandidateTimeout:(double)arg3 error:(id *)arg4 useRelay:(BOOL)arg5;
- (BOOL)createIDSTunnelWithSocket:(int)arg1 error:(id *)arg2;
- (id)createInitiateRelayDictionary;
- (id)createInitiateRelayDictionaryForCall:(unsigned int)arg1 primaryConnection:(struct tagCONNRESULT *)arg2;
- (id)createLocalFeaturesString;
- (BOOL)createMediaQueueHandle:(id *)arg1;
- (BOOL)createRTPHandles:(id *)arg1;
- (id)createRelayUpdateDictionary:(id)arg1;
- (BOOL)createSDP:(int *)arg1 audioPayloadCount:(int)arg2 secondaryPayloadTypes:(int *)arg3 secondaryPayloadCount:(int)arg4 videoPayloadTypes:(int *)arg5 videoPayloadCount:(int)arg6 localFeaturesList:(id)arg7 answerBandwidth:(int)arg8 maxBandwidth:(int)arg9 imageSizesSend:(struct imageTag **)arg10 imageSendCount:(int *)arg11 imageSizesRecv:(struct imageTag **)arg12 imageRecvCount:(int *)arg13 sdp:(char *)arg14 numSDPBytes:(int *)arg15 error:(id *)arg16;
- (id)createSKEBlobWithRemoteSKEBlob:(id)arg1;
- (void)createSecondaryRelayDispatchTimer:(float)arg1 callID:(unsigned int)arg2 callerRequired:(BOOL)arg3;
- (BOOL)createTCPTunnelForParticipantID:(id)arg1 relayDictionary:(id)arg2 didOriginateRequest:(BOOL)arg3 relayType:(unsigned char)arg4 error:(id *)arg5;
- (void)dealloc;
- (void)deleteIDSTunnel;
- (void)deleteTCPTunnel;
- (id)deriveAspectRatioFLS;
- (void)destroySecondaryRelayDispatchTimer;
- (void)disableSessionHealthMonitor;
- (BOOL)disconnect:(id)arg1 didRemoteCancel:(BOOL)arg2;
- (void)disconnectWithNoRemotePackets:(long long)arg1;
- (void)disconnectWithNoRemotePackets:(long long)arg1 timeoutUsed:(double)arg2;
- (BOOL)doBandwidthDetection:(struct tagHANDLE *)arg1 error:(id *)arg2;
- (void)doSipEndAction:(int)arg1 callID:(unsigned int)arg2 error:(id)arg3;
- (void)doSipEndProc:(id)arg1;
- (BOOL)doesVideoPayloadMatchRemoteImageAttributeRules:(id)arg1;
- (void)enableAudio:(BOOL)arg1;
- (void)enableSessionHealthMonitor;
- (int)encodeAudio:(void *)arg1 numInputBytes:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4 withPayload:(int *)arg5 isTalking:(BOOL)arg6;
- (BOOL)evaluateEnableRRxForConnectioResult:(struct tagCONNRESULT *)arg1 useCellular:(int *)arg2;
- (BOOL)findFeatureString:(const char *)arg1 value:(char *)arg2 valueLength:(unsigned long long)arg3 withPrefix:(const char *)arg4;
- (int)generateConnectionData:(char **)arg1 forCallID:(unsigned int)arg2 connectionDataSize:(int *)arg3 nonCellularCandidateTimeout:(double)arg4;
- (int)getAllCompatibleVideoPayloads:(int **)arg1;
- (void)getAllPayloadsForAudio:(int **)arg1 count:(int *)arg2 secondaryPayloads:(int **)arg3 secondaryCount:(int *)arg4;
- (void)getAllPayloadsForVideo:(int **)arg1 count:(int *)arg2;
- (id)getCompatibleLocalFeaturesListForPayloads:(int *)arg1 count:(int)arg2;
- (void)getDecodePayloads:(int **)arg1 numPayloads:(int *)arg2 withPayload:(int)arg3 secondaryPayloads:(int *)arg4 numSecondaryPayloads:(int)arg5;
- (id)getFeaturesListStringForPayload:(int)arg1;
- (BOOL)getForcedPayload:(int *)arg1;
- (BOOL)getRealAudioTxBitrate:(unsigned short *)arg1 RxBitrate:(unsigned short *)arg2 duplication:(unsigned short *)arg3;
- (id)getVideoRuleForVideoMode:(unsigned long long)arg1 interface:(int)arg2;
- (void)getVideoSettings:(int)arg1 forInterface:(int)arg2 width:(int *)arg3 height:(int *)arg4 framerate:(int *)arg5 bitRate:(int *)arg6;
- (void)handleCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;
- (void)handleDuplication:(BOOL)arg1;
- (int)handleIncomingWithCallID:(unsigned int)arg1 msgIn:(const char *)arg2 msgOut:(char *)arg3 optional:(void *)arg4 confIndex:(int *)arg5 error:(id *)arg6;
- (void)handlePendingPrimaryConnectionChange;
- (void)handlePrimaryConnChange:(struct tagCONNRESULT *)arg1 oldResult:(struct tagCONNRESULT *)arg2;
- (BOOL)handshakeComplete:(struct SSLContext *)arg1 withError:(struct __CFError **)arg2;
- (double)iceTimeoutInSeconds:(BOOL)arg1;
- (id)init;
- (id)initWithDeviceRole:(int)arg1;
- (void)initWithRelevantStorebagEntries;
- (BOOL)initializeVideoReceiver:(id *)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;
- (BOOL)initializeVideoTransmitter:(id *)arg1 encodeRule:(id)arg2 unpausing:(BOOL)arg3 reportingAgent:(struct opaqueRTCReporting *)arg4;
- (void)initiateRelayRequest;
- (int)interfaceForConnectionResult:(struct tagCONNRESULT *)arg1;
- (id)inviteDataForParticipantID:(id)arg1 callID:(unsigned int *)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id *)arg5;
- (void)inviteeICEResultTimer:(float)arg1 shouldBailIfRelay:(BOOL)arg2;
- (BOOL)is3GCall;
- (BOOL)isBetterForIncomingSIPThanOtherSession:(id)arg1 result:(struct tagCONNRESULT *)arg2;
- (BOOL)isCallOngoing;
- (BOOL)isValidVideoPayloadOverride:(id)arg1;
- (void)launchDeadlineExitTimer;
- (id)localParticipantID;
- (void)lock;
- (void)logConnectionSuccess;
- (void)logConnectionType:(int)arg1;
- (void)logDetailedNetworkInformation;
- (void)logIdentity:(struct __SecIdentity *)arg1;
- (void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(struct tagIPPORT *)arg3;
- (int)mapPacketMultiplexModeToRTPMode:(long long)arg1;
- (int)mapPacketMultiplexModeToSIPMode:(long long)arg1;
- (const char *)matchedFeaturesStringForPayload:(int)arg1;
- (unsigned int)maxBitrateForConnectionType;
- (void)negotiateFeaturesString:(id)arg1 forPayload:(int)arg2;
- (BOOL)negotiateMaxBandwidth:(int *)arg1;
- (BOOL)negotiatePayloads:(int **)arg1 numPayloads:(int *)arg2 withError:(id *)arg3;
- (void)networkStateDidChange;
- (id)newRemoteScreenAttributesForOrientation:(int)arg1;
- (float)nextAudioInterval:(int)arg1;
- (void)notifyDelegateAndEndCall:(long long)arg1 didRemoteCancel:(BOOL)arg2 error:(id)arg3;
- (void)notifyDelegateSessionStarted;
- (void)notifyDelegateToCancelRelay;
- (BOOL)onCaptureFrame:(struct __CVBuffer *)arg1 audioTS:(unsigned int)arg2 audioHT:(double)arg3 videoHT:(double)arg4 droppedFrames:(int)arg5 cameraBits:(unsigned char)arg6;
- (void)onPlayVideo:(struct __CVBuffer *)arg1 frameTime:(CDStruct_198678f7)arg2 cameraStatusBits:(unsigned char)arg3;
- (id)pickFeaturesStringForPayload:(int)arg1 featuresListDict:(id)arg2 remote:(BOOL)arg3;
- (BOOL)prepareSRTPWithError:(id *)arg1;
- (void)processBlackFrame:(struct __CVBuffer *)arg1;
- (void)processCancelRelayRequest:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processRelayRequestResponseDict:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processRelayUpdateDict:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processRemoteIPChange:(id)arg1 callID:(unsigned int)arg2;
- (void)processRemoteIPChange:(char *)arg1 dataLength:(int)arg2 callID:(unsigned int)arg3 remoteCandidateVersion:(unsigned short)arg4;
- (void)processResolutionChangeToVideoRule:(id)arg1 captureRule:(id)arg2 featuresListString:(id)arg3;
- (void)processSIPMessage:(char *)arg1 msgOut:(char *)arg2 optional:(void *)arg3 confIndex:(int *)arg4;
- (BOOL)pullAudioSamples:(char *)arg1 timestamp:(unsigned int *)arg2 byteCount:(int *)arg3 sampleCount:(int *)arg4 sampleRate:(int *)arg5 receivedBytes:(int *)arg6 lastReceivedAudioTime:(double *)arg7 padding:(char *)arg8 paddingLength:(char *)arg9 silence:(int *)arg10;
- (void)rcvdFirstRemoteFrame;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned int)arg2;
- (id)remoteParticipantID;
- (void)remotePauseDidChangeToState:(BOOL)arg1 forVideo:(BOOL)arg2;
- (void)reportDashboardEndResult;
- (void)resetICETimeoutToLongTimeout;
- (void)resetLoopback;
- (void)resetState;
- (void)resetVideoRulesForConnectionResult:(struct tagCONNRESULT *)arg1 interface:(int)arg2 videoReportingDictionary:(id)arg3;
- (BOOL)resultMatchesIPInRemoteConnectionData:(struct tagCONNRESULT *)arg1;
- (struct __SecIdentity *)retrieveIdentity;
- (id)retrieveRawFeaturesString;
- (int)rtcpDescriptor;
- (void)schedulePrimaryConnectionChange:(struct tagCONNRESULT *)arg1 oldResult:(struct tagCONNRESULT *)arg2;
- (void)sendARPLData:(id)arg1 toCallID:(unsigned int)arg2;
- (int)sendAudioBundle:(BOOL)arg1 atTimeStamp:(unsigned int)arg2 nextInterval:(float)arg3;
- (int)sendAudioHeartbeat:(unsigned int)arg1;
- (void)sendBasebandCodecMessage;
- (void)sendCallingModeMessage;
- (void)sendData:(id)arg1 encrypted:(BOOL)arg2;
- (BOOL)sendSIPInviteWithError:(id *)arg1;
- (void)sendThreadedAudio:(struct tagEncodedAudio *)arg1 buffer:(char *)arg2 bufferSize:(unsigned int)arg3;
- (void)sendTimings;
- (double)sessionReceivingBitrate;
- (double)sessionReceivingFramerate;
- (double)sessionTransmittingBitrate;
- (double)sessionTransmittingFramerate;
- (void)setLocalIdentityForKeyExchange;
- (BOOL)setMatchedFeaturesString:(char *)arg1 localFeaturesString:(id)arg2 remoteFeaturesString:(id)arg3;
- (BOOL)setPauseAudio:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setPauseAudio:(BOOL)arg1 force:(BOOL)arg2 error:(id *)arg3;
- (BOOL)setPauseVideo:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setPauseVideo:(BOOL)arg1 force:(BOOL)arg2 error:(id *)arg3;
- (void)setPeerProtocolVersion:(unsigned int)arg1;
- (BOOL)setRTPDestinationWithError:(id *)arg1;
- (BOOL)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;
- (void)setSessionConferenceState:(unsigned int)arg1 callID:(unsigned int)arg2;
- (void)setSessionConferenceVisualRectangle:(struct CGRect)arg1 callID:(unsigned int)arg2;
- (void)setupAACELDPayload:(int)arg1;
- (BOOL)setupAudioCodecWithPayload:(int)arg1;
- (BOOL)setupAudioCookies;
- (BOOL)setupAudioEncoders;
- (void)setupAudioHeaderSize;
- (void)setupAudioOnOffStateMessages;
- (void)setupAudioPauseMessages;
- (void)setupAudioPausedHBMessages;
- (BOOL)setupAudioTierPicker;
- (void)setupBasebandCodecInfoMessages;
- (void)setupBitrateNegotation;
- (BOOL)setupCallerRTPChannelWithError:(id *)arg1;
- (void)setupCallingModeMessages;
- (void)setupCellTechChangeMessages;
- (void)setupConnectionTimeoutTimerWithErrorCode:(int)arg1 detailedCode:(int)arg2 description:(id)arg3 reason:(id)arg4;
- (void)setupDTLSDefaults;
- (void)setupEncryptionWithKey:(const struct __CFData **)arg1 confIndex:(int *)arg2;
- (void)setupHandoverCandidateChangeMessage;
- (void)setupInitialSecondaryRelayWithCallbackRelayFlag:(BOOL)arg1 callID:(unsigned int)arg2;
- (void)setupLoopback;
- (void)setupMessaging;
- (void)setupNonConnectionCheckCall;
- (void)setupPeerInfo:(id)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 capabilities:(id)arg4;
- (void)setupPiPStateChangeMessage;
- (void)setupSecondaryRelayForCall:(unsigned int)arg1 callerRequired:(BOOL)arg2;
- (void)setupTransport;
- (void)setupVideoPauseMessages;
- (BOOL)shouldNotifyDelegateDidStartBeforeAudioSetup;
- (void)shouldSendBlackFrame:(BOOL)arg1;
- (void)shutdownVoiceChatFromRemoteSIPSignal:(int)arg1;
- (int)sipCallback:(int)arg1 callID:(unsigned int)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void *)arg5 confIndex:(int *)arg6;
- (void)sipConnectThreadProc:(id)arg1;
- (BOOL)sipConnectWithError:(id *)arg1;
- (BOOL)startAFRC:(id *)arg1;
- (void)startAWDStats;
- (void)startAudioIOWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingBlob:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 useRelay:(BOOL)arg6 error:(id *)arg7;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 error:(id *)arg7;
- (BOOL)startMediaQueue:(id *)arg1;
- (void)startPausedHeartbeat;
- (BOOL)startRTPWithError:(id *)arg1;
- (BOOL)startVideo:(BOOL)arg1 error:(id *)arg2;
- (BOOL)startVideoReceive:(id *)arg1;
- (BOOL)startVideoSend:(BOOL)arg1 error:(id *)arg2;
- (BOOL)stillWantsToRelay;
- (BOOL)stopAFRC:(id *)arg1;
- (void)stopAudio;
- (void)stopAudioIO:(CDUnknownBlockType)arg1;
- (void)stopAudioIOProc:(id)arg1;
- (void)stopLoopback;
- (void)stopLoopbackProc:(id)arg1;
- (BOOL)stopMediaQueue:(id *)arg1;
- (void)stopPausedHeartbeat;
- (BOOL)stopVideo:(BOOL)arg1 error:(id *)arg2;
- (BOOL)stopVideoReceive:(id *)arg1;
- (BOOL)stopVideoSend:(BOOL)arg1 error:(id *)arg2;
- (void)timeoutUnfinishedConnection;
- (BOOL)treatAsCellular;
- (void)triggerInterfaceChange;
- (void)unlock;
- (void)updateAudioTxBitrate;
- (void)updateDeviceRole:(int)arg1;
- (void)updateLastReceivedAudioTime;
- (void)updateLastReceivedPacket:(BOOL)arg1;
- (void)updateLastReceivedPacketWithTimestamp:(double)arg1;
- (void)updateMaxPktLength:(struct tagCONNRESULT *)arg1;
- (void)updateNetworkCheckHint:(double)arg1;
- (void)updateQOS;
- (void)updateRemoteMediaStallState:(double)arg1;
- (void)updateVideoQualityNotification:(double)arg1;
- (void)updateVideoQualityStatus:(double)arg1 bitrate:(double)arg2 time:(double)arg3 isRemote:(BOOL)arg4;
- (void)useAudioPayload:(id)arg1 withBitrate:(unsigned int)arg2;
- (void)useAudioTier:(id)arg1;
- (void)vcSecureDataChannel:(id)arg1 receivedData:(id)arg2;
- (unsigned int)videoRTPID;
- (void)wcmGetCallConfig:(unsigned int *)arg1 targetBitrate:(unsigned int *)arg2;
- (void)wcmSetCallConfig:(unsigned int)arg1 interferenceLevel:(unsigned int)arg2;

@end


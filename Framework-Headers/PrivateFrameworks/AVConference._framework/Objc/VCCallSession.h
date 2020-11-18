//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/AVCRateControllerDelegate-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCCaptionsReceiverDelegate-Protocol.h>
#import <AVConference/VCSecureDataChannelDelegate-Protocol.h>
#import <AVConference/VCTransportSessionLegacyDelegate-Protocol.h>

@class AVCRateController, GKRingBuffer, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TimingCollection, VCAudioPayload, VCAudioTransmitter, VCBitrateArbiter, VCCallInfo, VCCallLinkCongestionDetector, VCCapabilities, VCCaptionsReceiver, VCConnectionManager, VCImageAttributeRules, VCMediaNegotiator, VCRateControlMediaController, VCSecureDataChannel, VCSessionMessaging, VCTransportSession, VCWCMClient, VideoAttributes, WRMClient;
@protocol OS_dispatch_queue, OS_dispatch_source, VCCallSessionDelegate, VCConnectionProtocol, VideoConferenceChannelQualityDelegate;

__attribute__((visibility("hidden")))
@interface VCCallSession : NSObject <VCSecureDataChannelDelegate, VCCaptionsReceiverDelegate, VCTransportSessionLegacyDelegate, AVCRateControllerDelegate, VCAudioIOSink>
{
    NSObject<VCCallSessionDelegate> *delegate;
    VCCallInfo *localCallInfo;
    VCCallInfo *remoteCallInfo;
    long long packetMultiplexMode;
    struct tagHANDLE *rtpHandle;
    struct tagHANDLE *rtpVideo;
    void *videoMediaControlInfoGenerator;
    void *audioMediaControlInfoGenerator;
    VCConnectionManager *connectionManager;
    long long connectionChangeState;
    id<VCConnectionProtocol> toBeChangedPrimaryConnection;
    VCMediaNegotiator *_mediaNegotiator;
    NSObject<OS_dispatch_queue> *connectionChangeQueue;
    long long state;
    long long _sipState;
    NSMutableArray *negotiatedAudioPayloads;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    int _currentRedPayloadType;
    BOOL _isRedEnabled;
    long long videoPayload;
    long long screenPayload;
    long long sampleRate;
    long long samplesPerFrame;
    struct tagHANDLE *hSIP;
    BOOL isAudioRunning;
    BOOL isWaitingForICEResult;
    BOOL didSend200OK;
    struct _opaque_pthread_mutex_t mutex;
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
    int preferredAudioCodec;
    BOOL useSBR;
    BOOL useControlByte;
    BOOL useUEP;
    NSDictionary *_allPayloadsLocalFeaturesString;
    NSMutableDictionary *featuresListStringDict;
    BOOL audioIsPaused;
    struct _opaque_pthread_mutex_t pauseLock;
    NSObject<OS_dispatch_queue> *videoQueue;
    NSObject<OS_dispatch_queue> *videoAsyncQueue;
    NSObject<OS_dispatch_queue> *audioQueue;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    NSArray *mutedPeers;
    int bandwidthUpstream;
    int bandwidthDownstream;
    BOOL allowAudioRecording;
    int aacBlockSize;
    BOOL _isUseCaseWatchContinuity;
    int carrierBitrateCap;
    struct AudioStreamBasicDescription vpioFormat;
    BOOL allowAudioSwitching;
    BOOL shouldUpdateLastReceivedPacketTimestamp;
    double lastReceivedPacketTimestamp;
    BOOL isRemoteMediaStalled;
    int packetsSinceStall;
    int natType;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
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
    int sampleLogCount;
    double timeSinceLastReportedNoPackets;
    double noRemotePacketsTimeout;
    BOOL previousNoRemoteInProgress;
    BOOL didAttemptSIPInvite;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    struct _opaque_pthread_mutex_t qualityDelegateLock;
    NSObject<OS_dispatch_queue> *qualityQueue;
    BOOL shouldTimeoutPackets;
    struct _opaque_pthread_mutex_t srtpLock;
    BOOL didPrepareSRTP;
    BOOL useAFRC;
    BOOL isRTCPFBEnabled;
    VCCallLinkCongestionDetector *congestionDetector;
    BOOL shouldSendAudio;
    BOOL isGKVoiceChat;
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
    unsigned int callSessionBitrate;
    NSObject<OS_dispatch_queue> *cellTechQueue;
    NSObject<OS_dispatch_source> *cellTechChangeSource;
    VCBitrateArbiter *callSessionBitrateArbiter;
    NSObject<OS_dispatch_source> *connectionTimeoutSource;
    NSObject<OS_dispatch_source> *firstRemoteFrameTimemoutSource;
    unsigned short maxPacketLength;
    long long initialSentBytes;
    long long initialReceivedBytes;
    struct tagVCAudioReceiver *audioReceiver;
    VCAudioTransmitter *audioTransmitter;
    VCCaptionsReceiver *_captionsReceiver;
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
    VCWCMClient *vcWCMClient;
    WRMClient *vcWRMClient;
    BOOL iRATSuggestionEnabled;
    struct OpaqueVTPixelTransferSession *hdTransferSession;
    struct __CVPixelBufferPool *hdBufferPool;
    struct CGSize expectedDecodeSize;
    struct opaqueRTCReporting *reportingAgent;
    int reportUpdateInterval;
    int reportReportFrequency;
    BOOL didReportNoRemotePackets;
    BOOL didReportLongConnectionTime;
    BOOL didReportAudioStall;
    BOOL enableAFRCDump;
    unsigned int awdTime;
    int operatingMode;
    struct SKEStateOpaque *skeState;
    struct __CFData *secretKey;
    VCSecureDataChannel *secureDataChannel;
    NSString *basebandCodecType;
    NSNumber *basebandCodecSampleRate;
    BOOL _didSendBasebandCodec;
    unsigned int dwRTT_ice;
    NSObject<OS_dispatch_queue> *timestampQueue;
    BOOL shouldSendBlackFrame;
    unsigned int _peerProtocolVersion;
    struct tagWRMMetricsInfo *wrmInfo;
    BOOL _inviteDataRequested;
    unsigned int _transportType;
    VCTransportSession *_transportSession;
    BOOL _cleanupDone;
    BOOL _isLocalCellular_LowestConnectionQuality;
    BOOL _isRemoteCellular_LowestConnectionQuality;
    BOOL _isConnectedOnIPv6_LowestConnectionQuality;
    AVCRateController *_rateController;
    VCRateControlMediaController *_mediaController;
    void *_callLogFile;
}

@property (readonly) BOOL audioIsPaused; // @synthesize audioIsPaused;
@property (readonly) struct tagVCAudioReceiver *audioReceiver; // @synthesize audioReceiver;
@property (readonly, nonatomic) int audioTierAudioCodecBitrate;
@property (readonly, nonatomic) int audioTierNetworkBitrate;
@property (readonly, nonatomic) int audioTierPacketsPerBundle;
@property (readonly, nonatomic) int audioTierPayload;
@property (readonly, nonatomic) int audioTierRedNumPayloads;
@property int bandwidthDownstream; // @synthesize bandwidthDownstream;
@property int bandwidthUpstream; // @synthesize bandwidthUpstream;
@property (strong, nonatomic) NSNumber *basebandCodecSampleRate; // @synthesize basebandCodecSampleRate;
@property (copy, nonatomic) NSString *basebandCodecType; // @synthesize basebandCodecType;
@property (readonly) int bundledPackets;
@property (strong) VCCapabilities *capabilities;
@property long long connectionChangeState; // @synthesize connectionChangeState;
@property (strong) VCConnectionManager *connectionManager; // @synthesize connectionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (strong) NSObject<VCCallSessionDelegate> *delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property int deviceRole; // @synthesize deviceRole=_deviceRole;
@property BOOL didSend200OK; // @synthesize didSend200OK;
@property (readonly, nonatomic) NSDictionary *dtxMetrics;
@property struct tagHANDLE *hAFRC; // @synthesize hAFRC;
@property struct tagHANDLE *hMediaQueue; // @synthesize hMediaQueue;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VCImageAttributeRules *imageAttributeRules; // @synthesize imageAttributeRules;
@property unsigned char inputMeter;
@property (readonly) BOOL isAudioRunning; // @synthesize isAudioRunning;
@property (readonly, nonatomic) BOOL isCaller;
@property (readonly) BOOL isCurrentPayloadTypeValid;
@property BOOL isGKVoiceChat;
@property (nonatomic) BOOL isRTCPFBEnabled; // @synthesize isRTCPFBEnabled;
@property (readonly) BOOL isRemoteMediaStalled; // @synthesize isRemoteMediaStalled;
@property (readonly) BOOL isSKEOptimizationEnabled;
@property (nonatomic) BOOL isStarted; // @synthesize isStarted;
@property (readonly) BOOL isVideoRunning;
@property BOOL isWaitingForICEResult; // @synthesize isWaitingForICEResult;
@property unsigned int lastReceived; // @synthesize lastReceived;
@property (readonly) unsigned int lastSentAudioSampleTime;
@property (readonly) VCCallInfo *localCallInfo; // @synthesize localCallInfo;
@property unsigned short maxPacketLength; // @synthesize maxPacketLength;
@property (strong, nonatomic) NSArray *mutedPeers; // @synthesize mutedPeers;
@property (nonatomic) int natType; // @synthesize natType;
@property (nonatomic) double networkConditionsTimeoutInSeconds; // @synthesize networkConditionsTimeoutInSeconds;
@property (readonly) double networkQuality;
@property (readonly) int numBufferBytesAvailable;
@property (nonatomic) int operatingMode; // @synthesize operatingMode;
@property (nonatomic) float packetLateAndMissingRatio; // @synthesize packetLateAndMissingRatio;
@property (nonatomic) double packetLossRate; // @synthesize packetLossRate;
@property int packetsPerBundle;
@property (copy, nonatomic) NSString *peerCN; // @synthesize peerCN;
@property int preferredAudioCodec; // @synthesize preferredAudioCodec;
@property NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
@property BOOL receivedSIPInvite; // @synthesize receivedSIPInvite;
@property unsigned int remoteFrameHeight; // @synthesize remoteFrameHeight;
@property unsigned int remoteFrameWidth; // @synthesize remoteFrameWidth;
@property (strong, nonatomic) VideoAttributes *remoteVideoAttributes; // @synthesize remoteVideoAttributes;
@property (nonatomic) BOOL requiresWifi;
@property (strong, nonatomic) GKRingBuffer *ringBuf; // @synthesize ringBuf;
@property (nonatomic) unsigned int roundTripTime; // @synthesize roundTripTime;
@property struct tagHANDLE *rtpHandle; // @synthesize rtpHandle;
@property long long sampleRate; // @synthesize sampleRate;
@property (copy, nonatomic) NSString *sessionID; // @synthesize sessionID;
@property (nonatomic) BOOL shouldSendAudio; // @synthesize shouldSendAudio;
@property BOOL shouldTimeoutPackets; // @synthesize shouldTimeoutPackets;
@property (nonatomic) int signalGrade; // @synthesize signalGrade;
@property (nonatomic) int signalRaw; // @synthesize signalRaw;
@property (nonatomic) int signalStrength; // @synthesize signalStrength;
@property long long sipState; // @synthesize sipState=_sipState;
@property (strong) NSData *srtpKeyBytes; // @synthesize srtpKeyBytes;
@property long long state; // @synthesize state;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useAFRC; // @synthesize useAFRC;
@property (nonatomic) BOOL useCompressedConnectionData;
@property BOOL useControlByte; // @synthesize useControlByte;
@property BOOL useUEP; // @synthesize useUEP;
@property (readonly) BOOL videoIsPaused;
@property long long videoPayload; // @synthesize videoPayload;

+ (id)getDecodePayloadTypes:(int)arg1 secondaryPayloadTypes:(id)arg2;
+ (id)keyPathsForValuesAffectingNetworkQuality;
+ (int)setRxPayloadList:(struct tagHANDLE *)arg1 withPayloadTypes:(id)arg2;
+ (int)setRxPayloadList:(struct tagHANDLE *)arg1 withPayloadTypes:(id)arg2 isRedEnabled:(BOOL)arg3;
- (int)Conference_SetBWEstMode:(BOOL)arg1 bFakeLargeFrameMode:(BOOL)arg2;
- (id)addAudioPayload:(int)arg1;
- (void)addLocalCallInfoToInviteDictionary:(id)arg1;
- (void)addScreenConfigToSDP:(id)arg1;
- (void)adjustBitrateForConnectionType;
- (id)allPayloadsLocalFeaturesString;
- (id)allocLocalFeaturesString;
- (int)applyFeaturesListStringForPayload:(int)arg1;
- (BOOL)applyNegotiatedAudioSettings:(id *)arg1;
- (void)applyNegotiatedCaptionsSettings;
- (void)applyNegotiatedMomentsSettings;
- (void)applyNegotiatedSettings;
- (BOOL)applyNegotiatedVideoSettings:(id *)arg1;
- (unsigned int)audioRTPID;
- (long long)calculateSIPEndAction:(BOOL)arg1 currentState:(long long)arg2 error:(id)arg3;
- (void)callAlarmsWithRTPTimeStamp:(unsigned int)arg1;
- (unsigned int)callID;
- (id)callMetadata;
- (BOOL)canNegotiateVideoPayload:(int)arg1 supportedPayloads:(id)arg2 isLocalOnCellular:(BOOL)arg3 isRemoteOnCellular:(BOOL)arg4;
- (BOOL)canSendSIPInviteWithError:(id *)arg1;
- (BOOL)cancel:(id)arg1;
- (void)cancelConnectionTimeoutTimer;
- (void)cancelFirstRemoteFrameTimer;
- (BOOL)chooseDTXPayloads:(id)arg1;
- (BOOL)choosePayload:(id)arg1;
- (BOOL)chooseSecondaryPayloads:(id)arg1;
- (BOOL)chooseVideoPayload:(id)arg1 operatingMode:(int)arg2 isLocalOnCellular:(BOOL)arg3 isRemoteOnCellular:(BOOL)arg4;
- (BOOL)chooseVideoPayloadForInterface:(int)arg1;
- (void)cleanupMedia;
- (void)cleanupWRMClient;
- (unsigned int)codecBitmapForPayloads:(id)arg1;
- (struct CGSize)computeVisibleAspectRatioWithRemoteScreenAspectRatio:(struct CGSize *)arg1 remoteExpectedAspectRatio:(struct CGSize *)arg2 encodeWidth:(int)arg3 encodeHeight:(int)arg4;
- (id)configForPayloadType:(int)arg1;
- (BOOL)configureLegacyTransportWithInviteInfo:(id)arg1 error:(id *)arg2;
- (void)configureRateController;
- (BOOL)createAudioTransmitter:(id *)arg1;
- (id)createInviteSDPWithError:(id *)arg1;
- (BOOL)createMediaQueueHandle:(id *)arg1;
- (BOOL)createRTPHandles:(id *)arg1;
- (BOOL)createSDP:(int *)arg1 audioPayloadCount:(int)arg2 secondaryPayloadTypes:(int *)arg3 secondaryPayloadCount:(int)arg4 videoPayloadTypes:(int *)arg5 videoPayloadCount:(int)arg6 localFeaturesList:(id)arg7 answerBandwidth:(int)arg8 maxBandwidth:(int)arg9 imageSizesSend:(struct imageTag **)arg10 imageSendCount:(int *)arg11 imageSizesRecv:(struct imageTag **)arg12 imageRecvCount:(int *)arg13 sdp:(char *)arg14 numSDPBytes:(int *)arg15 error:(id *)arg16;
- (unsigned int)currentAudioCap;
- (void)dealloc;
- (id)deriveAspectRatioFLS;
- (void)didReceiveCaptions:(id)arg1;
- (void)disableSessionHealthMonitor;
- (BOOL)disconnect:(id)arg1 didRemoteCancel:(BOOL)arg2;
- (BOOL)disconnectInternal:(BOOL)arg1 disconnectError:(id)arg2 didRemoteCancel:(BOOL)arg3;
- (void)disconnectWithNoRemotePackets:(long long)arg1;
- (void)disconnectWithNoRemotePackets:(long long)arg1 timeoutUsed:(double)arg2;
- (void)doSipEndAction:(int)arg1 callID:(unsigned int)arg2 error:(id)arg3;
- (void)doSipEndProc:(id)arg1;
- (BOOL)doesVideoPayloadMatchRemoteImageAttributeRules:(id)arg1;
- (void)enableAudio:(BOOL)arg1;
- (void)enableSessionHealthMonitor;
- (BOOL)establishSIPDialogWithSDP:(id)arg1 error:(id *)arg2;
- (BOOL)evaluateEnableRRx:(int *)arg1;
- (int)fillMediaControlInfo:(void *)arg1;
- (BOOL)findFeatureString:(const char *)arg1 value:(char *)arg2 valueLength:(unsigned long long)arg3 withPrefix:(const char *)arg4;
- (int)flushBasebandQueueWithPayloads:(id)arg1 flushCount:(unsigned int *)arg2;
- (int)getAllCompatibleVideoPayloads:(int **)arg1 forMediaType:(int)arg2;
- (void)getAllPayloadsForAudio:(int **)arg1 count:(int *)arg2 secondaryPayloads:(int **)arg3 secondaryCount:(int *)arg4;
- (void)getAllPayloadsForScreen:(int **)arg1 count:(int *)arg2;
- (void)getAllPayloadsForVideo:(int **)arg1 count:(int *)arg2;
- (int)getAudioTxBitrate;
- (id)getCompatibleLocalFeaturesListForPayloads:(int *)arg1 count:(int)arg2;
- (id)getFeaturesListStringForPayload:(int)arg1;
- (id)getVideoRuleForVideoMode:(unsigned long long)arg1 interface:(int)arg2 sessionBitrate:(int *)arg3;
- (BOOL)getVideoSettings:(int)arg1 forInterface:(int)arg2 payload:(int)arg3 width:(int *)arg4 height:(int *)arg5 framerate:(int *)arg6 bitRate:(int *)arg7;
- (void)handleCellTechChange:(int)arg1;
- (void)handleCellularMTUChanged:(unsigned short)arg1;
- (void)handleDuplicationEnabled:(BOOL)arg1 activeConnection:(id)arg2;
- (void)handleFirstConnectionSetup:(id)arg1;
- (int)handleIncomingWithCallID:(unsigned int)arg1 msgIn:(const char *)arg2 msgOut:(char *)arg3 optional:(void *)arg4 confIndex:(int *)arg5 error:(id *)arg6;
- (void)handleKeyExchangeCompleted;
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1;
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1;
- (void)handleNewConnectionSetup:(id)arg1 isInitialConnection:(BOOL)arg2;
- (void)handlePendingPrimaryConnectionChange;
- (void)handlePrimaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)handleReceivedPiggybackBlobIDS:(id)arg1;
- (void)handleReceivedPiggybackBlobLegacy:(id)arg1;
- (BOOL)handshakeComplete:(struct SSLContext *)arg1 withError:(struct __CFError **)arg2;
- (id)init;
- (id)initWithDeviceRole:(int)arg1 transportType:(unsigned int)arg2;
- (void)initWithRelevantStorebagEntries;
- (BOOL)initializeVideoReceiver:(id *)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;
- (BOOL)initializeVideoTransmitter:(id *)arg1 encodeRule:(id)arg2 unpausing:(BOOL)arg3 reportingAgent:(struct opaqueRTCReporting *)arg4;
- (int)interfaceForCurrentCall;
- (id)inviteDataForParticipantID:(id)arg1 callID:(unsigned int *)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id *)arg5;
- (BOOL)isBetterForSIPInviteWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 thanSession:(id)arg2;
- (BOOL)isCallOngoing;
- (BOOL)isLocalOrRemoteOnCellular;
- (BOOL)isLowBitrateCodecPreferred:(id)arg1;
- (BOOL)isValidVideoPayloadOverride:(id)arg1;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (id)localParticipantID;
- (void)lock;
- (void)logConnectionSuccess;
- (void)logDetailedNetworkInformation;
- (void)logIdentity:(struct __SecIdentity *)arg1;
- (void)logPerfTimings;
- (int)mapPacketMultiplexModeToRTPMode:(long long)arg1;
- (int)mapPacketMultiplexModeToSIPMode:(long long)arg1;
- (const char *)matchedFeaturesStringForPayload:(int)arg1;
- (unsigned int)maxBitrateForConnectionType;
- (void)mediaController:(void *)arg1 mediaSuggestionDidChange:(struct VCRateControlMediaSuggestion)arg2;
- (void)messageVCMomentsRequest:(id)arg1;
- (void)negotiateFeaturesString:(id)arg1 forPayload:(int)arg2;
- (BOOL)negotiateMaxBandwidth:(int *)arg1;
- (void)negotiateMediaMaxBandwidth;
- (BOOL)negotiatePayloads:(id *)arg1 withError:(id *)arg2;
- (id)negotiatedAudioPayloadTypes;
- (int)negotiatedReceivingFramerate;
- (id)newMediaBlobWithRemoteMediaBlob:(id)arg1 localCallID:(unsigned int)arg2 isLowBitrateCodecPreferred:(BOOL)arg3;
- (id)newRemoteScreenAttributesForOrientation:(int)arg1;
- (id)newSKEBlobWithRemoteSKEBlob:(id)arg1;
- (void)notifyDelegateActiveConnectionDidChange;
- (void)notifyDelegateAndEndCall:(long long)arg1 didRemoteCancel:(BOOL)arg2 error:(id)arg3;
- (void)notifyDelegateSessionStarted;
- (BOOL)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 audioTS:(unsigned int)arg2 audioHT:(double)arg3 videoHT:(CDStruct_1b6d18a9)arg4 droppedFrames:(int)arg5 cameraBits:(unsigned char)arg6;
- (void)onPlayVideo:(struct __CVBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3;
- (void)packMeters:(char *)arg1 withLength:(char *)arg2;
- (unsigned int)parameterSetForPayload:(int)arg1;
- (id)pickFeaturesStringForPayload:(int)arg1 featuresListDict:(id)arg2 remote:(BOOL)arg3;
- (BOOL)prepareSRTPWithError:(id *)arg1;
- (void)primaryConnectionDidChangeTo:(id)arg1 oldConnection:(id)arg2;
- (unsigned int)primaryConnectionType;
- (void)processBlackFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)processCancelRelayRequest:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (int)processMediaControlInfo:(void *)arg1 isAudio:(BOOL)arg2;
- (void)processRelayRequestResponseDict:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processRelayUpdateDict:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processRemoteIPChange:(id)arg1 callID:(unsigned int)arg2;
- (void)processResolutionChangeToVideoRule:(id)arg1 captureRule:(id)arg2 featuresListString:(id)arg3;
- (void)processSIPMessage:(char *)arg1 msgOut:(char *)arg2 optional:(void *)arg3 confIndex:(int *)arg4;
- (BOOL)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1 rtpTimestamp:(unsigned int *)arg2 lastReceivedAudioTime:(double *)arg3 padding:(char *)arg4 paddingLength:(char *)arg5 silence:(int *)arg6;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)rateController:(void *)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;
- (void)rcvdFirstRemoteFrame;
- (void)releaseRTPHandles;
- (void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned int)arg2;
- (id)remoteParticipantID;
- (void)remotePauseDidChangeToState:(BOOL)arg1 forVideo:(BOOL)arg2;
- (void)reportDashboardEndResult:(BOOL)arg1;
- (void)reportOperatingMode;
- (void)reportSymptom:(unsigned int)arg1;
- (void)reportWRMMetrics:(const CDStruct_0db8e210 *)arg1;
- (void)reportingMomentsWithRequest:(id)arg1;
- (void)requestWRMNotification;
- (void)resetState;
- (void)resetVideoRulesForInterface:(int)arg1 videoReportingDictionary:(id)arg2;
- (struct __SecIdentity *)retrieveIdentity;
- (id)retrieveRawFeaturesString;
- (int)rtcpDescriptor;
- (void)schedulePrimaryConnectionChange:(id)arg1 oldConnection:(id)arg2;
- (void)sendARPLData:(id)arg1 toCallID:(unsigned int)arg2;
- (void)sendBasebandCodecMessage;
- (void)sendCallingModeMessage;
- (void)sendData:(id)arg1 messageType:(unsigned int)arg2 encrypted:(BOOL)arg3;
- (BOOL)sendSIPInviteWithError:(id *)arg1;
- (void)sendTimings;
- (void)sendWRMStatusUpdate:(const CDStruct_8aeecdac *)arg1;
- (double)sessionReceivingBitrate;
- (double)sessionReceivingFramerate;
- (double)sessionTransmittingBitrate;
- (double)sessionTransmittingFramerate;
- (void)setDuplicationFlag:(BOOL)arg1 withPreferredLocalLinkTypeForDuplication:(int)arg2 notifyPeer:(BOOL)arg3;
- (void)setLocalIdentityForKeyExchange;
- (BOOL)setMatchedFeaturesString:(char *)arg1 localFeaturesString:(id)arg2 remoteFeaturesString:(id)arg3;
- (BOOL)setMediaQueueStreamSettings;
- (BOOL)setPauseAudio:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setPauseAudio:(BOOL)arg1 force:(BOOL)arg2 error:(id *)arg3;
- (BOOL)setPauseVideo:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setPauseVideo:(BOOL)arg1 force:(BOOL)arg2 error:(id *)arg3;
- (void)setPeerProtocolVersion:(unsigned int)arg1;
- (BOOL)setRTPPayloads:(id)arg1 withError:(id *)arg2;
- (void)setRemoteCallInfoFromInviteDictionary:(id)arg1;
- (void)setResumeAudio;
- (void)setResumeVideo;
- (int)setSKEBlobOnTransportSession;
- (void)setSessionConferenceState:(unsigned int)arg1 callID:(unsigned int)arg2;
- (void)setSessionConferenceVisualRectangle:(struct CGRect)arg1 callID:(unsigned int)arg2;
- (void)setSuspendAudio;
- (void)setSuspendVideo;
- (void)setUpFirstRemoteFrameTimer;
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;
- (void)setWRMNotification:(CDStruct_d2860d30 *)arg1;
- (void)setupAACELDPayload:(int)arg1;
- (BOOL)setupAudioCodecWithPayload:(int)arg1;
- (BOOL)setupAudioCookies;
- (void)setupAudioOnOffStateMessages;
- (void)setupAudioPauseMessages;
- (void)setupAudioPausedHBMessages;
- (void)setupBasebandCodecInfoMessages;
- (void)setupBitrateNegotation;
- (void)setupCalleeSIPStartTimeout:(float)arg1;
- (BOOL)setupCallerRTPChannelWithError:(id *)arg1;
- (void)setupCallingModeMessages;
- (void)setupCellTechChangeMessages;
- (void)setupConnectionTimeoutTimerWithErrorCode:(int)arg1 detailedCode:(int)arg2 description:(id)arg3 reason:(id)arg4;
- (void)setupDTLSDefaults;
- (int)setupEncryptionWithKey:(const struct __CFData **)arg1 confIndex:(int *)arg2;
- (void)setupHandoverCandidateChangeMessage;
- (BOOL)setupIDSConnectionForCallID:(unsigned int)arg1 destination:(id)arg2 socket:(int)arg3 error:(id *)arg4;
- (void)setupMessaging;
- (void)setupMomentsMessages;
- (void)setupPeerInfo:(id)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 capabilities:(id)arg4;
- (void)setupPiPStateChangeMessage;
- (void)setupPreferredInterfaceMessage;
- (void)setupSecureDataChannel;
- (void)setupVideoPauseMessages;
- (void)setupWRMClient;
- (BOOL)shouldNotifyDelegateDidStartBeforeAudioSetup;
- (void)shouldSendBlackFrame:(BOOL)arg1;
- (void)shutdownVoiceChatFromRemoteSIPSignal:(int)arg1 withReason:(const char *)arg2;
- (int)sipCallback:(int)arg1 callID:(unsigned int)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void *)arg5 confIndex:(int *)arg6;
- (void)sipConnectThreadProc:(id)arg1;
- (BOOL)sipConnectWithError:(id *)arg1;
- (BOOL)startAFRC:(id *)arg1;
- (void)startAWDStats;
- (void)startAudioIOWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 destination:(id)arg7 error:(id *)arg8;
- (BOOL)startMediaQueue:(id *)arg1;
- (BOOL)startMediaWithPreNegotiatedSettings:(id *)arg1;
- (void)startPausedHeartbeat;
- (BOOL)startRateControl:(id *)arg1;
- (BOOL)startVideo:(BOOL)arg1 error:(id *)arg2;
- (BOOL)startVideoReceive:(id *)arg1;
- (BOOL)startVideoSend:(BOOL)arg1 error:(id *)arg2;
- (BOOL)stillWantsToRelay;
- (BOOL)stopAFRC:(id *)arg1;
- (void)stopAudioIO:(CDUnknownBlockType)arg1;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)stopMediaQueue:(id *)arg1;
- (void)stopPausedHeartbeat;
- (BOOL)stopVideo:(BOOL)arg1 error:(id *)arg2;
- (BOOL)stopVideoReceive:(id *)arg1 isPausing:(BOOL)arg2;
- (BOOL)stopVideoSend:(BOOL)arg1 error:(id *)arg2;
- (void)thermalLevelDidChange:(int)arg1;
- (void)timeoutUnfinishedConnection;
- (void)transportSession:(id)arg1 cancelRelayRequest:(id)arg2;
- (void)transportSession:(id)arg1 connectionSetupDataDidChange:(id)arg2;
- (void)transportSession:(id)arg1 initiateRelayRequest:(id)arg2;
- (void)transportSession:(id)arg1 sendRelayResponse:(id)arg2;
- (BOOL)treatAsCellular;
- (void)triggerInterfaceChange;
- (void)unlock;
- (void)updateCachedConnectionState;
- (void)updateDeviceRole:(int)arg1;
- (void)updateLastReceivedAudioTime;
- (void)updateLastReceivedPacket:(BOOL)arg1;
- (void)updateLastReceivedPacketWithTimestamp:(double)arg1;
- (void)updateMaxPktLength;
- (void)updateNetworkCheckHint:(double)arg1;
- (void)updateRemoteMediaStallState:(double)arg1;
- (void)updateVideoQualityNotification:(double)arg1;
- (void)updateVideoQualityStatus:(double)arg1 bitrate:(double)arg2 time:(double)arg3 isRemote:(BOOL)arg4;
- (void)vcSecureDataChannel:(id)arg1 messageType:(unsigned int)arg2 receivedData:(id)arg3;
- (unsigned int)videoRTPID;
- (void)wcmGetCallConfig:(unsigned int *)arg1 targetBitrate:(unsigned int *)arg2;
- (void)wcmSetCallConfig:(unsigned int)arg1 interferenceLevel:(unsigned int)arg2;

@end


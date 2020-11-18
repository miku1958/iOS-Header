//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaStream.h>

#import <AVConference/AVCRateControllerDelegate-Protocol.h>
#import <AVConference/VCMediaStreamSyncDestination-Protocol.h>
#import <AVConference/VCRedundancyControllerDelegate-Protocol.h>
#import <AVConference/VCVideoCaptureClient-Protocol.h>
#import <AVConference/VCVideoCaptureConverterDelegate-Protocol.h>
#import <AVConference/VCVideoReceiverDelegate-Protocol.h>
#import <AVConference/VCVideoSink-Protocol.h>

@class AVCRateController, AVCStatisticsCollector, NSArray, NSNumber, NSObject, NSString, VCRedundancyControllerVideo, VCVideoCaptureConverter, VCVideoReceiverBase, VCVideoRule, VCVideoTransmitterBase;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VCVideoStream : VCMediaStream <VCVideoReceiverDelegate, VCMediaStreamSyncDestination, VCVideoSink, VCVideoCaptureClient, VCVideoCaptureConverterDelegate, AVCRateControllerDelegate, VCRedundancyControllerDelegate>
{
    long long _type;
    NSObject<OS_dispatch_queue> *_lastDecodedFrameQueue;
    struct _opaque_pthread_mutex_t _remoteLayerLock;
    struct _opaque_pthread_mutex_t _localLayerLock;
    unsigned int _uplinkOperatingBitrate;
    struct __CVBuffer *_cachedRemoteVideoFrame;
    VCVideoTransmitterBase *_videoTransmitter;
    VCVideoReceiverBase *_videoReceiver;
    VCVideoRule *_videoRule;
    int _reportingModuleID;
    unsigned int _reportingDefaultRealtimePeriod;
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;
    struct opaqueCMBufferQueue *_bufferQueue;
    VCVideoCaptureConverter *_captureConverter;
    BOOL _isServerBasedBandwidthProbingEnabled;
    unsigned char _lastMediaPriority;
    NSNumber *_targetStreamID;
    NSArray *_compoundStreamIDs;
    NSNumber *_sendingStreamID;
    BOOL _isCompoundStreamIDsIncreased;
    BOOL _shouldEnableFaceZoom;
    BOOL _didReceiveFirstFrame;
    _Atomic BOOL _isVideoCaptureRegistered;
    double _fecRatio;
    int _captureSource;
    unsigned int _screenDisplayID;
    unsigned int _customWidth;
    unsigned int _customHeight;
    unsigned int _tilesPerFrame;
    unsigned int _initialTargetBitrate;
    struct OpaqueFigCFWeakReference *_weakStream;
    AVCRateController *_vcrcRateController;
    AVCStatisticsCollector *_statisticsCollector;
    VCRedundancyControllerVideo *_redundancyController;
    int _lastDisplayedFromImageQueueCount;
    int _lastDroppedFromImageQueueCount;
    int _networkInterfaceType;
    int _channelSequenceCountWithInactiveSlots;
}

@property (readonly, nonatomic) NSArray *compoundStreamIDs; // @synthesize compoundStreamIDs=_compoundStreamIDs;
@property (nonatomic) unsigned int customHeight; // @synthesize customHeight=_customHeight;
@property (nonatomic) unsigned int customWidth; // @synthesize customWidth=_customWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didReceiveFirstFrame; // @synthesize didReceiveFirstFrame=_didReceiveFirstFrame;
@property (nonatomic) double fecRatio; // @synthesize fecRatio=_fecRatio;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCompoundStreamIDsIncreased; // @synthesize isCompoundStreamIDsIncreased=_isCompoundStreamIDsIncreased;
@property (nonatomic) BOOL isServerBasedBandwidthProbingEnabled; // @synthesize isServerBasedBandwidthProbingEnabled=_isServerBasedBandwidthProbingEnabled;
@property (readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
@property double lastSentAudioHostTime;
@property unsigned int lastSentAudioSampleTime;
@property (readonly) unsigned int networkMTU;
@property (nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property (readonly, nonatomic) NSNumber *sendingStreamID; // @synthesize sendingStreamID=_sendingStreamID;
@property (nonatomic) BOOL shouldEnableFaceZoom; // @synthesize shouldEnableFaceZoom=_shouldEnableFaceZoom;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int targetBitrateChangeCounter;
@property (nonatomic) unsigned int targetMediaBitrate;
@property (strong, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;

+ (id)capabilities;
+ (id)newFeatureListStringsWithConfiguration:(id)arg1;
+ (id)supportedVideoPayloads;
- (void)avConferencePreviewError:(id)arg1;
- (void)avConferenceScreenCaptureError:(id)arg1;
- (void)cacheRemoteVideoFrame:(struct __CVBuffer *)arg1;
- (void)cameraAvailabilityDidChange:(BOOL)arg1;
- (void)cleanupBeforeReconfigure:(id)arg1;
- (void)cleaunpReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1;
- (id)clientCaptureRule;
- (void)collectChannelSequenceMetrics:(id)arg1;
- (void)collectImageQueuePerformanceMetrics:(struct __CFDictionary *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_3ab08b48 *)arg1 interval:(float)arg2;
- (void)collectTxChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)collectVideoConfigMetrics:(struct __CFDictionary *)arg1;
- (void)collectVideoStreamStartMetrics:(struct __CFDictionary *)arg1;
- (void)converter:(id)arg1 didConvertFrame:(struct opaqueCMSampleBuffer *)arg2 frameTime:(CDStruct_1b6d18a9)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)dealloc;
- (void)deregisterForVideoCapture;
- (void)destroyVideoModules;
- (void)destroyVideoReceiver;
- (void)destroyVideoTransmitter;
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;
- (void)generateKeyFrame;
- (struct __CFDictionary *)getClientSpecificUserInfo;
- (id)getReceiveStatsCollectorWithStreamConfig:(id)arg1;
- (struct __CFString *)getReportingClientName;
- (int)getReportingClientType;
- (id)getTransmitMediaControllerWithStreamConfig:(id)arg1;
- (id)getTransmitStatsCollectorWithStreamConfig:(id)arg1;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)handleNWConnectionNotification:(struct ifnet_interface_advisory *)arg1;
- (void)handleNWConnectionPacketEvent:(struct packet_id *)arg1 eventType:(int)arg2;
- (void)handleVTPSendFailedWithData:(void *)arg1;
- (id)init;
- (void)initVideoTransmitter;
- (id)initWithTransportSessionID:(unsigned int)arg1 ssrc:(unsigned int)arg2 streamToken:(long long)arg3;
- (void)initializeInterfaceType;
- (void)initializeInterfaceTypeForNWConnection;
- (void)initializeInterfaceTypeForSocket;
- (BOOL)isTransportIPv6;
- (double)lastReceivedRTCPPacketTime;
- (double)lastReceivedRTPPacketTime;
- (id)newVideoTransmitterConfigWithVideoStreamConfig:(id)arg1;
- (void)onCallIDChanged;
- (BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onRTCPTimeout;
- (void)onRTPTimeout;
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onSendRTCPPacket;
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;
- (int)operatingModeForVideoStreamType:(long long)arg1;
- (void)overrideConfigWithDefaults;
- (void)rateController:(void *)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (BOOL)registerForVideoCapture;
- (void)reportTransportInfo;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (void)reportingVideoStreamEvent:(unsigned short)arg1 newVideoAttributes:(id)arg2;
- (void)reportingVideoStreamEvent:(unsigned short)arg1 newVideoAttributes:(id)arg2 currentStreamID:(id)arg3;
- (void)requestLastDecodedFrame;
- (double)rtcpHeartbeatLeeway;
- (void)sendLastRemoteVideoFrame:(struct __CVBuffer *)arg1;
- (BOOL)setEncodingMode:(int)arg1;
- (void)setFECRedundancyVector:(const CDStruct_cd7ddd1c *)arg1;
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg1;
- (BOOL)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;
- (void)setupCompoundStreamIDsWithStreamIDs:(id)arg1;
- (void)setupFeatureListStringsForReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1 streamConfig:(id)arg2;
- (void)setupMultiwayVideoReceiverConfig:(struct tagVCVideoReceiverConfig *)arg1 forTransportStream:(id)arg2;
- (void)setupReportingAgent;
- (void)setupVideoReceiver:(id)arg1 withTransmitterHandle:(struct tagHANDLE *)arg2;
- (void)setupVideoStream;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (BOOL)startSynchronization:(id)arg1;
- (void)startVCRCWithStreamConfig:(id)arg1;
- (void)stopSynchronization;
- (void)stopVCRC;
- (id)supportedPayloads;
- (void)thermalLevelDidChange:(int)arg1;
- (void)updateSourcePlayoutTimestamp:(CDStruct_1b6d18a9 *)arg1;
- (void)updateVideoConfig:(id)arg1;
- (void)updateVideoReceiver:(id)arg1;
- (BOOL)useUEPForVideoConfig:(int)arg1;
- (BOOL)validateStreamConfiguration:(id)arg1 error:(id *)arg2;
- (BOOL)validateVideoStreamConfigurations:(id)arg1;
- (BOOL)vcVideoReceiver:(id)arg1 didReceiveRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 newVideoAttributes:(id)arg4 isFirstFrame:(BOOL)arg5;
- (void)vcVideoReceiver:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcVideoReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (unsigned int)vcVideoReceiver:(id)arg1 receivedTMMBR:(unsigned int)arg2;
- (void)vcVideoReceiver:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (void)vcVideoReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned int)arg2;
- (struct tagVCVideoReceiverConfig)videoReceiverConfigWithVideoStreamConfig:(id)arg1;

@end

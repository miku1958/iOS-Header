//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

#import <AVConference/RTCPReportProvider-Protocol.h>
#import <AVConference/VCConnectionChangedHandler-Protocol.h>
#import <AVConference/VCMediaStreamProtocol-Protocol.h>
#import <AVConference/VCMediaStreamTransportDelegate-Protocol.h>
#import <AVConference/VCSecurityEventHandler-Protocol.h>

@class AVCBasebandCongestionDetector, AVCStatisticsCollector, NSMutableArray, NSObject, NSString, VCDatagramChannelIDS, VCMasterKeyIndex, VCMediaStreamConfig, VCMediaStreamTransport, VCWeakObjectHolder;
@protocol OS_dispatch_queue, OS_dispatch_source, RTCPReportProvider, VCMediaStreamDelegate, VCMediaStreamNotification, VCMomentsCollectorDelegate;

__attribute__((visibility("hidden")))
@interface VCMediaStream : VCObject <VCMediaStreamProtocol, RTCPReportProvider, VCSecurityEventHandler, VCMediaStreamTransportDelegate, VCConnectionChangedHandler>
{
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    struct _opaque_pthread_mutex_t _streamLock;
    int _state;
    VCDatagramChannelIDS *_datagramChannel;
    NSString *_idsDestination;
    id<VCMediaStreamDelegate> _delegate;
    id<VCMomentsCollectorDelegate> _momentsCollectorDelegate;
    NSString *_callID;
    BOOL _isSRTPInitialized;
    BOOL _useRandomTS;
    double _rtpTimeoutEnabledTime;
    double _rtcpTimeoutEnabledTime;
    double _decryptionTimeoutEnabledTime;
    NSObject<OS_dispatch_source> *_rtcpSendHeartbeat;
    NSObject<OS_dispatch_source> *_timeoutHeartbeat;
    double _lastRTPTimeoutReportTime;
    double _lastRTCPTimeoutReportTime;
    double _lastDecryptionTimeoutReportTime;
    double _decryptionErrorStartTime;
    unsigned int _localSSRC;
    unsigned int _transportSessionID;
    VCWeakObjectHolder *_notificationDelegate;
    VCWeakObjectHolder *_rtcpReportProvider;
    AVCStatisticsCollector *_statisticsCollector;
    AVCBasebandCongestionDetector *_basebandCongestionDetector;
    int _operatingMode;
    struct _VCMediaStreamTransportSetupInfo _transportSetupInfo;
    NSMutableArray *_transportArray;
    CDUnknownFunctionPointerType _vcMediaCallback;
    struct tagVCMediaQueue *_mediaQueue;
    VCMasterKeyIndex *_lastReceivedMKI;
}

@property (strong, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) VCMediaStreamConfig *defaultStreamConfig;
@property (readonly, nonatomic) VCMediaStreamTransport *defaultTransport;
@property (nonatomic) id<VCMediaStreamDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isSendingMedia;
@property (readonly, nonatomic) double lastReceivedRTCPPacketTime;
@property (readonly, nonatomic) double lastReceivedRTPPacketTime;
@property (readonly, nonatomic) unsigned int localSSRC; // @synthesize localSSRC=_localSSRC;
@property (nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property (nonatomic) id<VCMomentsCollectorDelegate> momentsCollectorDelegate; // @synthesize momentsCollectorDelegate=_momentsCollectorDelegate;
@property (nonatomic) id<VCMediaStreamNotification> notificationDelegate;
@property (nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property (readonly, nonatomic) double rtcpHeartbeatLeeway;
@property (nonatomic) id<RTCPReportProvider> rtcpReportProvider;
@property (readonly, nonatomic) int state; // @synthesize state=_state;
@property (strong, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property (readonly) Class superclass;

+ (BOOL)isSameSRTPKey:(id)arg1 newKey:(id)arg2;
- (void)checkDecryptionTimeoutAgainstTime:(double)arg1 decryptionErrorStartTime:(double)arg2;
- (void)checkForDecryptionTimeout;
- (void)checkRTCPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2;
- (void)checkRTPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2;
- (void)collectRxChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_1c8e0384 *)arg1 interval:(float)arg2;
- (void)collectTxChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (double)computeNextTimoutWithEnabledTime:(double)arg1 timeoutInterval:(double)arg2 lastReceivedPacketTime:(double)arg3 currentTime:(double)arg4 lastTimeoutReportTime:(double)arg5;
- (id)createTransport;
- (void)dealloc;
- (void)decryptionStatusChanged:(BOOL)arg1;
- (BOOL)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
- (void)handleActiveConnectionChange:(id)arg1;
- (BOOL)handleEncryptionInfoChange:(id)arg1;
- (id)init;
- (id)initWithTransportSessionID:(unsigned int)arg1;
- (id)initWithTransportSessionID:(unsigned int)arg1 localSSRC:(unsigned int)arg2;
- (BOOL)isDecryptionTimeoutEnabled;
- (BOOL)isRTCPSendEnabled;
- (BOOL)isRTCPTimeoutEnabled;
- (BOOL)isRTPTimeoutEnabled;
- (void)lock;
- (void)onCallIDChanged;
- (BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onRTCPTimeout;
- (void)onRTPTimeout;
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onSendRTCPPacket;
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processDecryptionTimeoutSettingChange;
- (void)processRTCPTimeoutSettingChange;
- (void)processRTPTimeoutSettingChange;
- (void)resetDecryptionTimeout;
- (void)resetRTCPSendHeartbeatTimer:(unsigned long long)arg1;
- (void)resetTimeoutHeartbeatTimer:(unsigned long long)arg1;
- (void)resetTimeoutHeartbeatWithRTPTimeout:(double)arg1 rtcpTimeout:(double)arg2 decryptionTimeout:(double)arg3 currentTime:(double)arg4;
- (void)rtcpSendHeartbeat;
- (void)setDecryptionTimeOutEnabled:(BOOL)arg1;
- (void)setDecryptionTimeOutInterval:(double)arg1;
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id *)arg3;
- (void)setPause:(BOOL)arg1;
- (void)setRtcpEnabled:(BOOL)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeOutEnabled:(BOOL)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtpTimeOutEnabled:(BOOL)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (BOOL)setStreamConfig:(id)arg1 withError:(id *)arg2;
- (void)setStreamDirection:(long long)arg1;
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;
- (void)setupMediaStream;
- (id)setupRTPForIDS;
- (id)setupRTPWithIDSDestination:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithIPInfo:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithSockets:(id)arg1 error:(id *)arg2;
- (void)start;
- (void)startRTCPSendHeartbeat;
- (void)startTimeoutHeartbeat;
- (void)stop;
- (void)stopRTCPSendHeartbeat;
- (void)stopTimeoutHeartbeat;
- (long long)streamDirection;
- (char *)streamStateToString:(int)arg1;
- (id)supportedPayloads;
- (void)timeoutHeartbeat;
- (void)unlock;
- (void)vcMediaStreamTransport:(id)arg1 didReceiveRTCPPackets:(id)arg2;

@end


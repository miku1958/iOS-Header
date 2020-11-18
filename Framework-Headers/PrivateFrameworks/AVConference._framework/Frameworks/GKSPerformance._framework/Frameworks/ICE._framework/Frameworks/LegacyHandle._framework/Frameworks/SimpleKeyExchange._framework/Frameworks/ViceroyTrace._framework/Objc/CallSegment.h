//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString, VCHistogram;
@protocol VCAdaptiveLearningDelegate;

@interface CallSegment : NSObject
{
    VCHistogram *_RTT;
    VCHistogram *_abnormalRTT;
    VCHistogram *_JBQSize;
    VCHistogram *_WANVJBQSize;
    VCHistogram *_JBQSizeDeltaVidLarger;
    VCHistogram *_JBQSizeDeltaAudLarger;
    VCHistogram *_JBTarget;
    VCHistogram *_JBUnclippedTarget;
    VCHistogram *_PLR;
    VCHistogram *_VPLR;
    VCHistogram *_abnormalPLR;
    VCHistogram *_abnormalBPL;
    VCHistogram *_latency;
    VCHistogram *_TBR;
    VCHistogram *_RBR;
    VCHistogram *_SBR;
    VCHistogram *_framerate;
    VCHistogram *_audioErasures;
    VCHistogram *_speechErasures;
    VCHistogram *_videoQualityScore;
    VCHistogram *_poorConnection;
    VCHistogram *_videoResolution;
    VCHistogram *_videoEncodingBitrate;
    VCHistogram *_videoJitter;
    VCHistogram *_REDErasureCompensationRate;
    VCHistogram *_REDReceivedCount;
    VCHistogram *_REDDiscardedCount;
    VCHistogram *_REDNumPayloadsUsed;
    VCHistogram *_REDMaxDelay;
    VCHistogram *_videoStall;
    VCHistogram *_mediaStall;
    int _duration;
    int _adjustedDuration;
    double _totalVideoStallTime;
    double _totalMediaStallTime;
    double _maxMediaStallTime;
    unsigned int _mediaStallCount;
    double _maxVideoStallInterval;
    double _totalAudioStallTime;
    double _maxAudioStallInterval;
    double _maxNoRemotePacketsInterval;
    double _totalNoRemotePacketsTime;
    double _poorConnectionTotalLength;
    double _poorConnectionMaxLength;
    double _averageTargetBitrate;
    double _averageSendBitrate;
    double _averageReceiveBitrate;
    double _averageTotalVideoSendBitrate;
    double _averageVideoMediaSendBitrate;
    double _averageVideoHeaderSendBitrate;
    double _averageVideoFECSendBitrate;
    double _averageTotalVideoRecvBitrate;
    double _averageAudioErasuresRate;
    double _averageSpeechErasuresRate;
    double _speechErasureTotalTime;
    double _averageBWE;
    unsigned int _minBWE;
    unsigned int _maxBWE;
    unsigned int _totalSuddenBandwidthDropCount;
    unsigned int _totalMBLRampDownCount;
    double _averageRTT;
    unsigned int _poorConnectionFrequency;
    unsigned int _BBQueueTooLargeCount;
    unsigned int _BBRateTooLowCount;
    unsigned long long _audioFlushPacketCount;
    unsigned long long _audioSentPacketCount;
    unsigned long long _videoFlushPacketCount;
    unsigned long long _videoSentPacketCount;
    unsigned int _audioRecvPacketCount;
    unsigned long long _VPLRAccumulator;
    unsigned int _callMode;
    unsigned int _callDeviceRole;
    unsigned int _callTransportType;
    unsigned int _audioFlushPercent;
    unsigned int _videoFlushPercent;
    unsigned int _errorCode;
    unsigned int _significantOOOPacketCount;
    unsigned int _totalVideoPacketsExpected;
    unsigned int _totalFIRDemandCounter;
    unsigned int _totalFIRCounter;
    unsigned int _videoFrameDecodedButSkippedCounter;
    unsigned int _videoFrameIncompleteNextTSCounter;
    unsigned int _videoFrameTotalIncompleteCounter;
    unsigned int _decodedVideoFrameEnqueueCounter;
    unsigned int _videoFrameReceivedCounter;
    unsigned int _videoFrameExpectedCounter;
    unsigned int _encodedVideoFrameCounter;
    unsigned int _captureVideoFrameCounter;
    unsigned int _overshootSendBitrate;
    unsigned int _undershootSendBitrate;
    unsigned int _overUtilizedBandwidth;
    unsigned int _underUtilizedBandwidth;
    NSString *_relayServer;
    int _relayType;
    NSString *_accessToken;
    unsigned long long _totalCellDupTxDataBytes;
    unsigned long long _totalCellDupRxDataBytes;
    unsigned long long _totalUsedCellBudgetTxDataBytes;
    unsigned long long _totalUsedCellBudgetRxDataBytes;
    unsigned char _duplicationType;
    unsigned int _negotiatedSwitches;
    unsigned int _remoteSwitches;
    BOOL _remoteFaceTimeSwitchesAvailable;
    unsigned long long _totalCellTxDataBytes;
    unsigned long long _totalCellRxDataBytes;
    unsigned long long _totalWifiTxDataBytes;
    unsigned long long _totalWifiRxDataBytes;
    double _duplicationMaxNoRemotePacketTime;
    double _duplicationMaxRemoteNoRemotePacketTime;
    NSString *_duplicationConnectionConfig;
    NSString *_duplicationConnectionFamily;
    unsigned int _evictedFramesLikelyRecoverableCount;
    unsigned int _evictedFramesTrackedCount;
    unsigned int _evictedFramesAnalysisValidIntervals;
    double _evictedFramesAverageLatePacketDelay;
    unsigned int _fecProcessingTime;
    VCHistogram *_lossPattern;
    NSNumber *_IPVersion;
    NSNumber *_localCelltech;
    NSNumber *_remoteCelltech;
    NSNumber *_isLocalExpensive;
    NSNumber *_isRemoteExpensive;
    NSNumber *_maxNegotiatedUplinkBitrate;
    NSNumber *_maxNegotiatedDownlinkBitrate;
    NSMutableDictionary *_fecStatsDict;
    int _interval;
    int _frequency;
    NSString *_segmentName;
    NSString *_previousSegmentName;
    NSString *_activeConnectionRegistry;
    NSString *_remoteOSBuild;
    unsigned int _vcrcProfileNumber;
    double _primaryConnHealthAllowedDelay;
    unsigned int _averageJitterQueueSize;
    unsigned int _averageJitterQueueSizeChanges;
    unsigned int _maxJitterQueueSize;
    double _timeWeightedJitterQueueSize;
    unsigned int _localAlertStateSwitchCount;
    unsigned int _remoteAlertStateSwitchCount;
    unsigned int _dynamicDupeLinkCount;
    double _rttMeanTotalDelta;
    unsigned char _plrTierTotalDelta;
    CDStruct_4bc0a271 _linkProbingConfig;
    unsigned long long _lastReportedTotalCellDupTxDataBytes;
    unsigned long long _lastReportedTotalCellDupRxDataBytes;
    unsigned long long _lastReportedTotalUsedCellBudgetTxDataBytes;
    unsigned long long _lastReportedTotalUsedCellBudgetRxDataBytes;
    unsigned long long _lastReportedTotalCellTxDataBytes;
    unsigned long long _lastReportedTotalCellRxDataBytes;
    unsigned long long _lastReportedTotalWifiTxDataBytes;
    unsigned long long _lastReportedTotalWifiRxDataBytes;
    NSNumber *_wrmLinkTypeSuggestion;
    NSNumber *_wrmLinkTypeChangeReasonCode;
    NSNumber *_wrmLinkTypeWifiRSSI;
    NSNumber *_wrmLinkTypeWifiSNR;
    NSNumber *_wrmLinkTypeWifiCCA;
    NSNumber *_wrmLinkTypeWifiPacketLoss;
    NSNumber *_wrmLinkTypeCellSignalStrength;
    NSNumber *_wrmLinkTypeCellSignalBar;
    NSNumber *_wrmLinkTypeCellServingCellType;
    id<VCAdaptiveLearningDelegate> _delegate;
    unsigned int _videoFrameNonFECTotalCounter;
    unsigned int _videoFrameNonFECCompleteCounter;
    NSString *_suggestedLinkTypeCombo;
}

@property unsigned int BBQueueTooLargeCount; // @synthesize BBQueueTooLargeCount=_BBQueueTooLargeCount;
@property unsigned int BBRateTooLowCount; // @synthesize BBRateTooLowCount=_BBRateTooLowCount;
@property (copy) NSNumber *IPVersion; // @synthesize IPVersion=_IPVersion;
@property (readonly) VCHistogram *JBQSize; // @synthesize JBQSize=_JBQSize;
@property (readonly) VCHistogram *JBQSizeDeltaAudLarger; // @synthesize JBQSizeDeltaAudLarger=_JBQSizeDeltaAudLarger;
@property (readonly) VCHistogram *JBQSizeDeltaVidLarger; // @synthesize JBQSizeDeltaVidLarger=_JBQSizeDeltaVidLarger;
@property (readonly) VCHistogram *JBTarget; // @synthesize JBTarget=_JBTarget;
@property (readonly) VCHistogram *JBUnclippedTarget; // @synthesize JBUnclippedTarget=_JBUnclippedTarget;
@property (readonly) VCHistogram *PLR; // @synthesize PLR=_PLR;
@property (readonly) VCHistogram *RBR; // @synthesize RBR=_RBR;
@property (readonly) VCHistogram *REDDiscardedCount; // @synthesize REDDiscardedCount=_REDDiscardedCount;
@property (readonly) VCHistogram *REDErasureCompensationRate; // @synthesize REDErasureCompensationRate=_REDErasureCompensationRate;
@property (readonly) VCHistogram *REDMaxDelay; // @synthesize REDMaxDelay=_REDMaxDelay;
@property (readonly) VCHistogram *REDNumPayloadsUsed; // @synthesize REDNumPayloadsUsed=_REDNumPayloadsUsed;
@property (readonly) VCHistogram *REDReceivedCount; // @synthesize REDReceivedCount=_REDReceivedCount;
@property (readonly) VCHistogram *RTT; // @synthesize RTT=_RTT;
@property (readonly) VCHistogram *SBR; // @synthesize SBR=_SBR;
@property (readonly) VCHistogram *TBR; // @synthesize TBR=_TBR;
@property (readonly) VCHistogram *VPLR; // @synthesize VPLR=_VPLR;
@property unsigned long long VPLRAccumulator; // @synthesize VPLRAccumulator=_VPLRAccumulator;
@property (readonly) VCHistogram *WANVJBQSize; // @synthesize WANVJBQSize=_WANVJBQSize;
@property (readonly) VCHistogram *abnormalBPL; // @synthesize abnormalBPL=_abnormalBPL;
@property (readonly) VCHistogram *abnormalPLR; // @synthesize abnormalPLR=_abnormalPLR;
@property (readonly) VCHistogram *abnormalRTT; // @synthesize abnormalRTT=_abnormalRTT;
@property (copy) NSString *activeConnectionRegistry; // @synthesize activeConnectionRegistry=_activeConnectionRegistry;
@property int adjustedDuration; // @synthesize adjustedDuration=_adjustedDuration;
@property (readonly) VCHistogram *audioErasures; // @synthesize audioErasures=_audioErasures;
@property unsigned long long audioFlushPacketCount; // @synthesize audioFlushPacketCount=_audioFlushPacketCount;
@property unsigned int audioRecvPacketCount; // @synthesize audioRecvPacketCount=_audioRecvPacketCount;
@property unsigned long long audioSentPacketCount; // @synthesize audioSentPacketCount=_audioSentPacketCount;
@property double averageAudioErasuresRate; // @synthesize averageAudioErasuresRate=_averageAudioErasuresRate;
@property double averageBWE; // @synthesize averageBWE=_averageBWE;
@property unsigned int averageJitterQueueSize; // @synthesize averageJitterQueueSize=_averageJitterQueueSize;
@property unsigned int averageJitterQueueSizeChanges; // @synthesize averageJitterQueueSizeChanges=_averageJitterQueueSizeChanges;
@property double averageRTT; // @synthesize averageRTT=_averageRTT;
@property double averageReceiveBitrate; // @synthesize averageReceiveBitrate=_averageReceiveBitrate;
@property double averageSendBitrate; // @synthesize averageSendBitrate=_averageSendBitrate;
@property double averageSpeechErasuresRate; // @synthesize averageSpeechErasuresRate=_averageSpeechErasuresRate;
@property double averageTargetBitrate; // @synthesize averageTargetBitrate=_averageTargetBitrate;
@property double averageTotalVideoRecvBitrate; // @synthesize averageTotalVideoRecvBitrate=_averageTotalVideoRecvBitrate;
@property double averageTotalVideoSendBitrate; // @synthesize averageTotalVideoSendBitrate=_averageTotalVideoSendBitrate;
@property double averageVideoFECSendBitrate; // @synthesize averageVideoFECSendBitrate=_averageVideoFECSendBitrate;
@property double averageVideoHeaderSendBitrate; // @synthesize averageVideoHeaderSendBitrate=_averageVideoHeaderSendBitrate;
@property double averageVideoMediaSendBitrate; // @synthesize averageVideoMediaSendBitrate=_averageVideoMediaSendBitrate;
@property (readonly) unsigned int callDeviceRole; // @synthesize callDeviceRole=_callDeviceRole;
@property (readonly) unsigned int callMode; // @synthesize callMode=_callMode;
@property (readonly) unsigned int callTransportType; // @synthesize callTransportType=_callTransportType;
@property unsigned int captureVideoFrameCounter; // @synthesize captureVideoFrameCounter=_captureVideoFrameCounter;
@property unsigned int decodedVideoFrameEnqueueCounter; // @synthesize decodedVideoFrameEnqueueCounter=_decodedVideoFrameEnqueueCounter;
@property (copy) NSString *duplicationConnectionConfig; // @synthesize duplicationConnectionConfig=_duplicationConnectionConfig;
@property (copy) NSString *duplicationConnectionFamily; // @synthesize duplicationConnectionFamily=_duplicationConnectionFamily;
@property double duplicationMaxNoRemotePacketTime; // @synthesize duplicationMaxNoRemotePacketTime=_duplicationMaxNoRemotePacketTime;
@property double duplicationMaxRemoteNoRemotePacketTime; // @synthesize duplicationMaxRemoteNoRemotePacketTime=_duplicationMaxRemoteNoRemotePacketTime;
@property int duration; // @synthesize duration=_duration;
@property unsigned int dynamicDupeLinkCount; // @synthesize dynamicDupeLinkCount=_dynamicDupeLinkCount;
@property unsigned int encodedVideoFrameCounter; // @synthesize encodedVideoFrameCounter=_encodedVideoFrameCounter;
@property unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property unsigned int evictedFramesAnalysisValidIntervals; // @synthesize evictedFramesAnalysisValidIntervals=_evictedFramesAnalysisValidIntervals;
@property double evictedFramesAverageLatePacketDelay; // @synthesize evictedFramesAverageLatePacketDelay=_evictedFramesAverageLatePacketDelay;
@property unsigned int evictedFramesLikelyRecoverableCount; // @synthesize evictedFramesLikelyRecoverableCount=_evictedFramesLikelyRecoverableCount;
@property unsigned int evictedFramesTrackedCount; // @synthesize evictedFramesTrackedCount=_evictedFramesTrackedCount;
@property unsigned int fecProcessingTime; // @synthesize fecProcessingTime=_fecProcessingTime;
@property (readonly) NSMutableDictionary *fecStatsDict; // @synthesize fecStatsDict=_fecStatsDict;
@property (readonly) VCHistogram *framerate; // @synthesize framerate=_framerate;
@property (copy) NSNumber *isLocalExpensive; // @synthesize isLocalExpensive=_isLocalExpensive;
@property (copy) NSNumber *isRemoteExpensive; // @synthesize isRemoteExpensive=_isRemoteExpensive;
@property unsigned long long lastReportedTotalCellDupRxDataBytes; // @synthesize lastReportedTotalCellDupRxDataBytes=_lastReportedTotalCellDupRxDataBytes;
@property unsigned long long lastReportedTotalCellDupTxDataBytes; // @synthesize lastReportedTotalCellDupTxDataBytes=_lastReportedTotalCellDupTxDataBytes;
@property unsigned long long lastReportedTotalCellRxDataBytes; // @synthesize lastReportedTotalCellRxDataBytes=_lastReportedTotalCellRxDataBytes;
@property unsigned long long lastReportedTotalCellTxDataBytes; // @synthesize lastReportedTotalCellTxDataBytes=_lastReportedTotalCellTxDataBytes;
@property unsigned long long lastReportedTotalUsedCellBudgetRxDataBytes; // @synthesize lastReportedTotalUsedCellBudgetRxDataBytes=_lastReportedTotalUsedCellBudgetRxDataBytes;
@property unsigned long long lastReportedTotalUsedCellBudgetTxDataBytes; // @synthesize lastReportedTotalUsedCellBudgetTxDataBytes=_lastReportedTotalUsedCellBudgetTxDataBytes;
@property unsigned long long lastReportedTotalWifiRxDataBytes; // @synthesize lastReportedTotalWifiRxDataBytes=_lastReportedTotalWifiRxDataBytes;
@property unsigned long long lastReportedTotalWifiTxDataBytes; // @synthesize lastReportedTotalWifiTxDataBytes=_lastReportedTotalWifiTxDataBytes;
@property (readonly) VCHistogram *latency; // @synthesize latency=_latency;
@property unsigned int localAlertStateSwitchCount; // @synthesize localAlertStateSwitchCount=_localAlertStateSwitchCount;
@property (copy) NSNumber *localCelltech; // @synthesize localCelltech=_localCelltech;
@property (readonly) VCHistogram *lossPattern; // @synthesize lossPattern=_lossPattern;
@property double maxAudioStallInterval; // @synthesize maxAudioStallInterval=_maxAudioStallInterval;
@property unsigned int maxBWE; // @synthesize maxBWE=_maxBWE;
@property unsigned int maxJitterQueueSize; // @synthesize maxJitterQueueSize=_maxJitterQueueSize;
@property double maxMediaStallTime; // @synthesize maxMediaStallTime=_maxMediaStallTime;
@property (copy) NSNumber *maxNegotiatedDownlinkBitrate; // @synthesize maxNegotiatedDownlinkBitrate=_maxNegotiatedDownlinkBitrate;
@property (copy) NSNumber *maxNegotiatedUplinkBitrate; // @synthesize maxNegotiatedUplinkBitrate=_maxNegotiatedUplinkBitrate;
@property double maxNoRemotePacketsInterval; // @synthesize maxNoRemotePacketsInterval=_maxNoRemotePacketsInterval;
@property double maxVideoStallInterval; // @synthesize maxVideoStallInterval=_maxVideoStallInterval;
@property (readonly) VCHistogram *mediaStall; // @synthesize mediaStall=_mediaStall;
@property unsigned int mediaStallCount; // @synthesize mediaStallCount=_mediaStallCount;
@property unsigned int minBWE; // @synthesize minBWE=_minBWE;
@property unsigned int overUtilizedBandwidth; // @synthesize overUtilizedBandwidth=_overUtilizedBandwidth;
@property unsigned int overshootSendBitrate; // @synthesize overshootSendBitrate=_overshootSendBitrate;
@property unsigned char plrTierTotalDelta; // @synthesize plrTierTotalDelta=_plrTierTotalDelta;
@property (readonly) VCHistogram *poorConnection; // @synthesize poorConnection=_poorConnection;
@property unsigned int poorConnectionFrequency; // @synthesize poorConnectionFrequency=_poorConnectionFrequency;
@property double poorConnectionMaxLength; // @synthesize poorConnectionMaxLength=_poorConnectionMaxLength;
@property double poorConnectionTotalLength; // @synthesize poorConnectionTotalLength=_poorConnectionTotalLength;
@property (readonly) NSString *previousSegmentName; // @synthesize previousSegmentName=_previousSegmentName;
@property double primaryConnHealthAllowedDelay; // @synthesize primaryConnHealthAllowedDelay=_primaryConnHealthAllowedDelay;
@property unsigned int remoteAlertStateSwitchCount; // @synthesize remoteAlertStateSwitchCount=_remoteAlertStateSwitchCount;
@property (copy) NSNumber *remoteCelltech; // @synthesize remoteCelltech=_remoteCelltech;
@property (copy) NSString *remoteOSBuild; // @synthesize remoteOSBuild=_remoteOSBuild;
@property double rttMeanTotalDelta; // @synthesize rttMeanTotalDelta=_rttMeanTotalDelta;
@property (readonly) NSString *segmentName; // @synthesize segmentName=_segmentName;
@property unsigned int significantOOOPacketCount; // @synthesize significantOOOPacketCount=_significantOOOPacketCount;
@property double speechErasureTotalTime; // @synthesize speechErasureTotalTime=_speechErasureTotalTime;
@property (readonly) VCHistogram *speechErasures; // @synthesize speechErasures=_speechErasures;
@property (copy) NSString *suggestedLinkTypeCombo; // @synthesize suggestedLinkTypeCombo=_suggestedLinkTypeCombo;
@property double timeWeightedJitterQueueSize; // @synthesize timeWeightedJitterQueueSize=_timeWeightedJitterQueueSize;
@property double totalAudioStallTime; // @synthesize totalAudioStallTime=_totalAudioStallTime;
@property unsigned long long totalCellDupRxDataBytes; // @synthesize totalCellDupRxDataBytes=_totalCellDupRxDataBytes;
@property unsigned long long totalCellDupTxDataBytes; // @synthesize totalCellDupTxDataBytes=_totalCellDupTxDataBytes;
@property unsigned long long totalCellRxDataBytes; // @synthesize totalCellRxDataBytes=_totalCellRxDataBytes;
@property unsigned long long totalCellTxDataBytes; // @synthesize totalCellTxDataBytes=_totalCellTxDataBytes;
@property unsigned int totalFIRCounter; // @synthesize totalFIRCounter=_totalFIRCounter;
@property unsigned int totalFIRDemandCounter; // @synthesize totalFIRDemandCounter=_totalFIRDemandCounter;
@property unsigned int totalMBLRampDownCount; // @synthesize totalMBLRampDownCount=_totalMBLRampDownCount;
@property double totalMediaStallTime; // @synthesize totalMediaStallTime=_totalMediaStallTime;
@property double totalNoRemotePacketsTime; // @synthesize totalNoRemotePacketsTime=_totalNoRemotePacketsTime;
@property unsigned int totalSuddenBandwidthDropCount; // @synthesize totalSuddenBandwidthDropCount=_totalSuddenBandwidthDropCount;
@property unsigned long long totalUsedCellBudgetRxDataBytes; // @synthesize totalUsedCellBudgetRxDataBytes=_totalUsedCellBudgetRxDataBytes;
@property unsigned long long totalUsedCellBudgetTxDataBytes; // @synthesize totalUsedCellBudgetTxDataBytes=_totalUsedCellBudgetTxDataBytes;
@property unsigned int totalVideoPacketsExpected; // @synthesize totalVideoPacketsExpected=_totalVideoPacketsExpected;
@property double totalVideoStallTime; // @synthesize totalVideoStallTime=_totalVideoStallTime;
@property unsigned long long totalWifiRxDataBytes; // @synthesize totalWifiRxDataBytes=_totalWifiRxDataBytes;
@property unsigned long long totalWifiTxDataBytes; // @synthesize totalWifiTxDataBytes=_totalWifiTxDataBytes;
@property unsigned int underUtilizedBandwidth; // @synthesize underUtilizedBandwidth=_underUtilizedBandwidth;
@property unsigned int undershootSendBitrate; // @synthesize undershootSendBitrate=_undershootSendBitrate;
@property unsigned int vcrcProfileNumber; // @synthesize vcrcProfileNumber=_vcrcProfileNumber;
@property (readonly) VCHistogram *videoEncodingBitrate; // @synthesize videoEncodingBitrate=_videoEncodingBitrate;
@property unsigned long long videoFlushPacketCount; // @synthesize videoFlushPacketCount=_videoFlushPacketCount;
@property unsigned int videoFrameDecodedButSkippedCounter; // @synthesize videoFrameDecodedButSkippedCounter=_videoFrameDecodedButSkippedCounter;
@property unsigned int videoFrameExpectedCounter; // @synthesize videoFrameExpectedCounter=_videoFrameExpectedCounter;
@property unsigned int videoFrameIncompleteNextTSCounter; // @synthesize videoFrameIncompleteNextTSCounter=_videoFrameIncompleteNextTSCounter;
@property unsigned int videoFrameNonFECCompleteCounter; // @synthesize videoFrameNonFECCompleteCounter=_videoFrameNonFECCompleteCounter;
@property unsigned int videoFrameNonFECTotalCounter; // @synthesize videoFrameNonFECTotalCounter=_videoFrameNonFECTotalCounter;
@property unsigned int videoFrameReceivedCounter; // @synthesize videoFrameReceivedCounter=_videoFrameReceivedCounter;
@property unsigned int videoFrameTotalIncompleteCounter; // @synthesize videoFrameTotalIncompleteCounter=_videoFrameTotalIncompleteCounter;
@property (readonly) VCHistogram *videoJitter; // @synthesize videoJitter=_videoJitter;
@property (readonly) VCHistogram *videoQualityScore; // @synthesize videoQualityScore=_videoQualityScore;
@property (readonly) VCHistogram *videoResolution; // @synthesize videoResolution=_videoResolution;
@property unsigned long long videoSentPacketCount; // @synthesize videoSentPacketCount=_videoSentPacketCount;
@property (readonly) VCHistogram *videoStall; // @synthesize videoStall=_videoStall;
@property NSNumber *wrmLinkTypeCellServingCellType; // @synthesize wrmLinkTypeCellServingCellType=_wrmLinkTypeCellServingCellType;
@property NSNumber *wrmLinkTypeCellSignalBar; // @synthesize wrmLinkTypeCellSignalBar=_wrmLinkTypeCellSignalBar;
@property NSNumber *wrmLinkTypeCellSignalStrength; // @synthesize wrmLinkTypeCellSignalStrength=_wrmLinkTypeCellSignalStrength;
@property NSNumber *wrmLinkTypeChangeReasonCode; // @synthesize wrmLinkTypeChangeReasonCode=_wrmLinkTypeChangeReasonCode;
@property NSNumber *wrmLinkTypeSuggestion; // @synthesize wrmLinkTypeSuggestion=_wrmLinkTypeSuggestion;
@property NSNumber *wrmLinkTypeWifiCCA; // @synthesize wrmLinkTypeWifiCCA=_wrmLinkTypeWifiCCA;
@property NSNumber *wrmLinkTypeWifiPacketLoss; // @synthesize wrmLinkTypeWifiPacketLoss=_wrmLinkTypeWifiPacketLoss;
@property NSNumber *wrmLinkTypeWifiRSSI; // @synthesize wrmLinkTypeWifiRSSI=_wrmLinkTypeWifiRSSI;
@property NSNumber *wrmLinkTypeWifiSNR; // @synthesize wrmLinkTypeWifiSNR=_wrmLinkTypeWifiSNR;

+ (id)connectionCategoryForType:(id)arg1;
+ (id)interfaceCategoryForType:(id)arg1;
+ (id)newSegmentNameWithComponents:(id)arg1 remoteInterface:(id)arg2 connectionType:(id)arg3 duplicationIndicator:(id)arg4;
- (unsigned int)RTPeriod;
- (void)addSegmentWRMReportStats:(id)arg1;
- (id)celltechTelemetry;
- (void)changeDuplicationWithType:(unsigned short)arg1 payload:(id)arg2;
- (void)dealloc;
- (id)duplicationCategoryForSegmentName:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 mode:(unsigned short)arg3 deviceRole:(unsigned short)arg4 transportType:(unsigned short)arg5 relayServer:(id)arg6 relayType:(unsigned short)arg7 accessToken:(id)arg8 duplicationType:(unsigned char)arg9 switchConfig:(id)arg10 linkProbingConfig:(CDStruct_4bc0a271)arg11 delegate:(id)arg12;
- (void)merge:(id)arg1;
- (id)segmentFECReport;
- (id)segmentQRReport;
- (id)segmentReport;

@end

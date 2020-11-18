//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VCHistogram, VCVideoFECStatsHolder;
@protocol VCAdaptiveLearningDelegate;

@interface CallSegment : NSObject
{
    VCHistogram *_RTT;
    VCHistogram *_JBQSize;
    VCHistogram *_JBTarget;
    VCHistogram *_JBUnclippedTarget;
    VCHistogram *_PLR;
    VCHistogram *_VPLR;
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
    double _averageRTT;
    unsigned int _poorConnectionFrequency;
    unsigned int _BBQueueTooLargeCount;
    unsigned int _BBRateTooLowCount;
    unsigned long long _audioFlushPacketCount;
    unsigned long long _audioSentPacketCount;
    unsigned long long _videoFlushPacketCount;
    unsigned long long _videoSentPacketCount;
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
    unsigned int _videoFrameImcompleteNextTSCounter;
    unsigned int _videoFrameTotalIncompleteCounter;
    unsigned int _decodedVideoFrameEnqueueCounter;
    unsigned int _encodedVideoFrameCounter;
    unsigned int _captureVideoFrameCounter;
    NSString *_relayServer;
    int _relayType;
    NSString *_accessToken;
    VCVideoFECStatsHolder *_videoFECStatsLevel1;
    VCVideoFECStatsHolder *_videoFECStatsLevel2;
    VCVideoFECStatsHolder *_videoFECStatsLevel3;
    int _interval;
    int _frequency;
    NSString *_segmentName;
    NSString *_previousSegmentName;
    id<VCAdaptiveLearningDelegate> _delegate;
}

@property unsigned int BBQueueTooLargeCount; // @synthesize BBQueueTooLargeCount=_BBQueueTooLargeCount;
@property unsigned int BBRateTooLowCount; // @synthesize BBRateTooLowCount=_BBRateTooLowCount;
@property (readonly) VCHistogram *JBQSize; // @synthesize JBQSize=_JBQSize;
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
@property int adjustedDuration; // @synthesize adjustedDuration=_adjustedDuration;
@property (readonly) VCHistogram *audioErasures; // @synthesize audioErasures=_audioErasures;
@property unsigned long long audioFlushPacketCount; // @synthesize audioFlushPacketCount=_audioFlushPacketCount;
@property unsigned long long audioSentPacketCount; // @synthesize audioSentPacketCount=_audioSentPacketCount;
@property double averageAudioErasuresRate; // @synthesize averageAudioErasuresRate=_averageAudioErasuresRate;
@property double averageBWE; // @synthesize averageBWE=_averageBWE;
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
@property int duration; // @synthesize duration=_duration;
@property unsigned int encodedVideoFrameCounter; // @synthesize encodedVideoFrameCounter=_encodedVideoFrameCounter;
@property unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property (readonly) VCHistogram *framerate; // @synthesize framerate=_framerate;
@property (readonly) VCHistogram *latency; // @synthesize latency=_latency;
@property double maxAudioStallInterval; // @synthesize maxAudioStallInterval=_maxAudioStallInterval;
@property unsigned int maxBWE; // @synthesize maxBWE=_maxBWE;
@property double maxNoRemotePacketsInterval; // @synthesize maxNoRemotePacketsInterval=_maxNoRemotePacketsInterval;
@property double maxVideoStallInterval; // @synthesize maxVideoStallInterval=_maxVideoStallInterval;
@property (readonly) VCHistogram *mediaStall; // @synthesize mediaStall=_mediaStall;
@property unsigned int mediaStallCount; // @synthesize mediaStallCount=_mediaStallCount;
@property unsigned int minBWE; // @synthesize minBWE=_minBWE;
@property (readonly) VCHistogram *poorConnection; // @synthesize poorConnection=_poorConnection;
@property unsigned int poorConnectionFrequency; // @synthesize poorConnectionFrequency=_poorConnectionFrequency;
@property double poorConnectionMaxLength; // @synthesize poorConnectionMaxLength=_poorConnectionMaxLength;
@property double poorConnectionTotalLength; // @synthesize poorConnectionTotalLength=_poorConnectionTotalLength;
@property (readonly) NSString *previousSegmentName; // @synthesize previousSegmentName=_previousSegmentName;
@property (readonly) NSString *segmentName; // @synthesize segmentName=_segmentName;
@property unsigned int significantOOOPacketCount; // @synthesize significantOOOPacketCount=_significantOOOPacketCount;
@property double speechErasureTotalTime; // @synthesize speechErasureTotalTime=_speechErasureTotalTime;
@property (readonly) VCHistogram *speechErasures; // @synthesize speechErasures=_speechErasures;
@property double totalAudioStallTime; // @synthesize totalAudioStallTime=_totalAudioStallTime;
@property unsigned int totalFIRCounter; // @synthesize totalFIRCounter=_totalFIRCounter;
@property unsigned int totalFIRDemandCounter; // @synthesize totalFIRDemandCounter=_totalFIRDemandCounter;
@property double totalMediaStallTime; // @synthesize totalMediaStallTime=_totalMediaStallTime;
@property double totalNoRemotePacketsTime; // @synthesize totalNoRemotePacketsTime=_totalNoRemotePacketsTime;
@property unsigned int totalVideoPacketsExpected; // @synthesize totalVideoPacketsExpected=_totalVideoPacketsExpected;
@property double totalVideoStallTime; // @synthesize totalVideoStallTime=_totalVideoStallTime;
@property (readonly) VCHistogram *videoEncodingBitrate; // @synthesize videoEncodingBitrate=_videoEncodingBitrate;
@property (strong) VCVideoFECStatsHolder *videoFECStatsLevel1; // @synthesize videoFECStatsLevel1=_videoFECStatsLevel1;
@property (strong) VCVideoFECStatsHolder *videoFECStatsLevel2; // @synthesize videoFECStatsLevel2=_videoFECStatsLevel2;
@property (strong) VCVideoFECStatsHolder *videoFECStatsLevel3; // @synthesize videoFECStatsLevel3=_videoFECStatsLevel3;
@property unsigned long long videoFlushPacketCount; // @synthesize videoFlushPacketCount=_videoFlushPacketCount;
@property unsigned int videoFrameDecodedButSkippedCounter; // @synthesize videoFrameDecodedButSkippedCounter=_videoFrameDecodedButSkippedCounter;
@property unsigned int videoFrameImcompleteNextTSCounter; // @synthesize videoFrameImcompleteNextTSCounter=_videoFrameImcompleteNextTSCounter;
@property unsigned int videoFrameTotalIncompleteCounter; // @synthesize videoFrameTotalIncompleteCounter=_videoFrameTotalIncompleteCounter;
@property (readonly) VCHistogram *videoJitter; // @synthesize videoJitter=_videoJitter;
@property (readonly) VCHistogram *videoQualityScore; // @synthesize videoQualityScore=_videoQualityScore;
@property (readonly) VCHistogram *videoResolution; // @synthesize videoResolution=_videoResolution;
@property unsigned long long videoSentPacketCount; // @synthesize videoSentPacketCount=_videoSentPacketCount;
@property (readonly) VCHistogram *videoStall; // @synthesize videoStall=_videoStall;

- (unsigned int)RTPeriod;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 mode:(unsigned short)arg3 deviceRole:(unsigned short)arg4 transportType:(unsigned short)arg5 relayServer:(id)arg6 relayType:(unsigned short)arg7 accessToken:(id)arg8 delegate:(id)arg9;
- (void)merge:(id)arg1;
- (id)segmentQRReport;
- (id)segmentReport;

@end


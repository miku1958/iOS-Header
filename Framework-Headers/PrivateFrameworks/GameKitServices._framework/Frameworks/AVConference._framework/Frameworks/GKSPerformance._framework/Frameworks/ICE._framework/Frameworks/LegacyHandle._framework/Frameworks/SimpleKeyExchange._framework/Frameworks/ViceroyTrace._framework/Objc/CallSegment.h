//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, VCHistogram;

@interface CallSegment : NSObject
{
    VCHistogram *_RTT;
    VCHistogram *_JBQSize;
    VCHistogram *_JBTarget;
    VCHistogram *_PLR;
    VCHistogram *_latency;
    VCHistogram *_TBR;
    VCHistogram *_RBR;
    VCHistogram *_SBR;
    VCHistogram *_framerate;
    VCHistogram *_audioErasures;
    VCHistogram *_videoQualityScore;
    VCHistogram *_poorConnection;
    VCHistogram *_videoResolution;
    VCHistogram *_videoEncodingBitrate;
    VCHistogram *_videoJitter;
    int _duration;
    int _adjustedDuration;
    double _totalVideoStallTime;
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
    double _averageAudioErasuresRate;
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
    int _interval;
    int _frequency;
    NSString *_segmentName;
    NSString *_previousSegmentName;
}

@property unsigned int BBQueueTooLargeCount; // @synthesize BBQueueTooLargeCount=_BBQueueTooLargeCount;
@property unsigned int BBRateTooLowCount; // @synthesize BBRateTooLowCount=_BBRateTooLowCount;
@property (readonly) VCHistogram *JBQSize; // @synthesize JBQSize=_JBQSize;
@property (readonly) VCHistogram *JBTarget; // @synthesize JBTarget=_JBTarget;
@property (readonly) VCHistogram *PLR; // @synthesize PLR=_PLR;
@property (readonly) VCHistogram *RBR; // @synthesize RBR=_RBR;
@property (readonly) VCHistogram *RTT; // @synthesize RTT=_RTT;
@property (readonly) VCHistogram *SBR; // @synthesize SBR=_SBR;
@property (readonly) VCHistogram *TBR; // @synthesize TBR=_TBR;
@property int adjustedDuration; // @synthesize adjustedDuration=_adjustedDuration;
@property (readonly) VCHistogram *audioErasures; // @synthesize audioErasures=_audioErasures;
@property unsigned long long audioFlushPacketCount; // @synthesize audioFlushPacketCount=_audioFlushPacketCount;
@property unsigned long long audioSentPacketCount; // @synthesize audioSentPacketCount=_audioSentPacketCount;
@property double averageAudioErasuresRate; // @synthesize averageAudioErasuresRate=_averageAudioErasuresRate;
@property double averageReceiveBitrate; // @synthesize averageReceiveBitrate=_averageReceiveBitrate;
@property double averageSendBitrate; // @synthesize averageSendBitrate=_averageSendBitrate;
@property double averageTargetBitrate; // @synthesize averageTargetBitrate=_averageTargetBitrate;
@property (readonly) unsigned int callDeviceRole; // @synthesize callDeviceRole=_callDeviceRole;
@property (readonly) unsigned int callMode; // @synthesize callMode=_callMode;
@property (readonly) unsigned int callTransportType; // @synthesize callTransportType=_callTransportType;
@property int duration; // @synthesize duration=_duration;
@property (readonly) VCHistogram *framerate; // @synthesize framerate=_framerate;
@property (readonly) VCHistogram *latency; // @synthesize latency=_latency;
@property double maxAudioStallInterval; // @synthesize maxAudioStallInterval=_maxAudioStallInterval;
@property double maxNoRemotePacketsInterval; // @synthesize maxNoRemotePacketsInterval=_maxNoRemotePacketsInterval;
@property double maxVideoStallInterval; // @synthesize maxVideoStallInterval=_maxVideoStallInterval;
@property (readonly) VCHistogram *poorConnection; // @synthesize poorConnection=_poorConnection;
@property unsigned int poorConnectionFrequency; // @synthesize poorConnectionFrequency=_poorConnectionFrequency;
@property double poorConnectionMaxLength; // @synthesize poorConnectionMaxLength=_poorConnectionMaxLength;
@property double poorConnectionTotalLength; // @synthesize poorConnectionTotalLength=_poorConnectionTotalLength;
@property (readonly) NSString *previousSegmentName; // @synthesize previousSegmentName=_previousSegmentName;
@property (readonly) NSString *segmentName; // @synthesize segmentName=_segmentName;
@property double totalAudioStallTime; // @synthesize totalAudioStallTime=_totalAudioStallTime;
@property double totalNoRemotePacketsTime; // @synthesize totalNoRemotePacketsTime=_totalNoRemotePacketsTime;
@property double totalVideoStallTime; // @synthesize totalVideoStallTime=_totalVideoStallTime;
@property (readonly) VCHistogram *videoEncodingBitrate; // @synthesize videoEncodingBitrate=_videoEncodingBitrate;
@property unsigned long long videoFlushPacketCount; // @synthesize videoFlushPacketCount=_videoFlushPacketCount;
@property (readonly) VCHistogram *videoJitter; // @synthesize videoJitter=_videoJitter;
@property (readonly) VCHistogram *videoQualityScore; // @synthesize videoQualityScore=_videoQualityScore;
@property (readonly) VCHistogram *videoResolution; // @synthesize videoResolution=_videoResolution;
@property unsigned long long videoSentPacketCount; // @synthesize videoSentPacketCount=_videoSentPacketCount;

- (unsigned int)RTPeriod;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 mode:(unsigned short)arg3 deviceRole:(unsigned short)arg4 transportType:(unsigned short)arg5;
- (void)merge:(id)arg1;
- (id)segmentReport;

@end


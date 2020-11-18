//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class VCHistogram;

__attribute__((visibility("hidden")))
@interface CallSegment : NSObject
{
    VCHistogram *_RTT;
    VCHistogram *_JBQSize;
    VCHistogram *_JBTarget;
    VCHistogram *_PLR;
    VCHistogram *_latency;
    VCHistogram *_TBR;
    VCHistogram *_framerate;
    VCHistogram *_audioErasures;
    VCHistogram *_videoQualityScore;
    VCHistogram *_videoResolution;
    VCHistogram *_videoEncodingBitrate;
    VCHistogram *_videoJitter;
    int _duration;
    double _totalVideoStallTime;
    double _maxVideoStallInterval;
    double _totalAudioStallTime;
    double _maxAudioStallInterval;
    double _maxNoRemotePacketsInterval;
    double _totalNoRemotePacketsTime;
    unsigned int _BBQueueTooLarge;
    unsigned int _BBRateTooLow;
    unsigned long long _audioFlushPacketCount;
    unsigned long long _audioSentPacketCount;
    unsigned long long _videoFlushPacketCount;
    unsigned long long _videoSentPacketCount;
    int _interval;
    int _frequency;
}

@property unsigned int BBQueueTooLarge; // @synthesize BBQueueTooLarge=_BBQueueTooLarge;
@property unsigned int BBRateTooLow; // @synthesize BBRateTooLow=_BBRateTooLow;
@property (readonly) VCHistogram *JBQSize; // @synthesize JBQSize=_JBQSize;
@property (readonly) VCHistogram *JBTarget; // @synthesize JBTarget=_JBTarget;
@property (readonly) VCHistogram *PLR; // @synthesize PLR=_PLR;
@property (readonly) VCHistogram *RTT; // @synthesize RTT=_RTT;
@property (readonly) VCHistogram *TBR; // @synthesize TBR=_TBR;
@property (readonly) VCHistogram *audioErasures; // @synthesize audioErasures=_audioErasures;
@property unsigned long long audioFlushPacketCount; // @synthesize audioFlushPacketCount=_audioFlushPacketCount;
@property unsigned long long audioSentPacketCount; // @synthesize audioSentPacketCount=_audioSentPacketCount;
@property int duration; // @synthesize duration=_duration;
@property (readonly) VCHistogram *framerate; // @synthesize framerate=_framerate;
@property (readonly) VCHistogram *latency; // @synthesize latency=_latency;
@property double maxAudioStallInterval; // @synthesize maxAudioStallInterval=_maxAudioStallInterval;
@property double maxNoRemotePacketsInterval; // @synthesize maxNoRemotePacketsInterval=_maxNoRemotePacketsInterval;
@property double maxVideoStallInterval; // @synthesize maxVideoStallInterval=_maxVideoStallInterval;
@property double totalAudioStallTime; // @synthesize totalAudioStallTime=_totalAudioStallTime;
@property double totalNoRemotePacketsTime; // @synthesize totalNoRemotePacketsTime=_totalNoRemotePacketsTime;
@property double totalVideoStallTime; // @synthesize totalVideoStallTime=_totalVideoStallTime;
@property (readonly) VCHistogram *videoEncodingBitrate; // @synthesize videoEncodingBitrate=_videoEncodingBitrate;
@property unsigned long long videoFlushPacketCount; // @synthesize videoFlushPacketCount=_videoFlushPacketCount;
@property (readonly) VCHistogram *videoJitter; // @synthesize videoJitter=_videoJitter;
@property (readonly) VCHistogram *videoQualityScore; // @synthesize videoQualityScore=_videoQualityScore;
@property (readonly) VCHistogram *videoResolution; // @synthesize videoResolution=_videoResolution;
@property unsigned long long videoSentPacketCount; // @synthesize videoSentPacketCount=_videoSentPacketCount;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)merge:(id)arg1;
- (id)stats;

@end


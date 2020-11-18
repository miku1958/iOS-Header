//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoQualityInfo : VCObject
{
    BOOL _videoIsExpected;
    BOOL _isVideoQualityDegraded;
    double _lastGoodVideoQualityTime;
    double _lastBadVideoQualityTime;
    double _lastVideoQualityDegradedSwitchTime;
    double _firstDegradedMeasure;
    double _videoDegradedThreshold;
}

@property (readonly, nonatomic) BOOL isVideoQualityDegraded; // @synthesize isVideoQualityDegraded=_isVideoQualityDegraded;
@property (nonatomic) BOOL videoIsExpected; // @synthesize videoIsExpected=_videoIsExpected;

- (void)dealloc;
- (id)init;
- (void)resetLastGoodVideoQualityTime:(double)arg1;
- (BOOL)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 time:(double)arg3;

@end


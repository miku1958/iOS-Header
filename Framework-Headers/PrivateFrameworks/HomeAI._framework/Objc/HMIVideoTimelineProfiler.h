//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMITimeIntervalAverage, HMIVideoTimeline;

@interface HMIVideoTimelineProfiler : HMFObject
{
    HMIVideoTimeline *_timeline;
    HMITimeIntervalAverage *_average;
}

- (void).cxx_destruct;
- (double)averageTime;
- (void)endedAtTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithMaxCapacity:(long long)arg1;
- (void)startedAtTime:(CDStruct_1b6d18a9)arg1;

@end


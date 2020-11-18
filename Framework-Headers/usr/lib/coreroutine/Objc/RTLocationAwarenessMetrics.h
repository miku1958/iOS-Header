//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>

@class AWDCoreRoutineLocationAwarenessHeartbeatStatistics, AWDCoreRoutineLocationAwarenessIntervalHistogram, AWDCoreRoutineLocationAwarenessLocationTimeHistograms, NSDate;

@interface RTLocationAwarenessMetrics : NSObject <NSCopying>
{
    NSDate *_startTimestamp;
    AWDCoreRoutineLocationAwarenessHeartbeatStatistics *_heartbeatStats;
    AWDCoreRoutineLocationAwarenessLocationTimeHistograms *_timeHistograms;
    AWDCoreRoutineLocationAwarenessIntervalHistogram *_intervalHistogram;
}

@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessHeartbeatStatistics *heartbeatStats; // @synthesize heartbeatStats=_heartbeatStats;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessIntervalHistogram *intervalHistogram; // @synthesize intervalHistogram=_intervalHistogram;
@property (readonly, nonatomic) NSDate *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property (strong, nonatomic) AWDCoreRoutineLocationAwarenessLocationTimeHistograms *timeHistograms; // @synthesize timeHistograms=_timeHistograms;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithStartTimestamp:(id)arg1 heartbeatStats:(id)arg2 timeHistograms:(id)arg3 intervalHistogram:(id)arg4;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSLock;

@interface ASDUpdateMetricsStore : NSObject
{
    NSLock *_lock;
    double _averagePollTime;
    NSArray *_metrics;
    NSDate *_lastAutoPollDate;
}

@property (readonly, nonatomic) double averagePollTime; // @synthesize averagePollTime=_averagePollTime;
@property (readonly, nonatomic) NSDate *lastAutoPollDate; // @synthesize lastAutoPollDate=_lastAutoPollDate;
@property (readonly, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;

+ (void)_setUpdateMetrics:(id)arg1;
+ (id)_updateMetrics;
- (void).cxx_destruct;
- (void)_load;
- (id)_serialableData;
- (void)addPoll:(id)arg1;
- (id)init;
- (void)synchronize;

@end


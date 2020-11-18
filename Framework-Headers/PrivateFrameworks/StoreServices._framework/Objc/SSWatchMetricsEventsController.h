//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSWatchMetricsEventTable;
@protocol OS_dispatch_queue;

@interface SSWatchMetricsEventsController : NSObject
{
    SSWatchMetricsEventTable *_table;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) SSWatchMetricsEventTable *table;

+ (id)_numberFormatter;
- (void).cxx_destruct;
- (void)discardUnreportableEvents;
- (BOOL)insertWatchMetricEvent:(id)arg1 error:(id *)arg2;
- (void)markAsCompleted:(id)arg1;
- (void)markAsFailed:(id)arg1;
- (id)unreportedEventsSinceTimestamp:(long long)arg1;

@end

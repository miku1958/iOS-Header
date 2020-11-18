//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface MPUsageStatistics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_domain;
    NSString *_lastAggregateStatisticsDisplayCountKey;
    double _lastAggregateStatisticsDisplayCountTime;
}

+ (id)sharedStatistics;
- (void).cxx_destruct;
- (id)domain;
- (void)incrementViewDisplayCountForKey:(id)arg1;
- (void)incrementViewDisplayCountForViewController:(id)arg1;
- (id)init;
- (void)setAggregateStatisticsDomain:(id)arg1;

@end


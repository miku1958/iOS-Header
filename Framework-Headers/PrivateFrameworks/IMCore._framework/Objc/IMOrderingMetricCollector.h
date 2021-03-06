//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMOrderingMetricCollector : NSObject
{
    BOOL _needToSubmitMetric;
    NSObject<OS_dispatch_queue> *_orderingMetricQueue;
    unsigned long long _numberOfMessagesSeen;
    unsigned long long _numberOfMessagesPlacedOutOfOrder;
    unsigned long long _numberOfMessagesPlacedCorrectly;
    unsigned long long _numberOfHistoryQuerySeen;
    unsigned long long _numberOfHistoryQueryOutOfOrder;
    unsigned long long _numberOfHistoryQueryPlacedCorrectly;
}

@property (nonatomic) BOOL needToSubmitMetric; // @synthesize needToSubmitMetric=_needToSubmitMetric;
@property (nonatomic) unsigned long long numberOfHistoryQueryOutOfOrder; // @synthesize numberOfHistoryQueryOutOfOrder=_numberOfHistoryQueryOutOfOrder;
@property (nonatomic) unsigned long long numberOfHistoryQueryPlacedCorrectly; // @synthesize numberOfHistoryQueryPlacedCorrectly=_numberOfHistoryQueryPlacedCorrectly;
@property (nonatomic) unsigned long long numberOfHistoryQuerySeen; // @synthesize numberOfHistoryQuerySeen=_numberOfHistoryQuerySeen;
@property (nonatomic) unsigned long long numberOfMessagesPlacedCorrectly; // @synthesize numberOfMessagesPlacedCorrectly=_numberOfMessagesPlacedCorrectly;
@property (nonatomic) unsigned long long numberOfMessagesPlacedOutOfOrder; // @synthesize numberOfMessagesPlacedOutOfOrder=_numberOfMessagesPlacedOutOfOrder;
@property (nonatomic) unsigned long long numberOfMessagesSeen; // @synthesize numberOfMessagesSeen=_numberOfMessagesSeen;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *orderingMetricQueue; // @synthesize orderingMetricQueue=_orderingMetricQueue;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_metricHistoryQueryOrder:(id)arg1;
- (BOOL)_metricIncomingMessage:(id)arg1 items:(id)arg2 withContext:(long long)arg3;
- (void)_persistMetric;
- (void)_submitMetric;
- (void)_submitMetricIfNeeded;
- (void)dealloc;
- (id)init;
- (void)metricHistoryQueryOrder:(id)arg1;
- (void)metricIncomingMessage:(id)arg1 items:(id)arg2;

@end


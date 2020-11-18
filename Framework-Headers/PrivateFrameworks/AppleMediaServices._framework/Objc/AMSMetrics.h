//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSBagConsumer_Project-Protocol.h>

@class AMSMetricsDatabaseDataSource, NSDate, NSString;
@protocol AMSBagProtocol, AMSMetricsBagContract, AMSMetricsFlushStrategy, OS_dispatch_queue;

@interface AMSMetrics : NSObject <AMSBagConsumer_Project, AMSBagConsumer>
{
    BOOL _flushTimerEnabled;
    BOOL _flushingDisabled;
    BOOL _monitorsLifecycleEvents;
    BOOL _flushOnForeground;
    id<AMSBagProtocol> _bag;
    NSString *_containerId;
    long long _maxBatchSize;
    long long _maxRequestCount;
    NSObject<OS_dispatch_queue> *_completionQueue;
    id<AMSMetricsFlushStrategy> _currentFlushStrategy;
    AMSMetricsDatabaseDataSource *_databaseSource;
    long long _destination;
    NSObject<OS_dispatch_queue> *_engagementQueue;
    CDUnknownBlockType _flushIntervalBlock;
    NSDate *_flushIntervalStartTime;
    NSObject<OS_dispatch_queue> *_flushQueue;
}

@property (strong, nonatomic) id<AMSBagProtocol> bag; // @synthesize bag=_bag;
@property (strong, nonatomic) id<AMSMetricsBagContract> bagContract;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property (readonly, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
@property (strong, nonatomic) id<AMSMetricsFlushStrategy> currentFlushStrategy; // @synthesize currentFlushStrategy=_currentFlushStrategy;
@property (strong, nonatomic) AMSMetricsDatabaseDataSource *databaseSource; // @synthesize databaseSource=_databaseSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long destination; // @synthesize destination=_destination;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *engagementQueue; // @synthesize engagementQueue=_engagementQueue;
@property (readonly, nonatomic) long long eventCount;
@property (copy, nonatomic) CDUnknownBlockType flushIntervalBlock; // @synthesize flushIntervalBlock=_flushIntervalBlock;
@property (strong, nonatomic) NSDate *flushIntervalStartTime; // @synthesize flushIntervalStartTime=_flushIntervalStartTime;
@property (nonatomic) BOOL flushOnForeground; // @synthesize flushOnForeground=_flushOnForeground;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *flushQueue; // @synthesize flushQueue=_flushQueue;
@property (nonatomic) BOOL flushTimerEnabled; // @synthesize flushTimerEnabled=_flushTimerEnabled;
@property (nonatomic) BOOL flushingDisabled; // @synthesize flushingDisabled=_flushingDisabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
@property (nonatomic) long long maxRequestCount; // @synthesize maxRequestCount=_maxRequestCount;
@property (nonatomic) BOOL monitorsLifecycleEvents; // @synthesize monitorsLifecycleEvents=_monitorsLifecycleEvents;
@property (readonly) Class superclass;

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (BOOL)appAnalyticsAllowed;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (BOOL)diagnosticsSubmissionAllowed;
+ (BOOL)disableBackgroundMetrics;
+ (BOOL)flushDelayEnabled;
+ (BOOL)flushTimerEnabled;
+ (id)internalInstanceUsingBag:(id)arg1;
+ (BOOL)recordAppAnalyticsForEvent:(id)arg1 bugType:(id)arg2;
+ (id)serverTimeFromDate:(id)arg1;
+ (id)serverTimeFromTimeInterval:(double)arg1;
+ (void)setDisableBackgroundMetrics:(BOOL)arg1;
+ (void)setFlushDelayEnabled:(BOOL)arg1;
+ (void)setFlushTimerEnabled:(BOOL)arg1;
+ (id)sharedTimerQueue;
+ (double)timeIntervalFromServerTime:(id)arg1;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground;
- (void)_beginFlushIntervalWithStyle:(long long)arg1 events:(id)arg2;
- (id)_determineFlushStrategyWithDataSource:(id)arg1 topic:(id)arg2;
- (id)_enqueueFigaroEvents:(id)arg1;
- (id)_flushDataSource:(id)arg1 topic:(id)arg2;
- (double)_flushIntervalForEvents:(id)arg1;
- (void)_flushIntervalInvalidate;
- (void)_handleFlushIntervalWithStyle:(long long)arg1;
- (BOOL)_scheduledFlushAllowedForStyle:(long long)arg1;
- (void)cancel;
- (void)dealloc;
- (void)dropEvents;
- (id)enqueueAsyncEvents:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)enqueueEvents:(id)arg1;
- (id)flush;
- (id)flushEvents:(id)arg1;
- (id)flushTopic:(id)arg1;
- (id)initWithContainerID:(id)arg1 bag:(id)arg2;
- (id)initWithContainerId:(id)arg1 bagContract:(id)arg2;

@end

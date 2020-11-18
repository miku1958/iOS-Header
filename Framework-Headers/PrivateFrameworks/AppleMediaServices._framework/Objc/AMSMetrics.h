//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSMetricsDatabase, AMSURLSession, NSDictionary, NSMutableSet, NSString;
@protocol AMSMetricsBagContract, OS_dispatch_queue;

@interface AMSMetrics : NSObject
{
    BOOL _flushCancelled;
    BOOL _disableFlushing;
    BOOL _flushOnForeground;
    id<AMSMetricsBagContract> _bagContract;
    NSString *_containerId;
    long long _maxBatchSize;
    long long _maxRequestCount;
    AMSMetricsDatabase *_database;
    NSMutableSet *_chainedFlushPromises;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _flushTimerBlock;
    NSDictionary *_lastMetricsDictionary;
    NSObject<OS_dispatch_queue> *_metricsQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSMutableSet *_requestPromises;
    AMSURLSession *_URLSession;
}

@property (strong, nonatomic) AMSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property (strong, nonatomic) id<AMSMetricsBagContract> bagContract; // @synthesize bagContract=_bagContract;
@property (strong, nonatomic) NSMutableSet *chainedFlushPromises; // @synthesize chainedFlushPromises=_chainedFlushPromises;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property (readonly, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
@property (strong, nonatomic) AMSMetricsDatabase *database; // @synthesize database=_database;
@property (nonatomic) BOOL disableFlushing; // @synthesize disableFlushing=_disableFlushing;
@property (readonly, nonatomic) long long eventCount;
@property (nonatomic) BOOL flushCancelled; // @synthesize flushCancelled=_flushCancelled;
@property (readonly, nonatomic) double flushInterval;
@property (nonatomic) BOOL flushOnForeground; // @synthesize flushOnForeground=_flushOnForeground;
@property (copy, nonatomic) CDUnknownBlockType flushTimerBlock; // @synthesize flushTimerBlock=_flushTimerBlock;
@property (nonatomic) BOOL flushTimerEnabled;
@property (strong, nonatomic) NSDictionary *lastMetricsDictionary; // @synthesize lastMetricsDictionary=_lastMetricsDictionary;
@property (nonatomic) long long maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
@property (nonatomic) long long maxRequestCount; // @synthesize maxRequestCount=_maxRequestCount;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (strong, nonatomic) NSMutableSet *requestPromises; // @synthesize requestPromises=_requestPromises;

+ (id)_sharedInstanceUsingContract:(id)arg1;
+ (id)_sharedTimerQueue;
+ (BOOL)disableBackgroundMetrics;
+ (BOOL)flushTimerEnabled;
+ (id)serverTimeFromDate:(id)arg1;
+ (id)serverTimeFromTimeInterval:(double)arg1;
+ (void)setDisableBackgroundMetrics:(BOOL)arg1;
+ (void)setFlushTimerEnabled:(BOOL)arg1;
+ (double)timeIntervalFromServerTime:(id)arg1;
- (void).cxx_destruct;
- (void)_addCancellablePromise:(id)arg1;
- (void)_applicationWillEnterForeground;
- (id)_baseMetricsURL;
- (void)_batchEventArray:(id)arg1 batchBlock:(CDUnknownBlockType)arg2;
- (id)_createRequestWithURL:(id)arg1 canary:(id)arg2 account:(id)arg3 body:(id)arg4 signature:(id)arg5 logKey:(id)arg6 collectAdditonalMetrics:(BOOL)arg7;
- (void)_flushDatabaseMetricsWithLockKey:(id)arg1 logKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_flushNextBatchWithTopic:(id)arg1 lockKey:(id)arg2 logKey:(id)arg3 requestCount:(long long)arg4 flushedEventCount:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_flushTimerInvalidate;
- (void)_flushTimerStart;
- (void)_flushTimerUpdated;
- (void)_handleFlushTimer;
- (id)_mescalSignatureWithBodyData:(id)arg1 logKey:(id)arg2;
- (id)_metricsDictionary;
- (id)_nextBatchWithTopic:(id)arg1 lockKey:(id)arg2 error:(id *)arg3;
- (id)_nextTopicWithLockKey:(id)arg1 error:(id *)arg2;
- (void)_openDatabaseIfNeeded;
- (void)_postEvents:(id)arg1 reportURL:(id)arg2 account:(id)arg3 logKey:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_prepareEvent:(id)arg1;
- (BOOL)_shouldBlacklistEvent:(id)arg1;
- (BOOL)_shouldClearEventsDespiteError:(id)arg1 result:(id)arg2;
- (void)cancel;
- (void)dealloc;
- (void)dropEvents;
- (id)enqueueAsyncEvents:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)enqueueEvents:(id)arg1;
- (id)flush;
- (id)flushEvents:(id)arg1;
- (id)initWithContainerId:(id)arg1 bagContract:(id)arg2;

@end


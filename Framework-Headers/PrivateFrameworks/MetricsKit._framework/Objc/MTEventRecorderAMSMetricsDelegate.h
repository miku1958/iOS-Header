//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTEventRecorderDelegate-Protocol.h>

@class AMSPromise, NSMutableDictionary, NSString;
@protocol AMSBagProtocol, OS_os_transaction;

@interface MTEventRecorderAMSMetricsDelegate : NSObject <MTEventRecorderDelegate>
{
    BOOL _monitorsLifecycleEvents;
    BOOL _transactionEnabled;
    BOOL _flushTimerEnabled;
    BOOL _personalizedWithItunesAccount;
    NSString *_containerId;
    long long _flushMode;
    double _flushTimeInterval;
    long long _maximumBatchSize;
    id<AMSBagProtocol> _amsBag;
    AMSPromise *_metricsBagPromise;
    NSMutableDictionary *_amsMetricsByTopic;
    NSMutableDictionary *_periodicQueuesByTopic;
    long long _numberOfPendingEvents;
    NSObject<OS_os_transaction> *_transaction;
}

@property (strong, nonatomic) id<AMSBagProtocol> amsBag; // @synthesize amsBag=_amsBag;
@property (strong, nonatomic) NSMutableDictionary *amsMetricsByTopic; // @synthesize amsMetricsByTopic=_amsMetricsByTopic;
@property (strong, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long flushMode; // @synthesize flushMode=_flushMode;
@property (nonatomic) double flushTimeInterval; // @synthesize flushTimeInterval=_flushTimeInterval;
@property (nonatomic, getter=isFlushTimerEnabled) BOOL flushTimerEnabled; // @synthesize flushTimerEnabled=_flushTimerEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maximumBatchSize; // @synthesize maximumBatchSize=_maximumBatchSize;
@property (strong, nonatomic) AMSPromise *metricsBagPromise; // @synthesize metricsBagPromise=_metricsBagPromise;
@property (nonatomic) BOOL monitorsLifecycleEvents; // @synthesize monitorsLifecycleEvents=_monitorsLifecycleEvents;
@property (nonatomic) long long numberOfPendingEvents; // @synthesize numberOfPendingEvents=_numberOfPendingEvents;
@property (strong, nonatomic) NSMutableDictionary *periodicQueuesByTopic; // @synthesize periodicQueuesByTopic=_periodicQueuesByTopic;
@property (nonatomic) BOOL personalizedWithItunesAccount; // @synthesize personalizedWithItunesAccount=_personalizedWithItunesAccount;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property (nonatomic, getter=isTransactionEnabled) BOOL transactionEnabled; // @synthesize transactionEnabled=_transactionEnabled;

+ (id)amsMetricsObjectCache;
+ (id)bundleIdentifier;
- (void).cxx_destruct;
- (void)_beginTransaction;
- (void)_endTransaction;
- (void)_flushEvents:(id)arg1 topic:(id)arg2;
- (id)_recordEvent:(id)arg1 toTopic:(id)arg2;
- (id)_sortedEventsFromBatch:(id)arg1;
- (id)activeItunesAccount;
- (id)amsContainerIdForTopic:(id)arg1;
- (id)amsMetricsForTopic:(id)arg1;
- (id)flushUnreportedEvents;
- (id)initWithContainerId:(id)arg1 amsBag:(id)arg2;
- (id)initWithContainerId:(id)arg1 profileName:(id)arg2 profileVersion:(id)arg3;
- (id)lookupItunesAccount:(id)arg1;
- (id)periodicQueueForTopic:(id)arg1;
- (id)recordEvent:(id)arg1 toTopic:(id)arg2;
- (id)sendMethod;

@end

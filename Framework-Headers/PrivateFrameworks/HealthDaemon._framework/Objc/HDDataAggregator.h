//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDDataAggregatorConfiguration, HDDataCollectionManager, HKObjectType, NSLock, NSMapTable, NSString;

@interface HDDataAggregator : NSObject <HDHealthDaemonReadyObserver>
{
    NSLock *_lock;
    NSMapTable *_lock_collectorRegistry;
    HDDataAggregatorConfiguration *_lock_configuration;
    _Atomic BOOL _hasStartedCollectors;
    BOOL _lock_canStartCollectors;
    HDDataCollectionManager *_dataCollectionManager;
}

@property (copy) HDDataAggregatorConfiguration *configuration;
@property (readonly, weak, nonatomic) HDDataCollectionManager *dataCollectionManager; // @synthesize dataCollectionManager=_dataCollectionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) HKObjectType *objectType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_considerStartingCollectors;
- (id)_keyValueDomain;
- (void)_startCollector:(id)arg1;
- (id)allCollectors;
- (id)configurationForCollector:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)dataCollector:(id)arg1 didChangeState:(id)arg2;
- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2 device:(id)arg3;
- (id)diagnosticDescription;
- (BOOL)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id *)arg4;
- (id)initWithDataCollectionManager:(id)arg1;
- (BOOL)persistForCollector:(id)arg1 usedDatums:(id)arg2 source:(id)arg3 device:(id)arg4 error:(id *)arg5 persistenceHandler:(CDUnknownBlockType)arg6;
- (BOOL)persistObjects:(id)arg1 usedDatums:(id)arg2 collector:(id)arg3 source:(id)arg4 device:(id)arg5 error:(id *)arg6;
- (void)recomputeCollectorConfiguration;
- (void)registerDataCollector:(id)arg1 state:(id)arg2;
- (void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 freezeSeries:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resume;
- (void)unregisterDataCollector:(id)arg1;

@end

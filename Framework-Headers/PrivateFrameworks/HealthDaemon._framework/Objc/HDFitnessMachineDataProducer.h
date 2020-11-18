//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDEurotasData, HDHealthServiceManager, HDProfile, HKQuantity, _HDFTMProducerMetricTracker;
@protocol OS_dispatch_queue;

@interface HDFitnessMachineDataProducer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _sessionIdentifier;
    HKQuantity *_totalActiveEnergy;
    HKQuantity *_totalBasalEnergy;
    HKQuantity *_latestHeartRate;
    HKQuantity *_averageHeartRate;
    _HDFTMProducerMetricTracker *_heartRateTracker;
    BOOL _heartRateEnabled;
    HDEurotasData *_previousEurotasData;
    HDProfile *_profile;
}

@property (readonly, nonatomic) BOOL connected;
@property (readonly, nonatomic) HDHealthServiceManager *healthServiceManager;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;

- (void).cxx_destruct;
- (id)_queue_generateEurotasData;
- (void)_queue_metricsAddedToWorkout:(id)arg1;
- (void)_queue_quantitiesAddedToWorkout:(id)arg1;
- (void)_queue_sendEurotasData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_updateFitnessMachine;
- (void)_queue_updateFitnessMachineWithCompletion:(CDUnknownBlockType)arg1 forcing:(BOOL)arg2;
- (void)_readHeartRateEnabledPreference;
- (void)connectToHealthServiceSession:(unsigned long long)arg1;
- (void)dealloc;
- (void)deliverFinalValues:(CDUnknownBlockType)arg1;
- (void)disconnectHealthServiceSession;
- (id)initWithProfile:(id)arg1;
- (void)metricsAddedToWorkout:(id)arg1;
- (void)pauseCurrentSession;
- (void)quantitiesAddedToWorkout:(id)arg1;
- (void)quantitiesResetForWorkout:(id)arg1;
- (void)resumeCurrentSession;
- (void)sendInitialValues;

@end


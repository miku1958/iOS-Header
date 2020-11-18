//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDataCollector-Protocol.h>

@class HDDeviceEntity, HDSourceEntity, HKObjectType, NSString;
@protocol HDHealthDaemon, OS_dispatch_queue;

@interface HDDataCollector : NSObject <HDHealthDataCollector>
{
    id<HDHealthDaemon> _healthDaemon;
    NSObject<OS_dispatch_queue> *_queue;
    HKObjectType *_observedType;
    HDDeviceEntity *_deviceEntity;
    long long _state;
    double _collectionInterval;
    long long _failureRetryCount;
    BOOL _disabled;
    HDSourceEntity *_sourceEntity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) HDSourceEntity *sourceEntity; // @synthesize sourceEntity=_sourceEntity;
@property (readonly) Class superclass;

+ (id)domain;
+ (id)observedType;
+ (id)secondaryContextClasses;
+ (Class)sensorDatumClass;
- (void).cxx_destruct;
- (id)_contextFromDictionary:(id)arg1;
- (id)_contextFromSensorDatum:(id)arg1;
- (id)_dictionaryFromContext:(id)arg1;
- (void)_performAsync:(CDUnknownBlockType)arg1;
- (void)_performSync:(CDUnknownBlockType)arg1;
- (BOOL)_persistContext:(id)arg1 forKey:(id)arg2;
- (BOOL)_persistPrimaryContext:(id)arg1;
- (BOOL)_persistSecondaryContext:(id)arg1;
- (void)_queue_beginStreaming;
- (void)_queue_beginStreamingIfNecessary;
- (id)_queue_deviceEntity;
- (BOOL)_queue_disabled;
- (void)_queue_incrementFailureRetryCounter;
- (void)_queue_receivedData;
- (void)_queue_resetFailureRetryCounter;
- (void)_queue_retryFromFailure;
- (BOOL)_queue_shouldRetryFromFailure;
- (BOOL)_queue_streaming;
- (void)_queue_transitionToFailure;
- (void)_queue_transitionToIdle;
- (void)_queue_transitionToStreaming;
- (void)_queue_updateCollectionInterval:(double)arg1;
- (id)_retrieveContextForKey:(id)arg1;
- (id)_retrievePrimaryContext;
- (id)_retrieveSecondaryContext;
- (id)_sensorDatumFromContext:(id)arg1;
- (double)collectionInterval;
- (void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;
- (void)collectionStoppedForType:(id)arg1;
- (id)dataCollectorDiagnosticDescription;
- (id)deviceEntity;
- (id)initWithHealthDaemon:(id)arg1;
- (void)setCollectionInterval:(double)arg1;
- (void)stopPerformingUpdatesWithErrorEncountered:(BOOL)arg1;
- (void)updateCollectionInterval:(double)arg1 forType:(id)arg2;
- (void)updateHistoricalData;

@end


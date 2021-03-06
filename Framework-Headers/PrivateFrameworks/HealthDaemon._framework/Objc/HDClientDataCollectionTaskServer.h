//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HDDataCollector-Protocol.h>
#import <HealthDaemon/HKDataCollectorTaskServerInterface-Protocol.h>

@class HDDataAggregator, HDDataCollectorState, HKDataCollectorCollectionConfiguration, HKDataCollectorTaskServerConfiguration, HKDevice, HKSource, NSError, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HDClientDataCollectionTaskServer : HDStandardTaskServer <HKDataCollectorTaskServerInterface, HDDataCollector>
{
    NSObject<OS_dispatch_queue> *_queue;
    HDDataCollectorState *_dataCollectorState;
    HKDevice *_device;
    NSError *_fatalError;
    HKDataCollectorTaskServerConfiguration *_configuration;
    NSUUID *_registrationUUID;
    HDDataAggregator *_aggregator;
    HKDataCollectorCollectionConfiguration *_collectionConfiguration;
    NSMutableDictionary *_lastDatumByDevice;
    HKSource *_clientSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (void)_didFinishPersistenceForBatch:(id)arg1 error:(id)arg2;
- (id)_loggingClientProxy;
- (void)_queue_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 registrationUUID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)_validateMetadata:(id)arg1 error:(id *)arg2;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (void)connectionConfigured;
- (void)connectionInvalidated;
- (void)dataAggregator:(id)arg1 didPersistDatums:(id)arg2 success:(BOOL)arg3 error:(id)arg4;
- (void)dataAggregator:(id)arg1 requestsCollectionThroughDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (id)exportedInterface;
- (id)identifierForDataAggregator:(id)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 registrationUUID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)remote_registerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (Class)sensorDatumClassForAggregator:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;

@end


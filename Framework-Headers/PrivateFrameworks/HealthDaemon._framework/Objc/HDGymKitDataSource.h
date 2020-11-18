//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HDWorkoutDataDestination-Protocol.h>
#import <HealthDaemon/HDWorkoutDataSource-Protocol.h>
#import <HealthDaemon/HKDataFlowLinkProcessor-Protocol.h>
#import <HealthDaemon/HKGymKitDataSourceServerInterface-Protocol.h>

@class HDWorkoutBasicDataSource, HKDataFlowLink, HKSource, HKWorkoutDataSourceConfiguration, NSObject, NSString, NSUUID;
@protocol HDWorkoutDataAccumulator, OS_dispatch_queue;

@interface HDGymKitDataSource : HDStandardTaskServer <HKGymKitDataSourceServerInterface, HKDataFlowLinkProcessor, HDWorkoutDataSource, HDWorkoutDataDestination>
{
    HKWorkoutDataSourceConfiguration *_dataSourceConfiguration;
    HDWorkoutBasicDataSource *_basicDataSource;
    NSObject<OS_dispatch_queue> *_queue;
    HKDataFlowLink *_workoutDataFlowLink;
    HKSource *_localDeviceSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<HDWorkoutDataAccumulator> workoutDataAccumulator;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)arg1 error:(out id *)arg2;
- (void).cxx_destruct;
- (id)_localDevicePreferredSampleTypes;
- (id)_queue_localDeviceSource;
- (BOOL)_queue_shouldAddSample:(id)arg1;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (void)addSamples:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (id)quantityTypesToIncludeWhilePaused;
- (id)remoteInterface;
- (void)remote_setDataSourceConfiguration:(id)arg1;
- (void)remote_startTaskServerIfNeeded;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end


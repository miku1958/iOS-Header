//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKQueryClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKObjectType, HKQueryServerProxyProvider, HKSampleType, NSPredicate, NSString, NSUUID, _HKFilter;
@protocol HKQueryDelegate, HKQueryServerInterface, OS_dispatch_queue;

@interface HKQuery : NSObject <_HKXPCExportable, HKQueryClientInterface>
{
    BOOL _hasBeenExecuted;
    id<HKQueryDelegate> _delegate;
    HKQueryServerProxyProvider *_proxyProvider;
    _Atomic BOOL _deactivating;
    _Atomic int _deactivateCallCount;
    HKHealthStore *_strongHealthStore;
    id<HKQueryServerInterface> _serverProxy;
    BOOL _shouldSuppressDataCollection;
    HKObjectType *_objectType;
    NSPredicate *_predicate;
    long long _activationState;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSUUID *_activationUUID;
    _HKFilter *_filter;
}

@property (readonly, nonatomic) long long activationState; // @synthesize activationState=_activationState;
@property (readonly, nonatomic) NSUUID *activationUUID; // @synthesize activationUUID=_activationUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly) long long deactivateCallCount;
@property (readonly) BOOL deactivating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HKQueryDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_filter) _HKFilter *filter; // @synthesize filter=_filter;
@property (readonly) unsigned long long hash;
@property (strong) HKObjectType *objectType; // @synthesize objectType=_objectType;
@property (strong) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) HKSampleType *sampleType;
@property (nonatomic) BOOL shouldSuppressDataCollection; // @synthesize shouldSuppressDataCollection=_shouldSuppressDataCollection;
@property (readonly) Class superclass;

+ (id)_cachedInterfaceForProtocol:(id)arg1 configurationHandler:(CDUnknownBlockType)arg2;
+ (id)_predicateForObjectsFromAppleWatches;
+ (id)clientInterface;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;
+ (void)configureServerInterface:(id)arg1;
+ (id)predicateForActivityCachesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)predicateForActivitySummariesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)predicateForActivitySummaryWithDateComponents:(id)arg1;
+ (id)predicateForCategorySamplesWithOperatorType:(unsigned long long)arg1 value:(long long)arg2;
+ (id)predicateForClinicalRecordsFromSource:(id)arg1 FHIRResourceType:(id)arg2 identifier:(id)arg3;
+ (id)predicateForClinicalRecordsWithFHIRResourceType:(id)arg1;
+ (id)predicateForCreationDateWithTodayViewRange:(id)arg1;
+ (id)predicateForDiagnosticTestResultCategory:(id)arg1;
+ (id)predicateForObjectWithUUID:(id)arg1;
+ (id)predicateForObjectsFromDevices:(id)arg1;
+ (id)predicateForObjectsFromSource:(id)arg1;
+ (id)predicateForObjectsFromSourceRevisions:(id)arg1;
+ (id)predicateForObjectsFromSources:(id)arg1;
+ (id)predicateForObjectsFromWorkout:(id)arg1;
+ (id)predicateForObjectsWithDeviceProperty:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
+ (id)predicateForObjectsWithNoCorrelation;
+ (id)predicateForObjectsWithUUIDs:(id)arg1;
+ (id)predicateForQuantitySamplesWithOperatorType:(unsigned long long)arg1 quantity:(id)arg2;
+ (id)predicateForRecordsFromClinicalAccountIdentifier:(id)arg1;
+ (id)predicateForRecordsFromGatewayWithExternalIdentifier:(id)arg1;
+ (id)predicateForRecordsWithSortDateFromStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)predicateForSamplesAssociatedWithSample:(id)arg1;
+ (id)predicateForSamplesForDayFromDate:(id)arg1 calendar:(id)arg2 options:(unsigned long long)arg3;
+ (id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 inclusiveEndDates:(BOOL)arg3 options:(unsigned long long)arg4;
+ (id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 options:(unsigned long long)arg3;
+ (id)predicateForSamplesWithinDateInterval:(id)arg1 options:(unsigned long long)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 duration:(double)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalDistance:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalEnergyBurned:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalFlightsClimbed:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalSwimmingStrokeCount:(id)arg2;
+ (id)predicateForWorkoutsWithWorkoutActivityType:(unsigned long long)arg1;
+ (id)serverInterface;
+ (id)serverInterfaceProtocol;
+ (BOOL)shouldApplyAdditionalPredicateForObjectType:(id)arg1;
+ (id)taskIdentifier;
- (void).cxx_destruct;
- (id)_initWithObjectType:(id)arg1 predicate:(id)arg2;
- (id)_predicateFilterClasses;
- (void)_queue_activateWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_deactivateWithError:(id)arg1;
- (void)_queue_finishActivationWithServerProxy:(id)arg1 activationUUID:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_throwInvalidArgumentExceptionIfHasBeenExecuted:(SEL)arg1;
- (void)activateWithClientQueue:(id)arg1 healthStore:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)client_deliverError:(id)arg1 forQuery:(id)arg2;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)deactivate;
- (id)exportedInterface;
- (void)queue_deactivate;
- (void)queue_deliverError:(id)arg1;
- (void)queue_dispatchToClientForUUID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_queryDidFinishActivation:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)reactivateWithHealthStore:(id)arg1;
- (id)remoteInterface;

@end


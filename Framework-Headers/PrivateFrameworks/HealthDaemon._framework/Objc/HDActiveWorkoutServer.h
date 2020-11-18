//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDLocationEventDelegate-Protocol.h>
#import <HealthDaemon/HDWorkoutEventObserver-Protocol.h>
#import <HealthDaemon/_HKActiveWorkoutServer-Protocol.h>
#import <HealthDaemon/_HKWorkoutSessionDelegate-Protocol.h>

@class HDFitnessMachineDataProducer, HDHealthStoreServer, HDLocationDataCollector, HKSource, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSUUID, _HKActiveWorkoutServerConfiguration, _HKWeightedAverageCalculator;
@protocol HDActiveWorkoutServerDelegate, NSXPCProxyCreating, OS_dispatch_queue;

@interface HDActiveWorkoutServer : NSObject <_HKActiveWorkoutServer, HDDataObserver, _HKWorkoutSessionDelegate, HDWorkoutEventObserver, HDLocationEventDelegate, HDDatabaseProtectedDataObserver>
{
    HKSource *_localDeviceSource;
    long long _state;
    _HKActiveWorkoutServerConfiguration *_serverConfiguration;
    NSUUID *_workoutSessionUUID;
    HDLocationDataCollector *_locationDataCollector;
    CDUnknownBlockType _endWorkoutCompletion;
    HDFitnessMachineDataProducer *_fitnessMachineDataProducer;
    unsigned long long _fitnessMachineType;
    _HKWeightedAverageCalculator *_averageHeartRateCalculator;
    NSSet *_localDevicePreferredObjectTypes;
    NSArray *_fitnessMachineObjectTypes;
    BOOL _observingChanges;
    id<HDActiveWorkoutServerDelegate> _delegate;
    HDHealthStoreServer *_server;
    NSDate *_machinePreferredUntilDate;
    NSObject<OS_dispatch_queue> *_queue;
    id<NSXPCProxyCreating> _clientServer;
    long long _serverState;
    NSMutableArray *_workoutEvents;
    NSMutableDictionary *_currentAnchors;
    NSMutableDictionary *_resumeDataByType;
    NSSet *_observedTypes;
}

@property (readonly, nonatomic) id<NSXPCProxyCreating> clientServer; // @synthesize clientServer=_clientServer;
@property (strong, nonatomic) NSMutableDictionary *currentAnchors; // @synthesize currentAnchors=_currentAnchors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HDActiveWorkoutServerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isActivated;
@property (strong, nonatomic) NSDate *machinePreferredUntilDate; // @synthesize machinePreferredUntilDate=_machinePreferredUntilDate;
@property (strong, nonatomic) NSSet *observedTypes; // @synthesize observedTypes=_observedTypes;
@property (nonatomic) BOOL observingChanges; // @synthesize observingChanges=_observingChanges;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSMutableDictionary *resumeDataByType; // @synthesize resumeDataByType=_resumeDataByType;
@property (readonly, weak, nonatomic) HDHealthStoreServer *server; // @synthesize server=_server;
@property (nonatomic) long long serverState; // @synthesize serverState=_serverState;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableArray *workoutEvents; // @synthesize workoutEvents=_workoutEvents;
@property (readonly, nonatomic) NSUUID *workoutUUID;

- (void).cxx_destruct;
- (id)_clientWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_deactivateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_generateGapForType:(id)arg1 resumeData:(id)arg2;
- (void)_handleWorkoutEventReceivedPauseResume:(id)arg1;
- (BOOL)_isFitnessMachineConnected;
- (BOOL)_isFitnessMachineWorkout;
- (void)_queue_activateWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_addEventType:(long long)arg1 forDateInterval:(id)arg2;
- (BOOL)_queue_addSamplesSinceResumeData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sourceEntity:(id)arg4 database:(id)arg5 error:(id *)arg6;
- (void)_queue_endWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_finalizeTotalsWithEndDate:(id)arg1;
- (BOOL)_queue_fitnessMachineWorkoutShouldAddSample:(id)arg1;
- (id)_queue_gapsNeedingUpdate;
- (BOOL)_queue_gapsResolved;
- (void)_queue_initObservedTypes;
- (id)_queue_localDeviceSource;
- (void)_queue_reactivateWorkoutWithData:(id)arg1 startDate:(id)arg2;
- (void)_queue_registerObservers;
- (BOOL)_queue_resolveGap:(id)arg1 quantityType:(id)arg2;
- (void)_queue_resolveGaps;
- (BOOL)_queue_resolveGapsWithEndDate:(id)arg1 error:(id *)arg2;
- (void)_queue_samplesAdded:(id)arg1 journaled:(BOOL)arg2 anchor:(id)arg3 updateResumeData:(BOOL)arg4;
- (void)_queue_setAsCompleteAndStopObserving;
- (void)_queue_setResumeDataForType:(id)arg1 lastUUID:(id)arg2 inJournal:(BOOL)arg3;
- (void)_queue_setState:(long long)arg1;
- (BOOL)_queue_shouldAddSample:(id)arg1 journaled:(BOOL)arg2 anchor:(id)arg3;
- (void)_queue_startWorkoutSessionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (long long)_queue_stateForDate:(id)arg1;
- (void)_queue_stopWorkoutSessionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_updateTotalsSinceResumeDate:(id)arg1;
- (BOOL)_queue_updateTotalsWithDataGap:(id)arg1 quantityType:(id)arg2 database:(id)arg3 error:(id *)arg4;
- (BOOL)_queue_updateTotalsWithResumeData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sourceEntity:(id)arg4 error:(id *)arg5;
- (void)_queue_updateTotalsWithValues:(id)arg1 UUIDs:(id)arg2 inJournal:(BOOL)arg3 updateResumeData:(BOOL)arg4;
- (id)_reactivatePredicateForType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 startRowId:(id)arg4 endRowId:(id)arg5 sourceEntity:(id)arg6;
- (id)_rowIdInDatabase:(id)arg1 forUUID:(id)arg2 error:(id *)arg3;
- (BOOL)_shouldUseDeviceData;
- (id)_transactionIdentifier;
- (void)_updateClientTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3;
- (void)_updateMetrics:(id)arg1;
- (void)_updateTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)deactivate;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)elevationUpdated:(unsigned long long)arg1;
- (id)firstPartyWorkoutSnapshot;
- (id)initWithClientServer:(id)arg1 serverConfiguration:(id)arg2 server:(id)arg3 delegate:(id)arg4;
- (void)locationSeriesSampleUpdated:(id)arg1;
- (void)pauseClientWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_activateWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_endWorkoutWithEndDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_nukeWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_pauseWorkoutWithDate:(id)arg1 userInitiated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_resumeWorkoutWithDate:(id)arg1 userInitiated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesJournaled:(id)arg1 type:(id)arg2;
- (void)setDataProducer:(id)arg1;
- (void)setFitnessMachineType:(unsigned long long)arg1;
- (void)setupObservedTypes;
- (id)startDate;
- (unsigned long long)workoutActivityType;
- (void)workoutManager:(id)arg1 didReceiveEvent:(id)arg2;
- (void)workoutRouteUpdated:(id)arg1;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
- (void)workoutSession:(id)arg1 didUpdateMetrics:(id)arg2;

@end


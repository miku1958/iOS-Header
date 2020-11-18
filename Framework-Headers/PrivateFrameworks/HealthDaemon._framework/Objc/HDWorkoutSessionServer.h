//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDWorkoutDataSource-Protocol.h>
#import <HealthDaemon/HDWorkoutSessionStateController-Protocol.h>
#import <HealthDaemon/HKDataFlowLinkProcessor-Protocol.h>
#import <HealthDaemon/HKStateMachineDelegate-Protocol.h>

@class BKSProcessAssertion, HDProfile, HDWorkoutManager, HDWorkoutSessionEntity, HDWorkoutSessionTaskServer, HDXPCClient, HKDataFlowLink, HKObserverSet, HKSource, HKStateMachine, HKWorkoutConfiguration, NSDate, NSString, NSUUID, _HKExpiringCompletionTimer;
@protocol HDWorkoutDataAccumulator, HDWorkoutSessionController, OS_dispatch_queue;

@interface HDWorkoutSessionServer : NSObject <HKDataFlowLinkProcessor, HKStateMachineDelegate, HDWorkoutSessionStateController, HDWorkoutDataSource>
{
    HDProfile *_profile;
    HDWorkoutManager *_workoutManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    HKDataFlowLink *_workoutDataFlowLink;
    HKObserverSet *_observers;
    id<HDWorkoutSessionController> _sessionController;
    _HKExpiringCompletionTimer *_invalidationTimer;
    BKSProcessAssertion *_invalidationAssertion;
    HDWorkoutSessionEntity *_persistentEntity;
    double _stopEventGenerationWaitInterval;
    HKStateMachine *_stateMachine;
    HKStateMachine *_targetStateMachine;
    BOOL _hasFailed;
    NSUUID *_identifier;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSString *_applicationIdentifier;
    HDWorkoutSessionTaskServer *_taskServer;
    HDXPCClient *_client;
    NSString *_clientProcessBundleIdentifier;
    HKSource *_clientSource;
    NSDate *_startDate;
    NSDate *_stopDate;
}

@property (readonly, copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property (strong, nonatomic) HDXPCClient *client; // @synthesize client=_client;
@property (readonly, copy, nonatomic) NSString *clientProcessBundleIdentifier; // @synthesize clientProcessBundleIdentifier=_clientProcessBundleIdentifier;
@property (readonly, copy, nonatomic) HKSource *clientSource; // @synthesize clientSource=_clientSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, nonatomic) long long state;
@property (readonly, copy, nonatomic) NSDate *stopDate; // @synthesize stopDate=_stopDate;
@property (readonly) Class superclass;
@property (weak, nonatomic) HDWorkoutSessionTaskServer *taskServer; // @synthesize taskServer=_taskServer;
@property (readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
@property (readonly, nonatomic) id<HDWorkoutDataAccumulator> workoutDataAccumulator;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (BOOL)_finishSessionControllerForSessionEntity:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (Class)_sessionControllerClassFromWorkoutConfiguration:(id)arg1;
+ (id)clientTargetStateMachineForConfiguration:(id)arg1 sessionUUID:(id)arg2;
+ (BOOL)finishAllWorkoutSessionsForClient:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (BOOL)finishAllWorkoutsExcludingSessions:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)postRestartRecoveredSessionServerWithProfile:(id)arg1 workoutManager:(id)arg2 error:(id *)arg3;
+ (id)recoveredSessionServerWithProfile:(id)arg1 sessionUUID:(id)arg2 workoutManager:(id)arg3 error:(id *)arg4;
+ (void)unitTest_setDefaultStopEventGenerationWaitInterval:(double)arg1;
+ (id)workoutSessionServerStateMachineForConfiguration:(id)arg1 sessionUUID:(id)arg2;
- (void).cxx_destruct;
- (id)_defaultConfigurationWithWorkoutConfiguration:(id)arg1;
- (void)_deleteSessionAndFinishAssociatedBuilderAtDate:(id)arg1;
- (id)_detailedDescriptionComponents;
- (id)_detailedDescriptionString;
- (BOOL)_enqueueEvent:(long long)arg1 stateMachine:(id)arg2 date:(id)arg3 error:(id *)arg4;
- (void)_loadOrCreatePersistentEntity;
- (BOOL)_persistenceQueue_storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id *)arg3;
- (void)_queue_cacheClientIdentifiers;
- (id)_queue_currentWorkoutSessionConfiguration;
- (void)_queue_evaluateRequestedTargetStateAtDate:(id)arg1;
- (void)_queue_generateError:(id)arg1;
- (void)_queue_generateEvent:(id)arg1;
- (void)_queue_generateEventWithType:(long long)arg1 date:(id)arg2;
- (void)_queue_invalidationTimerDidFire;
- (void)_queue_processStopEvent:(id)arg1;
- (void)_queue_setTargetState:(long long)arg1 date:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_setupSessionController;
- (void)_queue_startInvalidationTimer;
- (void)_queue_stopInvalidationTimer;
- (void)_recoverPersistedState;
- (BOOL)_resendWorkoutEventsToDataDestination:(id)arg1 error:(id *)arg2;
- (id)_retrieveSessionControllerStateForRecoveryIdentifier:(id)arg1 error:(id *)arg2;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (void)autoPauseWithDate:(id)arg1;
- (void)autoResumeWithDate:(id)arg1;
- (void)dealloc;
- (void)didBecomeCurrent;
- (void)didResignCurrentWithError:(id)arg1;
- (void)endHeartRateRecovery;
- (BOOL)endWithError:(id *)arg1;
- (void)finish;
- (void)finishAggregationWithDate:(id)arg1;
- (void)generateError:(id)arg1;
- (void)generateEvent:(id)arg1;
- (id)initWithProfile:(id)arg1 configuration:(id)arg2 sessionUUID:(id)arg3 workoutManager:(id)arg4;
- (BOOL)pauseWithError:(id *)arg1;
- (BOOL)prepareWithError:(id *)arg1;
- (void)removeObserver:(id)arg1;
- (BOOL)resumeWithError:(id *)arg1;
- (void)setAssociatedWorkoutBuilderEntity:(id)arg1;
- (BOOL)setTargetState:(long long)arg1 date:(id)arg2 error:(id *)arg3;
- (void)setWorkoutDataAccumulator:(id)arg1;
- (BOOL)startActivityWithDate:(id)arg1 error:(id *)arg2;
- (void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
- (void)stateMachine:(id)arg1 persistTransition:(id)arg2;
- (void)stateMachine:(id)arg1 willEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (BOOL)stopActivityWithDate:(id)arg1 error:(id *)arg2;
- (BOOL)storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id *)arg3;
- (id)taskServerConfigurationForRecoveryWithError:(id *)arg1;
- (void)unitTest_generateStopEvent;
- (void)unitTest_setSessionController:(id)arg1;
- (void)unitTest_setStopEventGenerationWaitInterval:(double)arg1;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end


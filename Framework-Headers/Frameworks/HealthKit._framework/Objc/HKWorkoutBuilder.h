//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKStateMachineDelegate-Protocol.h>
#import <HealthKit/HKWorkoutBuilderClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKDevice, HKHealthStore, HKStateMachine, HKTaskServerProxyProvider, HKWorkoutBuilderConfiguration, HKWorkoutConfiguration, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HKWorkoutBuilder : NSObject <_HKXPCExportable, HKWorkoutBuilderClientInterface, HKStateMachineDelegate>
{
    HKWorkoutBuilderConfiguration *_builderConfiguration;
    NSDate *_workoutStartDate;
    NSDate *_workoutEndDate;
    NSDictionary *_metadata;
    NSArray *_workoutEvents;
    double _accumulatedElapsedTime;
    double _lastResumeTimestamp;
    BOOL _currentlyRunning;
    long long _serverConstructionState;
    HKStateMachine *_constructionStateMachine;
    CDUnknownBlockType _beginCollectionCompletionHandler;
    CDUnknownBlockType _endCollectionCompletionHandler;
    CDUnknownBlockType _finishWorkoutCompletionHandler;
    CDUnknownBlockType _unitTest_serverStateChangedHandler;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSMutableDictionary *_seriesBuilders;
    NSMutableDictionary *_statisticsByType;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    HKTaskServerProxyProvider *_proxyProvider;
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
}

@property (copy, nonatomic) HKWorkoutBuilderConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKDevice *device;
@property (readonly, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly) BOOL isCurrentlyRunning;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider; // @synthesize proxyProvider=_proxyProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // @synthesize resourceQueue=_resourceQueue;
@property (strong, nonatomic) NSMutableDictionary *seriesBuilders; // @synthesize seriesBuilders=_seriesBuilders;
@property (readonly, copy) NSDate *startDate;
@property (strong, nonatomic) NSMutableDictionary *statisticsByType; // @synthesize statisticsByType=_statisticsByType;
@property (readonly) Class superclass;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
@property (readonly, copy) NSArray *workoutEvents;

+ (long long)_collectionStateAtDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sortedEvents:(id)arg4;
+ (id)_constructionStateMachineForBuilderConfiguration:(id)arg1 builderIdentifier:(id)arg2;
+ (double)_elapsedTimeAtDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sortedEvents:(id)arg4;
+ (id)clientInterface;
+ (id)serverInterface;
- (void).cxx_destruct;
- (double)_currentElapsedTime;
- (id)_currentSnapshot;
- (void)_pushCurrentTargetState;
- (void)_recoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)_resourceQueue_addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resourceQueue_addSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resourceQueue_addWorkoutEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resourceQueue_beginCollectionWithStartDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resourceQueue_endCollectionWithEndDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_resourceQueue_endDateForSnapshot;
- (id)_resourceQueue_eventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (void)_resourceQueue_finishWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)_resourceQueue_freezeSeriesBuilders;
- (id)_resourceQueue_seriesBuilderWithIdentifier:(id)arg1 type:(id)arg2;
- (void)_resourceQueue_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2;
- (void)_resourceQueue_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2;
- (id)_resourceQueue_startDateForSnapshot;
- (void)_resourceQueue_updateDevice:(id)arg1;
- (void)_resourceQueue_updateElapsedTimeCache;
- (void)_restoreRecoveredSeriesBuildersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setDevice:(id)arg1;
- (void)_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2;
- (void)_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2;
- (CDUnknownBlockType)_successCompletionBlockOnClientQueue:(CDUnknownBlockType)arg1;
- (BOOL)_validateObjects:(id)arg1 forClass:(Class)arg2 error:(out id *)arg3;
- (void)addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addWorkoutEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginCollectionWithStartDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clientRemote_didChangeElapsedTimeBasisWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)clientRemote_didFailWithError:(id)arg1;
- (void)clientRemote_didRecoverSeriesBuilders:(id)arg1;
- (void)clientRemote_didUpdateEvents:(id)arg1;
- (void)clientRemote_didUpdateMetadata:(id)arg1;
- (void)clientRemote_didUpdateStatistics:(id)arg1;
- (void)clientRemote_finishedWorkout:(id)arg1;
- (void)clientRemote_stateDidChange:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)clientRemote_synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)discardWorkout;
- (double)elapsedTimeAtDate:(id)arg1;
- (void)endCollectionWithEndDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)exportedInterface;
- (void)finishWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (id)goal;
- (unsigned long long)goalType;
- (id)init;
- (id)initWithHealthStore:(id)arg1 builderConfiguration:(id)arg2 builderIdentifier:(id)arg3;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 device:(id)arg3;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 goalType:(unsigned long long)arg3 goal:(id)arg4 device:(id)arg5;
- (id)remoteInterface;
- (id)seriesBuilderForType:(id)arg1;
- (void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
- (id)statisticsForType:(id)arg1;
- (void)unitTest_setServerStateChangeHandler:(CDUnknownBlockType)arg1;

@end


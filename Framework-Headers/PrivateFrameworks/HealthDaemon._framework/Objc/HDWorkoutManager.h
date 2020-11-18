//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDForegroundClientProcessObserver-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDWorkoutEventCollectorDelegate-Protocol.h>

@class CLLocationManager, CMWorkoutManager, HDPrimaryProfile, HDWorkoutLocationSmoother, NSHashTable, NSMutableSet, NSString, _HDWorkoutData;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDWorkoutManager : NSObject <HDWorkoutEventCollectorDelegate, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDForegroundClientProcessObserver>
{
    HDPrimaryProfile *_primaryProfile;
    _HDWorkoutData *_currentWorkout;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_currentObservedTypes;
    NSHashTable *_observerTable;
    NSObject<OS_dispatch_source> *_suppressActivityKeepaliveTimer;
    CMWorkoutManager *_cmWorkoutManager;
    NSMutableSet *_eventCollectors;
    BOOL _waitingForStopEvent;
    BOOL _stopEventAfterPause;
    _HDWorkoutData *_nextWorkout;
    CLLocationManager *_locationManager;
    HDWorkoutLocationSmoother *_locationSmoother;
    BOOL _needToCheckForLocationSeriesOnUnlock;
    BOOL _isFirstLaunchAndNotYetSmoothed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_distanceTypeForActivityType:(unsigned long long)arg1 isIndoor:(BOOL)arg2;
+ (id)observedTypesForActivityType:(unsigned long long)arg1 isIndoor:(BOOL)arg2;
- (void).cxx_destruct;
- (void)_associationsSyncedForWorkout:(id)arg1;
- (long long)_cmSwimLocationForHKSwimmingLocation:(long long)arg1;
- (id)_coreMotionWorkoutManager;
- (id)_mainQueue_locationManager;
- (void)_queue_didUpdateCurrentWorkoutSession;
- (void)_queue_doSuppressActivityAlertsForWorkout:(id)arg1;
- (id)_queue_eventCollectors;
- (void)_queue_finishedLaunchingWorkoutApp:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_immediateUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (id)_queue_locationSmoother;
- (void)_queue_pauseCurrentSession;
- (void)_queue_resetActivityTypeForWorkoutSession:(id)arg1;
- (void)_queue_resumeCurrentSession;
- (void)_queue_sessionEnded;
- (void)_queue_setActivityType:(unsigned long long)arg1 forSessionUUID:(id)arg2 isIndoor:(BOOL)arg3;
- (void)_queue_setActivityTypeForWorkoutSession:(id)arg1;
- (void)_queue_setCurrentSessionState:(long long)arg1;
- (void)_queue_setSuppressActivityAlerts:(BOOL)arg1 forWorkout:(id)arg2;
- (void)_queue_setViewOnWake:(BOOL)arg1 forWorkout:(id)arg2;
- (void)_queue_smoothAllUnsmoothedLocationSeries;
- (void)_queue_startBackgroundExecutionForWorkout:(id)arg1;
- (void)_queue_startDataAndEventCollection;
- (void)_queue_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_startWorkout:(id)arg1;
- (void)_queue_stopBackgroundExecution;
- (void)_queue_stopCurrentSessionWaitingForStopEvent:(BOOL)arg1;
- (void)_queue_stopDataAndEventCollection;
- (void)_sendStartWorkoutAppResponse:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)_setupLocationObserversIfNeeded;
- (id)_workoutSessionNotCurrentError:(id)arg1;
- (void)addWorkoutEventObserver:(id)arg1;
- (void)clientInvalidated:(id)arg1;
- (unsigned long long)currentWorkoutActivityType;
- (id)currentWorkoutClient;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)foregroundClientProcessesDidChange:(id)arg1;
- (void)generateMarkerEventWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)hasAnyActiveWorkouts;
- (void)hk_fakeLapEventWithDate:(id)arg1 strokeStyle:(long long)arg2;
- (void)hk_fakeStopEventWithDate:(id)arg1;
- (id)initWithPrimaryProfile:(id)arg1;
- (void)pauseCurrentWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)pluginHasBackgroundRunMode:(id)arg1 errorOut:(id *)arg2;
- (void)receivedStartWorkoutAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)receivedWorkoutEvent:(id)arg1;
- (void)removeWorkoutEventObserver:(id)arg1;
- (void)resumeCurrentWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startWorkoutSession:(id)arg1 client:(id)arg2 server:(id)arg3 isFirstParty:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)stopWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

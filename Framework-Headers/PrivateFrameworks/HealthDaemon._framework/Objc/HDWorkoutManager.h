//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDaemon, NSHashTable, NSMutableSet, _HDWorkoutData;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDWorkoutManager : NSObject
{
    HDDaemon *_daemon;
    _HDWorkoutData *_currentWorkout;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_currentObservedTypes;
    NSHashTable *_observerTable;
    NSObject<OS_dispatch_source> *_suppressActivityKeepaliveTimer;
}

- (void).cxx_destruct;
- (void)_queue_didUpdateCurrentWorkoutSession;
- (void)_queue_doSuppressActivityAlertsForWorkout:(id)arg1;
- (void)_queue_notifySession:(id)arg1 stateDidChange:(long long)arg2;
- (void)_queue_resetDataCollectionForWorkoutSession:(id)arg1;
- (void)_queue_setCurrentSessionState:(long long)arg1;
- (void)_queue_setDataCollectionForSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 isIndoor:(BOOL)arg3;
- (void)_queue_setDataCollectionForWorkoutSession:(id)arg1;
- (void)_queue_setSuppressActivityAlerts:(BOOL)arg1 forWorkout:(id)arg2;
- (void)_queue_setViewOnWake:(BOOL)arg1 forWorkout:(id)arg2;
- (void)_queue_startDataCollection;
- (void)_queue_stopCurrentSession;
- (void)_queue_stopDataCollection;
- (void)addWorkoutSessionObserver:(id)arg1;
- (void)clientInvalidated:(id)arg1;
- (unsigned long long)currentWorkoutActivityType;
- (id)currentWorkoutClientIdentifier;
- (BOOL)hasAnyActiveWorkouts;
- (id)initWithDaemon:(id)arg1;
- (void)removeWorkoutSessionObserver:(id)arg1;
- (void)startWorkoutSession:(id)arg1 clientIdentifier:(id)arg2 server:(id)arg3 isFirstParty:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)stopWorkoutSessionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDProfile, NSCalendar, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface HDCompanionWorkoutCreditManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_anchor;
    NSCalendar *_calendar;
    BOOL _hasPairedWatches;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_healthDataManager;
- (void)_queue_fastForwardAnchor;
- (BOOL)_queue_generateAndSaveSamplesForIntervals:(id)arg1 withExerciseTable:(id)arg2 standHourTable:(id)arg3 error:(id)arg4;
- (void)_queue_performWorkoutCreditFixup;
- (void)_queue_processWorkout;
- (id)_queue_samplesForType:(id)arg1 fromStartTime:(id)arg2 toEndTime:(id)arg3;
- (void)_queue_setWorkoutAnchor:(id)arg1;
- (id)_queue_userLocalProtectedDomain;
- (id)_queue_workoutAnchor;
- (id)_queue_workoutsSinceAnchor:(id *)arg1 error:(id)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)performWorkoutCreditFixup;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)stopObservingWorkouts;

@end


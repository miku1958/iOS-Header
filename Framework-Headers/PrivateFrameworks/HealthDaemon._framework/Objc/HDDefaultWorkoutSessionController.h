//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDWorkoutEventCollectorDelegate-Protocol.h>
#import <HealthDaemon/HDWorkoutSessionController-Protocol.h>

@class HDProfile, HDSessionAssertionGroup, HDWorkoutEventsManager, HDWorkoutSessionConfiguration;
@protocol HDWorkoutSessionStateController, OS_dispatch_queue;

@interface HDDefaultWorkoutSessionController : NSObject <HDWorkoutEventCollectorDelegate, HDWorkoutSessionController>
{
    HDProfile *_profile;
    id<HDWorkoutSessionStateController> _sessionStateController;
    NSObject<OS_dispatch_queue> *_queue;
    HDWorkoutSessionConfiguration *_sessionConfiguration;
    HDSessionAssertionGroup *_assertionGroup;
    HDWorkoutEventsManager *_eventsManager;
    long long _sessionServerState;
    CDUnknownBlockType _hkTestTransitionCompletionHandler;
}

+ (id)recoveryIdentifier;
+ (void)willFinishSessionWithRecoveryData:(id)arg1 profile:(id)arg2;
- (void).cxx_destruct;
- (long long)_currentActivityMoveMode;
- (id)_ownerIdentifier;
- (id)_queue_assertionsPerStateForActivityType:(unsigned long long)arg1;
- (void)_queue_setupAssertionGroup;
- (id)_relaunchPayloadOptions;
- (id)_takeAlertSuppressionAssertion;
- (id)_takeBackgroundRunningAssertion;
- (id)_takeCarouselAssertion;
- (id)_takeClientKeepAliveAssertion;
- (id)_takeCoreMotionAssertion;
- (id)_takeDataCollectionAssertion;
- (id)_takeEventsCollectionAssertion;
- (id)_takeHeartRateRecoveryAssertion;
- (id)_takePlatinumAssertion;
- (id)_takePowerSavingAssertion;
- (id)_takeQuietModeAssertion;
- (void)dealloc;
- (void)hktest_setStateTransitionCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4;
- (void)receivedWorkoutEvent:(id)arg1;
- (void)unitTest_setCMWorkoutManager:(id)arg1;
- (void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(id)arg4;

@end


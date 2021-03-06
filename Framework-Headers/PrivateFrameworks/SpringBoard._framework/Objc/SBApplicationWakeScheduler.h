//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSDate, NSString, SBApplication;
@protocol BSTimer, SBApplicationWakeLifecycleHandling;

@interface SBApplicationWakeScheduler : NSObject <BSInvalidatable>
{
    id<SBApplicationWakeLifecycleHandling> _lifecycleTracker;
    SBApplication *_application;
    BOOL _invalidated;
    id<BSTimer> _wakeTimer;
    id<BSTimer> _wakeSuspendTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDate *scheduledDate;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<BSTimer> wakeSuspendTimer; // @synthesize wakeSuspendTimer=_wakeSuspendTimer;
@property (strong, nonatomic) id<BSTimer> wakeTimer; // @synthesize wakeTimer=_wakeTimer;

- (void).cxx_destruct;
- (void)_applicationProcessStateDidChange:(id)arg1;
- (id)_createPersistentTimerWithFireDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_createTimerWithFireDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_expectedFireDateForTimer:(id)arg1;
- (void)_forceInvalidate;
- (id)_initWithLifecycleTracker:(id)arg1 forApplication:(id)arg2;
- (id)_safelyScheduleTimerForDate:(id)arg1 persistent:(BOOL)arg2 handler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)endResumeIfAwoken;
- (id)init;
- (void)invalidate;
- (void)scheduleWakeForDate:(id)arg1;
- (id)suspensionDate;
- (void)unschedule;
- (void)wakeImmediately;

@end


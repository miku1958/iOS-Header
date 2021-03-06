//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonActivatedObserver-Protocol.h>

@class HDProfile, NSString;
@protocol HDPeriodicActivityDelegate, OS_os_log, OS_xpc_object;

@interface HDPeriodicActivity : NSObject <HDHealthDaemonActivatedObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject>
{
    HDProfile *_profile;
    struct os_unfair_lock_s _lock;
    NSString *_lastSuccessfulRunDateUserDefaultsKey;
    CDUnknownBlockType _waitingActivityCompletion;
    NSString *_errorCountUserDefaultsKey;
    NSString *_minimumIntervalDefaultsKey;
    BOOL _unitTest_shouldDeferOverride;
    NSString *_name;
    NSObject<OS_os_log> *_loggingCategory;
    double _interval;
    id<HDPeriodicActivityDelegate> _delegate;
    NSObject<OS_xpc_object> *_currentActivity;
}

@property (strong) NSObject<OS_xpc_object> *currentActivity; // @synthesize currentActivity=_currentActivity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HDPeriodicActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long errorCount;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory; // @synthesize loggingCategory=_loggingCategory;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) BOOL shouldDefer;
@property (readonly) Class superclass;

+ (id)_userDefaultsKeyForName:(id)arg1 key:(id)arg2;
+ (void)registerDisabledPeriodicActivityWithName:(id)arg1 loggingCategory:(id)arg2;
- (void).cxx_destruct;
- (id)_criteriaForInterval:(double)arg1;
- (double)_currentInterval;
- (id)_dateForDefaultsKey:(id)arg1;
- (void)_finishActivity:(id)arg1 result:(long long)arg2;
- (void)_handleXPCActivityCallback:(id)arg1;
- (void)_lock_activityFinishedWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 activityStartDate:(id)arg3 error:(id)arg4;
- (double)_lock_currentInterval;
- (long long)_lock_errorCount;
- (void)_lock_incrementErrorCount;
- (void)_lock_setLastSuccessfulRunDate:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)_performActivityIfPossibleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performActivityIfWaiting;
- (void)_performActivityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_registerActivityWithCriteria:(id)arg1;
- (BOOL)_requiresProtectedData;
- (void)_unitTest_activityFiredButRunDeclined;
- (void)_updateCriteriaForActivity:(id)arg1;
- (id)currentCriteria;
- (void)daemonActivated:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)didPerformActivityWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 activityStartDate:(id)arg3 error:(id)arg4;
- (id)initWithProfile:(id)arg1 name:(id)arg2 interval:(double)arg3 delegate:(id)arg4 loggingCategory:(id)arg5;
- (BOOL)isWaitingToRun;
- (id)lastSuccessfulRunDate;
- (void)reset;
- (void)resetInterval;
- (void)synthesizeActivityFire;
- (void)unitTest_setShouldDefer:(BOOL)arg1;
- (void)updateCriteria;

@end


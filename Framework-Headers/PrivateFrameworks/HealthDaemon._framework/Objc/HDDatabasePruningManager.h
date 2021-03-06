//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class HDPeriodicActivity, HDProfile, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDDatabasePruningManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate>
{
    HDPeriodicActivity *_activity;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;

- (void).cxx_destruct;
- (id)_lastAttemptDateWithCompleted:(BOOL *)arg1;
- (id)_minimumFrozenAnchorMapForPruningDate:(id)arg1 error:(id *)arg2;
- (BOOL)_pruneDatabaseWithNowDate:(id)arg1 prunedObjectLimit:(unsigned long long)arg2 prunedObjectTransactionLimit:(unsigned long long)arg3 error:(id *)arg4;
- (void)_setLastAttemptDate:(id)arg1 completed:(BOOL)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (BOOL)pruneDatabaseWithAccessibilityAssertion:(id)arg1 nowDate:(id)arg2 error:(id *)arg3;
- (BOOL)pruneDatabaseWithAccessibilityAssertion:(id)arg1 nowDate:(id)arg2 prunedObjectLimit:(unsigned long long)arg3 prunedObjectTransactionLimit:(unsigned long long)arg4 error:(id *)arg5;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class NSString;
@protocol HDHealthDaemon, OS_dispatch_queue, OS_dispatch_source;

@interface HDDatabasePruningManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver>
{
    id<HDHealthDaemon> _healthDaemon;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;

- (void).cxx_destruct;
- (id)_calendar;
- (id)_lastAttemptDateWithCompleted:(BOOL *)arg1;
- (void)_performPruneDatabaseActivity:(id)arg1;
- (id)_predicateForPruningSampleTypes:(id)arg1 daysOld:(unsigned long long)arg2 calendar:(id)arg3 nowDate:(id)arg4;
- (id)_predicateForPruningSamplesExcludingTypes:(id)arg1 daysOld:(unsigned long long)arg2 calendar:(id)arg3 nowDate:(id)arg4;
- (id)_predicateForPruningThirdPartySampleTypes:(id)arg1 daysOld:(unsigned long long)arg2 calendar:(id)arg3 nowDate:(id)arg4;
- (id)_predicatesForPruningWithCalendar:(id)arg1 nowDate:(id)arg2;
- (void)_queue_pruneExpiredDeletedObjectsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_pruneExpiredSamplesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_registerActivity;
- (void)_setLastAttemptDate:(id)arg1 completed:(BOOL)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithHealthDaemon:(id)arg1;
- (void)pruneDatabaseWithCompletion:(CDUnknownBlockType)arg1;

@end


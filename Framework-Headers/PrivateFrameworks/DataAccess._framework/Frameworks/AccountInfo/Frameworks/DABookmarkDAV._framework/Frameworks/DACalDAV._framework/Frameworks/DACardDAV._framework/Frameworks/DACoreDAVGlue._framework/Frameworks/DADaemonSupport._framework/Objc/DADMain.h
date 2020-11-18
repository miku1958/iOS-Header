//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccessExpress/DADisableableObject.h>

@class NSTimer;

@interface DADMain : DADisableableObject
{
    NSTimer *_delayedShutdownTimer;
    BOOL *_runLoopStoppedRef;
}

+ (id)sharedMain;
- (void).cxx_destruct;
- (void)_configureAggdLogging;
- (void)_setRunLoopStopped:(BOOL)arg1;
- (void)_shutdownDaemonCheckingForAccounts:(BOOL)arg1;
- (void)_shutdownDaemonIfNoAccountsExistInTimeInterval:(int)arg1;
- (void)_shutdownNotification:(id)arg1;
- (void)addLanguageChangeHandler;
- (void)addSignalHandler;
- (void)addToOperationsQueueDisabledCheckAndGoBlock:(CDUnknownBlockType)arg1 wrappedBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)delayedShutdownTimerFired:(id)arg1;
- (void)disable;
- (id)init;
- (void)setRunLoopStoppedRef:(BOOL *)arg1;
- (void)shutdownDAD;
- (void)shutdownDaemonIfNoAccountsExist;
- (void)waitForSystemAvailability;

@end


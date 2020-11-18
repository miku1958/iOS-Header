//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccessExpress/DADisableableObject.h>

#import <DADaemonSupport/DATransactionMonitorDelegate-Protocol.h>
#import <DADaemonSupport/UMUserSwitchStakeholder-Protocol.h>

@class NSArray, NSString, NSTimer;

@interface DADMain : DADisableableObject <UMUserSwitchStakeholder, DATransactionMonitorDelegate>
{
    NSTimer *_delayedShutdownTimer;
    NSTimer *_forceShutdownTimer;
    BOOL *_runLoopStoppedRef;
    NSArray *_userSwitchTasks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *userSwitchTasks; // @synthesize userSwitchTasks=_userSwitchTasks;

+ (id)sharedMain;
- (void).cxx_destruct;
- (void)_configureAnalyticsLogging;
- (void)_forceShutdownDaemonOnLogoutInTimeInterval:(int)arg1;
- (void)_forceShutdownTimerFired:(id)arg1;
- (void)_setRunLoopStopped:(BOOL)arg1;
- (void)_shutdownDaemon;
- (void)addLanguageChangeHandler;
- (void)addSignalHandler;
- (void)addToOperationsQueueDisabledCheckAndGoBlock:(CDUnknownBlockType)arg1 wrappedBlock:(CDUnknownBlockType)arg2;
- (void)agentsStarted;
- (void)dealloc;
- (void)didFinishAllXPCTransactions;
- (void)disable;
- (void)evaluateConnectedStartupActivityStatus;
- (id)init;
- (void)setRunLoopStoppedRef:(BOOL *)arg1;
- (void)shutdownDAD;
- (void)waitForSystemAvailability;
- (void)willSwitchUser;
- (void)xpc_checkin;

@end

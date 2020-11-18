//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

@class FBApplicationProcess, FBProcessExecutionContext, FBProcessManager, FBWaitForProcessDeathTransaction, NSString;

@interface FBApplicationProcessLaunchTransaction : FBTransaction
{
    FBProcessManager *_processManager;
    NSString *_bundleID;
    FBApplicationProcess *_process;
    CDUnknownBlockType _executionContextProvider;
    FBWaitForProcessDeathTransaction *_deathTransaction;
    FBProcessExecutionContext *_executionContext;
    int _interruptedOrComplete;
    BOOL _failedLaunch;
    BOOL _exited;
}

@property (readonly, nonatomic) BOOL exited; // @synthesize exited=_exited;
@property (readonly, nonatomic) BOOL failedLaunch; // @synthesize failedLaunch=_failedLaunch;
@property (readonly, strong, nonatomic) FBApplicationProcess *process; // @synthesize process=_process;

- (void)_begin;
- (BOOL)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_queue_finishProcessLaunch:(BOOL)arg1;
- (void)_queue_launchProcess:(id)arg1;
- (void)_queue_noteExited;
- (void)_queue_processWillLaunch:(id)arg1;
- (BOOL)_shouldFailForChildTransaction:(id)arg1;
- (void)_willComplete;
- (void)_willInterruptWithReason:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;
- (id)initWithApplicationProcess:(id)arg1;
- (void)removeObserver:(id)arg1;

@end


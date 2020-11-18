//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSWatchdogProviding-Protocol.h>

@class BSAuditHistory, NSArray, NSDate, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface BSTransaction : NSObject <BSWatchdogProviding>
{
    BSTransaction *_parentTransaction;
    NSMutableSet *_lifeAssertions;
    BOOL _failed;
    BOOL _aborted;
    BOOL _interrupted;
    unsigned long long _state;
    NSError *_error;
    NSDate *_startTime;
    NSMutableDictionary *_milestonesToHandlers;
    NSMutableArray *_childTransactions;
    NSMutableSet *_milestones;
    NSHashTable *_observers;
    BSAuditHistory *_auditHistory;
    BOOL _debugLoggingEnabled;
    NSMutableSet *_debugLoggers;
    CDUnknownBlockType _completionBlock;
}

@property (readonly, nonatomic, getter=isAborted) BOOL aborted; // @synthesize aborted=_aborted;
@property (readonly, strong, nonatomic) NSArray *allErrors;
@property (nonatomic) BOOL buildAuditHistory;
@property (readonly, strong, nonatomic) NSArray *childTransactions;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic, getter=isFailed) BOOL failed; // @synthesize failed=_failed;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isInterrupted) BOOL interrupted;
@property (readonly, nonatomic, getter=isInterruptible) BOOL interruptible;
@property (readonly, strong, nonatomic) NSSet *milestones;
@property (nonatomic) BSTransaction *parentTransaction; // @synthesize parentTransaction=_parentTransaction;
@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

- (void)_abortForError:(id)arg1;
- (void)_addAuditHistory:(id)arg1;
- (void)_addAuditHistoryAndDebugLogWithFormat:(id)arg1;
- (void)_addChildTransaction:(id)arg1;
- (void)_addDebugLogger:(id)arg1;
- (void)_addLifeAssertion:(id)arg1 ignoringAuditHistory:(BOOL)arg2;
- (BOOL)_areChildTransactionsComplete;
- (void)_begin;
- (BOOL)_canBeInterrupted;
- (void)_checkAndReportIfCompleted;
- (void)_childTransactionDidComplete:(id)arg1;
- (id)_createErrorWithCode:(long long)arg1 reason:(id)arg2 description:(id)arg3 precipitatingError:(id)arg4;
- (id)_customizedDescriptionProperties;
- (void)_debugLogWithFormat:(id)arg1;
- (id)_debugLoggers;
- (BOOL)_debugLoggingEnabled;
- (id)_descriptionForDebugging:(BOOL)arg1 indentLevel:(unsigned long long)arg2;
- (void)_didAddChildTransaction:(id)arg1;
- (void)_didBegin;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_didRemoveChildTransaction:(id)arg1;
- (void)_didSatisfyMilestone:(id)arg1;
- (void)_enumerateChildTransactionsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_evaluateCompletion;
- (void)_failForTimeoutWithDescription:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_failWithReason:(id)arg1 description:(id)arg2;
- (void)_failWithReason:(id)arg1 description:(id)arg2 precipitatingError:(id)arg3;
- (void)_forceInterrupt;
- (void)_interruptWithReason:(id)arg1 force:(BOOL)arg2;
- (BOOL)_isParentTransactionComplete;
- (BOOL)_isRootTransaction;
- (BOOL)_isRootTransactionComplete;
- (id)_loggingProem;
- (void)_noteChildTransactionCompleted:(id)arg1;
- (void)_noteCompleted;
- (void)_noteTransactionStateInAuditHistory;
- (void)_notifyObserversOfCompletion;
- (id)_parentTransaction;
- (void)_preventTransactionCompletionForReason:(id)arg1 ignoringAuditHistory:(BOOL)arg2 andExecuteBlock:(CDUnknownBlockType)arg3;
- (void)_removeChildTransaction:(id)arg1;
- (void)_removeDebugLogger:(id)arg1;
- (void)_removeLifeAssertion:(id)arg1 ignoringAuditHistory:(BOOL)arg2;
- (BOOL)_removeMilestones:(id)arg1 ignoringAuditHistory:(BOOL)arg2;
- (BOOL)_revertWithReason:(id)arg1;
- (void)_setParentTransaction:(id)arg1;
- (void)_setParentTransaction:(id)arg1 assertIfNecessary:(BOOL)arg2;
- (void)_setState:(unsigned long long)arg1;
- (BOOL)_shouldComplete;
- (BOOL)_shouldFailForChildTransaction:(id)arg1;
- (unsigned long long)_state;
- (id)_stringForInterruptReason:(id)arg1;
- (id)_stringForMilestones:(id)arg1;
- (id)_stringForState:(unsigned long long)arg1;
- (void)_terminateNow;
- (void)_willAddChildTransaction:(id)arg1;
- (void)_willBegin;
- (void)_willComplete;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (void)_willRemoveChildTransaction:(id)arg1;
- (void)addChildTransaction:(id)arg1;
- (void)addMilestone:(id)arg1;
- (void)addMilestones:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)auditHistory;
- (void)begin;
- (id)childTransactionsOfClass:(Class)arg1;
- (void)dealloc;
- (void)evaluateMilestone:(id)arg1 withEvaluator:(CDUnknownBlockType)arg2;
- (void)failWithReason:(id)arg1;
- (BOOL)hasChildTransactionsOfClass:(Class)arg1;
- (id)init;
- (void)interrupt;
- (void)interruptWithReason:(id)arg1;
- (BOOL)isInterruptable;
- (BOOL)isWaitingForMilestone:(id)arg1;
- (void)listenForSatisfiedMilestone:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeAllChildTransactions;
- (void)removeAllChildTransactionsOfClass:(Class)arg1;
- (void)removeAllMilestones;
- (void)removeChildTransaction:(id)arg1;
- (BOOL)removeMilestone:(id)arg1;
- (BOOL)removeMilestones:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)satisfyMilestone:(id)arg1;
- (BOOL)shouldWatchdog:(id *)arg1;
- (double)watchdogTimeout;

@end


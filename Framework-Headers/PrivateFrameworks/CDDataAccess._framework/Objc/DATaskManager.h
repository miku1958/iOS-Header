//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DAAccount, DAActivity, DATransaction, NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer;
@protocol DATask;

@interface DATaskManager : NSObject
{
    DATransaction *_transaction;
    DAActivity *_daActivity;
    DAAccount *_account;
    int _state;
    id<DATask> _activeModalTask;
    id<DATask> _activeQueuedTask;
    NSString *_powerAssertionGroupID;
    NSMutableArray *_queuedExclusiveTasks;
    id<DATask> _activeExclusiveTask;
    NSMutableSet *_independentTasks;
    NSMutableSet *_heldIndependentTasks;
    NSMutableSet *_modalHeldIndependentTasks;
    NSMutableArray *_mQueuedTasks;
    id<DATask> _modalHeldActiveQueuedTask;
    NSMutableArray *_queuedModalTasks;
    NSTimer *_managerIdleTimer;
    NSTimer *_userInitiatedSyncTimer;
    NSTimer *_xpcTransactionTimer;
}

@property (weak, nonatomic) DAAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) id<DATask> activeExclusiveTask; // @synthesize activeExclusiveTask=_activeExclusiveTask;
@property (strong, nonatomic) id<DATask> activeModalTask; // @synthesize activeModalTask=_activeModalTask;
@property (strong, nonatomic) id<DATask> activeQueuedTask; // @synthesize activeQueuedTask=_activeQueuedTask;
@property (readonly, nonatomic) NSArray *allTasks;
@property (strong, nonatomic) NSMutableSet *heldIndependentTasks; // @synthesize heldIndependentTasks=_heldIndependentTasks;
@property (strong, nonatomic) NSMutableSet *independentTasks; // @synthesize independentTasks=_independentTasks;
@property (strong, nonatomic) NSMutableArray *mQueuedTasks; // @synthesize mQueuedTasks=_mQueuedTasks;
@property (strong, nonatomic) NSTimer *managerIdleTimer; // @synthesize managerIdleTimer=_managerIdleTimer;
@property (strong, nonatomic) id<DATask> modalHeldActiveQueuedTask; // @synthesize modalHeldActiveQueuedTask=_modalHeldActiveQueuedTask;
@property (strong, nonatomic) NSMutableSet *modalHeldIndependentTasks; // @synthesize modalHeldIndependentTasks=_modalHeldIndependentTasks;
@property (copy, nonatomic) NSString *powerAssertionGroupID; // @synthesize powerAssertionGroupID=_powerAssertionGroupID;
@property (strong, nonatomic) NSMutableArray *queuedExclusiveTasks; // @synthesize queuedExclusiveTasks=_queuedExclusiveTasks;
@property (strong, nonatomic) NSMutableArray *queuedModalTasks; // @synthesize queuedModalTasks=_queuedModalTasks;
@property (readonly, nonatomic) NSArray *queuedTasks;
@property (nonatomic) int state; // @synthesize state=_state;
@property (strong, nonatomic) NSTimer *userInitiatedSyncTimer; // @synthesize userInitiatedSyncTimer=_userInitiatedSyncTimer;
@property (strong, nonatomic) NSTimer *xpcTransactionTimer; // @synthesize xpcTransactionTimer=_xpcTransactionTimer;

- (void).cxx_destruct;
- (id)OAuth2Token;
- (void)_cancelTasksWithReason:(int)arg1;
- (void)_clearUserInitiatedSyncTimer;
- (void)_endXpcTransaction;
- (BOOL)_hasTasksForcingNetworkConnection;
- (BOOL)_hasTasksIndicatingARunningSync;
- (void)_logSyncEnd;
- (void)_makeStateTransition;
- (void)_performTask:(id)arg1;
- (void)_populateVersionDescriptions;
- (void)_reactivateHeldTasks;
- (void)_releasePowerAssertionForTask:(id)arg1;
- (void)_requestCancelTasksWithReason:(int)arg1;
- (void)_retainPowerAssertionForTask:(id)arg1;
- (void)_schedulePerformTask:(id)arg1;
- (void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2;
- (void)_scheduleStartModal:(id)arg1;
- (void)_startModal:(id)arg1;
- (BOOL)_taskForcesNetworking:(id)arg1;
- (BOOL)_taskInQueueForcesNetworkConnection:(id)arg1;
- (BOOL)_useFakeDescriptions;
- (void)_useOpportunisticSocketsAgain;
- (id)_version;
- (id)accountID;
- (id)accountPersistentUUID;
- (void)cancelAllTasks;
- (void)cancelTask:(id)arg1;
- (void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2;
- (void)cancelTasksDueToOnPowerMode;
- (void)dealloc;
- (id)deviceType;
- (id)identityPersist;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (BOOL)isShutdown;
- (id)password;
- (long long)port;
- (id)server;
- (BOOL)shouldCancelTaskDueToOnPowerFetchMode;
- (void)shutdown;
- (id)stateString;
- (void)submitExclusiveTask:(id)arg1;
- (void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(BOOL)arg2;
- (void)submitIndependentTask:(id)arg1;
- (void)submitQueuedTask:(id)arg1;
- (void)taskDidFinish:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (BOOL)taskIsModal:(id)arg1;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (BOOL)useSSL;
- (id)user;
- (id)userAgent;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineComponent-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineForceSyncTaskDelegate-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLBackgroundDownloadsTask, CPLCleanupTask, CPLDerivativesFilter, CPLEngineForceSyncTask, CPLEngineLibrary, CPLMinglePulledChangesTask, CPLPlatformObject, CPLPullFromTransportTask, CPLPullScopesTask, CPLPushToTransportTask, CPLScopeUpdateTask, CPLSyncSession, CPLTransportUpdateTask, NSError, NSMutableArray, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportSetupTask, OS_dispatch_queue;

@interface CPLEngineSyncManager : NSObject <CPLEngineSyncTaskDelegate, CPLAbstractObject, CPLEngineComponent, CPLEngineForceSyncTaskDelegate>
{
    id<CPLEngineStoreUserIdentifier> _transportUserIdentifier;
    CPLDerivativesFilter *_derivativesFilter;
    BOOL _setupIsDone;
    BOOL _shouldUpdateDisabledFeatures;
    BOOL _closed;
    id<CPLEngineTransportSetupTask> _setupTask;
    CDUnknownBlockType _closingCompletionHandler;
    CPLSyncSession *_session;
    NSObject<OS_dispatch_queue> *_lock;
    NSError *_lastError;
    CPLCleanupTask *_cleanupTask;
    CPLTransportUpdateTask *_transportUpdateTask;
    CPLPullScopesTask *_pullScopesTask;
    CPLScopeUpdateTask *_scopeUpdateTask;
    CPLPushToTransportTask *_pushHighPriorityTask;
    CPLPushToTransportTask *_pushTask;
    CPLPullFromTransportTask *_pullTask;
    CPLMinglePulledChangesTask *_mingleTask;
    CPLBackgroundDownloadsTask *_backgroundDownloadsTask;
    CPLEngineForceSyncTask *_currentForceSyncTask;
    CPLEngineForceSyncTask *_pendingForceSyncTask;
    unsigned long long _shouldRestartSessionFromState;
    NSMutableArray *_lastErrors;
    BOOL _foreground;
    BOOL _boostPriority;
    BOOL _hasOverridenBudgets;
    BOOL _disabledSchedulerForForceSyncTask;
    BOOL _shouldTryToMingleImmediately;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    unsigned long long _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSError *lastError;
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
@property (nonatomic) BOOL shouldTryToMingleImmediately; // @synthesize shouldTryToMingleImmediately=_shouldTryToMingleImmediately;
@property (nonatomic, setter=_setState:) unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

+ (id)descriptionForState:(unsigned long long)arg1;
+ (id)platformImplementationProtocol;
+ (unsigned int)qualityOfServiceForForcedTasks;
+ (unsigned int)qualityOfServiceForSyncSessions;
+ (id)shortDescriptionForState:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_advanceToNextStateLocked;
- (void)_advanceToNextStateLockedMinimalState:(unsigned long long)arg1;
- (void)_cancelAllTasksForBackgroundDownloads;
- (void)_cancelAllTasksForCleanup;
- (void)_cancelAllTasksForPull;
- (void)_cancelAllTasksForPullScopes;
- (void)_cancelAllTasksForPush:(BOOL)arg1;
- (void)_cancelAllTasksForPushHighPriority:(BOOL)arg1;
- (void)_cancelAllTasksForScopeUpdate;
- (void)_cancelAllTasksForSetup;
- (void)_cancelAllTasksForTransportUpdate;
- (void)_cancelAllTasksLocked;
- (void)_cancelAllTasksLockedDeferringPushTaskCancellationIfCurrentlyUploadingForeground:(BOOL)arg1;
- (BOOL)_checkForegroundAtLaunchForForceSyncTask;
- (id)_descriptionForBackgroundDownloadsTasks;
- (id)_descriptionForCleanupTasks;
- (id)_descriptionForCurrentState;
- (id)_descriptionForLaunchedTasks;
- (id)_descriptionForPullScopesTasks;
- (id)_descriptionForPullTasks;
- (id)_descriptionForPushHighPriorityTasks;
- (id)_descriptionForPushTasks;
- (id)_descriptionForScopeUpdateTasks;
- (id)_descriptionForSetupTasks;
- (id)_descriptionForTransportUpdateTasks;
- (BOOL)_didFinishBackgroundDownloadsTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL *)arg3;
- (BOOL)_didFinishCleanupTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL *)arg3;
- (BOOL)_didFinishPullScopesTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL *)arg3;
- (BOOL)_didFinishPullTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL *)arg3;
- (BOOL)_didFinishPushHighPriorityTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL *)arg3;
- (BOOL)_didFinishPushTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL *)arg3;
- (BOOL)_didFinishScopeUpdateTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL *)arg3;
- (BOOL)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(BOOL *)arg2;
- (BOOL)_didFinishTransportUpdateTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL *)arg3;
- (void)_disabledSchedulerForForceSyncTaskIfNecessary;
- (void)_launchForceSyncTaskIfNecessary;
- (BOOL)_launchNecessaryTasksForBackgroundDownloads;
- (BOOL)_launchNecessaryTasksForCleanup;
- (BOOL)_launchNecessaryTasksForCurrentStateLocked;
- (BOOL)_launchNecessaryTasksForPull;
- (BOOL)_launchNecessaryTasksForPullScopes;
- (BOOL)_launchNecessaryTasksForPush;
- (BOOL)_launchNecessaryTasksForPushHighPriority;
- (BOOL)_launchNecessaryTasksForScopeUpdate;
- (BOOL)_launchNecessaryTasksForTransportUpdate;
- (BOOL)_launchSetupTask;
- (void)_moveAllTasksToBackgroundLocked;
- (void)_notifyEndOfSyncSession;
- (void)_overrideBudgetsIfNeeded;
- (BOOL)_prepareAndLaunchSyncTask:(id *)arg1;
- (float)_progressForBackgroundDownloadsTask:(id)arg1 progress:(float)arg2;
- (float)_progressForCleanupTask:(id)arg1 progress:(float)arg2;
- (float)_progressForPullScopesTask:(id)arg1 progress:(float)arg2;
- (float)_progressForPullTask:(id)arg1 progress:(float)arg2;
- (float)_progressForPushHighPriorityTask:(id)arg1 progress:(float)arg2;
- (float)_progressForPushTask:(id)arg1 progress:(float)arg2;
- (float)_progressForScopeUpdateTask:(id)arg1 progress:(float)arg2;
- (float)_progressForTransportUpdateTask:(id)arg1 progress:(float)arg2;
- (void)_reenableSchedulerForForceSyncTaskIfNecessary;
- (void)_releasePowerAssertionForMingleTaskIfNecessary;
- (void)_resetErrorForSyncSession;
- (void)_restartSyncSessionFromStateLocked:(unsigned long long)arg1 session:(id)arg2 cancelIfNecessary:(BOOL)arg3;
- (void)_retainPowerAssertionForMingleTaskIfNecessary;
- (void)_setErrorForSyncSession:(id)arg1;
- (id)_shortDescriptionForCurrentState;
- (void)beginClientWork:(id)arg1;
- (void)cancelCurrentSyncSession;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)componentName;
- (void)discardTransportUserIdentifier;
- (void)dispatchForcedTaskBlock:(CDUnknownBlockType)arg1;
- (void)dispatchSyncBlock:(CDUnknownBlockType)arg1;
- (void)endClientWork:(id)arg1;
- (void)forceSyncTaskHasBeenCancelled:(id)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)launchForceSyncTaskWhenPossible:(id)arg1;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestDisabledFeaturesUpdate;
- (void)resetTransportUserIdentifier;
- (void)setBoostPriority:(BOOL)arg1;
- (void)setSyncSessionShouldBeForeground:(BOOL)arg1;
- (void)startSyncSession:(id)arg1 withMinimalPhase:(unsigned long long)arg2 rewind:(BOOL)arg3;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;

@end

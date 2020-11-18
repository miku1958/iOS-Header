//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineComponent-Protocol.h>

@class CPLEngineLibrary, CPLPlatformObject, NSCountedSet, NSDate, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CPLEngineScheduler : NSObject <CPLAbstractObject, CPLEngineComponent>
{
    unsigned long long _requiredFirstState;
    unsigned long long _lastRequestGeneration;
    unsigned long long _currentRequestGeneration;
    NSDate *_nextScheduledDate;
    double _intervalForRetry;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentSyncState;
    BOOL _needsToUpdateScopeList;
    BOOL _shouldNoteServerHasChanges;
    BOOL _opened;
    NSDate *_unavailabilityLimitDate;
    unsigned long long _foregroundCalls;
    NSCountedSet *_disablingReasons;
    NSCountedSet *_blockingElements;
    NSMutableDictionary *_blockedElements;
    NSMutableSet *_blockWaiters;
    NSCountedSet *_unblockOnceElements;
    NSObject<OS_dispatch_queue> *_blockingLock;
    unsigned long long _significantWorkCalls;
    unsigned long long _disablingMinglingCount;
    NSDate *_lastSyncSessionDateCausedByForeground;
    BOOL _protectAgainstFastRelaunch;
    BOOL _didWriteFirstSyncMarker;
    BOOL _delayedFirstSyncBecauseOfRapidLaunch;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    CDUnknownBlockType _requiredStateObserverBlock;
    CDUnknownBlockType _shouldBackOffOnErrorBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
@property (readonly, nonatomic) unsigned long long requiredState;
@property (copy, nonatomic) CDUnknownBlockType requiredStateObserverBlock; // @synthesize requiredStateObserverBlock=_requiredStateObserverBlock;
@property (copy, nonatomic) CDUnknownBlockType shouldBackOffOnErrorBlock; // @synthesize shouldBackOffOnErrorBlock=_shouldBackOffOnErrorBlock;
@property (readonly) Class superclass;

+ (id)platformImplementationProtocol;
+ (id)validElements;
- (void).cxx_destruct;
- (void)_backOff;
- (void)_disableFastRelaunchProtection;
- (void)_disableRetryAfterLocked;
- (void)_disableSynchronizationWithReasonLocked:(id)arg1;
- (void)_enableSynchronizationWithReasonLocked:(id)arg1;
- (void)_handleResetAnchorWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResetClientCacheWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResetCloudCacheWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResetGlobalAnchorWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_minimalDateForFirstSync;
- (void)_noteServerIsUnavailableWithErrorLocked:(id)arg1;
- (void)_noteSyncSessionNeededFromState:(unsigned long long)arg1;
- (id)_pathToFirstSynchronizationMarker;
- (void)_reallyNoteServerHasChangesLocked;
- (void)_reallyStartSyncSession;
- (void)_reallyUnscheduleSession;
- (void)_resetFirstSynchronizationMarker;
- (void)_scheduleNextSyncSession;
- (void)_setRequiredFirstState:(unsigned long long)arg1;
- (void)_startRequiredSyncSession;
- (void)_startSyncSessionWithMinimalPhase:(unsigned long long)arg1;
- (BOOL)_syncSessionIsPossible;
- (void)_unscheduleNextSyncSession;
- (void)_writeFirstSynchronizationMarker;
- (void)blockEngineElement:(id)arg1;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)componentName;
- (void)disableMingling;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)enableMingling;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (BOOL)isClientInForeground;
- (BOOL)isMinglingEnabled;
- (BOOL)isSynchronizationDisabledWithReasonError:(id *)arg1;
- (void)kickOffSyncSession;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientIsInSyncWithClientCache;
- (void)noteClientIsNotInSyncWithClientCache;
- (void)noteClientNeedsToPull;
- (void)noteNetworkStateDidChange;
- (void)noteResourceDownloadQueueIsFull;
- (void)noteScopeListNeedsUpdate;
- (void)noteScopeNeedsToPullFromTransport;
- (void)noteScopeNeedsToPushHighPriorityToTransport;
- (void)noteScopeNeedsToPushToTransport;
- (void)noteScopeNeedsUpdate;
- (void)noteServerHasChanges;
- (void)noteServerIsUnavailableWithError:(id)arg1;
- (void)noteStoreNeedsCleanup;
- (void)noteStoreNeedsSetup;
- (void)noteStoreNeedsToUpdateDisabledFeatures;
- (void)noteSyncSessionFailedDuringPhase:(unsigned long long)arg1 withError:(id)arg2;
- (void)noteSyncSessionStateWillBeAttempted:(unsigned long long)arg1;
- (void)noteSyncSessionSucceeded;
- (void)noteTransportNeedsUpdate;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetBackoffInterval;
- (void)startRequiredSyncSessionNow;
- (void)unblockEngineElement:(id)arg1;
- (void)unblockEngineElementOnce:(id)arg1;
- (void)waitForEngineElementToBeBlocked:(id)arg1;
- (void)willRunEngineElement:(id)arg1;

@end


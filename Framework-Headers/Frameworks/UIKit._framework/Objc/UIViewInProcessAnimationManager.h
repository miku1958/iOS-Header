//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIViewInProcessAnimationManagerDriver-Protocol.h>

@class CADisplayLink, NSHashTable, NSMutableArray, NSRunLoop, NSString, NSThread, _UIAppCACommitFuture;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source, _UIViewInProcessAnimationManagerDriver;

@interface UIViewInProcessAnimationManager : NSObject <_UIViewInProcessAnimationManagerDriver>
{
    NSMutableArray *_preCommitBlocks;
    NSMutableArray *_entries;
    NSMutableArray *_newlyAddedEntries;
    NSMutableArray *_postTickBlocks;
    NSMutableArray *_preExitBlocks;
    NSMutableArray *_presentationModifierGroupRequestBlocks;
    id<_UIViewInProcessAnimationManagerDriver> _animatorAdvancer;
    double _time;
    double _deltaTime;
    double _refreshInterval;
    NSObject<OS_dispatch_queue> *_tickPrepQueue;
    NSObject<OS_dispatch_queue> *_tickQueue;
    NSObject<OS_dispatch_queue> *_entryLockingQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_displayLinkAccessQueue;
    NSObject<OS_dispatch_queue> *_backlightQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_semaphore> *_postTicksDelaySemaphore;
    BOOL _processingPreCommits;
    BOOL _waitingForAnimatorAdvancerToStart;
    _UIAppCACommitFuture *_caCommitFuture;
    CADisplayLink *_displayLink;
    int _screenDimmingNotificationToken;
    BOOL _animationsSuspended;
    BOOL _animationsShouldCompleteImmediately;
    BOOL _skipNextFrame;
    BOOL _displayLinkInvalidated;
    BOOL _screenIsOff;
    unsigned long long _presentationModifierRequestCount;
    NSHashTable *_presentationGroups;
    BOOL _appSuspended;
    NSMutableArray *_observedWindowScenes;
    BOOL _usesMainThreadExecution;
    BOOL _advancingOnCommitDisabled;
    unsigned long long _executionMode;
    NSThread *_currentTickThread;
    NSThread *_animationThread;
    NSRunLoop *_animationThreadRunLoop;
    NSObject<OS_dispatch_semaphore> *_animationThreadKeepAliveSemaphore;
}

@property (nonatomic) BOOL advancingOnCommitDisabled; // @synthesize advancingOnCommitDisabled=_advancingOnCommitDisabled;
@property (weak) NSThread *animationThread; // @synthesize animationThread=_animationThread;
@property (strong) NSObject<OS_dispatch_semaphore> *animationThreadKeepAliveSemaphore; // @synthesize animationThreadKeepAliveSemaphore=_animationThreadKeepAliveSemaphore;
@property (weak) NSRunLoop *animationThreadRunLoop; // @synthesize animationThreadRunLoop=_animationThreadRunLoop;
@property (weak) NSThread *currentTickThread; // @synthesize currentTickThread=_currentTickThread;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long executionMode; // @synthesize executionMode=_executionMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesMainThreadExecution; // @synthesize usesMainThreadExecution=_usesMainThreadExecution;

+ (void)_cancelPresentationModifierGroupRequest:(id)arg1;
+ (void)_dispatchAsyncOntoMainBeforeExit:(CDUnknownBlockType)arg1;
+ (id)_requestPresentationModifierGroup:(CDUnknownBlockType)arg1;
+ (void)_setExternalAnimationDriver:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_advanceWithTime:(double)arg1;
- (void)_applicationBecameActive;
- (void)_applicationDidEnterBackground;
- (void)_applicationResignedActive;
- (void)_cancelAllAnimationsImmediately;
- (void)_cancelPresentationModifierGroupRequest:(id)arg1;
- (void)_commitSynchronously;
- (void)_displayLinkFire:(id)arg1;
- (BOOL)_isInvalidated;
- (void)_performTick:(double)arg1 cancel:(BOOL)arg2 force:(BOOL)arg3 eventName:(id)arg4 entry:(CDUnknownBlockType)arg5 exit:(CDUnknownBlockType)arg6;
- (void)_performWhenInProcessAnimationsTransactionCommits:(CDUnknownBlockType)arg1;
- (void)_prepareForTick;
- (void)_processEntriesCollectingEntriesToRemove:(id)arg1 cancel:(BOOL)arg2;
- (void)_processPostTicks;
- (void)_processPostTicksDelayIfNecessary:(double)arg1;
- (void)_processPreCommitBlocks;
- (void)_processPresentationModifierRequestsAndFlush;
- (void)_processTickExitRemovingEntries:(id)arg1;
- (void)_registerBacklightChangedNotification;
- (id)_requestPresentationModifierGroup:(CDUnknownBlockType)arg1;
- (unsigned long long)_runPreCommitBlocks;
- (void)_screenBasedSceneDidDisconnect:(id)arg1;
- (void)_screenBasedSceneWillAttachWindow:(id)arg1;
- (void)_setAnimationExecutionParameters;
- (void)_setAnimationsSuspended:(BOOL)arg1;
- (void)_setCurrentMediaTime:(double)arg1;
- (BOOL)_shouldKeepAnimationThreadAlive;
- (void)_updateAnimationSuspensionForAppStateChange;
- (void)addEntry:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)finishAdvancingAnimationManager;
- (id)init;
- (void)performAfterTick:(CDUnknownBlockType)arg1;
- (void)performBeforeExiting:(CDUnknownBlockType)arg1;
- (double)refreshInterval;
- (void)scheduleAnimatorAdvancerToStart;
- (void)startAdvancingAnimationManager:(id)arg1;
- (void)startAnimationAdvancerIfNeeded;

@end


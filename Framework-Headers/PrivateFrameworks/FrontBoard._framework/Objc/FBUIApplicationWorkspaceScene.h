//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBWorkspaceScene.h>

@class BKSProcessAssertion, NSMutableArray, NSMutableSet;

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene
{
    NSMutableSet *_allWatchdogs;
    NSMutableArray *_watchdogStack;
    BKSProcessAssertion *_launchBoostahAssertion;
    BKSProcessAssertion *_resumeProcessAssertion;
    BKSProcessAssertion *_suspendingProcessAssertion;
    BKSProcessAssertion *_seoProcessAssertion;
    BKSProcessAssertion *_deliverMessageProcessAssertion;
    unsigned long long _deliverMessageProcessAssertionCount;
    int _suspendType;
    BOOL _createResponseReceived;
    BOOL _transitioningToForeground;
}

@property (readonly, nonatomic, getter=_workspaceQueue_isTransitioningToForeground) BOOL transitioningToForeground; // @synthesize transitioningToForeground=_transitioningToForeground;

- (void)_dispatchBlockAfterProcessLaunch:(CDUnknownBlockType)arg1;
- (void)_workspaceQueue_activateForSEO:(BOOL)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(CDUnknownBlockType)arg4;
- (void)_workspaceQueue_activateResponseReceived:(id)arg1;
- (void)_workspaceQueue_cancelAllWatchdogTimers;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)arg1;
- (id)_workspaceQueue_createWatchdogForSceneAction:(unsigned long long)arg1 transitionContext:(id)arg2;
- (void)_workspaceQueue_deactivateForSEO:(BOOL)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(CDUnknownBlockType)arg4;
- (void)_workspaceQueue_deactivateResponseReceived:(id)arg1;
- (unsigned long long)_workspaceQueue_determineSceneActionFromSettings:(id)arg1 toSettings:(id)arg2;
- (void)_workspaceQueue_dropAllProcessAssertions;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion:(BOOL)arg1;
- (void)_workspaceQueue_dropResumeProcessAssertion;
- (void)_workspaceQueue_dropSEOProcessAssertion;
- (void)_workspaceQueue_dropSuspendingProcessAssertion;
- (void)_workspaceQueue_invalidate;
- (long long)_workspaceQueue_lifecycleStateForSettings:(id)arg1;
- (id)_workspaceQueue_newProcessAssertionForReason:(unsigned int)arg1 withName:(id)arg2 transitionContext:(id)arg3;
- (int)_workspaceQueue_pid;
- (id)_workspaceQueue_process;
- (void)_workspaceQueue_takeAssertionsForDeactivation:(BOOL)arg1 transitionContext:(id)arg2;
- (void)_workspaceQueue_takeDeliverMessageProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_takeResumeProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_takeSEOProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_takeSuspendingProcessAssertion;
- (void)dealloc;
- (void)host:(id)arg1 configureWithInitialClientSettings:(id)arg2;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithParentWorkspace:(id)arg1 host:(id)arg2;
- (id)parentWorkspace;

@end

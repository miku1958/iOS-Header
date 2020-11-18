//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBFluidSwitcherGestureWorkspaceTransaction.h>

@class NSMutableDictionary, SBApplicationSceneUpdateTransaction;

@interface SBMoveFloatingApplicationGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction
{
    BOOL _tryPreemptiveFloatingApplicationActivation;
    BOOL _didAddActivateFloatingApplicationTransaction;
    SBApplicationSceneUpdateTransaction *_activateFloatingApplicationTransaction;
    NSMutableDictionary *_statusBarAssertions;
    struct CGRect _initialFloatingApplicationFrame;
}

- (void).cxx_destruct;
- (void)_acquireStatusBarAssertions;
- (void)_begin;
- (void)_beginWithGesture:(id)arg1;
- (void)_didComplete;
- (void)_finishWithGesture:(id)arg1;
- (long long)_gestureType;
- (void)_invalidateStatusBarAssertions;
- (void)_performBlockWithLiveContentOverlayUpdatesSuspended:(CDUnknownBlockType)arg1;
- (void)_startSuppressingKeyboardForFloatingApplication;
- (void)_stopSuppressingKeyboard;
- (id)_transitionRequestForPreemptiveFloatingApplicationActivation;
- (void)_tryPreemptiveFloatingApplicationActivationIfNecessaryWithGesture:(id)arg1;
- (void)_updateStatusBarAssertionsForGesture;
- (void)_updateStatusBarAssertionsForLayoutState;
- (void)_updateWithGesture:(id)arg1;

@end

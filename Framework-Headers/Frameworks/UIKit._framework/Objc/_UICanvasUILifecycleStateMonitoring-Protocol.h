//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UICanvasLifecycleStateMonitoring-Protocol.h>

@class UIApplicationSceneTransitionContext, UIStatusBarWindow;

@protocol _UICanvasUILifecycleStateMonitoring <_UICanvasLifecycleStateMonitoring>

@property (readonly, nonatomic) UIStatusBarWindow *statusBarWindow;

- (void)_transitionLifecycleStateWithTransitionContext:(UIApplicationSceneTransitionContext *)arg1 completion:(void (^)(FBSWorkspaceSceneUpdateResponse *))arg2;
- (void)forceDeactivateWithTransitionContext:(UIApplicationSceneTransitionContext *)arg1 completion:(void (^)(FBSWorkspaceSceneUpdateResponse *))arg2;
@end


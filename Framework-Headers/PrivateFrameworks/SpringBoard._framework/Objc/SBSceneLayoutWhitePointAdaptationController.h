//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBMainDisplaySceneLayoutViewController;

@interface SBSceneLayoutWhitePointAdaptationController : NSObject
{
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
}

+ (double)_defaultAnimationDuration;
+ (id)_defaultAnimationSettings;
+ (id)_harmonySettings;
+ (BOOL)_isInteractiveUpdateEnabled;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_applicationSceneHandleForLayoutElement:(id)arg1;
- (id)_deviceSceneHandlesFromEntities:(id)arg1;
- (void)_updateWhitePointAdaptationStrengthWithAnimationSettings:(id)arg1;
- (void)_updateWhitePointAdaptationStrengthWithFromApplicationScenes:(id)arg1 toApplicationScenes:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5 interactive:(BOOL)arg6;
- (void)_updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)arg1 fromPercentage:(double)arg2 toPercentage:(double)arg3 animationSettings:(id)arg4 cancelled:(BOOL)arg5 interactive:(BOOL)arg6;
- (long long)_whitePointAdaptivityStyleForLayoutElement:(id)arg1;
- (id)_whitePointAdaptivityStylesForLayoutState;
- (id)init;
- (void)updateWhitePointAdaptationStrength;
- (void)updateWhitePointAdaptationStrengthWithAnimationSettings:(id)arg1;
- (void)updateWhitePointAdaptationStrengthWithFromApplicationSceneEntities:(id)arg1 toApplicationSceneEntities:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5 interactive:(BOOL)arg6;
- (void)updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)arg1 animationTransitionContext:(id)arg2;

@end


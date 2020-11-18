//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class FBSSceneClientSettingsDiff, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, FBScene, FBSceneMonitor, FBSceneUpdateContext, NSSet;

@protocol FBSceneMonitorDelegate <NSObject>

@optional
- (void)sceneMonitor:(FBSceneMonitor *)arg1 effectiveSceneSettingsDidChangeWithDiff:(FBSSceneSettingsDiff *)arg2 previousSettings:(FBSSceneSettings *)arg3;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 pairingStatusDidChangeForExternalSceneIDs:(NSSet *)arg2;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 sceneClientSettingsDidChangeWithDiff:(FBSSceneClientSettingsDiff *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 sceneDidCommitUpdateWithContext:(FBSceneUpdateContext *)arg2;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 sceneSettingsDidChangeWithDiff:(FBSSceneSettingsDiff *)arg2 previousSettings:(FBSSceneSettings *)arg3;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 sceneWasCreated:(FBScene *)arg2;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 sceneWasDestroyed:(FBScene *)arg2;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 sceneWillCommitUpdateWithContext:(FBSceneUpdateContext *)arg2;
@end


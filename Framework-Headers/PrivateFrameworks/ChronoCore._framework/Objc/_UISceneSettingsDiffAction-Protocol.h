//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChronoCore/NSObject-Protocol.h>

@class FBSScene, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, UIScene;

@protocol _UISceneSettingsDiffAction <NSObject>
- (void)_performActionsForUIScene:(UIScene *)arg1 withUpdatedFBSScene:(FBSScene *)arg2 settingsDiff:(FBSSceneSettingsDiff *)arg3 fromSettings:(FBSSceneSettings *)arg4 transitionContext:(FBSSceneTransitionContext *)arg5 lifecycleActionType:(unsigned int)arg6;
@end


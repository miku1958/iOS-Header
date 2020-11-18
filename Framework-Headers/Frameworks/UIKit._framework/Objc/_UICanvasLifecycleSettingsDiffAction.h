//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UICanvasSettingsDiffAction-Protocol.h>

@class NSString, UIApplicationSceneSettingsDiffInspector;

__attribute__((visibility("hidden")))
@interface _UICanvasLifecycleSettingsDiffAction : NSObject <_UICanvasSettingsDiffAction>
{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsLifecycleEventDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsLifecycleEventDiffInspector; // @synthesize sceneSettingsLifecycleEventDiffInspector=_sceneSettingsLifecycleEventDiffInspector;
@property (readonly) Class superclass;

+ (void)configureInitialDeactivationReasons:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_updateForcedStatusBarForegroundTransparentWithSceneSettings:(id)arg1 transitionContext:(id)arg2;
- (void)performActionsForCanvas:(id)arg1 withUpdatedScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneSettingsDiffAction-Protocol.h>

@class NSString, UIApplicationSceneSettingsDiffInspector;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneGeometrySettingsDiffAction : NSObject <_UISceneSettingsDiffAction>
{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsGeometryMutationDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsGeometryMutationDiffInspector; // @synthesize sceneSettingsGeometryMutationDiffInspector=_sceneSettingsGeometryMutationDiffInspector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)_updateSceneGeometryWithSettingObserverContext:(CDStruct_d7010776)arg1 windowScene:(id)arg2 transitionContext:(id)arg3;

@end


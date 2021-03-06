//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSceneSettings.h>

#import <UIKitCore/UIApplicationSceneSettings-Protocol.h>
#import <UIKitCore/_UIDisplayInfoProviding-Protocol.h>

@class BSCornerRadiusConfiguration, FBSDisplayConfiguration, NSNumber, NSString;

@interface UIApplicationSceneSettings : FBSSceneSettings <_UIDisplayInfoProviding, UIApplicationSceneSettings>
{
}

@property (readonly, nonatomic) long long accessibilityContrast;
@property (readonly, nonatomic) unsigned long long artworkSubtype;
@property (readonly, nonatomic) BOOL canShowAlerts;
@property (readonly, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (readonly, nonatomic) unsigned long long deactivationReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long deviceOrientation;
@property (readonly, nonatomic) BOOL deviceOrientationEventsEnabled;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) BOOL forcedStatusBarForegroundTransparent;
@property (readonly, nonatomic) NSNumber *forcedStatusBarStyle;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double homeAffordanceOverlayAllowance;
@property (readonly, nonatomic) unsigned int hostContextIdentifierForSnapshotting;
@property (readonly, nonatomic) BOOL idleModeEnabled;
@property (readonly, nonatomic) struct UIEdgeInsets peripheryInsets;
@property (readonly, nonatomic) NSString *persistenceIdentifier;
@property (readonly, nonatomic) long long pointerLockStatus;
@property (readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property (readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeRight;
@property (readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortrait;
@property (readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property (readonly, nonatomic) unsigned long long scenePresenterRenderIdentifierForSnapshotting;
@property (readonly, nonatomic) struct CGRect statusBarAvoidanceFrame;
@property (readonly, nonatomic) BOOL statusBarDisabled;
@property (readonly, nonatomic) double statusBarHeight;
@property (readonly, nonatomic) long long statusBarParts;
@property (readonly, nonatomic) int statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double systemMinimumMargin;
@property (readonly, nonatomic) BOOL underLock;
@property (readonly, nonatomic) long long userInterfaceStyle;

- (double)defaultStatusBarHeightForOrientation:(long long)arg1;
- (BOOL)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end


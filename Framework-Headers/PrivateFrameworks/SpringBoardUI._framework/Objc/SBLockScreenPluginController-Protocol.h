//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBPluginBundleController-Protocol.h>
#import <SpringBoardUI/SBUIOptionalLegibility-Protocol.h>

@class SBLockScreenPluginAction, SBLockScreenPluginContext, SBLockScreenPluginPresentation, UIViewController;
@protocol SBLockScreenPluginAgent, SBLockScreenPluginAppearance, SBLockScreenPluginViewController;

@protocol SBLockScreenPluginController <SBPluginBundleController, SBUIOptionalLegibility>

@property (weak, nonatomic) id<SBLockScreenPluginAgent> pluginAgent;
@property (readonly, nonatomic) id<SBLockScreenPluginAppearance> pluginAppearance;
@property (readonly, nonatomic) long long pluginPriority;
@property (readonly, strong, nonatomic) SBLockScreenPluginAction *pluginUnlockAction;
@property (readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *pluginViewController;


@optional
- (void)pluginDidDeactivateWithContext:(SBLockScreenPluginContext *)arg1;
- (BOOL)pluginHandleEvent:(long long)arg1;
- (void)pluginWillActivateWithContext:(SBLockScreenPluginContext *)arg1;
- (void)updateForPresentation:(SBLockScreenPluginPresentation *)arg1;
@end


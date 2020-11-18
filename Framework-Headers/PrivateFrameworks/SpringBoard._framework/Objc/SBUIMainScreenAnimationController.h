//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class NSSet, SBDeviceApplicationSceneEntity, SBWorkspaceTransitionRequest;
@protocol BSInvalidatable;

@interface SBUIMainScreenAnimationController : SBUIWorkspaceAnimationController
{
    id<BSInvalidatable> _colorSamplingAssertion;
    id<BSInvalidatable> _wallpaperRequiredAssertion;
}

@property (strong, nonatomic) id<BSInvalidatable> colorSamplingAssertion; // @synthesize colorSamplingAssertion=_colorSamplingAssertion;
@property (readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities; // @dynamic fromApplicationSceneEntities;
@property (readonly, nonatomic) SBDeviceApplicationSceneEntity *fromApplicationSceneEntity;
@property (readonly, copy, nonatomic) NSSet *toApplicationSceneEntities; // @dynamic toApplicationSceneEntities;
@property (readonly, nonatomic) SBDeviceApplicationSceneEntity *toApplicationSceneEntity;
@property (readonly, nonatomic) SBWorkspaceTransitionRequest *transitionRequest;
@property (strong, nonatomic) id<BSInvalidatable> wallpaperRequiredAssertion; // @synthesize wallpaperRequiredAssertion=_wallpaperRequiredAssertion;

- (void).cxx_destruct;
- (void)__startAnimation;
- (BOOL)__wantsInitialProgressStateChange;
- (void)_begin;
- (void)_cleanupAnimation;
- (void)_dismissBannerAnimated:(BOOL)arg1;
- (id)_getTransitionWindow;
- (id)_primaryAppOrAnyAppFromSet:(id)arg1;
- (BOOL)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;

@end

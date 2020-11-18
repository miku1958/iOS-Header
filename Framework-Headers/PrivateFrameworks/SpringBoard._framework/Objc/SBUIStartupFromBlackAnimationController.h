//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BSAnimationSettings, SBSceneLayoutAnimationWrapperView, UIView;

@interface SBUIStartupFromBlackAnimationController : SBUIMainScreenAnimationController
{
    BSAnimationSettings *_animationSettings;
    BOOL _waitsForAppActivation;
    UIView *_internalContainerView;
    UIView *_blackView;
    SBSceneLayoutAnimationWrapperView *_layoutWrapperView;
}

@property (strong, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property (nonatomic) BOOL waitsForAppActivation; // @synthesize waitsForAppActivation=_waitsForAppActivation;

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (id)_getTransitionWindow;
- (void)_prepareAnimation;
- (void)_setHidden:(BOOL)arg1;
- (BOOL)_shouldDismissBanner;
- (void)_showBlackView;
- (void)_startAnimation;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

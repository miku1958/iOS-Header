//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKNavigatorSceneKitViewController.h>

@class NSArray, NSString, NSTimer, OKTimerAnimation;

@interface OKNavigatorSceneKitScrollViewControllerProxy : OKNavigatorSceneKitViewController
{
    double _scrollingVelocity;
    double _lastScrolledDistance;
    BOOL _triggerTilt;
    NSArray *_steps;
    long long _currentStepIndex;
    NSString *_didScrollScript;
    NSString *_reachedBeginScript;
    NSString *_reachedEndScript;
    NSString *_reachedStepScript;
    BOOL _needToTriggerReached;
    BOOL _scrollEnabled;
    OKTimerAnimation *_scrollingAnimation;
    struct SCNVector4 _lastCameraRotation;
    BOOL _shouldHaveTilt;
    double _tiltAngle;
    NSTimer *_timer;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (void)adjustCameraPositionForPage:(id)arg1;
- (void)applyPositionAndRotationModifiers:(struct SCNVector3 *)arg1 rotation:(struct SCNVector4 *)arg2 withContext:(struct _NavigatorScrollProgressContext *)arg3;
- (BOOL)bouncingEffectWithProgressContext:(struct _NavigatorScrollProgressContext *)arg1;
- (struct SCNVector3)calculateBouncingVector:(struct _NavigatorScrollProgressContext *)arg1;
- (void)calculateDeltaWithProgressContext:(struct _NavigatorScrollProgressContext *)arg1;
- (void)calculateNewPositionAndRotationWithProgressContext:(struct _NavigatorScrollProgressContext *)arg1;
- (struct SCNVector4)calculateTiltAngleDependingVelocity:(struct SCNVector3)arg1 rotation:(struct SCNVector4)arg2 direction:(double)arg3;
- (void)cancelCouchPotatoPlayback;
- (void)commonInit;
- (void)dealloc;
- (BOOL)exceedStepWithProgressContext:(struct _NavigatorScrollProgressContext *)arg1;
- (struct SCNVector3)getNearestPathPositionForWidgetNode:(id)arg1;
- (BOOL)isPosition:(struct SCNVector3)arg1 isBetweenPreviousStep:(id)arg2 andNextStep:(id)arg3;
- (void)moveCameraOfPixels:(double)arg1 during:(double)arg2 withTimingFunction:(id)arg3;
- (void)navigateToPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)navigateToPathPosition:(struct SCNVector3)arg1;
- (id)nearestWidgetNodeOfCameraPosition:(id)arg1;
- (void)setSettingDidScrollScript:(id)arg1;
- (void)setSettingReachedBeginScript:(id)arg1;
- (void)setSettingReachedEndScript:(id)arg1;
- (void)setSettingReachedStepScript:(id)arg1;
- (void)setSettingScrollEnabled:(BOOL)arg1;
- (void)setSettingSteps:(id)arg1;
- (void)setSettingTiltAngle:(BOOL)arg1;
- (BOOL)settingScrollEnabled;
- (id)settingSteps;
- (BOOL)settingTiltAngle;
- (void)updateCameraPosition:(struct SCNVector3)arg1 andRotation:(struct SCNVector4)arg2;
- (BOOL)updateCameraWithScrolledDistance:(double)arg1 touchEnded:(BOOL)arg2 momentPhase:(BOOL)arg3;
- (void)updatePageViewController;

@end


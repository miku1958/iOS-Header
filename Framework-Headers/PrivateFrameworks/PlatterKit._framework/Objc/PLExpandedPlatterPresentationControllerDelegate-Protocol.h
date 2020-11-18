//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/NSObject-Protocol.h>

@class BSAnimationSettings, UIPresentationController, UIWindow;
@protocol PLExpandedPlatterPresentationController, PLKeyboardHomeAffordanceAssertion, UIViewSpringAnimationBehaviorDescribing;

@protocol PLExpandedPlatterPresentationControllerDelegate <NSObject>

@optional
- (id<PLKeyboardHomeAffordanceAssertion>)expandedPlatterPresentationController:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1 keyboardAssertionForGestureWindow:(UIWindow *)arg2;
- (BOOL)expandedPlatterPresentationControllerShouldAllowKeyboardOnAppearance:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1;
- (BSAnimationSettings *)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1;
- (id<UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1;
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1;
@end


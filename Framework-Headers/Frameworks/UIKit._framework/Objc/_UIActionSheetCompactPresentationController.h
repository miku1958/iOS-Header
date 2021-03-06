//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPresentationController.h>

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, _UIAnimationCoordinator, _UIDimmingKnockoutBackdropView;
@protocol UIActionSheetPresentationControllerDismissActionView, UIActionSheetPresentationControllerVisualStyle, _UIActionSheetCompactPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIActionSheetCompactPresentationController : UIPresentationController
{
    BOOL _avoidsKeyboardDisabled;
    BOOL _shouldAdoptPresentedAppearance;
    BOOL _hasPendingAnimatedLayout;
    id<_UIActionSheetCompactPresentationControllerDelegate> _actionSheetDelegate;
    UIView<UIActionSheetPresentationControllerDismissActionView> *_dismissActionView;
    UILongPressGestureRecognizer *_dismissActionViewGestureRecognizer;
    UITapGestureRecognizer *_dimmingViewDismissTapGestureRecognizer;
    UIView *_dimmingView;
    _UIDimmingKnockoutBackdropView *_backdropView;
    _UIAnimationCoordinator *_animationCoordinator;
    id<UIActionSheetPresentationControllerVisualStyle> _visualStyle;
    double _pseudoAlertPreferredTop;
}

@property (weak, nonatomic) id<_UIActionSheetCompactPresentationControllerDelegate> actionSheetDelegate; // @synthesize actionSheetDelegate=_actionSheetDelegate;
@property (strong, nonatomic) _UIAnimationCoordinator *animationCoordinator; // @synthesize animationCoordinator=_animationCoordinator;
@property (nonatomic) BOOL avoidsKeyboardDisabled; // @synthesize avoidsKeyboardDisabled=_avoidsKeyboardDisabled;
@property (strong, nonatomic) _UIDimmingKnockoutBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property (strong, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property (strong, nonatomic) UITapGestureRecognizer *dimmingViewDismissTapGestureRecognizer; // @synthesize dimmingViewDismissTapGestureRecognizer=_dimmingViewDismissTapGestureRecognizer;
@property (copy, nonatomic) NSString *dismissActionTitle;
@property (nonatomic) BOOL dismissActionUsesShorterHeightWhenCompactVertically;
@property (strong, nonatomic) UIView<UIActionSheetPresentationControllerDismissActionView> *dismissActionView; // @synthesize dismissActionView=_dismissActionView;
@property (strong, nonatomic) UILongPressGestureRecognizer *dismissActionViewGestureRecognizer; // @synthesize dismissActionViewGestureRecognizer=_dismissActionViewGestureRecognizer;
@property (nonatomic) BOOL hasPendingAnimatedLayout; // @synthesize hasPendingAnimatedLayout=_hasPendingAnimatedLayout;
@property (nonatomic) double pseudoAlertPreferredTop; // @synthesize pseudoAlertPreferredTop=_pseudoAlertPreferredTop;
@property (nonatomic) BOOL shouldAdoptPresentedAppearance; // @synthesize shouldAdoptPresentedAppearance=_shouldAdoptPresentedAppearance;
@property (strong, nonatomic) id<UIActionSheetPresentationControllerVisualStyle> visualStyle; // @synthesize visualStyle=_visualStyle;

- (void).cxx_destruct;
- (void)_applyVisualAffordancesToViews;
- (struct UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double *)arg1 rightMargin:(double *)arg2;
- (CDStruct_758ece87)_currentLayoutGeometry;
- (void)_dismiss;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (void)_handleDismiss:(id)arg1;
- (void)_keyboardChanged:(id)arg1;
- (void)_layoutViews;
- (struct CGSize)_minimumSizeForDismissButton;
- (double)_resizeAnimationDuration;
- (BOOL)_shouldDisableAvoidsKeyboard;
- (BOOL)_shouldOccludeDuringPresentation;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (void)_subscribeToKeyboardNotifications;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_unsubscribeFromKeyboardNotifications;
- (void)_updateForKeyboardStartFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2 duration:(double)arg3 curve:(long long)arg4;
- (void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg1;
- (void)beginPseudoAlertPresentationMode;
- (void)dealloc;
- (void)dismissalTransitionWillBegin;
- (void)endPseudoAlertPresentationMode;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 visualStyle:(id)arg3;
- (struct CGSize)preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionWillBegin;
- (BOOL)shouldPresentInFullscreen;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end


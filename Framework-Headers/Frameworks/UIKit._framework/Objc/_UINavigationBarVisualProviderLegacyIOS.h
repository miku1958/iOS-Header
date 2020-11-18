//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UINavigationBarVisualProvider.h>

#import <UIKit/_UIBasicAnimationFactory-Protocol.h>
#import <UIKit/_UINavigationBarGestureHandlerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIFocusContainerGuide, UIImageView, UILayoutGuide, UIView, _UIBarBackground, _UINavBarPrompt, _UINavigationBarGestureHandler, _UINavigationBarLegacyContentView;
@protocol UIViewControllerTransitionCoordinator;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProviderLegacyIOS : _UINavigationBarVisualProvider <_UIBasicAnimationFactory, _UINavigationBarGestureHandlerDelegate>
{
    _UIBarBackground *_backgroundView;
    UIView *_customBackgroundView;
    UIView *_currentCanvasView;
    UIView *_titleView;
    NSArray *_leftViews;
    NSArray *_rightViews;
    UIImageView *_backIndicatorView;
    _UINavBarPrompt *_prompt;
    _UINavigationBarGestureHandler *_gestureHandler;
    NSMutableArray *_slideTransitionClippingViews;
    id<UIViewControllerTransitionCoordinator> _transitionCoordinator;
    _UINavigationBarLegacyContentView *_layoutView;
    UIView *_contentView;
    UILayoutGuide *_userContentGuide;
    NSLayoutConstraint *_userContentGuideLeading;
    NSLayoutConstraint *_userContentGuideTrailing;
    UIFocusContainerGuide *_contentFocusContainerGuide;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backButtonForBackItem:(id)arg1 topItem:(id)arg2;
- (double)_backIndicatorClippingMargin;
- (double)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg1 titleView:(id)arg2 withBackButtonWidth:(double)arg3;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_completeNavigationTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 transitionAssistant:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_completeTopItemTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 previousLeftViews:(id)arg3 previousRightViews:(id)arg4 enableUserInteraction:(id)arg5 transitionAssistant:(id)arg6;
- (void)_completeTransitionFromCanvasView:(id)arg1 toCanvasView:(id)arg2 updateSize:(BOOL)arg3 transitionAssistant:(id)arg4;
- (struct CGRect)_contentViewFrameInBounds:(struct CGRect)arg1 style:(id)arg2;
- (id)_defaultTitleFontForItem:(id)arg1 fittingHeight:(double)arg2 withScaleAdjustment:(double)arg3;
- (id)_effectiveBackIndicatorImage;
- (double)_effectiveBackIndicatorLeftMargin;
- (id)_effectiveBackIndicatorTransitionMaskImage;
- (struct CGRect)_frameForCanvasView:(id)arg1 inBounds:(struct CGRect)arg2;
- (void)_getLeftMargin:(double *)arg1 rightMargin:(double *)arg2 forNavigationItem:(id)arg3 showingBackButton:(BOOL)arg4 visualStyle:(id)arg5;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5 returnedIdealWidthOfTextContent:(double *)arg6 availableLayoutWidthForTextContent:(double *)arg7 idealBackButtonWidth:(double *)arg8;
- (void)_handleMouseDownAtPoint:(struct CGPoint)arg1;
- (void)_handleMouseUpAtPoint:(struct CGPoint)arg1;
- (void)_layoutInBounds:(struct CGRect)arg1 withVisualStyle:(id)arg2;
- (void)_layoutSubviewsFromContentView;
- (id)_navigationItemAtPoint:(struct CGPoint)arg1;
- (BOOL)_performCanvasViewTransitionFromItem:(id)arg1 toItem:(id)arg2;
- (void)_popForTouchAtPoint:(struct CGPoint)arg1;
- (struct CGSize)_preferredContentSizeForItem:(id)arg1;
- (BOOL)_prepareTransitionFromItem:(id)arg1 toItem:(id)arg2;
- (void)_setUpContentFocusContainerGuide;
- (void)_setViewsAnimated:(BOOL)arg1 forTopNavigationItem:(id)arg2 backNavigationItem:(id)arg3 previousTopItem:(id)arg4;
- (void)_shim_30244716;
- (BOOL)_shim_34415965;
- (id)_shim_backIndicatorView;
- (id)_shim_backdropGroupName;
- (long long)_shim_backdropStyle;
- (double)_shim_backgroundHeight;
- (id)_shim_compatibilityBackgroundView;
- (id)_shim_contentView;
- (id)_shim_customHitTest:(struct CGPoint)arg1 forView:(id)arg2;
- (BOOL)_shim_disableBlurTinting;
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(BOOL)arg1;
- (id)_shim_layoutView;
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint)arg1;
- (void)_shim_pressBackIndicator:(BOOL)arg1 initialPress:(BOOL)arg2;
- (id)_shim_promptText;
- (void)_shim_setBackdropGroupName:(id)arg1;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (void)_shim_setDisableBlurTinting:(BOOL)arg1;
- (void)_shim_setPromptText:(id)arg1 animated:(BOOL)arg2;
- (void)_shim_setShadowAlpha:(double)arg1;
- (void)_shim_setUseContentView:(BOOL)arg1;
- (double)_shim_shadowAlpha;
- (BOOL)_shim_throwConstraintExceptions;
- (void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_shim_updateBackIndicator;
- (void)_shim_updateBackgroundViewIgnoringFlag;
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;
- (id)_shim_userContentGuide;
- (BOOL)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;
- (BOOL)_shouldPopForTouchAtPoint:(struct CGPoint)arg1;
- (BOOL)_shouldShowBackButtonForNavigationItem:(id)arg1;
- (void)_startPopAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_startPushAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (unsigned long long)_subviewIndexAboveBackground;
- (BOOL)_supportsCanvasView;
- (BOOL)_suppressBackIndicator;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;
- (void)_updateBackIndicatorImage;
- (void)_updateBackIndicatorViewTintColor;
- (void)_updateBackground;
- (void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(double)arg2 rightBoundary:(double)arg3 leftMaskImage:(id)arg4 leftMaskIsChevron:(BOOL)arg5 rightMaskImage:(id)arg6;
- (id)backButtonViewAtPoint:(struct CGPoint)arg1;
- (void)barSizeChanged;
- (BOOL)canHandleStatusBarTouchAtPoint:(struct CGPoint)arg1;
- (void)changeAppearance;
- (struct CGPoint)frameOriginForStatusBarLocatedAt:(struct CGPoint)arg1;
- (void)gestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(CDUnknownBlockType)arg2;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (void)popAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)preferredFocusedView;
- (void)prepare;
- (void)prepareForPop;
- (void)prepareForPush;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (void)pushAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setBackButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setupTopNavigationItem;
- (BOOL)shouldGestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;
- (BOOL)shouldUseHeightRangeFittingWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (long long)statusBarStyle;
- (void)teardown;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateTopNavigationItemAnimated:(BOOL)arg1;
- (void)updateTopNavigationItemTitleView;

@end


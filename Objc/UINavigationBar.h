//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/UIBarPositioning-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UIStatusBarTinting-Protocol.h>
#import <UIKit/_UIBarPositioningInternal-Protocol.h>
#import <UIKit/_UIBasicAnimationFactory-Protocol.h>
#import <UIKit/_UIShadowedView-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, UIColor, UIFocusContainerGuide, UIImage, UIImageView, UINavigationItem, UISwipeGestureRecognizer, _UIViewControllerTransitionContext;
@protocol UINavigationBarDelegate;

@interface UINavigationBar : UIView <UIGestureRecognizerDelegate, _UIShadowedView, _UIBasicAnimationFactory, UIStatusBarTinting, _UIBarPositioningInternal, NSCoding, UIBarPositioning>
{
    NSMutableArray *_itemStack;
    double _rightMargin;
    unsigned int _state;
    id _delegate;
    UIView *_backgroundView;
    UIView *_titleView;
    NSArray *_leftViews;
    NSArray *_rightViews;
    UIView *_prompt;
    UIView *_accessoryView;
    UIColor *_barTintColor;
    id _appearanceStorage;
    id _currentAlert;
    struct {
        unsigned int animate:1;
        unsigned int animationDisabledCount:10;
        unsigned int transitioningBarStyle:1;
        unsigned int newBarStyle:3;
        unsigned int transitioningToTranslucent:1;
        unsigned int barStyle:3;
        unsigned int barTranslucence:3;
        unsigned int disableLayout:1;
        unsigned int backPressed:1;
        unsigned int animatePromptChange:1;
        unsigned int pendingHideBackButton:1;
        unsigned int titleAutosizesToFit:1;
        unsigned int usingNewAPI:1;
        unsigned int forceFullHeightInLandscape:1;
        unsigned int isLocked:1;
        unsigned int shouldUpdatePromptAfterTransition:1;
        unsigned int crossfadeItems:1;
        unsigned int autoAdjustTitle:1;
        unsigned int isContainedInPopover:1;
        unsigned int needsDrawRect:1;
        unsigned int animationCleanupCancelled:1;
        unsigned int layoutInProgress:1;
        unsigned int dynamicDuration:1;
        unsigned int isInteractive:1;
        unsigned int cancelledTransition:1;
        unsigned int animationCount:4;
        unsigned int backgroundLayoutNeedsUpdate:1;
    } _navbarFlags;
    UISwipeGestureRecognizer *_popSwipeGestureRecognizer;
    UIImageView *_backIndicatorView;
    NSMutableArray *_slideTransitionClippingViews;
    _UIViewControllerTransitionContext *_navControllerAnimatingContext;
    BOOL _needsUpdateBackIndicatorImage;
    BOOL _wantsLetterpressContent;
    long long _barPosition;
    double _requestedMaxBackButtonWidth;
    UIColor *_accessibilityButtonBackgroundTintColor;
    NSString *_backdropViewLayerGroupName;
    NSMutableArray *__animationIds;
    UIFocusContainerGuide *_contentFocusContainerGuide;
}

@property (strong, nonatomic, setter=_setAccessibilityButtonBackgroundTintColor:) UIColor *_accessibilityButtonBackgroundTintColor; // @synthesize _accessibilityButtonBackgroundTintColor;
@property (strong, nonatomic, setter=_setAnimationIds:) NSMutableArray *_animationIds; // @synthesize _animationIds=__animationIds;
@property (strong, nonatomic, setter=_setBackIndicatorImage:) UIImage *_backIndicatorImage;
@property (nonatomic, setter=_setBackIndicatorLeftMargin:) double _backIndicatorLeftMargin;
@property (strong, nonatomic, setter=_setBackdropViewLayerGroupName:) NSString *_backdropViewLayerGroupName; // @synthesize _backdropViewLayerGroupName;
@property (readonly, nonatomic) long long _barTranslucence;
@property (readonly, nonatomic) double _heightIncludingBackground;
@property (nonatomic, setter=_setNeedsUpdateBackIndicatorImage:) BOOL _needsUpdateBackIndicatorImage; // @synthesize _needsUpdateBackIndicatorImage;
@property (nonatomic, setter=_setRequestedMaxBackButtonWidth:) double _requestedMaxBackButtonWidth; // @synthesize _requestedMaxBackButtonWidth;
@property (nonatomic, setter=_setWantsLetterpressContent:) BOOL _wantsLetterpressContent; // @synthesize _wantsLetterpressContent;
@property (strong, nonatomic) UIImage *backIndicatorImage;
@property (strong, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property (readonly, nonatomic) UINavigationItem *backItem;
@property (readonly, nonatomic) long long barPosition; // @synthesize barPosition=_barPosition;
@property (nonatomic) long long barStyle;
@property (strong, nonatomic) UIColor *barTintColor;
@property (readonly, nonatomic, getter=_contentFocusContainerGuide) UIFocusContainerGuide *contentFocusContainerGuide; // @synthesize contentFocusContainerGuide=_contentFocusContainerGuide;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UINavigationBarDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *items;
@property (strong, nonatomic) UIImage *shadowImage;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *tintColor; // @dynamic tintColor;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (readonly, nonatomic) UINavigationItem *topItem;
@property (nonatomic, getter=isTranslucent) BOOL translucent;

+ (id)_bottomColorForBackgroundImage:(id)arg1 viewSize:(struct CGSize)arg2;
+ (id)_defaultBackIndicatorImage;
+ (id)_defaultBackIndicatorTransitionMaskImage;
+ (id)_defaultVisualStyleForOrientation:(long long)arg1;
+ (void)_initializeForIdiom:(long long)arg1;
+ (void)_setUseCustomBackButtonAction:(BOOL)arg1;
+ (id)_statusBarBaseTintColorForStyle:(long long)arg1 translucent:(BOOL)arg2 tintColor:(id)arg3;
+ (id)_statusBarBaseTintColorForStyle:(long long)arg1 translucent:(BOOL)arg2 tintColor:(id)arg3 backgroundImage:(id)arg4 viewSize:(struct CGSize)arg5;
+ (BOOL)_useCustomBackButtonAction;
+ (id)_visualStyleForIdiom:(long long)arg1 metrics:(long long)arg2 isContainedInPopover:(BOOL)arg3 wantsLetterpressContent:(BOOL)arg4;
+ (id)defaultPromptFont;
+ (struct CGSize)defaultSize;
+ (struct CGSize)defaultSizeForOrientation:(long long)arg1;
+ (struct CGSize)defaultSizeWithPrompt;
+ (struct CGSize)defaultSizeWithPromptForOrientation:(long long)arg1;
+ (void)setDefaultAnimationDuration:(double)arg1;
- (void).cxx_destruct;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (long long)_activeBarMetrics;
- (id)_activeVisualStyle;
- (void)_addItem:(id)arg1 withEffectiveDelegate:(id)arg2 transition:(int)arg3;
- (void)_addItems:(id)arg1 withEffectiveDelegate:(id)arg2 transition:(int)arg3;
- (id)_allViews;
- (void)_animateOldBackButtonView:(id)arg1 toNewBackButtonView:(id)arg2 duration:(double)arg3 initialFrameForIncomingView:(CDUnknownBlockType)arg4 destinationFrameForOutgoingView:(CDUnknownBlockType)arg5 animationCleanup:(CDUnknownBlockType)arg6;
- (id)_appearanceStorage;
- (void)_applySPIAppearanceToButtons;
- (double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (double)_backIndicatorClippingMargin;
- (double)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg1 titleView:(id)arg2 withBackButtonWidth:(double)arg3;
- (long long)_backgroundBackdropStyle;
- (void)_backgroundFadeDidFinish:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_backgroundView;
- (id)_backgroundViewForPalette:(id)arg1;
- (BOOL)_backgroundViewSuppressesAdaptiveBackdrop;
- (long long)_barPosition;
- (void)_barSizeDidChangeAndSoDidHeight:(BOOL)arg1;
- (long long)_barStyle:(BOOL)arg1;
- (BOOL)_barStyleSuppressesAdaptiveBackdrop;
- (BOOL)_barTranslucenceSuppressesAdaptiveBackdrop;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (struct CGRect)_boundsForPrompt:(id)arg1 inRect:(struct CGRect)arg2 withFont:(id)arg3 barStyle:(long long)arg4;
- (BOOL)_canDrawContent;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint)arg1;
- (void)_cancelInProgressPushOrPop;
- (void)_cancelInteractiveTransition;
- (void)_cancelInteractiveTransition:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (id)_commonHitTest:(struct CGPoint)arg1 forView:(id)arg2;
- (void)_commonNavBarInit;
- (void)_configurePaletteConstraintsIfNecessary;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_crossFadeToBarBackgroundImageForItem:(id)arg1;
- (id)_currentBackButtonForNthItemFromTop:(unsigned long long)arg1;
- (long long)_currentBarStyle;
- (id)_currentLeftViews;
- (id)_currentRightViews;
- (BOOL)_customBackgroundImageSuppressesAdaptiveBackdrop;
- (BOOL)_customBackgroundImageSuppressesAdaptiveBackdropForPalette;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)_decrementAnimationCountIfNecessary;
- (long long)_defaultBarMetrics;
- (id)_defaultTitleFont;
- (id)_defaultTitleFontFittingHeight:(double)arg1 withScaleAdjustment:(double)arg2;
- (id)_defaultTitleFontWithScaleAdjustment:(double)arg1;
- (id)_defaultVisualStyleForOrientation:(long long)arg1;
- (BOOL)_deferShadowToSearchBar;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)_didVisibleItemsChangeWithNewItems:(id)arg1 oldItems:(id)arg2;
- (id)_effectiveBackIndicatorImage;
- (double)_effectiveBackIndicatorLeftMargin;
- (id)_effectiveBackIndicatorTransitionMaskImage;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
- (id)_effectiveDelegate;
- (void)_evaluateBackIndicatorForHilightedState:(BOOL)arg1 ofBarButtonItem:(id)arg2 inNavigationItem:(id)arg3;
- (void)_fadeAllViewsIn;
- (void)_fadeAllViewsOut;
- (void)_fadeViewOut:(id)arg1;
- (void)_fadeViewsIn:(id)arg1;
- (void)_fadeViewsOut:(id)arg1;
- (void)_finishInteractiveTransition:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forItemAtIndex:(unsigned long long)arg4;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forItemAtIndex:(unsigned long long)arg4 returnedIdealWidthOfTextContent:(double *)arg5 availableLayoutWidthForTextContent:(double *)arg6 idealBackButtonWidth:(double *)arg7;
- (void)_handleMouseDownAtPoint:(struct CGPoint)arg1;
- (void)_handleMouseUpAtPoint:(struct CGPoint)arg1;
- (void)_handlePopSwipe:(id)arg1;
- (BOOL)_hasBackButton;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;
- (BOOL)_hasInvisibleCustomBackgroundImage;
- (void)_hideButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)_hidesShadow;
- (void)_incrementAnimationCountIfNecessary;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (BOOL)_isAlwaysHidden;
- (BOOL)_isIncomingButtonSameAsOutgoingButtonOnLeft:(BOOL)arg1;
- (id)_itemStack;
- (long long)_itemStackCount;
- (void)_layoutBackgroundViewConsideringAdaptiveBackdropAndChangedHeight:(BOOL)arg1;
- (BOOL)_legacyIsTranslucent;
- (BOOL)_modernIsTranslucent;
- (void)_navBarButtonPressed:(id)arg1;
- (void)_navigationAnimationDidFinish:(BOOL)arg1 context:(id)arg2;
- (id)_nthNavigationItemFromTop:(long long)arg1;
- (void)_palette:(id)arg1 isAttaching:(BOOL)arg2 didComplete:(BOOL)arg3;
- (void)_popForTouchAtPoint:(struct CGPoint)arg1;
- (id)_popNavigationItemWithTransition:(int)arg1;
- (void)_popNestedNavigationItem;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_prepareForPopAnimationWithNewTopItem:(id)arg1;
- (void)_prepareForPushAnimationWithItems:(id)arg1;
- (void)_propagateEffectiveBarTintColorWithPreviousColor:(id)arg1;
- (void)_pushNavigationItem:(id)arg1 transition:(int)arg2;
- (void)_pushNestedNavigationItem:(id)arg1;
- (void)_reenableUserInteraction;
- (void)_reenableUserInteractionWhenReadyWithContext:(id)arg1;
- (void)_removeAccessoryView;
- (void)_removeItemsFromSuperview:(id)arg1;
- (void)_resetBackgroundImageAsNecessary;
- (void)_setActiveBarMetrics:(long long)arg1;
- (void)_setAutoAdjustTitle:(BOOL)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setBackIndicatorPressed:(BOOL)arg1 initialPress:(BOOL)arg2;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_setBackgroundView:(id)arg1;
- (void)_setBarPosition:(long long)arg1;
- (void)_setBarStyle:(long long)arg1;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 forState:(unsigned long long)arg3;
- (void)_setButtonTextShadowOffset:(struct CGSize)arg1;
- (void)_setDecodedItems:(id)arg1;
- (void)_setDefaultBarMetrics:(long long)arg1;
- (void)_setDeferShadowToSearchBar:(BOOL)arg1;
- (void)_setHidesShadow:(BOOL)arg1;
- (void)_setIsContainedInPopover:(BOOL)arg1;
- (void)_setItems:(id)arg1 transition:(int)arg2;
- (void)_setItems:(id)arg1 transition:(int)arg2 reset:(BOOL)arg3;
- (void)_setItems:(id)arg1 transition:(int)arg2 reset:(BOOL)arg3 resetOwningRelationship:(BOOL)arg4;
- (void)_setItemsUpToItem:(id)arg1 transition:(int)arg2;
- (void)_setLeftView:(id)arg1 rightView:(id)arg2;
- (void)_setLeftViews:(id)arg1 rightViews:(id)arg2;
- (void)_setPressedButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)arg1;
- (void)_setShadowAlpha:(double)arg1;
- (void)_setUpContentFocusContainerGuide;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (void)_setupTopNavItem:(id)arg1 oldTopNavItem:(id)arg2;
- (double)_shadowAlpha;
- (id)_shadowView;
- (BOOL)_shouldPopForTouchAtPoint:(struct CGPoint)arg1;
- (BOOL)_shouldShowBackButtonForNavigationItem:(id)arg1;
- (void)_showLeftRightButtonsAnimationDidFinish:(BOOL)arg1 context:(id)arg2;
- (void)_startBarStyleAnimation:(long long)arg1 withTintColor:(id)arg2;
- (void)_startInteractiveNavigationBarTransition;
- (void)_startPopAnimationFromItems:(id)arg1 fromBarStyle:(long long)arg2 toItems:(id)arg3 toBarStyle:(long long)arg4;
- (void)_startPushAnimationFromItems:(id)arg1 fromBarStyle:(long long)arg2;
- (long long)_statusBarStyle;
- (id)_statusBarTintColor;
- (BOOL)_subclassImplementsDrawBackgroundInRect;
- (BOOL)_subclassImplementsDrawRect;
- (unsigned long long)_subviewIndexAboveBackground;
- (BOOL)_suppressBackIndicator;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;
- (void)_tintViewAppearanceDidChange;
- (id)_titleTextColor;
- (int)_transitionForOldItems:(id)arg1 newItems:(id)arg2;
- (void)_updateBackIndicatorImage;
- (void)_updateBackIndicatorViewTintColor;
- (void)_updateBackgroundColor;
- (void)_updateBackgroundImage;
- (void)_updateInteractiveStatusBarTransitionPercent:(double)arg1 isFinished:(BOOL)arg2 didComplete:(BOOL)arg3 completionSpeed:(double)arg4 completionCurve:(long long)arg5;
- (void)_updateInteractiveTransition:(double)arg1;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(long long)arg2;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(long long)arg2 previousTintColor:(id)arg3;
- (void)_updateNavigationBarItemsForStyle:(long long)arg1;
- (void)_updateNavigationBarItemsForStyle:(long long)arg1 previousTintColor:(id)arg2;
- (void)_updateOpacity;
- (void)_updatePaletteBackgroundIfNecessary;
- (void)_updateTitleView;
- (id)_visualStyleForMetrics:(long long)arg1;
- (BOOL)_wantsAdaptiveBackdrop;
- (BOOL)_wantsAdaptiveBackdropForPalette;
- (BOOL)_wantsAdaptiveBackdropWhenNotHidden;
- (void)_willMoveToWindow:(id)arg1;
- (void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(double)arg2 rightBoundary:(double)arg3 leftMaskImage:(id)arg4 leftMaskIsChevron:(BOOL)arg5 rightMaskImage:(id)arg6;
- (void)addConstraint:(id)arg1;
- (unsigned int)animationDisabledCount;
- (struct CGRect)availableTitleArea;
- (id)backButtonViewAtPoint:(struct CGPoint)arg1;
- (id)backgroundImageForBarMetrics:(long long)arg1;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (id)buttonItemShadowColor;
- (id)buttonItemTextColor;
- (id)createButtonWithContents:(id)arg1 width:(double)arg2 barStyle:(long long)arg3 buttonStyle:(int)arg4 isRight:(BOOL)arg5;
- (id)currentBackButton;
- (id)currentLeftView;
- (id)currentRightView;
- (void)dealloc;
- (double)defaultBackButtonAlignmentHeight;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (void)didAddSubview:(id)arg1;
- (void)disableAnimation;
- (void)drawBackButtonBackgroundInRect:(struct CGRect)arg1 withStyle:(long long)arg2 pressed:(BOOL)arg3;
- (void)drawBackgroundInRect:(struct CGRect)arg1 withStyle:(long long)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (long long)effectiveInterfaceOrientation;
- (void)enableAnimation;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)forceFullHeightInLandscape;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideButtons;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (BOOL)isAnimationEnabled;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isLocked;
- (BOOL)isMinibar;
- (void)layoutSubviews;
- (id)navigationItemAtPoint:(struct CGPoint)arg1;
- (id)navigationItems;
- (void)popNavigationItem;
- (id)popNavigationItemAnimated:(BOOL)arg1;
- (id)preferredFocusedView;
- (id)prompt;
- (struct CGRect)promptBounds;
- (id)promptView;
- (void)pushNavigationItem:(id)arg1;
- (void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2;
- (void)removeConstraint:(id)arg1;
- (void)setAccessoryView:(id)arg1 animate:(BOOL)arg2;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBounds:(struct CGRect)arg1;
- (void)setButton:(int)arg1 enabled:(BOOL)arg2;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setForceFullHeightInLandscape:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)setLocked:(BOOL)arg1;
- (void)setNavigationItems:(id)arg1;
- (void)setNeedsLayout;
- (void)setPrompt:(id)arg1;
- (void)setRightMargin:(double)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setTitleAutoresizesToFit:(BOOL)arg1;
- (void)setTitleVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setTitleView:(id)arg1;
- (void)setTopItemAlpha:(double)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (void)showBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showButtonsWithLeft:(id)arg1 right:(id)arg2 leftBack:(BOOL)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2 leftBack:(BOOL)arg3;
- (void)showHideBackButtomAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (int)state;
- (void)tintColorDidChange;
- (BOOL)titleAutoresizesToFit;
- (double)titleVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (double)topItemAlpha;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updatePrompt;
- (void)willRemoveSubview:(id)arg1;

@end


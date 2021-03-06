//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBarContentView.h>

#import <UIKitCore/_UIBarButtonItemViewOwner-Protocol.h>
#import <UIKitCore/_UIButtonBarButtonChangeObserver-Protocol.h>
#import <UIKitCore/_UINavigationBarTitleViewDataSource-Protocol.h>
#import <UIKitCore/_UINavigationBarTransitionContextParticipant-Protocol.h>

@class NSArray, NSDictionary, NSLayoutConstraint, NSMutableArray, NSString, UIBarButtonItem, UIColor, UIImage, UILayoutGuide, UIView, _UIBarButtonItemData, _UIButtonBarButton, _UINavigationBarContentViewLayout, _UINavigationBarTransitionContext, _UIPointerInteractionAssistant;
@protocol _UINavigationBarContentViewDelegate;

__attribute__((visibility("hidden")))
@interface _UINavigationBarContentView : _UIBarContentView <_UIBarButtonItemViewOwner, _UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant, _UIButtonBarButtonChangeObserver>
{
    _UINavigationBarTransitionContext *_transitionContext;
    UIImage *_backIndicatorImage;
    _UIButtonBarButton *_staticNavBarButton;
    UILayoutGuide *_navItemContentLayoutGuide;
    NSLayoutConstraint *_staticNavBarButtonXPositionConstraint;
    NSArray *_staticNavBarButtonVerticalAlignmentConstraints;
    NSArray *_navItemContentLayoutGuideHorizEdgeConstraints;
    NSLayoutConstraint *_navItemContentLayoutGuideStaticButtonVisibilityAnimationConstraint;
    double _backButtonMaximumWidth;
    NSMutableArray *_currentAnimations;
    NSMutableArray *_currentCompletions;
    struct {
        unsigned int deferResolvedSizeChange:1;
        unsigned int outstandingDeferredResolvedSizeChange:1;
        unsigned int needsStaticNavBarButtonUpdate:1;
        unsigned int isHidingBackButton:1;
        unsigned int isShowingBackButton:1;
        unsigned int isHidingLeadingBar:1;
        unsigned int isAnimatingNavItemContentLayoutGuideForStaticNavBarButtonVisibility:1;
        unsigned int navItemContentLayoutGuideStaticButtonVisibilityAnimationConstraintNeedsInitialization:1;
        unsigned int shouldFadeStaticNavBarButton:1;
        unsigned int staticNavBarButtonLingers:1;
        unsigned int staticNavBarButtonIsActingAsFakeBackButton:1;
    } _navigationBarContentViewFlags;
    BOOL _backButtonHidden;
    BOOL _staticNavBarButtonTrailing;
    BOOL _leadingItemsSupplementBackItem;
    NSDictionary *_effectiveTitleAttributes;
    double _backButtonMargin;
    id<_UINavigationBarContentViewDelegate> _delegate;
    UIBarButtonItem *_backButtonItem;
    UIBarButtonItem *_staticNavBarButtonItem;
    NSArray *_leadingBarButtonItems;
    NSArray *_trailingBarButtonItems;
    NSString *_title;
    UIView *_titleView;
    double _inlineTitleViewAlpha;
    NSDictionary *_titleAttributes;
    UIColor *_textColor;
    double _overrideSize;
    _UIPointerInteractionAssistant *_assistant;
    long long _requestedContentSize;
    long long _barMetrics;
    _UINavigationBarContentViewLayout *_layout;
    struct UIOffset _titlePositionAdjustment;
}

@property (readonly, nonatomic) UIView *accessibilityBackButtonView;
@property (readonly, nonatomic) UIView *accessibilityTitleView;
@property (readonly, nonatomic, getter=isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange) BOOL animatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
@property (weak, nonatomic) _UIPointerInteractionAssistant *assistant; // @synthesize assistant=_assistant;
@property (copy, nonatomic) _UIBarButtonItemData *backButtonAppearance;
@property (nonatomic) BOOL backButtonHidden; // @synthesize backButtonHidden=_backButtonHidden;
@property (strong, nonatomic) UIBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
@property (nonatomic) double backButtonMargin; // @synthesize backButtonMargin=_backButtonMargin;
@property (nonatomic, setter=_setBackButtonMaximumWidth:) double backButtonMaximumWidth;
@property (nonatomic) long long barMetrics; // @synthesize barMetrics=_barMetrics;
@property (readonly, nonatomic) long long currentContentSize;
@property (readonly, nonatomic) double currentHeight;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UINavigationBarContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) _UIBarButtonItemData *doneItemAppearance;
@property (readonly, nonatomic) NSDictionary *effectiveTitleAttributes; // @synthesize effectiveTitleAttributes=_effectiveTitleAttributes;
@property (readonly) unsigned long long hash;
@property (nonatomic) double inlineTitleViewAlpha; // @synthesize inlineTitleViewAlpha=_inlineTitleViewAlpha;
@property (readonly, nonatomic) BOOL isNavItemContentLayoutGuideFlushLeading;
@property (readonly, nonatomic) BOOL isNavItemContentLayoutGuideFlushTrailing;
@property (readonly, nonatomic) _UINavigationBarContentViewLayout *layout; // @synthesize layout=_layout;
@property (copy, nonatomic) NSArray *leadingBarButtonItems; // @synthesize leadingBarButtonItems=_leadingBarButtonItems;
@property (nonatomic) BOOL leadingItemsSupplementBackItem; // @synthesize leadingItemsSupplementBackItem=_leadingItemsSupplementBackItem;
@property (readonly, nonatomic) UILayoutGuide *navItemContentLayoutGuide;
@property (readonly, nonatomic) double navItemContentLayoutGuideAnimationDistance;
@property (nonatomic) double overrideSize; // @synthesize overrideSize=_overrideSize;
@property (copy, nonatomic) _UIBarButtonItemData *plainItemAppearance;
@property (nonatomic) long long requestedContentSize; // @synthesize requestedContentSize=_requestedContentSize;
@property (nonatomic) BOOL shouldFadeStaticNavBarButton;
@property (strong, nonatomic) UIBarButtonItem *staticNavBarButtonItem; // @synthesize staticNavBarButtonItem=_staticNavBarButtonItem;
@property (nonatomic) BOOL staticNavBarButtonLingers;
@property (nonatomic, getter=isStaticNavBarButtonTrailing) BOOL staticNavBarButtonTrailing; // @synthesize staticNavBarButtonTrailing=_staticNavBarButtonTrailing;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property (nonatomic) struct UIOffset titlePositionAdjustment; // @synthesize titlePositionAdjustment=_titlePositionAdjustment;
@property (strong, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property (copy, nonatomic) NSArray *trailingBarButtonItems; // @synthesize trailingBarButtonItems=_trailingBarButtonItems;

- (void).cxx_destruct;
- (void)__backButtonAction:(id)arg1;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint)arg1;
- (id)_accessibility_barButtonItemAtPoint:(struct CGPoint)arg1;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint)arg1;
- (void)_addCoordinatedAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_appearanceChanged;
- (void)_applyTitleAttributesToLabel:(id)arg1 withString:(id)arg2;
- (BOOL)_backButtonLayoutGuideIncludesFullyHiddenConstant;
- (void)_clearAllAnimations;
- (void)_clearAssistants;
- (double)_contentLayoutGuideAnimationConstraintConstantForFullyHiddenButton;
- (double)_contentLayoutGuideAnimationConstraintConstantForFullyVisibleButton;
- (long long)_currentContentSize;
- (BOOL)_effectiveStaticNavBarButtonLingers;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (double)_intrinsicHeight;
- (BOOL)_isStaticNavBarButtonOnRight;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (id)_layoutForAugmentedTitleView:(id)arg1;
- (id)_newLayout;
- (struct CGRect)_overlayRectForView:(id)arg1 inTargetView:(id)arg2;
- (void)_runAllScheduledAnimations:(BOOL)arg1;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets)arg1;
- (void)_setAssistants;
- (void)_setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets)arg1;
- (void)_setupBackButtonAnimated:(BOOL)arg1;
- (void)_setupLeadingButtonBarAnimated:(BOOL)arg1;
- (void)_setupStaticNavBarButtonAnimated:(BOOL)arg1;
- (void)_setupTitleViewAnimated:(BOOL)arg1;
- (void)_setupTrailingButtonBarAnimated:(BOOL)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_updateLayoutMarginsForLayout:(id)arg1;
- (void)_updateNavItemContentLayoutGuideEdgeConstraints;
- (void)_updateStaticNavBarButtonVerticalAlignmentConstraints;
- (void)adoptLayout:(id)arg1;
- (void)adoptNewLayout;
- (void)backButtonTitleDidChange;
- (id)backIndicatorImage;
- (long long)barType;
- (void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (void)clearTransitionContext;
- (BOOL)compactMetrics;
- (double)defaultEdgeSpacing;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (void)ensureBackButtonTruncationOccursWithContext:(id)arg1;
- (void)finalizeStateFromTransition:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isRTL;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)prepareToRecordToState:(id)arg1;
- (void)recordFromStateForTransition:(id)arg1;
- (void)recordToStateForTransition:(id)arg1;
- (void)resolvedSizeDidChange;
- (void)setBackIndicatorImage:(id)arg1;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)setNeedsStaticNavBarButtonUpdate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2;
- (id)titleViewBackButtonMenu:(id)arg1;
- (void)titleViewChangedDisplayItemAlpha:(id)arg1;
- (void)titleViewChangedHeight:(id)arg1;
- (void)titleViewChangedLayout:(id)arg1;
- (void)titleViewChangedMaximumBackButtonWidth:(id)arg1;
- (void)titleViewChangedPreferredDisplaySize:(id)arg1;
- (void)titleViewChangedStandardDisplayItems:(id)arg1;
- (void)titleViewChangedUnderlayContent:(id)arg1;
- (double)titleViewContentBaseHeight:(id)arg1;
- (double)titleViewContentBaselineOffsetFromTop:(id)arg1;
- (double)titleViewLargeTitleHeight:(id)arg1;
- (CDStruct_c3b9c2ee)titleViewLargeTitleHeightRange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAugmentedTitleViewNavigationBarTraitsTo:(id)arg1 from:(id)arg2;
- (void)updateContent;
- (void)updateContentAnimated:(BOOL)arg1;
- (BOOL)updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)arg1;

@end


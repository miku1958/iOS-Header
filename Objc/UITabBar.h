//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIBarPositioning-Protocol.h>
#import <UIKitCore/_UIShadowedView-Protocol.h>
#import <UIKitCore/_UITabBarDelegateInternal-Protocol.h>

@class NSArray, NSString, UIColor, UIImage, UITabBarAppearance, UITabBarCustomizeView, UITabBarItem, _UITabBarAccessoryView, _UITabBarAppearanceStorage, _UITabBarVisualProvider;
@protocol UITabBarDelegate, _UITabBarDelegateInternal;

@interface UITabBar : UIView <_UIShadowedView, UIBarPositioning, _UITabBarDelegateInternal>
{
    UITabBarCustomizeView *_customizeView;
    id<_UITabBarDelegateInternal> _delegate;
    NSArray *_items;
    UITabBarItem *_selectedItem;
    NSArray *_customizationItems;
    long long _barOrientation;
    struct {
        unsigned int wasEnabled:1;
        unsigned int customized:1;
        unsigned int downButtonSentAction:1;
        unsigned int isLocked:1;
        unsigned int barStyle:3;
        unsigned int barTranslucence:3;
        unsigned int backgroundNeedsUpdate:1;
        unsigned int hiddenAwaitingFocus:1;
        unsigned int focusedItemHighlightShouldBeVisible:1;
        unsigned int hasVibrantLabels:1;
        unsigned int disableBlurTinting:1;
        unsigned int pendingFocusAction:1;
        unsigned int springLoaded:1;
        unsigned int delegateRespondsToInterfaceOrientationWindowSelector:1;
    } _tabBarFlags;
    _UITabBarAppearanceStorage *_appearanceStorage;
    _UITabBarVisualProvider *_visualProvider;
    _UITabBarAccessoryView *_leadingBarAccessoryView;
    _UITabBarAccessoryView *_trailingBarAccessoryView;
    BOOL _hidesShadow;
    BOOL _showsHighlightedState;
    BOOL _scrollsItems;
    long long _itemPositioning;
    double _itemDimension;
    double _itemSpacing;
    long long _barMetrics;
    long long _imageStyle;
    long long _tabBarSizing;
    UITabBarAppearance *_standardAppearance;
    unsigned long long _preferredFocusHeading;
    UIView *__expectedSuperviewFollowingAnimation;
    long long _displayStyle;
    NSArray *_backgroundEffects;
}

@property (strong, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView;
@property (copy, nonatomic, setter=_setBackdropGroupName:) NSString *_backdropGroupName;
@property (nonatomic, setter=_setBackgroundNeedsUpdate:) BOOL _backgroundNeedsUpdate;
@property (strong, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setBarMetrics:) long long _barMetrics; // @synthesize _barMetrics;
@property (nonatomic, setter=_setBarOrientation:) long long _barOrientation;
@property (nonatomic, setter=_setBlurEnabled:) BOOL _blurEnabled;
@property (nonatomic, setter=_setDisableBlurTinting:) BOOL _disableBlurTinting;
@property (readonly, nonatomic) long long _expectedInterfaceOrientation;
@property (strong, nonatomic) UIView *_expectedSuperviewFollowingAnimation; // @synthesize _expectedSuperviewFollowingAnimation=__expectedSuperviewFollowingAnimation;
@property (readonly, nonatomic) UIView *_externalViewForSafeAreaInsets;
@property (nonatomic, setter=_setHidesShadow:) BOOL _hidesShadow; // @synthesize _hidesShadow;
@property (nonatomic, setter=_setImageStyle:) long long _imageStyle; // @synthesize _imageStyle;
@property (nonatomic, setter=_setInterTabButtonSpacing:) double _interTabButtonSpacing;
@property (readonly, nonatomic) _UITabBarAccessoryView *_leadingBarAccessoryView;
@property (nonatomic, setter=_setMinimumWidthForHorizontalLayout:) double _minimumWidthForHorizontalLayout;
@property (nonatomic, setter=_setNextSelectionSlideDuration:) double _nextSelectionSlideDuration;
@property (nonatomic, setter=_setScrollsItems:) BOOL _scrollsItems; // @synthesize _scrollsItems;
@property (nonatomic, setter=_setShowsHighlightedState:) BOOL _showsHighlightedState; // @synthesize _showsHighlightedState;
@property (nonatomic, setter=_setTabBarSizing:) long long _tabBarSizing; // @synthesize _tabBarSizing;
@property (nonatomic, setter=_setTabButtonWidth:) double _tabButtonWidth;
@property (readonly, nonatomic) _UITabBarAccessoryView *_trailingBarAccessoryView;
@property (nonatomic, setter=_setVibrantLabels:) BOOL _vibrantLabels;
@property (strong, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *backdropViewLayerGroupName;
@property (copy, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
@property (strong, nonatomic) UIImage *backgroundImage;
@property (readonly, nonatomic) long long barPosition;
@property (nonatomic) long long barStyle;
@property (strong, nonatomic) UIColor *barTintColor;
@property (readonly, nonatomic, getter=isCustomizing) BOOL customizing;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=_deferViewUpdateToFocusUpdate, setter=_setDeferViewUpdateToFocusUpdate:) BOOL deferViewUpdateToFocusUpdate;
@property (weak, nonatomic) id<UITabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_displayStyle, setter=_setDisplayStyle:) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property (readonly, nonatomic, getter=_focusedIndex) long long focusedIndex;
@property (nonatomic, getter=_focusedItemHighlightShouldBeVisible, setter=_setFocusedItemHightlightShouldBeVisible:) BOOL focusedItemHighlightShouldBeVisible;
@property (readonly, nonatomic, getter=_focusedTabBarItem) UITabBarItem *focusedTabBarItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_isHiddenAwaitingFocus, setter=_setHiddenAwaitingFocus:) BOOL hiddenAwaitingFocus;
@property (nonatomic) long long itemPositioning; // @synthesize itemPositioning=_itemPositioning;
@property (nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property (nonatomic) double itemWidth; // @synthesize itemWidth=_itemDimension;
@property (copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) UIView *leadingAccessoryView;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic, getter=_pendingFocusAction, setter=_setPendingFocusAction:) BOOL pendingFocusAction;
@property (nonatomic, getter=_preferredFocusHeading, setter=_setPreferredFocusHeading:) unsigned long long preferredFocusHeading; // @synthesize preferredFocusHeading=_preferredFocusHeading;
@property (strong, nonatomic) UIColor *selectedImageTintColor;
@property (weak, nonatomic) UITabBarItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property (strong, nonatomic) UIImage *selectionIndicatorImage;
@property (strong, nonatomic) UIImage *shadowImage;
@property (copy, nonatomic) UITabBarAppearance *standardAppearance; // @synthesize standardAppearance=_standardAppearance;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *tintColor; // @dynamic tintColor;
@property (readonly, nonatomic) UIView *trailingAccessoryView;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (copy, nonatomic) UIColor *unselectedItemTintColor;
@property (readonly, nonatomic, getter=_useVibrantItems) BOOL useVibrantItems;

+ (void)_initializeForIdiom:(long long)arg1;
+ (id)_unselectedTabTintColorForView:(id)arg1;
+ (id)_visualProviderForTabBar:(id)arg1;
- (void).cxx_destruct;
- (void)_accessibilityButtonShapesEnabledDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (void)_adjustButtonSelection:(id)arg1;
- (id)_appearanceStorage;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 swapping:(BOOL)arg3;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_customizeDoneButtonAction:(id)arg1;
- (void)_customizeWithAvailableItems:(id)arg1;
- (double)_defaultAutolayoutSpacing;
- (id)_defaultUnselectedTintColorForDefaultTV;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_dismissCustomizeSheet:(BOOL)arg1;
- (id)_dividerImageForLeftButtonState:(unsigned long long)arg1 rightButtonState:(unsigned long long)arg2;
- (void)_doCommonTabBarInit;
- (void)_doCommonTabBarPreInit;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
- (long long)_effectiveBarOrientation;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChange;
- (id)_effectiveUnselectedLabelTintColor;
- (id)_effectiveUnselectedTabTintColorConsideringView:(id)arg1;
- (id)_effectiveUnselectedTintColor;
- (void)_ensureUnfocusedItemsAreNotSelected;
- (BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)arg1;
- (double)_heightForCustomizingItems;
- (void)_installDefaultAppearance;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (BOOL)_isEligibleForFocusInteraction;
- (BOOL)_isTranslucent;
- (void)_makeCurrentButtonFirstResponder;
- (id)_normalInheritedTintColor;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionAllItems;
- (double)_scaleFactorForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 maxWidth:(double)arg4;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setBackgroundImage:(id)arg1;
- (void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned long long)arg2 rightButtonState:(unsigned long long)arg3;
- (void)_setLabelFont:(id)arg1;
- (void)_setLabelShadowColor:(id)arg1;
- (void)_setLabelShadowOffset:(struct CGSize)arg1;
- (void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)_setSelectionIndicatorImage:(id)arg1;
- (void)_setShadowAlpha:(double)arg1;
- (double)_shadowAlpha;
- (id)_shadowView;
- (BOOL)_subclassImplementsDrawRect;
- (void)_tabBarFinishedAnimating;
- (id)_tabBarItemForButtonAtPoint:(struct CGPoint)arg1;
- (double)_totalDimensionForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 scaleFactor:(double)arg4;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_updateTabBarItemView:(id)arg1;
- (void)_useModernAppearance;
- (void)addConstraint:(id)arg1;
- (void)beginCustomizingItems:(id)arg1;
- (BOOL)canBecomeFocused;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)dismissCustomizeSheet:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)endCustomizingAnimated:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isSpringLoaded;
- (void)layoutSubviews;
- (id)preferredFocusedView;
- (void)removeConstraint:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSpringLoaded:(BOOL)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end


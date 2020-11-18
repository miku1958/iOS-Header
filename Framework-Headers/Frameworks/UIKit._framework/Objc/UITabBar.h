//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/_UIBackdropViewGraphicsQualityChangeDelegate-Protocol.h>
#import <UIKit/_UIShadowedView-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIColor, UIImage, UIMotionEffect, UIScrollView, UITabBarItem, _UIBackdropView, _UITabBarAppearanceStorage, _UITabBarBackgroundView;
@protocol UITabBarDelegate;

@interface UITabBar : UIView <_UIBackdropViewGraphicsQualityChangeDelegate, _UIShadowedView>
{
    UIView *_customizeView;
    _UITabBarBackgroundView *_backgroundView;
    _UIBackdropView *_adaptiveBackdrop;
    UIView *_shadowView;
    UIScrollView *_itemsScrollView;
    UIView *_focusedItemHighlightView;
    UIMotionEffect *_focusedItemHighlightMotionEffect;
    id<UITabBarDelegate> _delegate;
    NSArray *_items;
    UITabBarItem *_selectedItem;
    NSArray *_customizationItems;
    long long _barOrientation;
    struct {
        unsigned int alertShown:1;
        unsigned int wasEnabled:1;
        unsigned int customized:1;
        unsigned int downButtonSentAction:1;
        unsigned int isLocked:1;
        unsigned int backgroundIsPattern:1;
        unsigned int hasCustomBackgroundView:1;
        unsigned int barStyle:3;
        unsigned int barTranslucence:3;
        unsigned int backgroundNeedsUpdate:1;
        unsigned int hiddenAwaitingFocus:1;
        unsigned int focusedItemHighlightShouldBeVisible:1;
        unsigned int hasVibrantLabels:1;
        unsigned int blurDisabled:1;
        unsigned int pendingFocusAction:1;
    } _tabBarFlags;
    NSArray *_buttonItems;
    struct __CFArray *_hiddenItems;
    _UITabBarAppearanceStorage *_appearanceStorage;
    BOOL _dividerImagesChangeWithSelection;
    BOOL _dividerImagesAreInvalid;
    BOOL _hidesShadow;
    BOOL _showsHighlightedState;
    BOOL _scrollsItems;
    double _nextSelectionSlideDuration;
    NSMutableArray *_dividerImageViews;
    long long _itemPositioning;
    double _itemDimension;
    double _itemSpacing;
    long long _barMetrics;
    long long _imageStyle;
    long long _tabBarSizing;
    UIView *_accessoryView;
    NSString *_backdropViewLayerGroupName;
    unsigned long long _preferredFocusHeading;
}

@property (nonatomic, setter=_setAccessoryView:) UIView *_accessoryView; // @synthesize _accessoryView;
@property (nonatomic, setter=_setBackgroundNeedsUpdate:) BOOL _backgroundNeedsUpdate;
@property (strong, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setBarMetrics:) long long _barMetrics; // @synthesize _barMetrics;
@property (nonatomic, setter=_setBarOrientation:) long long _barOrientation;
@property (nonatomic, setter=_setBlurEnabled:) BOOL _blurEnabled;
@property (strong, nonatomic, setter=_setDividerImageViews:) NSMutableArray *_dividerImageViews; // @synthesize _dividerImageViews;
@property (nonatomic, setter=_setDividerImagesAreInvalid:) BOOL _dividerImagesAreInvalid; // @synthesize _dividerImagesAreInvalid;
@property (nonatomic, setter=_setDividerImagesChangeWithSelection:) BOOL _dividerImagesChangeWithSelection; // @synthesize _dividerImagesChangeWithSelection;
@property (nonatomic, setter=_setHidesShadow:) BOOL _hidesShadow; // @synthesize _hidesShadow;
@property (nonatomic, setter=_setImageStyle:) long long _imageStyle; // @synthesize _imageStyle;
@property (nonatomic, setter=_setInterTabButtonSpacing:) double _interTabButtonSpacing;
@property (nonatomic, setter=_setNextSelectionSlideDuration:) double _nextSelectionSlideDuration; // @synthesize _nextSelectionSlideDuration;
@property (nonatomic, setter=_setScrollsItems:) BOOL _scrollsItems; // @synthesize _scrollsItems;
@property (nonatomic, setter=_setShowsHighlightedState:) BOOL _showsHighlightedState; // @synthesize _showsHighlightedState;
@property (nonatomic, setter=_setTabBarSizing:) long long _tabBarSizing; // @synthesize _tabBarSizing;
@property (nonatomic, setter=_setTabButtonWidth:) double _tabButtonWidth;
@property (nonatomic, setter=_setVibrantLabels:) BOOL _vibrantLabels;
@property (strong, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *backdropViewLayerGroupName; // @synthesize backdropViewLayerGroupName=_backdropViewLayerGroupName;
@property (strong, nonatomic) UIImage *backgroundImage;
@property (nonatomic) long long barStyle;
@property (strong, nonatomic) UIColor *barTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<UITabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_focusedItemHighlightShouldBeVisible, setter=_setFocusedItemHightlightShouldBeVisible:) BOOL focusedItemHighlightShouldBeVisible;
@property (readonly, nonatomic, getter=_focusedTabBarItem) UITabBarItem *focusedTabBarItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_isHiddenAwaitingFocus, setter=_setHiddenAwaitingFocus:) BOOL hiddenAwaitingFocus;
@property (nonatomic) long long itemPositioning; // @synthesize itemPositioning=_itemPositioning;
@property (nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property (nonatomic) double itemWidth; // @synthesize itemWidth=_itemDimension;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic, getter=_pendingFocusAction, setter=_setPendingFocusAction:) BOOL pendingFocusAction;
@property (nonatomic, getter=_preferredFocusHeading, setter=_setPreferredFocusHeading:) unsigned long long preferredFocusHeading; // @synthesize preferredFocusHeading=_preferredFocusHeading;
@property (strong, nonatomic) UIColor *selectedImageTintColor;
@property (nonatomic) UITabBarItem *selectedItem;
@property (strong, nonatomic) UIImage *selectionIndicatorImage;
@property (strong, nonatomic) UIImage *shadowImage;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *tintColor; // @dynamic tintColor;
@property (nonatomic, getter=isTranslucent) BOOL translucent;

+ (void)_initializeForIdiom:(long long)arg1;
+ (id)_tabBarForView:(id)arg1;
+ (id)_unselectedTabTintColorForView:(id)arg1;
- (void)_accessibilityButtonShapesEnabledDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (void)_adjustButtonSelection:(id)arg1;
- (void)_alertDidHide;
- (void)_alertWillShow:(BOOL)arg1 duration:(float)arg2;
- (void)_animateSelectionChangeFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3;
- (id)_appearanceStorage;
- (double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (BOOL)_canDrawContent;
- (void)_cleanupAdaptiveBackdrop;
- (void)_configureItems:(id)arg1;
- (void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 dragging:(BOOL)arg3 swapping:(BOOL)arg4;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_customizeDoneButtonAction:(id)arg1;
- (void)_customizeWithAvailableItems:(id)arg1;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_dismissCustomizeSheet:(BOOL)arg1;
- (id)_dividerImageForLeftButtonState:(unsigned long long)arg1 rightButtonState:(unsigned long long)arg2;
- (void)_doCommonTabBarInit;
- (long long)_effectiveBarOrientation;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChange;
- (void)_finishCustomizeAnimation:(id)arg1;
- (void)_finishSetItems:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;
- (void)_hideItemsAnimated:(BOOL)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_invalidateDividerImages;
- (BOOL)_isEligibleForFocus;
- (BOOL)_isHidden:(id)arg1;
- (BOOL)_isTranslucent;
- (void)_makeCurrentButtonFirstResponder;
- (id)_parentViewForItems;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionTabBarButtons:(id)arg1 ignoringItem:(id)arg2;
- (double)_scaleFactorForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 maxWidth:(double)arg4;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setBackgroundImage:(id)arg1;
- (void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned long long)arg2 rightButtonState:(unsigned long long)arg3;
- (void)_setFocusedItemHightlightVisible:(BOOL)arg1;
- (void)_setLabelFont:(id)arg1;
- (void)_setLabelShadowColor:(id)arg1;
- (void)_setLabelShadowOffset:(struct CGSize)arg1;
- (void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)_setSelectionIndicatorImage:(id)arg1;
- (void)_setShadowAlpha:(double)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (double)_shadowAlpha;
- (id)_shadowView;
- (void)_showItemsAnimated:(BOOL)arg1;
- (BOOL)_subclassImplementsDrawRect;
- (struct CGRect)_tabAreaLayoutRegion;
- (void)_tabBarFinishedAnimating;
- (id)_topmostDividerImageView;
- (double)_totalDimensionForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 scaleFactor:(double)arg4;
- (void)_updateAppearanceCustomizationIfNecessaryForItem:(id)arg1;
- (void)_updateBackgroundImage;
- (void)_updateDividerImagesIfNecessary;
- (void)_updateFocusedItemHighlightFrame;
- (void)_updateHighlightMotionEffect;
- (void)_updateTintedImages:(id)arg1 selected:(BOOL)arg2;
- (BOOL)_wantsAdaptiveBackdrop;
- (void)addConstraint:(id)arg1;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2;
- (void)beginCustomizingItems:(id)arg1;
- (id)buttonItems;
- (BOOL)canBecomeFocused;
- (void)dealloc;
- (void)dismissCustomizeSheet:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)endCustomizingAnimated:(BOOL)arg1;
- (void)focusedViewDidChange;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isCustomizing;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (id)preferredFocusedItem;
- (void)removeConstraint:(id)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setBadgeAnimated:(BOOL)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setButtonItems:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

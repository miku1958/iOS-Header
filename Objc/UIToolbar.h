//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIBarPositioning-Protocol.h>
#import <UIKit/_UIBarPositioningInternal-Protocol.h>
#import <UIKit/_UIShadowedView-Protocol.h>

@class NSArray, NSString, UIColor, _UIBarBackground;
@protocol UIToolbarDelegate;

@interface UIToolbar : UIView <_UIShadowedView, _UIBarPositioningInternal, UIBarPositioning>
{
    id<UIToolbarDelegate> _delegate;
    NSArray *_items;
    UIColor *_barTintColor;
    struct {
        unsigned int barStyle:3;
        unsigned int barTranslucence:3;
        unsigned int isLocked:1;
        unsigned int linkedBeforeWhitetailAndInitializedFromCoder:1;
    } _toolbarFlags;
    double _extraEdgeInsets;
    id _appearanceStorage;
    _UIBarBackground *_barBackgroundView;
    UIView *_customBackgroundView;
    BOOL __wantsLetterpressContent;
    BOOL _centerTextButtons;
    UIView *_shadowView;
    long long _barPosition;
}

@property (strong, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *_backdropViewLayerGroupName;
@property (strong, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setHidesShadow:) BOOL _hidesShadow;
@property (nonatomic, getter=_isLocked, setter=_setLocked:) BOOL _locked;
@property (strong, nonatomic, setter=_setShadowView:) UIView *_shadowView; // @synthesize _shadowView;
@property (nonatomic, setter=_setWantsLetterpressContent:) BOOL _wantsLetterpressContent; // @synthesize _wantsLetterpressContent=__wantsLetterpressContent;
@property (readonly, nonatomic) long long barPosition; // @synthesize barPosition=_barPosition;
@property (nonatomic) long long barStyle;
@property (strong, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property (nonatomic) BOOL centerTextButtons; // @synthesize centerTextButtons=_centerTextButtons;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIToolbarDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly, nonatomic, getter=isMinibar) BOOL minibar;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *tintColor; // @dynamic tintColor;
@property (nonatomic, getter=isTranslucent) BOOL translucent;

+ (Class)defaultButtonClass;
+ (id)defaultButtonFont;
+ (double)defaultHeight;
+ (double)defaultHeightForBarSize:(int)arg1;
+ (double)defaultSelectionModeHeight;
+ (Class)defaultTextButtonClass;
- (void).cxx_destruct;
- (double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (long long)_barPosition;
- (void)_buttonBarFinishedAnimating;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(BOOL *)arg1;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (double)_edgeMarginForBorderedItem:(BOOL)arg1 isText:(BOOL)arg2;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
- (struct CGRect)_frameOfBarButtonItem:(id)arg1;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:(BOOL)arg1 wasMinibar:(BOOL)arg2;
- (void)_frameOrCenterChanged;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;
- (BOOL)_isAdaptiveToolbarDisabled;
- (BOOL)_isInNavigationBar;
- (BOOL)_isTopBar_legacy;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(BOOL)arg3;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(BOOL)arg3 actuallyRepositionButtons:(BOOL)arg4;
- (id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id *)arg2 withHitRects:(id *)arg3 buttonIndexes:(id *)arg4 textButtonIndexes:(id *)arg5;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setAdaptiveToolbarDisabled:(BOOL)arg1;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_setBarPosition:(long long)arg1;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setForceTopBarAppearance:(BOOL)arg1;
- (void)_setNeedsBackgroundViewUpdate;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (BOOL)_subclassImplementsDrawRect;
- (void)_updateBackgroundView;
- (void)_updateBarForStyle;
- (void)_updateItemsForNewFrame:(id)arg1;
- (void)_updateOpacity;
- (void)addConstraint:(id)arg1;
- (void)animateToolbarItemIndex:(unsigned long long)arg1 duration:(double)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (void)animateWithDuration:(float)arg1 forButton:(int)arg2;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (id)buttonItems;
- (id)createButtonWithDescription:(id)arg1;
- (int)currentButtonGroup;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)extraEdgeInsets;
- (void)getVisibleButtonTags:(int *)arg1 count:(unsigned int *)arg2 maxItems:(unsigned int)arg3;
- (id)initInView:(id)arg1 withFrame:(struct CGRect)arg2 withItemList:(id)arg3;
- (id)initInView:(id)arg1 withItemList:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (int)mode;
- (BOOL)onStateForButton:(int)arg1;
- (void)positionButtons:(id)arg1 tags:(int *)arg2 count:(int)arg3 group:(int)arg4;
- (void)registerButtonGroup:(int)arg1 withButtons:(int *)arg2 withCount:(int)arg3;
- (void)removeConstraint:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBadgeAnimated:(BOOL)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setButtonBarTrackingMode:(int)arg1;
- (void)setButtonItems:(id)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setExtraEdgeInsets:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)setMode:(int)arg1;
- (void)setOnStateForButton:(BOOL)arg1 forButton:(int)arg2;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (id)shadowImageForToolbarPosition:(long long)arg1;
- (void)showButtonGroup:(int)arg1 withDuration:(double)arg2;
- (void)showButtons:(int *)arg1 withCount:(int)arg2 withDuration:(double)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end


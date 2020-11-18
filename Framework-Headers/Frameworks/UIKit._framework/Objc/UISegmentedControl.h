//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>
#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>
#import <UIKitCore/_UIHostedFocusSystemDelegate-Protocol.h>

@class NSMutableArray, NSString, UIColor, UIImageView, UILongPressGestureRecognizer, UISegment, UIVibrancyEffect, UIView, _UIHostedFocusSystem;

@interface UISegmentedControl : UIControl <_UIBasicAnimationFactory, UIPopoverPresentationControllerDelegate, _UIHostedFocusSystemDelegate, CAAnimationDelegate, NSCoding>
{
    UIView *_selectionIndicatorView;
    UIImageView *_selectionImageView;
    NSMutableArray *_segments;
    long long _selectedSegment;
    long long _highlightedSegment;
    long long _selectionIndicatorSegment;
    long long _hoveredSegment;
    UIView *_removedSegment;
    UISegment *_focusedSegment;
    long long _barStyle;
    id _appearanceStorage;
    double _enabledAlpha;
    UIColor *_selectedSegmentTintColor;
    UIColor *_backgroundTintColor;
    UIVibrancyEffect *_selectedSegmentVibrancyEffect;
    double _innerSegmentSpacing;
    struct {
        unsigned int size:2;
        unsigned int delegateAlwaysNotifiesDelegateOfSegmentClicks:1;
        unsigned int momentaryClick:1;
        unsigned int tracking:1;
        unsigned int autosizeToFitSegments:1;
        unsigned int isSizingToFit:1;
        unsigned int autosizeText:1;
        unsigned int transparentBackground:1;
        unsigned int useProportionalWidthSegments:1;
        unsigned int translucentBackground:1;
        unsigned int appearanceNeedsUpdate:1;
        unsigned int selectionIndicatorDragged:1;
        unsigned int useInnerSegmentSpacing:1;
        unsigned int adjustsForContentSizeCategory:1;
        unsigned int useDynamicShadow:1;
        unsigned int animatingOutDynamicShadow:1;
        unsigned int animatingSeleciton:1;
        unsigned int animatingHoverOut:1;
    } _segmentedControlFlags;
    _UIHostedFocusSystem *_internalFocusSystem;
    UILongPressGestureRecognizer *_axLongPressGestureRecognizer;
}

@property (getter=_animatingOutDynamicShadow, setter=_setAnimatingOutDynamicShdaow:) BOOL animatingOutDynamicShadow;
@property (nonatomic) BOOL apportionsSegmentWidthsByContent;
@property (strong, nonatomic) UILongPressGestureRecognizer *axLongPressGestureRecognizer; // @synthesize axLongPressGestureRecognizer=_axLongPressGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_internalFocusSystem) _UIHostedFocusSystem *internalFocusSystem; // @synthesize internalFocusSystem=_internalFocusSystem;
@property (nonatomic, getter=isMomentary) BOOL momentary;
@property (readonly, nonatomic) unsigned long long numberOfSegments;
@property (strong, nonatomic) UIView *removedSegment; // @synthesize removedSegment=_removedSegment;
@property (nonatomic) long long segmentedControlStyle;
@property (nonatomic) long long selectedSegmentIndex;
@property (strong, nonatomic) UIColor *selectedSegmentTintColor;
@property (readonly) Class superclass;
@property (readonly, getter=_useDynamicShadow) BOOL useDynamicShadow;

+ (struct CGColor *)_backgroundPrimaryColorSelected:(BOOL)arg1 highlighted:(BOOL)arg2 traitCollection:(id)arg3 tintColor:(id)arg4;
+ (double)_cornerRadiusForTraitCollection:(id)arg1 size:(int)arg2;
+ (BOOL)_cursorInteractionEnabled;
+ (struct CGColor *)_dividerPrimaryColorBackground:(BOOL)arg1 traitCollection:(id)arg2 tintColor:(id)arg3;
+ (double)_dividerWidthForTraitCollection:(id)arg1 size:(int)arg2;
+ (id)_fontForTraitCollection:(id)arg1 size:(int)arg2 selected:(BOOL)arg3;
+ (struct CATransform3D)_hiddenSelectionTransform;
+ (struct CATransform3D)_highlightSelectionTransform;
+ (double)_lineWidthForTraitCollection:(id)arg1 size:(int)arg2;
+ (id)_modernBackgroundSelected:(BOOL)arg1 disableShadow:(BOOL)arg2 maximumSize:(struct CGSize)arg3 highlighted:(BOOL)arg4 traitCollection:(id)arg5 tintColor:(id)arg6 size:(int)arg7;
+ (id)_modernDividerImageBackground:(BOOL)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 size:(int)arg4;
+ (double)_sectionIndicatorInsetForTraitCollection:(id)arg1 size:(int)arg2;
+ (double)_sectionIndicatorOverflowForTraitCollection:(id)arg1 size:(int)arg2;
+ (BOOL)_selectFocusedSegmentAfterFocusUpdate;
+ (struct CGRect)_selectionFrameForBounds:(struct CGRect)arg1 size:(int)arg2 traitCollection:(id)arg3 accessibilityView:(BOOL)arg4;
+ (double)_selectionOffsetAdjustmentForSegment:(id)arg1;
+ (id)_selectionOpacityAnimationFromValue:(float)arg1 toValue:(float)arg2;
+ (id)_selectionPopAnimationForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
+ (id)_tvDefaultTextColorDisabledSelected;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorFocused;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorSelected;
+ (BOOL)_updateDynamicShadowView:(id)arg1 withAnimationDelegate:(id)arg2 useDynamicShadow:(BOOL)arg3 animated:(BOOL)arg4;
+ (BOOL)_useShadowForSelectedTintColor:(id)arg1 traitCollection:(id)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (double)defaultHeight;
+ (double)defaultHeightForStyle:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1 size:(int)arg2;
- (void).cxx_destruct;
- (void)__initWithFrameCommonOperations;
- (BOOL)_alwaysEmitValueChanged;
- (void)_animateContentChangeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_attributedTitleForSegmentAtIndex:(unsigned long long)arg1;
- (void)_axLongPressHandler:(id)arg1;
- (id)_backgroundTintColor;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)_badgeValueForSegmentAtIndex:(unsigned long long)arg1;
- (double)_barHeight;
- (CDStruct_c3b9c2ee)_baselineOffsetsAtSize:(struct CGSize)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_cancelDelayedFocusAction;
- (void)_clearSelectedSegment;
- (int)_closestSegmentIndexAtPoint:(struct CGPoint)arg1;
- (void)_commonSegmentedControlInit;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_createAndAddSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (id)_createSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (void)_diagnoseFocusabilityForReport:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)_disableSlidingControl;
- (void)_emitValueChanged;
- (id)_focusMapContainerForFocusSystem:(id)arg1;
- (BOOL)_focusSystem:(id)arg1 containsChildOfHostEnvironment:(id)arg2;
- (void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2;
- (BOOL)_hasEnabledSegment;
- (void)_highlightSegment:(long long)arg1;
- (double)_innerSegmentSpacing;
- (void)_insertSegment:(int)arg1 withInfo:(id)arg2 animated:(BOOL)arg3;
- (void)_insertSegmentWithAttributedTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)_insertSelectionViewForSegment:(id)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1;
- (void)_resetForAppearanceChange;
- (id)_segmentAtIndex:(int)arg1;
- (long long)_segmentIndexToHighlight:(BOOL *)arg1;
- (void)_selectFocusedSegment;
- (id)_selectedSegmentVibrancyEffect;
- (void)_sendDelayedFocusActionIfNecessary;
- (void)_sendValueChanged;
- (void)_setAction:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_setAlwaysEmitValueChanged:(BOOL)arg1;
- (void)_setAppearanceIsTiled:(BOOL)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3;
- (void)_setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_setAutosizeText:(BOOL)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundTintColor:(id)arg1;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBadgeValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_setControlSize:(int)arg1 andInvalidate:(BOOL)arg2;
- (void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)_setEnabled:(BOOL)arg1 forcePropagateToSegments:(BOOL)arg2;
- (void)_setHighlightedSegmentHighlighted:(BOOL)arg1;
- (void)_setHoverOnSegment:(long long)arg1 hovered:(BOOL)arg2;
- (void)_setInterSegmentSpacing:(double)arg1;
- (void)_setNeedsAppearanceUpdate;
- (void)_setNeedsBackgroundAndContentViewUpdate;
- (void)_setSegmentedControlAppearance:(CDStruct_41b0f204 *)arg1;
- (void)_setSelected:(BOOL)arg1 forSegmentAtIndex:(int)arg2 forceInfoDisplay:(BOOL)arg3;
- (void)_setSelected:(BOOL)arg1 highlighted:(BOOL)arg2 forSegmentAtIndex:(int)arg3 forceInfoDisplay:(BOOL)arg4;
- (void)_setSelectedSegmentIndex:(long long)arg1 notify:(BOOL)arg2;
- (void)_setSelectedSegmentIndex:(long long)arg1 notify:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_setSelectedSegmentVibrancyEffect:(id)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setUsesNewAnimations:(BOOL)arg1;
- (BOOL)_shouldConsumeEventWithPresses:(id)arg1;
- (BOOL)_shouldSelectSegmentAtIndex:(long long)arg1;
- (void)_tapSegmentAtPoint:(struct CGPoint)arg1 touchDown:(BOOL)arg2;
- (id)_tintColorArchivingKey;
- (id)_uiktest_labelsWithState:(unsigned long long)arg1;
- (id)_uiktest_segmentAtIndex:(unsigned long long)arg1;
- (void)_updateAxLongPressGestureRecognizer;
- (void)_updateDividerImageForSegmentAtIndex:(unsigned long long)arg1;
- (void)_updateDynamicShadow:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateSelectionIndicator;
- (void)_updateSelectionToSegment:(id)arg1 highlight:(BOOL)arg2 shouldAnimate:(BOOL)arg3 sameSegment:(BOOL)arg4;
- (BOOL)_usesNewAnimations;
- (id)_viewForLoweringBaselineLayoutAttribute:(int)arg1;
- (id)actionForSegmentAtIndex:(unsigned long long)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)addSegmentWithTitle:(id)arg1;
- (BOOL)adjustsForContentSizeCategory;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (long long)barStyle;
- (struct CGRect)bounds;
- (BOOL)canBecomeFocused;
- (struct CGSize)contentOffsetForSegment:(unsigned long long)arg1;
- (struct CGSize)contentOffsetForSegmentAtIndex:(unsigned long long)arg1;
- (struct UIOffset)contentPositionAdjustmentForSegmentType:(long long)arg1 barMetrics:(long long)arg2;
- (int)controlSize;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3;
- (void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)frame;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)hoverOffSegment:(long long)arg1;
- (void)hoverOnSegment:(long long)arg1;
- (id)imageForSegment:(unsigned long long)arg1;
- (id)imageForSegmentAtIndex:(unsigned long long)arg1;
- (id)infoViewForSegment:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 actions:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withStyle:(long long)arg2 withItems:(id)arg3;
- (id)initWithItems:(id)arg1;
- (void)insertSegment:(unsigned long long)arg1 withImage:(id)arg2 animated:(BOOL)arg3;
- (void)insertSegment:(unsigned long long)arg1 withTitle:(id)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithAction:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (BOOL)isEnabledForSegment:(unsigned long long)arg1;
- (BOOL)isEnabledForSegmentAtIndex:(unsigned long long)arg1;
- (BOOL)isSpringLoaded;
- (void)layoutSubviews;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)removeAllSegments;
- (void)removeSegment:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (long long)segmentControlStyle;
- (long long)segmentIndexForActionIdentifier:(id)arg1;
- (void)selectSegment:(int)arg1;
- (long long)selectedSegment;
- (void)setAction:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setAdjustsForContentSizeCategory:(BOOL)arg1;
- (void)setAlpha:(double)arg1;
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setBarStyle:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGSize)arg1 forSegment:(unsigned long long)arg2;
- (void)setContentOffset:(struct CGSize)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setContentPositionAdjustment:(struct UIOffset)arg1 forSegmentType:(long long)arg2 barMetrics:(long long)arg3;
- (void)setControlSize:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 forSegment:(unsigned long long)arg2;
- (void)setEnabled:(BOOL)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setImagePadding:(struct CGSize)arg1 forSegment:(unsigned long long)arg2;
- (void)setSegmentControlStyle:(long long)arg1;
- (void)setSelectedSegment:(long long)arg1;
- (void)setSpringLoaded:(BOOL)arg1;
- (void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTransparentBackground:(BOOL)arg1;
- (void)setWidth:(float)arg1 forSegment:(unsigned long long)arg2;
- (void)setWidth:(double)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (BOOL)shouldTrack;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (id)titleForSegment:(unsigned long long)arg1;
- (id)titleForSegmentAtIndex:(unsigned long long)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)transparentBackground;
- (void)updateForMiniBarState:(BOOL)arg1;
- (BOOL)useBlockyMagnificationInClassic;
- (id)viewForLastBaselineLayout;
- (float)widthForSegment:(unsigned long long)arg1;
- (double)widthForSegmentAtIndex:(unsigned long long)arg1;

@end

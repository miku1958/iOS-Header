//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/_UIBasicAnimationFactory-Protocol.h>

@class NSMutableArray, NSString, UIColor, UISegment, UIView;

@interface UISegmentedControl : UIControl <_UIBasicAnimationFactory, NSCoding>
{
    NSMutableArray *_segments;
    long long _selectedSegment;
    long long _highlightedSegment;
    UIView *_removedSegment;
    UISegment *_focusedSegment;
    long long _barStyle;
    id _appearanceStorage;
    UIView *_backgroundBarView;
    double _enabledAlpha;
    struct {
        unsigned int style:3;
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
    } _segmentedControlFlags;
    BOOL __hasTranslucentOptionsBackground;
}

@property (nonatomic, setter=_setTranslucentOptionsBackground:) BOOL _hasTranslucentOptionsBackground; // @synthesize _hasTranslucentOptionsBackground=__hasTranslucentOptionsBackground;
@property (nonatomic) BOOL apportionsSegmentWidthsByContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isMomentary) BOOL momentary;
@property (readonly, nonatomic) unsigned long long numberOfSegments;
@property (strong, nonatomic) UIView *removedSegment; // @synthesize removedSegment=_removedSegment;
@property (nonatomic) long long segmentedControlStyle;
@property (nonatomic) long long selectedSegmentIndex;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *tintColor; // @dynamic tintColor;

+ (double)_cornerRadiusForTraitCollection:(id)arg1;
+ (double)_dividerWidthForTraitCollection:(id)arg1;
+ (double)_lineWidthForTraitCollection:(id)arg1;
+ (id)_modernBackgroundSelected:(BOOL)arg1 highlighted:(BOOL)arg2 traitCollection:(id)arg3;
+ (id)_modernDividerImageForTraitCollection:(id)arg1;
+ (id)_tvDefaultTextColorDisabledSelected;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorFocused;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorSelected;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (double)defaultHeight;
+ (double)defaultHeightForStyle:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1 size:(int)arg2;
- (void).cxx_destruct;
- (void)_animateContentChangeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_attributedTitleForSegmentAtIndex:(unsigned long long)arg1;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)_badgeValueForSegmentAtIndex:(unsigned long long)arg1;
- (double)_barHeight;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_cancelDelayedFocusAction;
- (void)_clearSelectedSegment;
- (void)_commonSegmentedControlInit;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_createAndAddSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (id)_createSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_emitValueChanged;
- (id)_firstEnabledSegment;
- (BOOL)_hasEnabledSegment;
- (void)_insertSegment:(int)arg1 withInfo:(id)arg2 animated:(BOOL)arg3;
- (void)_insertSegmentWithAttributedTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (BOOL)_isInMiniBar;
- (BOOL)_isInTranslucentToolbar;
- (id)_optionsBackgroundImage;
- (BOOL)_optionsShadowHidden;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_removeSegmentAnimationFinished:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_resetForAppearanceChange;
- (void)_selectFocusedSegment;
- (void)_sendFocusAction;
- (void)_setAppearanceIsTiled:(BOOL)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3;
- (void)_setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_setAutosizeText:(BOOL)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBadgeValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_setControlSize:(int)arg1 andInvalidate:(BOOL)arg2;
- (void)_setCurrentBackgroundImage:(id)arg1;
- (void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)_setEnabled:(BOOL)arg1 forcePropagateToSegments:(BOOL)arg2;
- (void)_setHighlightedSegmentHighlighted:(BOOL)arg1;
- (void)_setNeedsAppearanceUpdate;
- (void)_setOptionsBackgroundImage:(id)arg1;
- (void)_setOptionsShadowHidden:(BOOL)arg1;
- (void)_setSegmentedControlAppearance:(CDStruct_41b0f204 *)arg1;
- (void)_setSelected:(BOOL)arg1 forSegmentAtIndex:(int)arg2 forceInfoDisplay:(BOOL)arg3;
- (void)_setSelectedSegmentIndex:(long long)arg1 notify:(BOOL)arg2;
- (void)_setSelectedSegmentIndex:(long long)arg1 notify:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setUsesNewAnimations:(BOOL)arg1;
- (BOOL)_shouldConsumeEventWithPresses:(id)arg1;
- (BOOL)_shouldSelectSegmentAtIndex:(long long)arg1;
- (void)_tapSegmentAtPoint:(struct CGPoint)arg1;
- (id)_tintColorArchivingKey;
- (id)_uiktest_labelsWithState:(unsigned long long)arg1;
- (id)_uiktest_segmentAtIndex:(unsigned long long)arg1;
- (void)_updateDividerImageForSegmentAtIndex:(unsigned long long)arg1;
- (void)_updateOptionsBackground;
- (void)_updateTitleTextAttributes;
- (BOOL)_usesNewAnimations;
- (void)addSegmentWithTitle:(id)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (long long)barStyle;
- (struct CGRect)bounds;
- (BOOL)canBecomeFocused;
- (struct CGSize)contentOffsetForSegment:(unsigned long long)arg1;
- (struct CGSize)contentOffsetForSegmentAtIndex:(unsigned long long)arg1;
- (struct UIOffset)contentPositionAdjustmentForSegmentType:(long long)arg1 barMetrics:(long long)arg2;
- (int)controlSize;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)frame;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)highlightSegment:(int)arg1;
- (id)imageForSegment:(unsigned long long)arg1;
- (id)imageForSegmentAtIndex:(unsigned long long)arg1;
- (id)infoViewForSegment:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withStyle:(long long)arg2 withItems:(id)arg3;
- (id)initWithItems:(id)arg1;
- (void)insertSegment:(unsigned long long)arg1 withImage:(id)arg2 animated:(BOOL)arg3;
- (void)insertSegment:(unsigned long long)arg1 withTitle:(id)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (BOOL)isEnabledForSegment:(unsigned long long)arg1;
- (BOOL)isEnabledForSegmentAtIndex:(unsigned long long)arg1;
- (void)layoutSubviews;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)preferredFocusedView;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)removeAllSegments;
- (void)removeSegment:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (long long)segmentControlStyle;
- (void)selectSegment:(int)arg1;
- (long long)selectedSegment;
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
- (BOOL)transparentBackground;
- (void)updateForMiniBarState:(BOOL)arg1;
- (BOOL)useBlockyMagnificationInClassic;
- (id)viewForLastBaselineLayout;
- (float)widthForSegment:(unsigned long long)arg1;
- (double)widthForSegmentAtIndex:(unsigned long long)arg1;
- (void)willUpdateFocusToView:(id)arg1;

@end


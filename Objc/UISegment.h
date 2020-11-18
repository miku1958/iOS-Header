//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIImageView.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSArray, NSString, UIView, _UIBadgeView, _UIFloatingContentView, _UISegmentedControlAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UISegment : UIImageView <CAAnimationDelegate>
{
    UIView *_info;
    UIImageView *_backgroundView;
    UIView *_selectionIndicatorView;
    UIImageView *_selectionImageView;
    _UISegmentedControlAppearanceStorage *_appearanceStorage;
    _UIFloatingContentView *_floatingContentView;
    double _width;
    struct CGSize _contentOffset;
    long long _barStyle;
    unsigned long long _rightSegmentState;
    NSString *_badgeValue;
    _UIBadgeView *_badgeView;
    id _objectValue;
    struct {
        unsigned int size:2;
        unsigned int selected:1;
        unsigned int highlighted:1;
        unsigned int showDivider:1;
        unsigned int hasImage:1;
        unsigned int position:3;
        unsigned int autosizeText:1;
        unsigned int isMomentary:1;
        unsigned int wasSelected:1;
        unsigned int needsBackgroundAndContentViewUpdate:1;
        unsigned int usesAXTextSize:1;
        unsigned int selectionIndicatorDragged:1;
        unsigned int hovered:1;
        unsigned int animatingSelectionIndicator:1;
    } _segmentFlags;
    NSArray *_infoConstraints;
    double _requestedScaleFactor;
}

@property (copy, nonatomic, setter=_setInfoConstraints:) NSArray *_infoConstraints; // @synthesize _infoConstraints;
@property (copy, nonatomic) NSString *badgeValue;
@property (readonly) UIView *badgeView;
@property int controlSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMomentary) BOOL momentary;
@property (nonatomic) unsigned int position;
@property (nonatomic) double requestedScaleFactor; // @synthesize requestedScaleFactor=_requestedScaleFactor;
@property (getter=isSelected) BOOL selected;
@property (readonly) Class superclass;

+ (id)_backgroundImageWithStorage:(id)arg1 mini:(BOOL)arg2 state:(unsigned long long)arg3 position:(unsigned int)arg4 drawMode:(unsigned int *)arg5 isCustom:(BOOL *)arg6 defaultBlock:(CDUnknownBlockType)arg7;
- (void).cxx_destruct;
- (id)_attributedTextForState:(unsigned long long)arg1 selected:(BOOL)arg2 forceSelectedAppearance:(BOOL)arg3;
- (double)_barHeight;
- (CDStruct_c3b9c2ee)_baselineOffsetsAtSize:(struct CGSize)arg1;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1;
- (id)_dividerImage;
- (id)_dividerImageIsCustom:(BOOL *)arg1;
- (id)_effectiveBackgroundTintColor;
- (id)_effectiveBackgroundView;
- (id)_effectiveContentView;
- (BOOL)_effectiveDisableShadow;
- (id)_effectiveSelectedSegmentTintColor;
- (BOOL)_effectiveUseDynamicShadow;
- (id)_effectiveVibrancyEffect;
- (id)_encodableSubviews;
- (void)_finishInitialSegmentSetup;
- (id)_floatingContentView;
- (void)_forceInfoDisplay;
- (BOOL)_hasSelectedColor;
- (struct CATransform3D)_highlightSelectionInfoTransform;
- (double)_idealWidth;
- (void)_insertSelectionView;
- (void)_invalidateInfoConstraints;
- (BOOL)_isContainedInHostedFocusSystem;
- (struct CGSize)_maximumTextSize;
- (struct UIEdgeInsets)_paddingInsets;
- (id)_parentSegmentedControl;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionInfo;
- (void)_positionInfoWithoutAnimation;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_removeSelectionIndicator;
- (id)_segmentLabel;
- (unsigned long long)_segmentState;
- (Class)_segmentedControlClass;
- (void)_setEnabledAppearance:(BOOL)arg1;
- (void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setSelectionIndicatorDragged:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_stateTextAttibutes:(id)arg1 segmentState:(unsigned long long)arg2;
- (id)_tintColorArchivingKey;
- (void)_updateBackgroundAndContentViews;
- (void)_updateBackgroundAndContentViewsIfNeeded;
- (void)_updateDynamicShadow:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateFloatingContentControlState:(unsigned long long)arg1 context:(id)arg2 withAnimationCoordinator:(id)arg3 animated:(BOOL)arg4;
- (void)_updateHighlight;
- (void)_updateSelectionIndicator;
- (void)_updateSelectionToTransform:(struct CATransform3D)arg1 infoTransform:(struct CATransform3D)arg2 hideSelection:(BOOL)arg3 shouldAnimate:(BOOL)arg4;
- (void)_updateTextColors;
- (void)animateAdd:(BOOL)arg1;
- (void)animateRemoveForWidth:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)canBecomeFocused;
- (struct CGRect)contentRect;
- (struct CGSize)contentSize;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)disabledTextColor;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1 size:(int)arg2 barStyle:(long long)arg3 tintColor:(id)arg4 appearanceStorage:(id)arg5 position:(unsigned int)arg6 autosizeText:(BOOL)arg7;
- (void)insertDividerView;
- (BOOL)isAnimatingSelectionIndicator;
- (BOOL)isHighlighted;
- (BOOL)isHovered;
- (BOOL)isSelectionIndicatorDragged;
- (id)label;
- (void)layoutSubviews;
- (id)objectValue;
- (void)removeFromSuperview;
- (void)setAnimatingSelectionIndicator:(BOOL)arg1;
- (void)setAutosizeText:(BOOL)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGSize)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHovered:(BOOL)arg1;
- (void)setNeedsBackgroundAndContentViewUpdate;
- (void)setObjectValue:(id)arg1;
- (void)setSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
- (void)setSelectionIndicatorDragged:(BOOL)arg1;
- (void)setShowDivider:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUsesAXTextSize:(BOOL)arg1;
- (void)setWasSelected:(BOOL)arg1;
- (BOOL)showDivider;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateDividerViewForChangedSegment:(id)arg1;
- (void)updateForAppearance:(id)arg1;
- (void)updateMasking;
- (BOOL)useBlockyMagnificationInClassic;
- (id)viewForLastBaselineLayout;

@end


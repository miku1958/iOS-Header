//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView, _UIButtonMaskAnimationView;

@interface UIButton : UIControl <UIGestureRecognizerDelegate, NSCoding>
{
    unsigned long long _externalFlatEdge;
    struct __CFDictionary *_contentLookup;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _imageEdgeInsets;
    UIImageView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_titleView;
    BOOL _initialized;
    unsigned long long _lastDrawingControlState;
    UITapGestureRecognizer *_selectGestureRecognizer;
    struct {
        unsigned int reversesTitleShadowWhenHighlighted:1;
        unsigned int adjustsImageWhenHighlighted:1;
        unsigned int adjustsImageWhenDisabled:1;
        unsigned int autosizeToFit:1;
        unsigned int disabledDimsImage:1;
        unsigned int showsTouchWhenHighlighted:1;
        unsigned int buttonType:8;
        unsigned int shouldHandleScrollerMouseEvent:1;
        unsigned int titleFrozen:1;
        unsigned int resendTraitToImageViews:2;
        unsigned int animateNextHighlightChange:1;
        unsigned int blurEnabled:1;
        unsigned int visualEffectViewEnabled:1;
        unsigned int suppressAccessibilityUnderline:1;
    } _buttonFlags;
    UIView *_effectiveContentView;
    _UIButtonMaskAnimationView *_maskAnimationView;
    UIView *_selectionView;
    UIFont *_lazyTitleViewFont;
    NSArray *_contentConstraints;
    struct UIEdgeInsets _internalTitlePaddingInsets;
}

@property (copy, nonatomic, setter=_setContentConstraints:) NSArray *_contentConstraints; // @synthesize _contentConstraints;
@property (readonly, strong, nonatomic) UIColor *_currentImageColor;
@property (setter=_setExternalFlatEdge:) unsigned long long _externalFlatEdge;
@property (nonatomic, setter=_setInternalTitlePaddingInsets:) struct UIEdgeInsets _internalTitlePaddingInsets; // @synthesize _internalTitlePaddingInsets;
@property (nonatomic, setter=_setWantsAccessibilityUnderline:) BOOL _wantsAccessibilityUnderline;
@property (nonatomic) BOOL adjustsImageWhenDisabled; // @dynamic adjustsImageWhenDisabled;
@property (nonatomic) BOOL adjustsImageWhenHighlighted; // @dynamic adjustsImageWhenHighlighted;
@property (readonly, nonatomic) long long buttonType;
@property (nonatomic) struct UIEdgeInsets contentEdgeInsets; // @dynamic contentEdgeInsets;
@property (readonly, nonatomic) NSAttributedString *currentAttributedTitle;
@property (readonly, nonatomic) UIImage *currentBackgroundImage;
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, nonatomic) NSString *currentTitle;
@property (readonly, nonatomic) UIColor *currentTitleColor;
@property (readonly, nonatomic) UIColor *currentTitleShadowColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets imageEdgeInsets; // @dynamic imageEdgeInsets;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL reversesTitleShadowWhenHighlighted; // @dynamic reversesTitleShadowWhenHighlighted;
@property (nonatomic) BOOL showsTouchWhenHighlighted;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *tintColor; // @dynamic tintColor;
@property (nonatomic) struct UIEdgeInsets titleEdgeInsets; // @dynamic titleEdgeInsets;
@property (readonly, nonatomic) UILabel *titleLabel;

+ (BOOL)_buttonTypeIsModernUI:(long long)arg1;
+ (id)_checkmarkImage;
+ (id)_defaultBackgroundImageForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultImageColorForState:(unsigned long long)arg1 button:(id)arg2;
+ (id)_defaultImageForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultNormalTitleColor;
+ (id)_defaultNormalTitleShadowColor;
+ (id)_defaultTitleColorForState:(unsigned long long)arg1 button:(id)arg2;
+ (id)_detailDisclosureImage;
+ (id)_exclamationMarkImage;
+ (id)_infoDarkImage;
+ (id)_infoLightImage;
+ (id)_minusImage;
+ (id)_plusImage;
+ (id)_questionMarkImage;
+ (id)_selectedIndicatorImage;
+ (void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3;
+ (void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 baseAlpha:(double)arg4;
+ (id)_xImage;
+ (id)buttonWithType:(long long)arg1;
- (void).cxx_destruct;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_applyAppropriateChargeForButtonType;
- (id)_archivableContent:(id *)arg1;
- (id)_attributedTitleForState:(unsigned long long)arg1;
- (double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (id)_backgroundForState:(unsigned long long)arg1 usesBackgroundForNormalState:(BOOL *)arg2;
- (id)_backgroundView;
- (void)_beginTitleAnimation;
- (id)_borderColorForState:(unsigned long long)arg1;
- (double)_borderWidthForState:(unsigned long long)arg1 bounds:(struct CGRect)arg2;
- (long long)_buttonType;
- (BOOL)_canHaveTitle;
- (struct CGRect)_clippedHighlightBounds;
- (struct UIEdgeInsets)_combinedContentPaddingInsets;
- (id)_contentForState:(unsigned long long)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_createPreparedImageViewWithFrame:(struct CGRect)arg1;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (double)_drawingStrokeForState:(unsigned long long)arg1;
- (double)_drawingStrokeForStyle:(long long)arg1;
- (long long)_drawingStyleForState:(unsigned long long)arg1;
- (long long)_drawingStyleForStroke:(double)arg1;
- (id)_effectiveContentView;
- (id)_encodableSubviews;
- (id)_externalBorderColorForState:(unsigned long long)arg1;
- (long long)_externalDrawingStyleForState:(unsigned long long)arg1;
- (id)_externalFocusedTitleColor;
- (id)_externalImageColorForState:(unsigned long long)arg1;
- (id)_externalTitleColorForState:(unsigned long long)arg1;
- (id)_externalUnfocusedBorderColor;
- (id)_fadeOutAnimationWithKeyPath:(id)arg1;
- (id)_font;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;
- (BOOL)_hasDrawingStyle;
- (BOOL)_hasHighlightColor;
- (BOOL)_hasImageForProperty:(id)arg1;
- (struct CGRect)_highlightBounds;
- (struct CGRect)_highlightBoundsForDrawingStyle;
- (double)_highlightCornerRadius;
- (struct CGRect)_highlightRectForImageRect:(struct CGRect)arg1;
- (struct CGRect)_highlightRectForTextRect:(struct CGRect)arg1;
- (id)_imageColorForState:(unsigned long long)arg1;
- (id)_imageForState:(unsigned long long)arg1 usesImageForNormalState:(BOOL *)arg2;
- (BOOL)_imageNeedsCompositingModeWhenSelected;
- (id)_imageView;
- (void)_installSelectGestureRecognizer;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_invalidateContentConstraints;
- (BOOL)_isEffectivelyDisabledExternalRoundedRectButton;
- (BOOL)_isExternalRoundedRectButton;
- (BOOL)_isExternalRoundedRectButtonWithPressednessState;
- (BOOL)_isModernButton;
- (BOOL)_isTitleFrozen;
- (void)_layoutBackgroundImageView;
- (id)_layoutDebuggingTitle;
- (void)_layoutImageView;
- (void)_layoutTitleView;
- (id)_letterpressStyleForState:(unsigned long long)arg1;
- (BOOL)_likelyToHaveTitle;
- (long long)_lineBreakMode;
- (id)_newImageViewWithFrame:(struct CGRect)arg1;
- (id)_newLabelWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)_outsetInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_pathImageEdgeInsets;
- (struct UIEdgeInsets)_pathTitleEdgeInsets;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_prepareMaskAnimationViewIfNecessary;
- (id)_scriptingInfo;
- (void)_selectGestureChanged:(id)arg1;
- (double)_selectedIndicatorAlpha;
- (struct CGRect)_selectedIndicatorBounds;
- (id)_selectedIndicatorViewWithImage:(id)arg1;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (void)_setAttributedTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setBackground:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setButtonType:(long long)arg1;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setContentHuggingPriorities:(struct CGSize)arg1;
- (void)_setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2;
- (void)_setDrawingStyle:(long long)arg1 forState:(unsigned long long)arg2;
- (void)_setFont:(id)arg1;
- (void)_setFrame:(struct CGRect)arg1 deferLayout:(BOOL)arg2;
- (void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setLetterpressStyle:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setLineBreakMode:(long long)arg1;
- (void)_setShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)arg1;
- (void)_setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitleFrozen:(BOOL)arg1;
- (void)_setTitleShadowOffset:(struct CGSize)arg1;
- (id)_setupBackgroundView;
- (void)_setupDrawingStyleForState:(unsigned long long)arg1;
- (void)_setupImageView;
- (void)_setupPressednessForState:(unsigned long long)arg1;
- (void)_setupTitleView;
- (void)_setupTitleViewRequestingLayout:(BOOL)arg1;
- (id)_shadowColorForState:(unsigned long long)arg1;
- (BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)arg1;
- (BOOL)_shouldUpdatePressedness;
- (void)_takeContentFromArchivableContent:(id)arg1;
- (BOOL)_textNeedsCompositingModeWhenSelected;
- (void)_titleAttributesChanged;
- (id)_titleColorForState:(unsigned long long)arg1;
- (id)_titleForState:(unsigned long long)arg1;
- (id)_titleOrImageViewForBaselineLayout;
- (struct CGRect)_titleRectForContentRect:(struct CGRect)arg1 calculatePositionForEmptyTitle:(BOOL)arg2;
- (struct CGSize)_titleShadowOffset;
- (id)_titleView;
- (id)_transitionAnimationWithKeyPath:(id)arg1;
- (void)_uninstallSelectGestureRecognizer;
- (void)_updateBackgroundImageView;
- (void)_updateEffectsForImageView:(id)arg1 background:(BOOL)arg2;
- (void)_updateImageView;
- (void)_updateMaskState;
- (void)_updateSelectionViewForState:(unsigned long long)arg1;
- (void)_updateTitleView;
- (void)_willMoveToWindow:(id)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)attributedTitleForState:(unsigned long long)arg1;
- (BOOL)autosizesToFit;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)canBecomeFocused;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (void)crossfadeToImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)image;
- (id)imageForState:(unsigned long long)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)interactionTintColorDidChange;
- (void)invalidateIntrinsicContentSize;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (long long)lineBreakMode;
- (struct CGPoint)pressFeedbackPosition;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setAutosizesToFit:(BOOL)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setDisabledDimsImage:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setLineBreakMode:(long long)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowPressFeedback:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleShadowOffset:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (id)title;
- (id)titleColorForState:(unsigned long long)arg1;
- (id)titleForState:(unsigned long long)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (id)titleShadowColorForState:(unsigned long long)arg1;
- (struct CGSize)titleShadowOffset;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)viewForLastBaselineLayout;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@class NSArray, NSLayoutConstraint, NSMutableDictionary, UIButton, UIColor, UIImageView, _UIBackButtonMaskView, _UIModernBarButton;
@protocol _UIButtonBarAppearanceDelegate;

__attribute__((visibility("hidden")))
@interface _UIButtonBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider
{
    NSMutableDictionary *_currentConstraints;
    NSMutableDictionary *_oldConstraints;
    UIButton *_backIndicatorButton;
    _UIBackButtonMaskView *_backButtonMask;
    _UIModernBarButton *_titleButton;
    _UIModernBarButton *_imageButton;
    UIImageView *_backgroundView;
    id<_UIButtonBarAppearanceDelegate> _appearanceDelegate;
    NSArray *_barButtonTitleAttributes;
    NSArray *_finalTitleAttributes;
    UIColor *_tintColor;
    NSMutableDictionary *_backgroundImages;
    NSArray *_titleContent;
    NSMutableDictionary *_titleLookup;
    NSLayoutConstraint *_backButtonTitleMaxWidthConstraint;
    CDUnknownBlockType _menuProvider;
    long long _systemItem;
    struct {
        unsigned int imageHasBaseline:1;
        unsigned int backButtonMaskEnabled:1;
        unsigned int style:3;
        unsigned int isSystemItem:1;
    } _flags;
}

- (void).cxx_destruct;
- (void)_addConstraintsForBackgroundViewWithOffset:(double)arg1 isBackButton:(BOOL)arg2 resizesImage:(BOOL)arg3;
- (void)_addHorizontalConstraintsForContentButton:(id)arg1 titleOffset:(double)arg2 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets)arg3;
- (void)_addHorizontalConstraintsForImageWithInsets:(struct UIEdgeInsets)arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3;
- (void)_addHorizontalConstraintsForTextWithOffset:(double)arg1 additionalPadding:(struct UIEdgeInsets)arg2;
- (void)_addVerticalConstraintsForBackIndicatorWithTitleOffset:(double)arg1 bottomOffset:(double)arg2 useBaselineAlignment:(BOOL)arg3;
- (void)_addVerticalConstraintsForImageWithInsets:(struct UIEdgeInsets)arg1;
- (void)_addVerticalConstraintsForTextWithOffset:(double)arg1;
- (id)_backIndicatorImageForCompact:(BOOL)arg1;
- (id)_backIndicatorMaskForCompact:(BOOL)arg1;
- (id)_backIndicatorMaskSymbolConfigurationForCompact:(BOOL)arg1;
- (id)_backIndicatorSymbolConfigurationForCompact:(BOOL)arg1;
- (void)_computeTextAttributes;
- (void)_computeTextAttributesForBarButtonItem:(id)arg1;
- (void)_configureBackButtonMask;
- (void)_configureBackButtonWithBackButtonLayoutInsets:(struct NSDirectionalEdgeInsets)arg1 useBaselineAlignment:(BOOL)arg2;
- (void)_configureImageBackButtonWithImageInsets:(struct UIEdgeInsets)arg1 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets)arg2 useBaselineAlignment:(BOOL)arg3;
- (void)_configureImageOrTitleCompact:(BOOL)arg1;
- (void)_configureImageWithInsets:(struct UIEdgeInsets)arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3;
- (void)_configureTextBackButtonWithTitlePositionAdjustment:(struct UIOffset)arg1 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets)arg2 useBaselineAlignment:(BOOL)arg3;
- (void)_configureTextWithOffset:(struct UIOffset)arg1 additionalPadding:(struct UIEdgeInsets)arg2;
- (double)_defaultBackIndicatorBaselineInsetCompact:(BOOL)arg1;
- (double)_defaultPaddingForInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_imageInsetsForBarButtonItem:(id)arg1 compact:(BOOL)arg2 isBackButton:(BOOL)arg3;
- (struct UIEdgeInsets)_insetsForCompact:(BOOL)arg1;
- (void)_prepareBackgroundViewFromBarButtonItem:(id)arg1 isBackButton:(BOOL)arg2;
- (void)_removeTitleButton;
- (void)_setTitle:(id)arg1;
- (void)_setupAlternateTitles;
- (id)_titleContentForTitle:(id)arg1;
- (void)_updateViewsForMaskingEnabled;
- (void)activateHeightMinimizer;
- (void)activateWidthMinimizer;
- (void)addActiveConstraint:(id)arg1 named:(id)arg2;
- (id)alignmentViewForStaticNavBarButtonLeading;
- (id)alignmentViewForStaticNavBarButtonTrailing;
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 compact:(BOOL)arg2;
- (struct UIOffset)backButtonBackgroundVerticalAdjustmentForCompact:(BOOL)arg1;
- (BOOL)backButtonMaskEnabled;
- (struct UIOffset)backButtonTitlePositionOffsetForCompact:(BOOL)arg1;
- (id)backIndicatorView;
- (id)backgroundImageForState:(unsigned long long)arg1 compact:(BOOL)arg2;
- (id)backgroundImageView;
- (struct UIOffset)backgroundVerticalAdjustmentForCompact:(BOOL)arg1;
- (id)buttonContextMenuInteractionConfiguration;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)arg1;
- (id)buttonContextMenuTargetedPreview;
- (void)buttonLayoutSubviews:(id)arg1 baseImplementation:(CDUnknownBlockType)arg2;
- (BOOL)buttonSelectionState:(id)arg1 forRequestedState:(BOOL)arg2;
- (id)buttonSpringLoadedInteractionEffect;
- (BOOL)canUpdateMenuInPlace;
- (void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (id)contentCursorInContainer:(id)arg1;
- (id)contentView;
- (id)imageButton;
- (id)matchingPointerShapeForView:(id)arg1 rect:(struct CGRect)arg2 inContainer:(id)arg3;
- (struct CGPoint)menuAnchorPoint;
- (id)pointerPreviewParameters;
- (id)pointerShapeInContainer:(id)arg1;
- (void)pointerWillEnter:(id)arg1;
- (void)pointerWillExit:(id)arg1;
- (void)resetButtonHasHighlighted;
- (void)setBackButtonMaskEnabled:(BOOL)arg1;
- (BOOL)shouldButtonAdjustToTraitCollection:(id)arg1;
- (BOOL)shouldLift;
- (BOOL)supportsBackButtons;
- (id)symbolConfigurationCompact:(BOOL)arg1;
- (id)textButton;
- (id)tintColor;
- (struct UIOffset)titlePositionOffsetForCompact:(BOOL)arg1;
- (void)traitCollectionChangedInSubtreeFrom:(id)arg1 to:(id)arg2;
- (void)updateActiveConstraints:(CDUnknownBlockType)arg1;
- (void)updateButton:(id)arg1 appearance:(id)arg2;
- (void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2;
- (void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2;
- (void)updateMenu;
- (BOOL)useLocalPointerInteraction;

@end


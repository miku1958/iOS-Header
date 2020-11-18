//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

@class UIColor, UILabel, _UIToolbarNavigationButton;

@interface UIToolbarButton : UIControl
{
    struct CGRect _hitRect;
    _UIToolbarNavigationButton *_info;
    UILabel *_label;
    long long _barStyle;
    long long _style;
    struct UIEdgeInsets _glowAdjust;
    BOOL _onState;
    BOOL _barHeight;
    BOOL _bezel;
    double _minimumWidth;
    double _maximumWidth;
    double _labelHeight;
    struct UIEdgeInsets _infoInsets;
    UIColor *_toolbarTintColor;
    id _appearanceStorage;
    BOOL _isInTopBar;
    Class _appearanceGuideClass;
    struct UIEdgeInsets __additionalSelectionInsets;
}

@property (nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets _additionalSelectionInsets; // @synthesize _additionalSelectionInsets=__additionalSelectionInsets;
@property (nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property (nonatomic, setter=_setCreatedByBarButtonItem:) BOOL _createdByBarButtonItem;
@property (strong, nonatomic, setter=_setTintColor:) UIColor *_tintColor;

+ (id)_defaultLabelColor;
+ (id)_defaultLabelFont;
+ (id)defaultButtonFont;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (BOOL)_accessibilityShouldActivateOnHUDLift;
- (void)_adjustPushButtonForMiniBar:(BOOL)arg1 isChangingBarHeight:(BOOL)arg2;
- (void)_adjustToolbarButtonInfo;
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)arg1;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (struct CGRect)_buttonBarHitRect;
- (BOOL)_canGetPadding;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(BOOL)arg3;
- (struct CGSize)_defaultTitleShadowOffsetForState:(unsigned long long)arg1;
- (id)_info;
- (BOOL)_infoIsButton;
- (BOOL)_isBordered;
- (BOOL)_isBorderedOtherThanAccessibility;
- (double)_paddingForLeft:(BOOL)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBarHeight:(float)arg1;
- (void)_setButtonBarHitRect:(struct CGRect)arg1;
- (void)_setInTopBar:(BOOL)arg1;
- (void)_setInfoExtremityWidth:(float)arg1 isMin:(BOOL)arg2;
- (void)_setInfoFlexibleWidth:(BOOL)arg1;
- (void)_setInfoWidth:(float)arg1;
- (void)_setLastHighlightSuccessful:(BOOL)arg1;
- (void)_setPressed:(BOOL)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setTouchHasHighlighted:(BOOL)arg1;
- (void)_setWantsBlendModeForAccessibilityBackgrounds:(BOOL)arg1;
- (void)_setWantsLetterpressContent;
- (BOOL)_shouldApplyPadding;
- (BOOL)_showsAccessibilityBackgroundWhenEnabled;
- (void)_sizeView:(id)arg1 toPossibleTitles:(id)arg2 pressedTitle:(id)arg3;
- (struct UIOffset)_titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_updateInfoTextColorsForState:(unsigned long long)arg1;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (BOOL)_useBarHeight;
- (BOOL)_wantsAccessibilityButtonShapes;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)dealloc;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithImage:(id)arg1 pressedImage:(id)arg2 label:(id)arg3 labelHeight:(double)arg4 withBarStyle:(long long)arg5 withStyle:(long long)arg6 withInsets:(struct UIEdgeInsets)arg7 possibleTitles:(id)arg8 possibleSystemItems:(id)arg9 withToolbarTintColor:(id)arg10 bezel:(BOOL)arg11 imageInsets:(struct UIEdgeInsets)arg12 glowInsets:(struct UIEdgeInsets)arg13 landscape:(BOOL)arg14;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBarStyle:(long long)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setToolbarTintColor:(id)arg1;
- (void)setUseSelectedImage:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end


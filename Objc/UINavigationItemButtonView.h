//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationItemView.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIColor, UIImageView, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UINavigationItemButtonView : UINavigationItemView <UIGestureRecognizerDelegate>
{
    long long _style;
    BOOL _pressed;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    BOOL _customBackgroundImageChangedToOrFromNil;
    UIImageView *_backgroundImageView;
    UIImageView *_imageView;
    BOOL _wantsBlendModeForAccessibilityBackgrounds;
    unsigned long long _abbreviatedTitleIndex;
    UIColor *_accessibilityBackgroundTintColor;
}

@property (nonatomic, setter=_setAbbreviatedTitleIndex:) unsigned long long _abbreviatedTitleIndex; // @synthesize _abbreviatedTitleIndex;
@property (strong, nonatomic, setter=_setAccessibilityBackgroundTintColor:) UIColor *_accessibilityBackgroundTintColor; // @synthesize _accessibilityBackgroundTintColor;
@property (strong, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) BOOL _wantsBlendModeForAccessibilityBackgrounds; // @synthesize _wantsBlendModeForAccessibilityBackgrounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (Class)_appearanceGuideClass;
- (id)_appearanceStorage;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (double)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (struct UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_backSelectGestureChanged:(id)arg1;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (BOOL)_canDrawContent;
- (id)_currentCustomBackgroundNeedsDarkening:(BOOL *)arg1;
- (id)_currentTextColorForBarStyle:(long long)arg1;
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1;
- (id)_defaultFont;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_drawBackground_legacy;
- (void)_focusedViewDidChange:(id)arg1;
- (void)_focusedViewWillChange:(id)arg1;
- (void)_installBackSelectGestureRecognizer;
- (void)_resetRenderingModesForAccessibilityBackgrounds;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (BOOL)_showsAccessibilityBackgroundWhenEnabled;
- (void)_styleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)_suppressesBackIndicatorView;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (double)_titleYAdjustmentCustomization;
- (void)_uninstallBackSelectGestureRecognizer;
- (BOOL)_useSilverLookForBarStyle:(long long)arg1;
- (BOOL)_wantsAccessibilityButtonShapes;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;
- (id)backgroundImageView;
- (BOOL)canBecomeFocused;
- (BOOL)customBackgroundImageChangedToOrFromNil;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)hasCustomBackgroundImage;
- (id)image;
- (struct CGSize)imageSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pressed;
- (void)setPressed:(BOOL)arg1;
- (void)setPressed:(BOOL)arg1 initialPress:(BOOL)arg2;
- (void)setStyle:(long long)arg1;
- (void)setStyle:(long long)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UILabel.h>

@class UIColor, UITabBarButton, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UITabBarButtonLabel : UILabel
{
    double _boundsWidth;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    BOOL _isSelected;
    BOOL _isHighlighted;
    BOOL _hasSeenIdiom;
    Class _appearanceGuideClass;
    UIColor *_unselectedTintColor;
    UITabBarButton *_tabBarButton;
}

@property (strong, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property (weak, nonatomic) UITabBarButton *tabBarButton; // @synthesize tabBarButton=_tabBarButton;
@property (strong, nonatomic) UIColor *unselectedTintColor; // @synthesize unselectedTintColor=_unselectedTintColor;

+ (double)_fontPointSizeForIdiom:(long long)arg1;
- (void).cxx_destruct;
- (void)_UIAppearance_setBadgeColor:(id)arg1;
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (id)_fontForIdiom:(long long)arg1;
- (id)_fontForIdiom:(long long)arg1 forTabBarDisplayStyle:(long long)arg2;
- (long long)_idiomForFontGivenIdiom:(long long)arg1;
- (void)_legacyApperance_updateTextColorsForState;
- (void)_setBadgeColor:(id)arg1;
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (BOOL)_shouldCeilSizeToViewScale;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_updateForFontChangeWithIdiom:(long long)arg1;
- (void)_updateLabelsVibrancy;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTabBarDisplayStyle:(long long)arg1;
- (void)resizeToFitWidth:(double)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTextColorsForState;

@end


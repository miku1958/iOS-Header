//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableDictionary, NSValue, UIColor, UIImage, UITabBarButtonLabel, UITabBarSelectionIndicatorView, UIView, UIVisualEffectView, _UIBadgeView;

__attribute__((visibility("hidden")))
@interface UITabBarButton : UIControl
{
    struct CGRect _hitRect;
    UIView *_info;
    UIVisualEffectView *_vibrancyEffectView;
    UITabBarButtonLabel *_label;
    _UIBadgeView *_badge;
    UITabBarSelectionIndicatorView *_selectedIndicator;
    BOOL _selected;
    BOOL _barHeight;
    BOOL _badgeAnimated;
    struct UIEdgeInsets _infoInsets;
    struct UIOffset _selectedInfoOffset;
    struct UIOffset _infoOffset;
    UIImage *_customSelectedIndicatorImage;
    NSValue *_labelOffsetValue;
    NSMutableDictionary *_buttonTintColorsForState;
    NSMutableDictionary *_contentTintColorsForState;
    BOOL _showsHighlightedState;
    BOOL _centerAllContents;
    Class _appearanceGuideClass;
    UIColor *_unselectedTintColor;
}

@property (nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property (nonatomic, setter=_setCenterAllContents:) BOOL _centerAllContents; // @synthesize _centerAllContents;
@property (nonatomic, getter=_isSelected, setter=_setSelected:) BOOL _selected;
@property (nonatomic, setter=_setShowsHighlightedState:) BOOL _showsHighlightedState; // @synthesize _showsHighlightedState;
@property (strong, nonatomic) NSValue *labelOffsetValue; // @synthesize labelOffsetValue=_labelOffsetValue;
@property (readonly, nonatomic) UITabBarButtonLabel *tabBarButtonLabel; // @synthesize tabBarButtonLabel=_label;
@property (strong, nonatomic, getter=_unselectedTintColor, setter=_setUnselectedTintColor:) UIColor *unselectedTintColor; // @synthesize unselectedTintColor=_unselectedTintColor;

+ (id)_defaultLabelColor;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_appleTV_layoutSubviews;
- (struct CGSize)_appleTV_sizeThatFits:(struct CGSize)arg1;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (id)_buttonTintColorForState:(unsigned long long)arg1;
- (id)_contentTintColorForState:(unsigned long long)arg1;
- (struct CGRect)_frameForSelectedIndicator;
- (void)_positionBadge;
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;
- (id)_scriptingInfo;
- (id)_selectedIndicatorView;
- (void)_sendFocusAction;
- (struct CGSize)_sensitivitySize;
- (void)_setBadgeAnimated:(BOOL)arg1;
- (void)_setBadgeValue:(id)arg1;
- (void)_setBarHeight:(float)arg1;
- (void)_setButtonTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setContentTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setCustomSelectedIndicatorImage:(id)arg1;
- (void)_setInfoOffset:(struct UIOffset)arg1;
- (void)_setLabelHidden:(BOOL)arg1;
- (void)_setSelectedInfoOffset:(struct UIOffset)arg1;
- (void)_setTabBarHitRect:(struct CGRect)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setUnselectedTintColor:(id)arg1 forceLabelToConform:(BOOL)arg2;
- (void)_setUpSelectedIndicatorViewIfNeeded;
- (void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2;
- (id)_swappableImageView;
- (id)_tabBar;
- (struct CGRect)_tabBarHitRect;
- (struct UIOffset)_titlePositionAdjustment;
- (void)_updateInfoFrame;
- (void)_updateSelectedIndicatorView;
- (void)_updateToMatchCurrentState;
- (BOOL)_useBarHeight;
- (BOOL)canBecomeFocused;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets)arg4;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

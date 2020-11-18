//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBarContentView.h>

@class NSLayoutConstraint, NSMapTable, _UIBarButtonItemData, _UIButtonBar;

__attribute__((visibility("hidden")))
@interface _UIToolbarContentView : _UIBarContentView
{
    _UIButtonBar *_buttonBar;
    NSLayoutConstraint *_buttonBarLeadingConstraint;
    NSLayoutConstraint *_buttonBarTrailingConstraint;
    NSMapTable *_absorptionTable;
    double _standardEdgeSpacing;
    BOOL _hitTestingExtensionsAreValid;
    BOOL _compactMetrics;
    long long _itemDistribution;
    _UIBarButtonItemData *_plainItemAppearance;
    _UIBarButtonItemData *_doneItemAppearance;
    struct NSDirectionalEdgeInsets _padding;
}

@property (nonatomic) BOOL compactMetrics; // @synthesize compactMetrics=_compactMetrics;
@property (copy, nonatomic) _UIBarButtonItemData *doneItemAppearance; // @synthesize doneItemAppearance=_doneItemAppearance;
@property (nonatomic) long long itemDistribution; // @synthesize itemDistribution=_itemDistribution;
@property (nonatomic) struct NSDirectionalEdgeInsets padding; // @synthesize padding=_padding;
@property (copy, nonatomic) _UIBarButtonItemData *plainItemAppearance; // @synthesize plainItemAppearance=_plainItemAppearance;

- (void).cxx_destruct;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_appearanceChanged;
- (id)_computeEdgeAbsorptionForItems:(id)arg1;
- (struct NSDirectionalEdgeInsets)_directionalSafeArea;
- (id)_newButtonBarWithItems:(id)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_updateButtonBarConstraintConstants;
- (void)_updateThreeUpFlagsForItems:(id)arg1;
- (double)absorptionForItem:(id)arg1;
- (double)defaultEdgeSpacing;
- (double)defaultTextPadding;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutMarginsDidChange;
- (void)reloadWithItems:(id)arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateContent;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3;

@end


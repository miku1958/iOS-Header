//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <CameraUI/CAMAccessibilityHUDItemProvider-Protocol.h>

@class CAGradientLayer, NSArray, NSDictionary, NSString, UIView;
@protocol CAMModeDialDataSource;

@interface CAMModeDial : UIControl <CAMAccessibilityHUDItemProvider>
{
    long long _layoutStyle;
    id<CAMModeDialDataSource> _dataSource;
    long long _selectedMode;
    UIView *__selectedItemBackgroundView;
    NSArray *__modes;
    NSDictionary *__items;
    UIView *__meshTransformView;
    CAGradientLayer *__gradientLayer;
    UIView *__itemsContainerView;
}

@property (readonly, nonatomic) CAGradientLayer *_gradientLayer; // @synthesize _gradientLayer=__gradientLayer;
@property (strong, nonatomic, setter=_setItems:) NSDictionary *_items; // @synthesize _items=__items;
@property (readonly, nonatomic) UIView *_itemsContainerView; // @synthesize _itemsContainerView=__itemsContainerView;
@property (readonly, nonatomic) UIView *_meshTransformView; // @synthesize _meshTransformView=__meshTransformView;
@property (strong, nonatomic, setter=_setModes:) NSArray *_modes; // @synthesize _modes=__modes;
@property (readonly, nonatomic) UIView *_selectedItemBackgroundView; // @synthesize _selectedItemBackgroundView=__selectedItemBackgroundView;
@property (nonatomic) id<CAMModeDialDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property (readonly) Class superclass;

+ (BOOL)wantsVerticalModeDialForLayoutStyle:(long long)arg1;
- (void).cxx_destruct;
- (double)_centeringNudgeForMode:(long long)arg1;
- (void)_commonCAMModeDialInitializationWithLayoutStyle:(long long)arg1;
- (void)_configureGradientForLayoutStyle:(long long)arg1;
- (void)_configureMeshTransformForLayoutStyle:(long long)arg1;
- (id)_fontForLayoutStyle:(long long)arg1 selected:(BOOL)arg2;
- (struct CGPoint)_horizontalContainerCenterForMode:(long long)arg1;
- (id)_horizontalMeshTransform;
- (struct CGSize)_interpolatedHorizontalMeshTransformSize;
- (void)_layoutHorizontalModeDial;
- (void)_layoutVerticalModeDial;
- (id)_meshTransformForLayoutStyle:(long long)arg1;
- (long long)_nearestCaptureModeForLocation:(struct CGPoint)arg1;
- (id)_selectedItem;
- (void)_updateContainerCenterFromSelectedModeAnimated:(BOOL)arg1;
- (void)_updateForLayoutStyle;
- (void)_updateItemsForLayoutStyle:(long long)arg1;
- (void)_updateSelectedItemBackgroundForLayoutStyle:(long long)arg1;
- (struct CGPoint)_verticalContainerCenterForMode:(long long)arg1;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateToContentSize:(id)arg1;

@end


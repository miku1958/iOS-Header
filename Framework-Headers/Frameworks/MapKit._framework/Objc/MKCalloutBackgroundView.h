//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPopoverBackgroundView.h>

@class NSMutableArray, UIColor, UIImageView, UIMotionEffect, UIView, _MKCalloutBackgroundMaskView;

@interface MKCalloutBackgroundView : UIPopoverBackgroundView
{
    double _arrowOffset;
    unsigned long long _arrowDirection;
    UIView *_containerView;
    UIView *_baseBorderView;
    _MKCalloutBackgroundMaskView *_mainMaskView;
    NSMutableArray *_vendedMaskViews;
    CDStruct_80aa614a _mapDisplayStyle;
    UIImageView *_currentArrowShadow;
    UIMotionEffect *_arrowMotionEffect;
    UIMotionEffect *_arrowShadowMotionEffect;
}

@property (readonly, nonatomic) UIColor *calloutBackgroundColor;
@property (nonatomic) CDStruct_80aa614a mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;

+ (double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1;
+ (double)arrowBase;
+ (double)arrowHeight;
+ (struct UIEdgeInsets)contentViewInsets;
+ (void)setBeingCreatedForSmallCalloutController:(id)arg1;
+ (BOOL)wantsDefaultContentAppearance;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_contentViewInsets;
- (void)_extendLeftRightArrow;
- (void)_hideArrow;
- (void)_layoutMaskView:(id)arg1 withArrowShadow:(BOOL)arg2;
- (void)_retractUpDownArrow;
- (void)_setupViews;
- (id)_shadowPath;
- (void)_showArrow;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)newMaskLayer;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowMotionEffect:(id)arg1;
- (void)setArrowOffset:(double)arg1;

@end

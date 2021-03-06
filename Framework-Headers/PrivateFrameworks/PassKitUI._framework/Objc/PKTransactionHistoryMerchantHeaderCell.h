//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class PKSplashImageHeaderView, UIColor, UIView, UIVisualEffect, UIVisualEffectView;

@interface PKTransactionHistoryMerchantHeaderCell : PKDashboardCollectionViewCell
{
    UIVisualEffectView *_overlayEffectView;
    UIView *_shadowView;
    PKSplashImageHeaderView *_headerView;
    UIVisualEffect *_overlayEffect;
    UIColor *_shadowColor;
    double _overlayAlpha;
}

@property (readonly, nonatomic) PKSplashImageHeaderView *headerView; // @synthesize headerView=_headerView;
@property (nonatomic) double overlayAlpha; // @synthesize overlayAlpha=_overlayAlpha;
@property (strong, nonatomic) UIVisualEffect *overlayEffect; // @synthesize overlayEffect=_overlayEffect;
@property (strong, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end


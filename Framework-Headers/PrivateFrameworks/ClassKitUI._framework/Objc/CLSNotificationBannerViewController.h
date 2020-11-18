//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CLSNotificationBannerView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface CLSNotificationBannerViewController : UIViewController
{
    BOOL _bannerVisible;
    BOOL _bannerAnimating;
    CLSNotificationBannerView *_bannerView;
    NSLayoutConstraint *_bannerYPositionConstraint;
    NSLayoutConstraint *_bannerWidthConstraint;
}

@property (nonatomic) BOOL bannerAnimating; // @synthesize bannerAnimating=_bannerAnimating;
@property (strong, nonatomic) CLSNotificationBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property (nonatomic) BOOL bannerVisible; // @synthesize bannerVisible=_bannerVisible;
@property (strong, nonatomic) NSLayoutConstraint *bannerWidthConstraint; // @synthesize bannerWidthConstraint=_bannerWidthConstraint;
@property (strong, nonatomic) NSLayoutConstraint *bannerYPositionConstraint; // @synthesize bannerYPositionConstraint=_bannerYPositionConstraint;

- (void).cxx_destruct;
- (struct CGPoint)_hiddenBannerPosition:(struct CGSize)arg1;
- (struct CGPoint)_visibleBannerCenterPosition:(struct CGSize)arg1;
- (void)addBannerView:(id)arg1;
- (void)addConstraintsForBannerView;
- (double)bannerWidthForViewSize:(struct CGSize)arg1;
- (void)handleWindowPan:(id)arg1;
- (void)hideBannerQuickly:(BOOL)arg1;
- (void)showCurrentBanner;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)windowPointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end


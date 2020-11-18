//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RadioUI/NSObject-Protocol.h>

@class ADBannerView, NSError;

@protocol ADBannerViewDelegate <NSObject>

@optional
- (void)bannerView:(ADBannerView *)arg1 didFailToReceiveAdWithError:(NSError *)arg2;
- (void)bannerViewActionDidFinish:(ADBannerView *)arg1;
- (BOOL)bannerViewActionShouldBegin:(ADBannerView *)arg1 willLeaveApplication:(BOOL)arg2;
- (void)bannerViewDidLoadAd:(ADBannerView *)arg1;
- (void)bannerViewWillLoadAd:(ADBannerView *)arg1;
@end


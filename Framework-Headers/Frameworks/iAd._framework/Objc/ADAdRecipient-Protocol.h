//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAd/NSObject-Protocol.h>

@class NSError, UIView, UIViewController;

@protocol ADAdRecipient <NSObject>

@property (readonly, nonatomic) UIView *adSpaceView;
@property (readonly, nonatomic) int internalAdType;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) UIViewController *presentingViewController;

- (void)bannerTappedAtPoint:(struct CGPoint)arg1;
- (void)pauseBannerMedia;
- (void)resumeBannerMedia;
- (void)serverBannerViewDidFailToReceiveAdWithError:(NSError *)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)serverStoryboardDidTransitionOut;
- (BOOL)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (void)storyboardViewControllerDidPresent;
@end


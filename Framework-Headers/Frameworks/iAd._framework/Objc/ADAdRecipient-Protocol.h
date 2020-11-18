//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAd/NSObject-Protocol.h>

@class ADMRAIDAction, NSError, NSString, UIView, UIViewController;

@protocol ADAdRecipient <NSObject>

@property (copy, nonatomic) NSString *adResponseId;
@property (readonly, nonatomic) UIView *adSpaceView;
@property (nonatomic) BOOL displayed;
@property (readonly, nonatomic) int internalAdType;
@property (nonatomic) long long lastErrorCode;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) int screenfuls;

- (void)pauseBannerMedia;
- (void)privacyButtonWasTapped;
- (void)resumeBannerMedia;
- (void)serverBannerViewDidFailToReceiveAdWithError:(NSError *)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)serverStoryboardDidTransitionOut;
- (BOOL)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (void)storyboardViewControllerDidPresent;

@optional
- (void)creativeControllerViewWasTappedAtPoint:(struct CGPoint)arg1 withMRAIDAction:(ADMRAIDAction *)arg2;
- (void)setViewSizeInPortrait:(struct CGSize)arg1 inLandscape:(struct CGSize)arg2;
@end


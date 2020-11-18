//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/ADBannerViewDelegate-Protocol.h>
#import <iAd/ADInterstitialAdDelegate-Protocol.h>
#import <iAd/_UIViewControllerContentViewEmbedding-Protocol.h>

@class ADBannerView, ADInterstitialAd, NSString, NSURL, UIViewController;

@interface _ADUIViewControllerAdController : NSObject <_UIViewControllerContentViewEmbedding, ADBannerViewDelegate, ADInterstitialAdDelegate>
{
    UIViewController *_contentViewController;
    BOOL _canDisplayBannerAds;
    BOOL _canOwnSharedBanner;
    BOOL _presentingFullScreenAd;
    NSURL *_bannerServerURL;
    NSString *_bannerAdSection;
    NSString *_bannerAuthUserName;
    NSURL *_interstitialServerURL;
    NSString *_interstitialAdSection;
    NSString *_interstitialAuthUserName;
    long long _interstitialPresentationPolicy;
    ADBannerView *_bannerView;
    ADInterstitialAd *_interstitialAd;
}

@property (copy, nonatomic) NSString *bannerAdSection; // @synthesize bannerAdSection=_bannerAdSection;
@property (copy, nonatomic) NSString *bannerAuthUserName; // @synthesize bannerAuthUserName=_bannerAuthUserName;
@property (copy, nonatomic) NSURL *bannerServerURL; // @synthesize bannerServerURL=_bannerServerURL;
@property (strong, nonatomic) ADBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property (nonatomic) BOOL canDisplayBannerAds; // @synthesize canDisplayBannerAds=_canDisplayBannerAds;
@property (nonatomic) BOOL canOwnSharedBanner; // @synthesize canOwnSharedBanner=_canOwnSharedBanner;
@property (readonly, weak, nonatomic) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisplayingBannerAd) BOOL displayingBannerAd;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) ADInterstitialAd *interstitialAd; // @synthesize interstitialAd=_interstitialAd;
@property (copy, nonatomic) NSString *interstitialAdSection; // @synthesize interstitialAdSection=_interstitialAdSection;
@property (copy, nonatomic) NSString *interstitialAuthUserName; // @synthesize interstitialAuthUserName=_interstitialAuthUserName;
@property (nonatomic) long long interstitialPresentationPolicy; // @synthesize interstitialPresentationPolicy=_interstitialPresentationPolicy;
@property (copy, nonatomic) NSURL *interstitialServerURL; // @synthesize interstitialServerURL=_interstitialServerURL;
@property (nonatomic, getter=isPresentingFullScreenAd) BOOL presentingFullScreenAd; // @synthesize presentingFullScreenAd=_presentingFullScreenAd;
@property (readonly) Class superclass;

+ (id)_sharedBannerView;
+ (void)prepareInterstitialAds;
- (void)_considerTakingBannerViewAnimated:(BOOL)arg1;
- (void)_hideBannerView;
- (void)_layoutContentAndBannerViewAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_presentInterstitialIfReady;
- (void)_setEmbeddedFrame:(struct CGRect)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdActionDidFinish:(id)arg1;
- (BOOL)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (void)interstitialAdDidUnload:(id)arg1;
- (BOOL)requestInterstitialAdPresentation;
- (void)viewController:(id)arg1 viewDidAppear:(BOOL)arg2;
- (void)viewController:(id)arg1 viewDidDisappear:(BOOL)arg2;
- (void)viewController:(id)arg1 viewWillAppear:(BOOL)arg2;
- (void)viewController:(id)arg1 viewWillDisappear:(BOOL)arg2;
- (void)viewControllerViewDidLayoutSubviews:(id)arg1;
- (void)viewControllerViewWillLayoutSubviews:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/ADBannerViewInternalDelegate-Protocol.h>
#import <iAd/ADInterstitialAdDelegate-Protocol.h>

@class ADBannerView, ADInterstitialAd, NSData, NSError, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface ADPolicyEngine : NSObject <ADBannerViewInternalDelegate, ADInterstitialAdDelegate>
{
    BOOL _enabled;
    BOOL _canAutoEnable;
    BOOL _sharedInterstitialAdIsInUse;
    BOOL _sharedMediaPlayerVideoAdClaimed;
    double _nextInterstitialPresentationTime;
    double _nextPrerollPlaybackTime;
    NSObject<OS_dispatch_queue> *_policyEngineQueue;
    ADInterstitialAd *_sharedInterstitialAd;
    NSString *_sharedInterstitialSection;
    NSURL *_sharedInterstitialServerURL;
    NSString *_sharedInterstitialAuthenticationUserName;
    ADBannerView *_sharedMediaPlayerVideoAd;
    NSError *_lastSharedMediaPlayerVideoAdError;
    NSData *_currentStationData;
    NSData *_currentSongData;
}

@property (nonatomic) BOOL canAutoEnable; // @synthesize canAutoEnable=_canAutoEnable;
@property (strong, nonatomic) NSData *currentSongData; // @synthesize currentSongData=_currentSongData;
@property (strong, nonatomic) NSData *currentStationData; // @synthesize currentStationData=_currentStationData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSError *lastSharedMediaPlayerVideoAdError; // @synthesize lastSharedMediaPlayerVideoAdError=_lastSharedMediaPlayerVideoAdError;
@property (nonatomic) double nextInterstitialPresentationTime; // @synthesize nextInterstitialPresentationTime=_nextInterstitialPresentationTime;
@property (nonatomic) double nextPrerollPlaybackTime; // @synthesize nextPrerollPlaybackTime=_nextPrerollPlaybackTime;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *policyEngineQueue; // @synthesize policyEngineQueue=_policyEngineQueue;
@property (strong, nonatomic) ADInterstitialAd *sharedInterstitialAd; // @synthesize sharedInterstitialAd=_sharedInterstitialAd;
@property (nonatomic) BOOL sharedInterstitialAdIsInUse; // @synthesize sharedInterstitialAdIsInUse=_sharedInterstitialAdIsInUse;
@property (copy, nonatomic) NSString *sharedInterstitialAuthenticationUserName; // @synthesize sharedInterstitialAuthenticationUserName=_sharedInterstitialAuthenticationUserName;
@property (copy, nonatomic) NSString *sharedInterstitialSection; // @synthesize sharedInterstitialSection=_sharedInterstitialSection;
@property (copy, nonatomic) NSURL *sharedInterstitialServerURL; // @synthesize sharedInterstitialServerURL=_sharedInterstitialServerURL;
@property (strong, nonatomic) ADBannerView *sharedMediaPlayerVideoAd; // @synthesize sharedMediaPlayerVideoAd=_sharedMediaPlayerVideoAd;
@property (nonatomic) BOOL sharedMediaPlayerVideoAdClaimed; // @synthesize sharedMediaPlayerVideoAdClaimed=_sharedMediaPlayerVideoAdClaimed;
@property (readonly) Class superclass;

+ (id)sharedEngine;
- (void)_enablePolicyEngineWithReason:(id)arg1;
- (void)adServingDaemonDidIdleDisablePolicyEngine;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerViewWillLoadAd:(id)arg1;
- (BOOL)canPresentSharedInterstitialAdWithResultMessage:(id *)arg1;
- (BOOL)claimSharedMediaPlayerVideoAdWithError:(id *)arg1;
- (void)dealloc;
- (void)disablePolicyEngine;
- (void)enablePolicyEngine;
- (void)finishedPresentingSharedInterstitialAd;
- (id)init;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)interstitialAdDidUnload:(id)arg1;
- (void)relinquishSharedMediaPlayerVideoAd;
- (void)sharedMediaPlayerVideoAdActionDidFinish;
- (void)sharedMediaPlayerVideoAdDidFailToReceiveAdWithError:(id)arg1;
- (void)sharedMediaPlayerVideoAdDidLoad;
- (void)sharedMediaPlayerVideoAdWillLoad;

@end


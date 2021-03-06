//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/ADAdRecipient-Protocol.h>

@class ADAdSpace, ADInterstitialAdPresentationViewController, ADInterstitialView, ADLayoutOptions, NSString, UIView, UIViewController;
@protocol ADInterstitialAdDelegate;

@interface ADInterstitialAd : NSObject <ADAdRecipient>
{
    BOOL _loaded;
    BOOL _displayed;
    BOOL _reUsed;
    BOOL _actionInProgress;
    BOOL _dimmingEnabled;
    BOOL _requestCalledbackError;
    BOOL _canLoadMoreThanOnce;
    BOOL _hasLoadedFirstAd;
    int _screenfuls;
    int _slotPosition;
    int _creativeType;
    long long _options;
    NSString *_adResponseId;
    long long _lastErrorCode;
    ADLayoutOptions *_layoutOptions;
    id<ADInterstitialAdDelegate> _delegate;
    ADInterstitialAdPresentationViewController *_presentationViewController;
    ADAdSpace *_adSpace;
    ADInterstitialView *_interstitialView;
    id<ADInterstitialAdDelegate> _internalDelegate;
    UIViewController *_internalPresentingViewController;
}

@property (nonatomic, getter=isActionInProgress) BOOL actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property (copy, nonatomic) NSString *adResponseId; // @synthesize adResponseId=_adResponseId;
@property (strong, nonatomic) ADAdSpace *adSpace; // @synthesize adSpace=_adSpace;
@property (readonly, nonatomic) UIView *adSpaceView;
@property (nonatomic) BOOL canLoadMoreThanOnce; // @synthesize canLoadMoreThanOnce=_canLoadMoreThanOnce;
@property (nonatomic) int creativeType; // @synthesize creativeType=_creativeType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ADInterstitialAdDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dimmingEnabled; // @synthesize dimmingEnabled=_dimmingEnabled;
@property (nonatomic) BOOL displayed; // @synthesize displayed=_displayed;
@property (nonatomic) BOOL hasLoadedFirstAd; // @synthesize hasLoadedFirstAd=_hasLoadedFirstAd;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int internalAdType;
@property (weak, nonatomic) id<ADInterstitialAdDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property (weak, nonatomic) UIViewController *internalPresentingViewController; // @synthesize internalPresentingViewController=_internalPresentingViewController;
@property (strong, nonatomic) ADInterstitialView *interstitialView; // @synthesize interstitialView=_interstitialView;
@property (nonatomic) long long lastErrorCode; // @synthesize lastErrorCode=_lastErrorCode;
@property (strong, nonatomic) ADLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property (nonatomic, getter=isLoaded) BOOL loaded; // @synthesize loaded=_loaded;
@property (readonly, nonatomic) long long options; // @synthesize options=_options;
@property (strong, nonatomic) ADInterstitialAdPresentationViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) BOOL reUsed; // @synthesize reUsed=_reUsed;
@property (nonatomic) BOOL requestCalledbackError; // @synthesize requestCalledbackError=_requestCalledbackError;
@property (readonly, nonatomic) BOOL requiresMRAID;
@property (nonatomic) int screenfuls; // @synthesize screenfuls=_screenfuls;
@property (nonatomic) int slotPosition; // @synthesize slotPosition=_slotPosition;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_considerClosingAdSpace;
- (void)_dismissModalInterstitial;
- (id)_initWithInternalAdType:(int)arg1 layoutOptions:(id)arg2 options:(long long)arg3;
- (void)_notifyDelegateOfBannerLoad;
- (void)_presentFromViewController:(id)arg1;
- (void)adlibManagedVideoAdDidCompletePlay:(int)arg1;
- (void)adlibManagedVideoAdDidImpress;
- (void)adlibManagedVideoAdDidPausePlay;
- (void)adlibManagedVideoAdDidResumePlay;
- (void)adlibManagedVideoAdDidTapForMoreInfo;
- (void)adlibManagedVideoAdDidTapVideo;
- (void)adlibManagedVideoAdDidToggleToMute:(BOOL)arg1;
- (void)bannerTappedAtPoint:(struct CGPoint)arg1;
- (void)bannerTappedAtPoint:(struct CGPoint)arg1 withMRAIDAction:(id)arg2;
- (void)cancelAction;
- (int)clickAction;
- (id)context;
- (void)creativeControllerViewWasTappedAtPoint:(struct CGPoint)arg1 withMRAIDAction:(id)arg2;
- (id)currentAdIdentifier;
- (void)dealloc;
- (BOOL)hasImpressed;
- (id)identifier;
- (id)init;
- (id)initWithCreativeType:(int)arg1 options:(long long)arg2;
- (void)missedOpportunityToFill;
- (void)pauseBannerMedia;
- (void)presentFromViewController:(id)arg1;
- (BOOL)presentInView:(id)arg1;
- (void)privacyButtonWasTapped;
- (void)resumeBannerMedia;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)serverStoryboardDidTransitionOut;
- (id)serverURL;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setServerURL:(id)arg1;
- (BOOL)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (void)storyboardViewControllerDidPresent;

@end


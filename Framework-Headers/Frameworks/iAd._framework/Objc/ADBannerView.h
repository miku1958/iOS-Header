//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <iAd/ADAdRecipient-Protocol.h>
#import <iAd/ADDimmerViewDelegate-Protocol.h>

@class ADAdSpace, ADDimmerView, ADPrivacyButton, NSDate, NSString, NSTimer, NSURL, UILabel, UIViewController;
@protocol ADBannerViewDelegate, ADBannerViewInternalDelegate;

@interface ADBannerView : UIView <ADAdRecipient, ADDimmerViewDelegate>
{
    id<ADBannerViewDelegate> _weakDelegate;
    id<ADBannerViewInternalDelegate> _weakInternalDelegate;
    BOOL _displayed;
    BOOL _reUsed;
    BOOL _bannerLoaded;
    BOOL _bannerViewActionInProgress;
    BOOL _createdForIBInternal;
    BOOL _dimmed;
    BOOL _determiningConstraintBasedWidth;
    BOOL _inSecondConstraintsPass;
    BOOL _scrolling;
    BOOL _imageUpdateEnabled;
    BOOL _debugHighlightEnabled;
    BOOL _internalAdTypeCanChange;
    BOOL _requestCalledbackError;
    int _screenfuls;
    int _slotPosition;
    int _internalAdType;
    NSString *_adResponseId;
    long long _lastErrorCode;
    long long _options;
    long long _adType;
    NSString *_advertisingSection;
    UIView *_highlightClippedView;
    UIView *_highlightHittableView;
    UILabel *_idLbl;
    NSTimer *_highlightUpdateTimer;
    ADPrivacyButton *_privacyButton;
    NSString *_authenticationUserName;
    NSURL *_serverURL;
    ADAdSpace *_adSpace;
    ADDimmerView *_dimmerView;
    double _constraintBasedWidth;
    NSString *_originID;
    NSDate *_adDisplayDate;
    NSDate *_loadStartTime;
    NSDate *_webLoadStartTime;
    NSDate *_loadEndTime;
    double _adDataLoadTime;
    double _bannerLoadTime;
    struct CGSize _portraitSize;
    struct CGSize _landscapeSize;
}

@property (nonatomic) double adDataLoadTime; // @synthesize adDataLoadTime=_adDataLoadTime;
@property (copy, nonatomic) NSDate *adDisplayDate; // @synthesize adDisplayDate=_adDisplayDate;
@property (copy, nonatomic) NSString *adResponseId; // @synthesize adResponseId=_adResponseId;
@property (strong, nonatomic) ADAdSpace *adSpace; // @synthesize adSpace=_adSpace;
@property (readonly, nonatomic) UIView *adSpaceView;
@property (readonly, nonatomic) long long adType; // @synthesize adType=_adType;
@property (copy, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
@property (copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property (nonatomic) double bannerLoadTime; // @synthesize bannerLoadTime=_bannerLoadTime;
@property (readonly, nonatomic, getter=isBannerLoaded) BOOL bannerLoaded; // @synthesize bannerLoaded=_bannerLoaded;
@property (nonatomic, getter=isBannerViewActionInProgress) BOOL bannerViewActionInProgress; // @synthesize bannerViewActionInProgress=_bannerViewActionInProgress;
@property (nonatomic) double constraintBasedWidth; // @synthesize constraintBasedWidth=_constraintBasedWidth;
@property (readonly, nonatomic) BOOL createdForIBInternal; // @synthesize createdForIBInternal=_createdForIBInternal;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugHighlightEnabled; // @synthesize debugHighlightEnabled=_debugHighlightEnabled;
@property (weak, nonatomic) id<ADBannerViewDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL determiningConstraintBasedWidth; // @synthesize determiningConstraintBasedWidth=_determiningConstraintBasedWidth;
@property (nonatomic) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property (strong, nonatomic) ADDimmerView *dimmerView; // @synthesize dimmerView=_dimmerView;
@property (nonatomic) BOOL displayed; // @synthesize displayed=_displayed;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *highlightClippedView; // @synthesize highlightClippedView=_highlightClippedView;
@property (strong, nonatomic) UIView *highlightHittableView; // @synthesize highlightHittableView=_highlightHittableView;
@property (strong, nonatomic) NSTimer *highlightUpdateTimer; // @synthesize highlightUpdateTimer=_highlightUpdateTimer;
@property (strong, nonatomic) UILabel *idLbl; // @synthesize idLbl=_idLbl;
@property (nonatomic) BOOL imageUpdateEnabled; // @synthesize imageUpdateEnabled=_imageUpdateEnabled;
@property (nonatomic) BOOL inSecondConstraintsPass; // @synthesize inSecondConstraintsPass=_inSecondConstraintsPass;
@property (readonly, nonatomic) int internalAdType; // @synthesize internalAdType=_internalAdType;
@property (nonatomic) BOOL internalAdTypeCanChange; // @synthesize internalAdTypeCanChange=_internalAdTypeCanChange;
@property (nonatomic) struct CGSize landscapeSize; // @synthesize landscapeSize=_landscapeSize;
@property (nonatomic) long long lastErrorCode; // @synthesize lastErrorCode=_lastErrorCode;
@property (copy, nonatomic) NSDate *loadEndTime; // @synthesize loadEndTime=_loadEndTime;
@property (copy, nonatomic) NSDate *loadStartTime; // @synthesize loadStartTime=_loadStartTime;
@property (readonly, nonatomic) long long options; // @synthesize options=_options;
@property (copy, nonatomic) NSString *originID; // @synthesize originID=_originID;
@property (nonatomic) struct CGSize portraitSize; // @synthesize portraitSize=_portraitSize;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (strong, nonatomic) ADPrivacyButton *privacyButton; // @synthesize privacyButton=_privacyButton;
@property (nonatomic) BOOL reUsed; // @synthesize reUsed=_reUsed;
@property (nonatomic) BOOL requestCalledbackError; // @synthesize requestCalledbackError=_requestCalledbackError;
@property (nonatomic) int screenfuls; // @synthesize screenfuls=_screenfuls;
@property (nonatomic) BOOL scrolling; // @synthesize scrolling=_scrolling;
@property (copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property (nonatomic) int slotPosition; // @synthesize slotPosition=_slotPosition;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *webLoadStartTime; // @synthesize webLoadStartTime=_webLoadStartTime;

+ (struct CGRect)_adWindowBounds;
+ (struct CGRect)_frameThatFits:(struct CGRect)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(BOOL)arg3;
+ (struct CGSize)_landscapeBannerSize;
+ (struct CGSize)_portraitBannerSize;
+ (struct CGSize)_sizeThatFitsSize:(struct CGSize)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(BOOL)arg3;
+ (BOOL)requiresConstraintBasedLayout;
+ (void)setServerURL:(id)arg1;
+ (struct CGSize)sizeFromBannerContentSizeIdentifier:(id)arg1;
- (id)_accessibilityUserTestingElementAttributes;
- (void)_commonInit;
- (void)_forwardErrorToDelegate:(id)arg1;
- (id)_initWithInternalAdType:(int)arg1 options:(long long)arg2;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (void)_resetHighlightTimer;
- (void)_resetToBeginningOfDoublePass;
- (void)_setAdPrivacyMarkPosition;
- (void)_setInSecondConstraintsPass:(BOOL)arg1;
- (void)_updateHighlight:(id)arg1;
- (int)action;
- (id)audioURL;
- (void)bannerDidAppear;
- (void)bannerDidDisappear;
- (void)bannerTappedAtPoint:(struct CGPoint)arg1;
- (void)bannerTappedAtPoint:(struct CGPoint)arg1 withMRAIDAction:(id)arg2;
- (void)beginAction;
- (BOOL)canReuseForContext:(id)arg1;
- (void)cancelBannerViewAction;
- (void)cancelScheduledAd;
- (id)context;
- (void)creativeControllerViewWasTappedAtPoint:(struct CGPoint)arg1 withMRAIDAction:(id)arg2;
- (id)currentContentSizeIdentifier;
- (void)cycleImpressionImmediately;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(struct CGPoint)arg2;
- (void)displayBannerView;
- (void)displayCreativeView;
- (BOOL)enableDimmerView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAction;
- (BOOL)hasImpressed;
- (BOOL)hasTransparencyDetails;
- (id)identifier;
- (id)initFromIBWithFrame:(struct CGRect)arg1;
- (id)initFromIBWithFrame:(struct CGRect)arg1 adType:(long long)arg2;
- (id)initWithAdType:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)internalDelegate;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)nativeMetadata;
- (void)nextContentVideoStartedPlaying;
- (void)pauseBannerMedia;
- (void)playbackFailed:(id)arg1;
- (void)playbackFinished:(id)arg1;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)playbackStartedForImpressionSource:(int)arg1;
- (void)prerollDidStart;
- (void)prerollDidStop;
- (void)privacyButtonWasTapped;
- (id)publicImpressionAttributes;
- (void)removeCreativeView;
- (void)reportNativeClickEvent;
- (id)requiredContentSizeIdentifiers;
- (BOOL)requiresMRAID;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)resumeBannerMedia;
- (void)resumeImpressionCycling;
- (void)scheduleAd;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)serverStoryboardDidTransitionOut;
- (void)setAlpha:(double)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentContentSizeIdentifier:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalAdType:(int)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setRequiredContentSizeIdentifiers:(id)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setViewSizeInPortrait:(struct CGSize)arg1 inLandscape:(struct CGSize)arg2;
- (BOOL)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)skipThreshold;
- (void)storyboardViewControllerDidPresent;
- (void)suspendImpressionCycling;
- (void)traitCollectionDidChange:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateConstraints;
- (void)userDidSkipPreroll;
- (id)videoAssets;

@end


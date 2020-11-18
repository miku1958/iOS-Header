//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <iAd/ADPrerollBottomBarDelegate-Protocol.h>
#import <iAd/ADPrerollTopBarDelegate-Protocol.h>
#import <iAd/UIGestureRecognizerDelegate-Protocol.h>

@class ADPrerollBottomBar, ADPrerollTopBar, ADPrivacyMarker, NSString, NSTimer, UIImageView;
@protocol ADPrerollViewDelegate;

@interface ADPrerollView : UIView <UIGestureRecognizerDelegate, ADPrerollTopBarDelegate, ADPrerollBottomBarDelegate>
{
    BOOL _barsVisible;
    BOOL _hasAction;
    BOOL _skipButtonCountingDown;
    id<ADPrerollViewDelegate> _delegate;
    ADPrerollTopBar *_topBar;
    ADPrerollBottomBar *_bottomBar;
    UIImageView *_swooshView;
    NSTimer *_passiveWatchingTimer;
    double _accumulatedViewingTime;
    ADPrivacyMarker *_privacyMarker;
}

@property (nonatomic) double accumulatedViewingTime; // @synthesize accumulatedViewingTime=_accumulatedViewingTime;
@property (nonatomic) BOOL barsVisible; // @synthesize barsVisible=_barsVisible;
@property (strong, nonatomic) ADPrerollBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ADPrerollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAction; // @synthesize hasAction=_hasAction;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSTimer *passiveWatchingTimer; // @synthesize passiveWatchingTimer=_passiveWatchingTimer;
@property (strong, nonatomic) ADPrivacyMarker *privacyMarker; // @synthesize privacyMarker=_privacyMarker;
@property (nonatomic) BOOL skipButtonCountingDown; // @synthesize skipButtonCountingDown=_skipButtonCountingDown;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIImageView *swooshView; // @synthesize swooshView=_swooshView;
@property (strong, nonatomic) ADPrerollTopBar *topBar; // @synthesize topBar=_topBar;

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_firePassiveWatchingTimer:(id)arg1;
- (BOOL)_layoutForExpandedSize;
- (void)_privacyButtonWasTapped;
- (void)_restartPassiveWatchingTimer;
- (void)_singleTapGestureRecognized:(id)arg1;
- (BOOL)accessibilityPerformEscape;
- (void)attachToAVPlayer:(id)arg1 showiAdBrandingSwoosh:(BOOL)arg2;
- (void)beginCountdown:(double)arg1;
- (void)bottomBarActionButtonTapped:(id)arg1;
- (void)bottomBarPauseButtonTapped:(id)arg1;
- (void)bottomBarPlayButtonTapped:(id)arg1;
- (void)bottomBarSkipButtonTapped:(id)arg1;
- (void)displayAsPaused:(BOOL)arg1;
- (void)enablePrivacyButton;
- (void)fadeToBlackWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setElapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)shutdown;
- (void)topBarDoneButtonTapped:(id)arg1;
- (void)topBarScaleToFill:(id)arg1;
- (void)topBarScaleToFit:(id)arg1;

@end

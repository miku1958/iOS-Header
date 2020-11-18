//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MediaPlayer/CAAnimationDelegate-Protocol.h>
#import <MediaPlayer/MPDetailSliderDelegate-Protocol.h>

@class CABasicAnimation, MPAVController, MPAVItem, MPButton, MPDetailSlider, MPTimeMarker, NSString, UIActivityIndicatorView, UIImage, UILabel;
@protocol MPPlaybackControlsDelegate;

@interface MPPlaybackControlsView : UIView <CAAnimationDelegate, MPDetailSliderDelegate>
{
    UIActivityIndicatorView *_activityIndicator;
    id<MPPlaybackControlsDelegate> _delegate;
    MPButton *_fastFowardButton;
    UIView *_fastFowardButtonBezel;
    MPButton *_geniusButton;
    MPAVItem *_item;
    MPTimeMarker *_markerForProgressControlDuration;
    MPButton *_mailButton;
    MPButton *_playbackSpeedButton;
    MPDetailSlider *_progressControl;
    MPButton *_repeatButton;
    MPButton *_rewindButton;
    UIView *_rewindButtonBezel;
    CABasicAnimation *_rewindOpacityAnimation;
    MPAVController *_player;
    double _progressOffset;
    float _seekedToValue;
    MPButton *_shuffleButton;
    double _tickInterval;
    UILabel *_trackInfoLabel;
    unsigned long long _visibleParts;
    unsigned int _wantsTick:1;
    unsigned int _geniusButtonDisabled:1;
    unsigned int _fastForwardAndRewindButtonDisabled:1;
    unsigned int _playbackSpeedButtonDisabled:1;
    unsigned int _mailButtonDisabled:1;
    unsigned int _mailButtonHidden:1;
    unsigned int _useMediaDetailSlider:1;
    unsigned int _detailScrubbing:1;
    unsigned int _needsUpdateButtonVisibility:1;
    unsigned long long _disabledParts;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPPlaybackControlsDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL detailScrubbingHidesControls;
@property (nonatomic) unsigned long long disabledParts; // @synthesize disabledParts=_disabledParts;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hideGeniusButton;
@property (readonly, nonatomic) BOOL isScrubbing;
@property (strong, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property (readonly, nonatomic) NSString *localizedScrubSpeedText;
@property (readonly, nonatomic) UIImage *mailButtonImage;
@property (strong, nonatomic) MPAVController *player; // @synthesize player=_player;
@property (readonly, nonatomic) UIImage *repeatButtonImage;
@property (readonly, nonatomic) long long repeatType;
@property (readonly, nonatomic) BOOL shouldOverrideProgressTimeLabelStyle;
@property (readonly, nonatomic) UIImage *shuffleButtonImage;
@property (readonly, nonatomic) BOOL shuffleIsOn;
@property (readonly, nonatomic) long long shuffleType;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long visibleParts; // @synthesize visibleParts=_visibleParts;

+ (unsigned long long)defaultVisibleParts;
- (void).cxx_destruct;
- (void)_addOpacityAnimationToBezelView:(id)arg1 reversed:(BOOL)arg2;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_changeGeniusImageToNormalImage:(id)arg1;
- (void)_changeGeniusImageToPressedImage:(id)arg1;
- (void)_contentsChangedNotification:(id)arg1;
- (double)_currentDisplayTime;
- (void)_fastForwardButton:(id)arg1;
- (void)_geniusButton:(id)arg1;
- (void)_handleGeniusButtonClick;
- (void)_isGeniusEnabledDidChangeNotification:(id)arg1;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)_mailButton:(id)arg1;
- (void)_playbackModeDidChangeNotification:(id)arg1;
- (void)_playbackSpeedButton:(id)arg1;
- (void)_registerForAVItemNotifications;
- (void)_repeatButton:(id)arg1;
- (void)_resetGeniusButtonImages;
- (void)_rewindButton:(id)arg1;
- (void)_setCurrentTime:(double)arg1 duration:(double)arg2;
- (void)_setVisiblePartsNeedReload;
- (void)_shuffleButton:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_unregisterForAVItemNotifications;
- (void)_updateButtonVisibility;
- (void)_updateForPlaybackSpeed;
- (double)_updatedDisplayDurationForTime:(double)arg1 preciseChapterMarkers:(BOOL)arg2;
- (void)_validityChangedNotification:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (Class)buttonClass;
- (long long)buttonType;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)dealloc;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)didMoveToSuperview;
- (unsigned long long)displayablePartsInPartMask:(unsigned long long)arg1;
- (id)geniusButtonImageForControlState:(unsigned long long)arg1;
- (void)handleChangeToRepeatType:(long long)arg1;
- (void)handleChangeToShuffleType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)newButtonBezelViewForPart:(unsigned long long)arg1;
- (id)newButtonForPart:(unsigned long long)arg1;
- (id)newProgressIndicator;
- (id)newTrackInfoLabel;
- (id)playbackSpeedButtonImageForPlaybackSpeed:(long long)arg1;
- (id)playbackSpeedTitleForPlaybackSpeed:(long long)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)progressBarClipsToChapterDuration;
- (void)registerForPlayerNotifications;
- (void)reloadButtonVisibility;
- (void)reloadControls;
- (void)reloadView;
- (void)resetDetailSlider:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)startTicking;
- (void)stopTicking;
- (void)unregisterForPlayerNotifications;
- (void)updateForEndOfDetailScrubbing;

@end

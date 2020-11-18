//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MediaPlayerUI/MPDetailScrubControllerDelegate-Protocol.h>
#import <MediaPlayerUI/MPUContentSizeCategoryChanging-Protocol.h>

@class MPDetailScrubController, MPUNowPlayingIndicatorView, MPUTimeFormatter, NSString, UIImageView, UILabel, UISlider;
@protocol MPDetailedScrubbing><_MPUSliderScrubForwarding, MPUChronologicalProgressViewDelegate;

@interface MPUChronologicalProgressView : UIView <MPDetailScrubControllerDelegate, MPUContentSizeCategoryChanging>
{
    UISlider<MPDetailedScrubbing><_MPUSliderScrubForwarding> *_slider;
    MPDetailScrubController *_scrubController;
    UILabel *_currentTimeLabel;
    UILabel *_remainingTimeLabel;
    MPUNowPlayingIndicatorView *_indicatorView;
    UILabel *_liveLabel;
    UIImageView *_liveBackgroundImage;
    NSString *_lastCurrentTimeString;
    NSString *_lastRemainingTimeString;
    double _lastDisplayedDuration;
    BOOL _alwaysLive;
    BOOL _showTimeLabels;
    BOOL _scrubbingEnabled;
    BOOL _showIsPlaying;
    id<MPUChronologicalProgressViewDelegate> _delegate;
    long long _style;
    long long _substyle;
    double _totalDuration;
    double _currentTime;
    MPUTimeFormatter *_timeFormatter;
}

@property (nonatomic, getter=isAlwaysLive) BOOL alwaysLive; // @synthesize alwaysLive=_alwaysLive;
@property (nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPUChronologicalProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL scrubbingEnabled; // @synthesize scrubbingEnabled=_scrubbingEnabled;
@property (nonatomic) BOOL showIsPlaying; // @synthesize showIsPlaying=_showIsPlaying;
@property (nonatomic) BOOL showTimeLabels; // @synthesize showTimeLabels=_showTimeLabels;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;
@property (nonatomic) long long substyle; // @synthesize substyle=_substyle;
@property (readonly) Class superclass;
@property (strong, nonatomic) MPUTimeFormatter *timeFormatter; // @synthesize timeFormatter=_timeFormatter;
@property (nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property (readonly, nonatomic) struct CGRect trackRect;

+ (Class)timeLabelsClass;
- (void).cxx_destruct;
- (id)_createIndicatorViewWithStyle:(long long)arg1;
- (id)_createTimeLabelWithStyle:(long long)arg1;
- (double)_estimatedTimeLabelsHeight;
- (double)_estimatedTimeLabelsWidth;
- (double)_estimatedWideTimeLabelsWidth;
- (void)_internalSetCurrentTime:(double)arg1;
- (float)_sliderNormalizedValueForTime:(double)arg1;
- (id)_stringForTime:(double)arg1 isTimeRemaining:(BOOL)arg2;
- (BOOL)_styleRequiresTimeLabelsUnderneath;
- (id)_thumbImage;
- (id)_timeLabelFont;
- (id)_trackImage;
- (id)_trackImageWithAlternateStyle:(BOOL)arg1 rounded:(BOOL)arg2;
- (void)_updateLabelAvoidance;
- (void)_updateTimeLabels;
- (BOOL)ccuiSupportsDelayedTouchesByContainingScrollViewForGesture:(id)arg1;
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;
- (void)detailScrubControllerDidBeginScrubbing:(id)arg1;
- (void)detailScrubControllerDidEndScrubbing:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateTextForContentSizeCategory:(id)arg1;

@end


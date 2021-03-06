//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

#import <MediaPlayer/MPDetailScrubControllerDelegate-Protocol.h>
#import <MediaPlayer/MPDetailedScrubbing-Protocol.h>

@class AVTimeFormatter, MPDetailScrubController, NSString, NSTimer, UIImageView, UILabel, UIView;
@protocol MPDetailSliderDelegate;

@interface MPDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate>
{
    UILabel *_currentTimeInverseLabel;
    UILabel *_currentTimeLabel;
    MPDetailScrubController *_scrubController;
    BOOL _allowsScrubbing;
    BOOL _autoscrubActive;
    NSTimer *_autoscrubTimer;
    BOOL _canCommit;
    double _currentTime;
    UIView *_downloadingTrackOverlay;
    UIImageView *_glowDetailScrubImageView;
    BOOL _isTracking;
    double _maxTrackWidth;
    struct CGPoint _previousLocationInView;
    long long _style;
    UIImageView *_thumbImageView;
    double _trackInset;
    AVTimeFormatter *_formatter;
    id<MPDetailSliderDelegate> _delegate;
    double _detailScrubbingVerticalRange;
    double _duration;
    double _availableDuration;
    long long _timeLabelStyle;
    double _minTimeLabelWidth;
}

@property (nonatomic) BOOL allowsDetailScrubbing;
@property (nonatomic) BOOL allowsScrubbing; // @synthesize allowsScrubbing=_allowsScrubbing;
@property (nonatomic) double availableDuration; // @synthesize availableDuration=_availableDuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPDetailSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL detailScrubbingAvailableForCurrentDuration;
@property (nonatomic) double detailScrubbingVerticalRange; // @synthesize detailScrubbingVerticalRange=_detailScrubbingVerticalRange;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *localizedScrubSpeedText;
@property (nonatomic) double minTimeLabelWidth; // @synthesize minTimeLabelWidth=_minTimeLabelWidth;
@property (readonly) Class superclass;
@property (nonatomic) long long timeLabelStyle; // @synthesize timeLabelStyle=_timeLabelStyle;

+ (Class)labelClass;
- (void).cxx_destruct;
- (void)_autoscrubTick:(id)arg1;
- (id)_colorSliceImageWithColor:(id)arg1 height:(double)arg2;
- (void)_commitValue;
- (id)_modernThumbImageWithColor:(id)arg1 height:(double)arg2 includeShadow:(BOOL)arg3;
- (void)_resetScrubInfo;
- (void)_setValueWhileTracking:(float)arg1 duration:(double)arg2;
- (void)_setupControlsForStyle;
- (id)_stringForCurrentTime:(double)arg1;
- (id)_stringForInverseCurrentTime:(double)arg1;
- (id)_stringForTime:(double)arg1 elapsed:(BOOL)arg2;
- (struct UIEdgeInsets)_thumbHitEdgeInsets;
- (void)_updateForAvailableDuraton;
- (void)_updateTimeDisplayForTime:(double)arg1;
- (void)_updateTimeDisplayForTime:(double)arg1 force:(BOOL)arg2;
- (void)_updateTrackInset;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (id)currentThumbImage;
- (void)dealloc;
- (void)detailScrubController:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 maxTrackWidth:(double)arg3;
- (BOOL)isTracking;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setValue:(float)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)setValue:(float)arg1 duration:(double)arg2;
- (struct CGRect)thumbHitRect;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)timeLabelFontForStyle:(long long)arg1;
- (id)timeLabelTextColorForStyle:(long long)arg1;
- (void)tintColorDidChange;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end


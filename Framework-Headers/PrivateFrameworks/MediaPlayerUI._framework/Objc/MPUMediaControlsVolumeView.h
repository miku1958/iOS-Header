//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MediaPlayerUI/MPVolumeControllerDelegate-Protocol.h>

@class MPVolumeController, NSString, NSTimer, UISlider;

@interface MPUMediaControlsVolumeView : UIView <MPVolumeControllerDelegate>
{
    UIView *_warningView;
    BOOL _warningIndicatorBlinking;
    NSTimer *_warningBlinkTimer;
    NSTimer *_volumeCommitTimer;
    double _timeStoppedTracking;
    long long _style;
    UISlider *_slider;
    MPVolumeController *_volumeController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;

- (void).cxx_destruct;
- (void)_beginBlinkingWarningView;
- (void)_beginVolumeCommitTimer;
- (void)_blinkWarningView;
- (void)_commitCurrentVolumeValue;
- (void)_configureVolumeSliderView:(id)arg1;
- (id)_createVolumeSliderView;
- (void)_layoutVolumeWarningView;
- (void)_removeVolumeSliderInertia;
- (BOOL)_shouldStartBlinkingVolumeWarningIndicator;
- (void)_stopBlinkingWarningView;
- (void)_stopVolumeCommitTimer;
- (id)_trackImageWithAlternateStyle:(BOOL)arg1 rounded:(BOOL)arg2;
- (void)_volumeSliderBeganChanging:(id)arg1;
- (BOOL)_volumeSliderDynamicsEnabled;
- (void)_volumeSliderStoppedChanging:(id)arg1;
- (void)_volumeSliderValueChanged:(id)arg1;
- (id)_warningTrackImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateSystemVolumeLevel;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2;

@end


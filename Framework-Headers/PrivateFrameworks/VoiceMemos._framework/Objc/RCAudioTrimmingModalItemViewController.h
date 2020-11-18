//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VoiceMemos/RCAVWaveformViewControllerDelegate-Protocol.h>

@class AVPlayerItem, NSURL, RCAVWaveformViewController, RCFileInputWaveformDataSource, RCPreviewController, RCUIConfiguration, UIButton, UILabel, UIView;

@interface RCAudioTrimmingModalItemViewController : UIViewController <RCAVWaveformViewControllerDelegate>
{
    UIView *_nonWaveformContentView;
    RCAVWaveformViewController *_waveformViewController;
    RCFileInputWaveformDataSource *_waveformDataSource;
    UILabel *_timeDisplayLabel;
    UIButton *_playPauseButton;
    AVPlayerItem *_playerItem;
    RCUIConfiguration *_defaultUIConfiguration;
    RCUIConfiguration *_disabledUIConfiguration;
    RCUIConfiguration *_progressUIConfiguration;
    BOOL _showsProgress;
    BOOL _enabled;
    float _progress;
    NSURL *_audioURL;
    double _maximumDuration;
    RCPreviewController *_previewController;
}

@property (readonly, copy, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly, nonatomic) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property (readonly, nonatomic) RCPreviewController *previewController; // @synthesize previewController=_previewController;
@property (nonatomic) float progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) CDStruct_73a5d3ca selectedTimeRange;
@property (nonatomic) BOOL showsProgress; // @synthesize showsProgress=_showsProgress;

- (void).cxx_destruct;
- (void)_beginOrResumePreviewing;
- (struct CGSize)_calculatedPreferredContentSize;
- (id)_currentUIConfiguration;
- (void)_pausePreviewing;
- (void)_playPauseAction;
- (id)_playStateImageForAVPreviewState:(long long)arg1;
- (void)_updateAudioStateInterface;
- (void)_updateProgressView;
- (void)audioWaveformControllerDidChangeAVState:(id)arg1;
- (void)audioWaveformControllerDidChangeAVTimes:(id)arg1;
- (void)audioWaveformControllerDidChangeWaveformDataSource:(id)arg1;
- (id)initWithAudioURL:(id)arg1 maximumDuration:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end


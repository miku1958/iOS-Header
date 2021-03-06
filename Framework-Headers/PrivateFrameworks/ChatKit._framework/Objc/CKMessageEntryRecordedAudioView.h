//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/CKAudioControllerDelegate-Protocol.h>

@class CKAudioController, CKAudioMediaObject, NSString, UIButton, UIImage, UIImageView, UILabel, UIVisualEffectView;
@protocol CKMessageEntryRecordedAudioViewDelegate;

__attribute__((visibility("hidden")))
@interface CKMessageEntryRecordedAudioView : UIView <CKAudioControllerDelegate>
{
    CKAudioMediaObject *_audioMediaObject;
    UIButton *_playPauseDeleteButton;
    id<CKMessageEntryRecordedAudioViewDelegate> _delegate;
    UIVisualEffectView *_blurView;
    UIImageView *_balloonImageView;
    CKAudioController *_audioController;
    UILabel *_timeLabel;
    UIImage *_waveformImage;
    UIImageView *_waveformImageView;
    double _time;
    NSString *_timeFormat;
}

@property (strong, nonatomic) CKAudioController *audioController; // @synthesize audioController=_audioController;
@property (strong, nonatomic) CKAudioMediaObject *audioMediaObject; // @synthesize audioMediaObject=_audioMediaObject;
@property (strong, nonatomic) UIImageView *balloonImageView; // @synthesize balloonImageView=_balloonImageView;
@property (strong, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKMessageEntryRecordedAudioViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isPlaying;
@property (strong, nonatomic) UIButton *playPauseDeleteButton; // @synthesize playPauseDeleteButton=_playPauseDeleteButton;
@property (readonly) Class superclass;
@property (nonatomic) double time; // @synthesize time=_time;
@property (copy, nonatomic) NSString *timeFormat; // @synthesize timeFormat=_timeFormat;
@property (strong, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property (strong, nonatomic) UIImage *waveformImage; // @synthesize waveformImage=_waveformImage;
@property (strong, nonatomic) UIImageView *waveformImageView; // @synthesize waveformImageView=_waveformImageView;

- (void).cxx_destruct;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioControllerDidPause:(id)arg1;
- (void)audioControllerDidStop:(id)arg1;
- (void)audioControllerPlayingDidChange:(id)arg1;
- (void)dealloc;
- (void)handlePlayPauseDelete:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)pause;
- (void)play;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)stop;
- (void)updatePlayPauseDeleteButton;
- (void)updateProgress;
- (void)updateTimeString;

@end


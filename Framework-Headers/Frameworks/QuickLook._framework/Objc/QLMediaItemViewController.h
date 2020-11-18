//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLScrollableContentItemViewController.h>

#import <QuickLook/QLToolbarButtonAction-Protocol.h>

@class AVPlayer, AVPlayerLayer, NSError, NSLayoutConstraint, NSObject, NSString, NSTimer, UILabel, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface QLMediaItemViewController : QLScrollableContentItemViewController <QLToolbarButtonAction>
{
    BOOL _playing;
    BOOL _isFullScreen;
    BOOL _isVisible;
    BOOL _mediaWasPausedOnResignActive;
    NSObject *_playbackTimeObserver;
    CDUnknownBlockType _previewItemLoadingBlock;
    struct CGSize _imageSize;
    UIView *_timeLabelBackground;
    UILabel *_timeLabel;
    UIScrollView *_scrubberScrollView;
    NSLayoutConstraint *_timeLabelConstraintX;
    NSLayoutConstraint *_timeLabelConstraintY;
    NSTimer *_playbackTimeHiddenTimer;
    long long _playbackTimeFormat;
    BOOL _playable;
    BOOL _visualTracksEnabled;
    AVPlayer *_player;
    UIView *_playerView;
    AVPlayerLayer *_playerLayer;
    NSError *_error;
    double _elapsedTime;
    double _remainingTime;
    long long _playingStatus;
    double _mediaVolume;
    double _mediaDuration;
}

@property (nonatomic) double currentPlaybackHeadPosition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property (readonly, nonatomic) BOOL endOfMediaReached;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (nonatomic) double mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property (readonly, nonatomic) double mediaVolume; // @synthesize mediaVolume=_mediaVolume;
@property (readonly, nonatomic) BOOL playable; // @synthesize playable=_playable;
@property (readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property (readonly, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property (readonly, nonatomic) long long playingStatus; // @synthesize playingStatus=_playingStatus;
@property (nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL visualTracksEnabled; // @synthesize visualTracksEnabled=_visualTracksEnabled;

- (void).cxx_destruct;
- (void)_updateExternalPlayback;
- (void)_updatePlayingStatus;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)buttonPressedWithIdentifier:(id)arg1;
- (void)dealloc;
- (void)didChangePlayingStatus;
- (void)didReachEndOfMedia;
- (void)hideTimeLabel;
- (void)hideTimeLabelAfterDelay;
- (void)hideTimeLabelAnimated:(BOOL)arg1;
- (struct CGSize)imageSize;
- (id)labelTextWithFormat:(long long)arg1 elapsedInterval:(double)arg2 remainingInterval:(double)arg3;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)observePlayingTime:(CDStruct_198678f7)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)play;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(BOOL)arg1;
- (void)previewWillDisappear:(BOOL)arg1;
- (id)registeredKeyCommands;
- (void)removeTimeLabel;
- (void)resetToBeginning;
- (void)setAppearance:(id)arg1 animated:(BOOL)arg2;
- (void)setMediaVolume:(double)arg1;
- (void)setTimeLabelNeedsUpdate;
- (void)setUpTimeLabelIfNeeded;
- (BOOL)shouldPauseOnDisappear;
- (void)showTimeLabel;
- (void)showTimeLabelIfNeeded;
- (void)stop;
- (id)stringFromTimeInterval:(double)arg1;
- (id)timeLabelScrollView;
- (void)togglePlayback;
- (id)toolbarButtons;
- (void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2;

@end


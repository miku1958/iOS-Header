//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol NUNowPlayingPlaybackControlsDelegate, NUNowPlayingPlaybackControlsLayoutSpecProvider;

@interface NUNowPlayingPlaybackControls : UIView
{
    BOOL _isPlaying;
    UIView *_contentView;
    id<NUNowPlayingPlaybackControlsDelegate> _delegate;
    UIButton *_rewindButton;
    UIButton *_playPauseButton;
    UIButton *_nextTrackButton;
    double _inset;
    id<NUNowPlayingPlaybackControlsLayoutSpecProvider> _layoutSpecProvider;
}

@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (weak, nonatomic) id<NUNowPlayingPlaybackControlsDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double inset; // @synthesize inset=_inset;
@property (nonatomic) BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
@property (weak, nonatomic) id<NUNowPlayingPlaybackControlsLayoutSpecProvider> layoutSpecProvider; // @synthesize layoutSpecProvider=_layoutSpecProvider;
@property (strong, nonatomic) UIButton *nextTrackButton; // @synthesize nextTrackButton=_nextTrackButton;
@property (nonatomic) BOOL nextTrackButtonEnabled;
@property (strong, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property (strong, nonatomic) UIButton *rewindButton; // @synthesize rewindButton=_rewindButton;

- (void).cxx_destruct;
- (id)buttonColor;
- (id)disabledButtonColor;
- (id)initWithFrame:(struct CGRect)arg1 inset:(double)arg2 layoutSpecProvider:(id)arg3;
- (void)layoutSubviews;
- (void)nextTrackButtonTapped:(id)arg1;
- (void)pauseButtonTapped:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (void)rewindButtonTapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MCDPlayModeControlView, MCDProgressView, MCDTitleView, MCDTransportControlView, UIColor, UIImageView, UILabel, UITapGestureRecognizer;
@protocol MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate;

@interface MCDNowPlayingViewController : UIViewController
{
    BOOL _isScrubbing;
    long long _heldAction;
    UIViewController *_transportViewController;
    UIViewController *_playModeViewController;
    UILabel *_albumArtistLabel;
    BOOL _highTouchMode;
    UIColor *_navbarColor;
    BOOL _navbarHidesShadow;
    MCDTransportControlView *_transportControlView;
    MCDPlayModeControlView *_playModeControlView;
    id<MCDNowPlayingViewControllerDelegate> _delegate;
    id<MCDNowPlayingViewControllerDataSource> _dataSource;
    MCDTitleView *_titleView;
    MCDProgressView *_progressView;
    UIImageView *_artworkView;
    UITapGestureRecognizer *_knobPressRecognizer;
    UITapGestureRecognizer *_backPressRecognizer;
}

@property (readonly, nonatomic) UIImageView *artworkView; // @synthesize artworkView=_artworkView;
@property (readonly, nonatomic) UITapGestureRecognizer *backPressRecognizer; // @synthesize backPressRecognizer=_backPressRecognizer;
@property (weak, nonatomic) id<MCDNowPlayingViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (weak, nonatomic) id<MCDNowPlayingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) UITapGestureRecognizer *knobPressRecognizer; // @synthesize knobPressRecognizer=_knobPressRecognizer;
@property (readonly, nonatomic) MCDPlayModeControlView *playModeControlView; // @synthesize playModeControlView=_playModeControlView;
@property (readonly, nonatomic) MCDProgressView *progressView; // @synthesize progressView=_progressView;
@property (readonly, nonatomic) MCDTitleView *titleView; // @synthesize titleView=_titleView;
@property (readonly, nonatomic) MCDTransportControlView *transportControlView; // @synthesize transportControlView=_transportControlView;

- (void).cxx_destruct;
- (void)_didUpdateSupportedCommandsNotification:(id)arg1;
- (void)_fastForwardButtonTouchDown:(id)arg1;
- (void)_fastForwardButtonTouchUp:(id)arg1;
- (void)_initializeTransportControls;
- (void)_leftButtonTouchDown:(id)arg1;
- (void)_leftButtonTouchUp:(id)arg1;
- (void)_likeButtonTouchUp:(id)arg1;
- (void)_playPauseButtonTouchUp:(id)arg1;
- (void)_repeatButtonTouchUp:(id)arg1;
- (void)_respondToHeldAction;
- (void)_sendAction:(long long)arg1 withState:(long long)arg2;
- (void)_sendHeldAction;
- (void)_shuffleButtonTouchUp:(id)arg1;
- (void)_updatePlayModesState;
- (void)_updateRepeatStateWithType:(unsigned long long)arg1;
- (void)_updateShuffleStateWithType:(unsigned long long)arg1;
- (void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(long long)arg3;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)reloadData;
- (void)updatePlayControls;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

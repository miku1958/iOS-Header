//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSObject;
@protocol OS_dispatch_queue;

@interface PXFooterAnimatedIconView : UIView
{
    unsigned long long _reasonsToPause;
    struct os_unfair_lock_s _lock;
    long long _lock_desiredMode;
    NSObject<OS_dispatch_queue> *_queue;
    AVPlayer *_player;
    CDStruct_1b6d18a9 _introStartTime;
    CDStruct_1b6d18a9 _loopStartTime;
    CDStruct_1b6d18a9 _loopEndTime;
    CDStruct_1b6d18a9 _outroEndTime;
    float _playerRateBeforePause;
    id _gridCycleTimeObservationToken;
    long long _waitingState;
    double _waitingStateStartTime;
    BOOL _wantsGridCycleTimeObservation;
    BOOL _isPlayerHidden;
    BOOL _isPlayerPaused;
    AVPlayerItem *_playerItem;
    long long _style;
    AVPlayerLayer *_playerLayer;
}

@property long long desiredMode;
@property (readonly, nonatomic) BOOL isObscured;
@property (nonatomic) BOOL isPlayerHidden; // @synthesize isPlayerHidden=_isPlayerHidden;
@property (nonatomic) BOOL isPlayerPaused; // @synthesize isPlayerPaused=_isPlayerPaused;
@property (strong, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property (strong, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property (readonly, nonatomic) long long presentedState;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (nonatomic) BOOL wantsGridCycleTimeObservation; // @synthesize wantsGridCycleTimeObservation=_wantsGridCycleTimeObservation;

- (void).cxx_destruct;
- (void)_addReasonToPause:(unsigned long long)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidEnterForeground:(id)arg1;
- (void)_createPlayerIfNeeded;
- (void)_crossedGridCycleBoundary;
- (void)_didPlayerToEndTime:(id)arg1;
- (void)_didSeekToPlayFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;
- (void)_didSeekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_hideVideo;
- (void)_layoutPlayer;
- (void)_mediaServicesWereReset:(id)arg1;
- (id)_movieURL;
- (void)_playFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;
- (void)_removeReasonToPause:(unsigned long long)arg1;
- (void)_seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_setNeedsUpdate;
- (void)_transitionToState:(long long)arg1;
- (void)_update;
- (void)_updateIsPlayerPaused;
- (void)_updateStyle;
- (void)_windowDidChange;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

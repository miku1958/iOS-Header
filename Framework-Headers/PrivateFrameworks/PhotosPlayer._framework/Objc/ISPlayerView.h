//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosPlayer/ISBasePlayerDelegate-Protocol.h>
#import <PhotosPlayer/ISChangeObserver-Protocol.h>

@class ISBasePlayerUIView, ISPlayerItem, ISWrappedAVPlayer, NSError, NSMutableSet, NSString, UIGestureRecognizer;
@protocol ISPlayerViewDelegate;

@interface ISPlayerView : UIView <ISChangeObserver, ISBasePlayerDelegate>
{
    struct {
        BOOL playbackStateDidChange;
        BOOL interactingDidChange;
        BOOL gestureRecognizerDidChange;
    } _delegateRespondsTo;
    struct {
        BOOL playerItemLoadingTarget;
        BOOL playerPlayerItem;
        BOOL playerView;
        BOOL playerMuted;
        BOOL status;
        BOOL readyForDisplay;
        BOOL playbackState;
    } _isValid;
    BOOL _audioMuted;
    BOOL _isReadyForDisplay;
    BOOL _isInteracting;
    BOOL _readyForDisplay;
    long long _playbackState;
    long long _status;
    NSError *_error;
    id<ISPlayerViewDelegate> _delegate;
    ISBasePlayerUIView *__playerView;
    ISWrappedAVPlayer *__videoPlayer;
    ISPlayerItem *__playerItem;
    UIGestureRecognizer *__gestureRecognizer;
    NSMutableSet *__activeGestures;
    unsigned long long _playbackStyle;
    struct CGSize _dimensionsOfReservedVideoMemory;
}

@property (readonly, nonatomic) NSMutableSet *_activeGestures; // @synthesize _activeGestures=__activeGestures;
@property (strong, nonatomic, setter=_setGestureRecognizer:) UIGestureRecognizer *_gestureRecognizer; // @synthesize _gestureRecognizer=__gestureRecognizer;
@property (strong, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem; // @synthesize _playerItem=__playerItem;
@property (strong, nonatomic, setter=_setPlayerView:) ISBasePlayerUIView *_playerView; // @synthesize _playerView=__playerView;
@property (readonly, nonatomic) ISWrappedAVPlayer *_videoPlayer; // @synthesize _videoPlayer=__videoPlayer;
@property (nonatomic) BOOL audioMuted; // @synthesize audioMuted=_audioMuted;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ISPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize dimensionsOfReservedVideoMemory; // @synthesize dimensionsOfReservedVideoMemory=_dimensionsOfReservedVideoMemory;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isInteracting; // @synthesize isInteracting=_isInteracting;
@property (readonly, nonatomic) BOOL isReadyForDisplay; // @synthesize isReadyForDisplay=_isReadyForDisplay;
@property (nonatomic, setter=_setPlaybackState:) long long playbackState; // @synthesize playbackState=_playbackState;
@property (nonatomic) unsigned long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property (nonatomic, setter=_setReadyForDisplay:) BOOL readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property (nonatomic, setter=_setStatus:) long long status; // @synthesize status=_status;
@property (readonly) Class superclass;

+ (void)setAllowPlayerReuse:(BOOL)arg1;
- (void).cxx_destruct;
- (void)_handleGesture:(id)arg1;
- (void)_invalidatePlaybackState;
- (void)_invalidatePlayerItemLoadingTarget;
- (void)_invalidatePlayerMuted;
- (void)_invalidatePlayerPlayerItem;
- (void)_invalidatePlayerView;
- (void)_invalidateReadyForDisplay;
- (void)_invalidateStatus;
- (BOOL)_needsUpdate;
- (void)_setInteracting:(BOOL)arg1;
- (void)_updateIfNeeded;
- (void)_updatePlaybackStateIfNeeded;
- (void)_updatePlayerItemLoadingTargetIfNeeded;
- (void)_updatePlayerMutedIfNeeded;
- (void)_updatePlayerPlayerItemIfNeeded;
- (void)_updatePlayerViewIfNeeded;
- (void)_updateReadyForDisplayIfNeeded;
- (void)_updateStatusIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithVideoPlayer:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)prepareWithPhoto:(struct CGImage *)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;
- (void)prepareWithPlayerItem:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (id)videoPlayerForPlayer:(id)arg1;

@end

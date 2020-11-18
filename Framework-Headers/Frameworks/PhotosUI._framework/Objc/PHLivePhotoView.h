//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/ISChangeObserver-Protocol.h>

@class ISLivePhotoPlayer, ISLivePhotoUIView, ISPlayerItem, NSString, PHLivePhoto, UIGestureRecognizer;
@protocol PHLivePhotoViewDelegate;

@interface PHLivePhotoView : UIView <ISChangeObserver>
{
    struct {
        BOOL respondsToWillBeginPlaybackWithStyle;
        BOOL respondsToDidEndPlayback;
    } _delegateFlags;
    struct {
        BOOL respondsToDidEndPlayingVitality;
        BOOL respondsToDidBeginHinting;
    } _delegatePrivateFlags;
    long long _currentPlaybackStyle;
    BOOL _muted;
    BOOL __playingVitality;
    BOOL _shouldApplyTargetReadiness;
    BOOL _showsStatusBorder;
    id<PHLivePhotoViewDelegate> _delegate;
    PHLivePhoto *_livePhoto;
    ISPlayerItem *__playerItem;
    long long _targetReadiness;
    UIView *_photoView;
    ISLivePhotoUIView *_playerView;
    ISLivePhotoPlayer *_player;
    struct CGPoint _scaleAnchorOffset;
}

@property (strong, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem; // @synthesize _playerItem=__playerItem;
@property (nonatomic, setter=_setPlayingVitality:) BOOL _playingVitality; // @synthesize _playingVitality=__playingVitality;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PHLivePhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property (nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property (strong, nonatomic) UIView *photoView; // @synthesize photoView=_photoView;
@property (readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer;
@property (strong, nonatomic) ISLivePhotoPlayer *player; // @synthesize player=_player;
@property (strong, nonatomic) ISLivePhotoUIView *playerView; // @synthesize playerView=_playerView;
@property (nonatomic) struct CGPoint scaleAnchorOffset; // @synthesize scaleAnchorOffset=_scaleAnchorOffset;
@property (nonatomic) BOOL shouldApplyTargetReadiness; // @synthesize shouldApplyTargetReadiness=_shouldApplyTargetReadiness;
@property (nonatomic) BOOL showsStatusBorder; // @synthesize showsStatusBorder=_showsStatusBorder;
@property (readonly) Class superclass;
@property (nonatomic) long long targetReadiness; // @synthesize targetReadiness=_targetReadiness;

+ (id)livePhotoBadgeImageWithOptions:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_commonPHLivePhotoViewInitialization;
- (void)_handlePlayerItemStatusChanged;
- (void)_playerDidBeginHinting;
- (void)_updateCurrentPlaybackStyle;
- (void)_updatePlayerAudioEnabled;
- (void)_updatePlayerItemLoadingTarget;
- (void)_updatePlayingVitality;
- (void)_updateStatusBorder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)setContentMode:(long long)arg1;
- (void)startPlaybackWithStyle:(long long)arg1;
- (void)stopPlayback;

@end


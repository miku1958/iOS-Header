//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetUIImageViewTile.h>

@class AVPlayerItem, ISWrappedAVAudioSession, ISWrappedAVPlayer, PXVideoPlayerView;

@interface PXAssetLoopUIViewTile : PXAssetUIImageViewTile
{
    unsigned long long _requestCount;
    long long _loopingVideoRequestID;
    PXVideoPlayerView *_loopingVideoView;
    ISWrappedAVPlayer *_loopingVideoPlayer;
    AVPlayerItem *__loopingPlayerItem;
    ISWrappedAVAudioSession *__audioSession;
}

@property (strong, nonatomic, setter=_setAudioSession:) ISWrappedAVAudioSession *_audioSession; // @synthesize _audioSession=__audioSession;
@property (strong, nonatomic, setter=_setLoopingPlayerItem:) AVPlayerItem *_loopingPlayerItem; // @synthesize _loopingPlayerItem=__loopingPlayerItem;

- (void).cxx_destruct;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3;
- (void)_requestLoopingVideoIfNeeded;
- (void)_updateLoopingVideoView;
- (void)becomeReusable;
- (void)imageDidChange;
- (void)prepareForReuse;
- (void)setImageRequester:(id)arg1;
- (id)view;

@end


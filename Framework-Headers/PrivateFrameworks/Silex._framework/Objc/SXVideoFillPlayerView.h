//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SXAVPlayer, SXImageView, SXPlayerLayer, SXVideoResource;

@interface SXVideoFillPlayerView : UIView
{
    BOOL _shouldLoop;
    BOOL _hasRequestedPlayback;
    unsigned long long _fillMode;
    SXVideoResource *_videoResource;
    SXPlayerLayer *_playerLayer;
    SXAVPlayer *_player;
    SXImageView *_stillImageView;
}

@property (nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
@property (nonatomic) BOOL hasRequestedPlayback; // @synthesize hasRequestedPlayback=_hasRequestedPlayback;
@property (strong, nonatomic) SXAVPlayer *player; // @synthesize player=_player;
@property (strong, nonatomic) SXPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property (nonatomic) BOOL shouldLoop; // @synthesize shouldLoop=_shouldLoop;
@property (strong, nonatomic) SXImageView *stillImageView; // @synthesize stillImageView=_stillImageView;
@property (strong, nonatomic) SXVideoResource *videoResource; // @synthesize videoResource=_videoResource;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithVideoResource:(id)arg1 imageView:(id)arg2;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)play;
- (void)playIfPossible;
- (void)reset;
- (void)switchToPlayer;

@end

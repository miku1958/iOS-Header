//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFStaticWallpaperView.h>

#import <SpringBoardFoundation/ISPlayerViewDelegatePrivate-Protocol.h>
#import <SpringBoardFoundation/SBFIrisWallpaperView-Protocol.h>

@class ISAVPlayer, ISPlayerView, NSString, NSURL, UIGestureRecognizer, UIImageView;
@protocol SBFIrisWallpaperViewDelegate;

@interface SBFIrisWallpaperView : SBFStaticWallpaperView <ISPlayerViewDelegatePrivate, SBFIrisWallpaperView>
{
    id<SBFIrisWallpaperViewDelegate> _irisDelegate;
    long long _currentMode;
    UIImageView *_imageView;
    NSURL *_videoFileURL;
    double _stillTimeInVideo;
    BOOL _useRewindPlaybackStyle;
    ISAVPlayer *_prewiredAVPlayer;
    struct CGSize _prewiredSize;
    ISPlayerView *_playerView;
    long long _playerState;
    long long _playbackState;
    BOOL _isInteracting;
    UIGestureRecognizer *_playerGestureRecognizer;
}

@property (readonly, nonatomic) long long currentIrisMode; // @synthesize currentIrisMode=_currentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<SBFIrisWallpaperViewDelegate> irisDelegate; // @synthesize irisDelegate=_irisDelegate;
@property (readonly, nonatomic) long long irisPlaybackState;
@property (readonly, nonatomic) BOOL isIrisInteracting;
@property (readonly, nonatomic) double stillTimeInVideo;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *videoFileURL;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_populateContentView;
- (void)_resetPrewiredAVPlayer;
- (void)_setImage:(id)arg1;
- (void)_setPlayerGestureRecognizer:(id)arg1;
- (void)_setupContentView;
- (BOOL)_setupContentViewForMode:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 cacheGroup:(id)arg3 wallpaperVideoURL:(id)arg4 stillTimeInVideo:(double)arg5 staticImageOptions:(unsigned long long)arg6 variant:(long long)arg7 prewireMemory:(BOOL)arg8 useRewindPlaybackStyle:(BOOL)arg9;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3;
- (id)irisGestureRecognizer;
- (void)playerViewGestureRecognizerDidChange:(id)arg1;
- (void)playerViewIsInteractingDidChange:(id)arg1;
- (void)playerViewPlaybackStateDidChange:(id)arg1;
- (void)switchToIrisMode:(long long)arg1;
- (id)videoPlayerForPlayerView:(id)arg1;
- (long long)wallpaperType;

@end

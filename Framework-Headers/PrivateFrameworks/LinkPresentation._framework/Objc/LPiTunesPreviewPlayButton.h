//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPPlayButton.h>

#import <LinkPresentation/LPMediaPlayer-Protocol.h>

@class AVPlayer, AVPlayerItem, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LPiTunesPreviewPlayButton : LPPlayButton <LPMediaPlayer>
{
    NSURL *_previewURL;
    AVPlayerItem *_item;
    AVPlayer *_player;
    id _timeObserver;
    id _endObserver;
    long long _state;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) unsigned long long lastInteractionTimestamp;
@property (readonly, nonatomic) BOOL shouldUnmuteWhenUserAdjustsVolume;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double unobscuredAreaFraction;
@property (readonly, nonatomic) BOOL usesSharedAudioSession;

- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)dealloc;
- (id)initWithPreviewURL:(id)arg1 style:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateToState:(long long)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPVolumeControllerSystemDataSource.h>

@class AVPlayer, MPKeyValueObserver;

@interface MPVolumeControllerAVPlayerDataSource : MPVolumeControllerSystemDataSource
{
    MPKeyValueObserver *_volumeObserver;
    MPKeyValueObserver *_mutedObserver;
    AVPlayer *_player;
}

@property (readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_setup;
- (void)_tearDown;
- (id)initWithAVPlayer:(id)arg1;
- (void)reload;
- (void)setMuted:(BOOL)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolumeAudioCategory:(id)arg1;
- (void)updateVolumeControlCapabilities:(unsigned int)arg1;

@end

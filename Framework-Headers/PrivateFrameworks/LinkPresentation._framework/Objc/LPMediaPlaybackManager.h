//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface LPMediaPlaybackManager : NSObject
{
    NSHashTable *_mediaPlayers;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_deactivateAllPlayingMediaPlayersExcept:(id)arg1;
- (BOOL)_sharedSessionHasPlayingAudio;
- (void)_updateAudioSessionCategory;
- (void)addMediaPlayer:(id)arg1;
- (id)audioSession;
- (id)init;
- (void)mediaPlayer:(id)arg1 didChangeMutedState:(BOOL)arg2;
- (void)mediaPlayer:(id)arg1 didChangePlayingState:(BOOL)arg2;
- (void)removeMediaPlayer:(id)arg1;
- (void)volumeChanged:(id)arg1;

@end


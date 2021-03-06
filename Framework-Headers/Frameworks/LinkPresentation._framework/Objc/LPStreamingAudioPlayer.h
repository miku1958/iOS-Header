//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPMediaPlayer-Protocol.h>

@class AVPlayer, AVPlayerItem, LPAudio, NSHashTable, NSString;

@interface LPStreamingAudioPlayer : NSObject <LPMediaPlayer>
{
    LPAudio *_audio;
    AVPlayerItem *_item;
    AVPlayer *_player;
    id _timeObserver;
    id _endObserver;
    NSHashTable *_clients;
    unsigned long long _state;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long lastInteractionTimestamp;
@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) BOOL shouldUnmuteWhenUserAdjustsVolume;
@property (readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double unobscuredAreaFraction;
@property (readonly, nonatomic) BOOL usesSharedAudioSession;

+ (id)playerWithAudio:(id)arg1;
- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (void)dealloc;
- (void)dispatchDidChangeProgressToAllClients:(float)arg1;
- (void)dispatchDidFailToPlayToAllClients;
- (void)dispatchDidTransitionToStateToAllClients:(unsigned long long)arg1;
- (id)initWithAudio:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)play;
- (void)removeClient:(id)arg1;
- (void)transitionToState:(unsigned long long)arg1;

@end


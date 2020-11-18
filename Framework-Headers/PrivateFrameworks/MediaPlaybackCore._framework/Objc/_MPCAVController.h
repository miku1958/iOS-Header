//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVController.h>

@class MPAVItem, MPCPlaybackEngine, NSObject;
@protocol OS_dispatch_queue;

@interface _MPCAVController : MPAVController
{
    NSObject<OS_dispatch_queue> *_unboostedAudioSessionQueue;
    BOOL _allowsNewPlaybackErrorItem;
    MPCPlaybackEngine *_playbackEngine;
    MPAVItem *_firstPlaybackErrorItem;
}

@property (nonatomic) BOOL allowsNewPlaybackErrorItem; // @synthesize allowsNewPlaybackErrorItem=_allowsNewPlaybackErrorItem;
@property (strong, nonatomic) MPAVItem *firstPlaybackErrorItem; // @synthesize firstPlaybackErrorItem=_firstPlaybackErrorItem;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property (readonly, nonatomic) long long upNextItemCount;

+ (Class)playlistManagerClass;
+ (BOOL)prefersApplicationAudioSession;
- (void).cxx_destruct;
- (void)_configureAudioSession;
- (void)_connectAVPlayer;
- (void)_contentsChanged;
- (void)_delegateAuthorizationForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_expectedAssetTypesForPlaybackMode:(long long)arg1;
- (void)_itemDidChange:(id)arg1;
- (void)_itemWillChange:(id)arg1;
- (void)_networkPolicyItemCellularRestrictedNotification:(id)arg1;
- (void)_playbackErrorNotification:(id)arg1;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1;
- (void)_setState:(long long)arg1;
- (void)addPlaybackContext:(id)arg1 toQueueWithInsertionType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setRepeatType:(long long)arg1;
- (void)setShuffleType:(long long)arg1;
- (void)updateAudioSession;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedbackEngine.h>

@class AVHapticPlayer, NSMutableIndexSet, NSMutableSet, NSTimer;

__attribute__((visibility("hidden")))
@interface _UIFeedbackHapticEngine : _UIFeedbackEngine
{
    NSMutableIndexSet *_freeChannelIndexes;
    NSMutableSet *_playersInUse;
    BOOL _serverDown;
    AVHapticPlayer *_feedbackPlayer;
    unsigned long long _mediaserverdDeathCount;
    NSTimer *_finishTimeoutTimer;
}

@property (strong, nonatomic) AVHapticPlayer *feedbackPlayer; // @synthesize feedbackPlayer=_feedbackPlayer;
@property (strong, nonatomic) NSTimer *finishTimeoutTimer; // @synthesize finishTimeoutTimer=_finishTimeoutTimer;
@property (nonatomic) unsigned long long mediaserverdDeathCount; // @synthesize mediaserverdDeathCount=_mediaserverdDeathCount;
@property (nonatomic) BOOL serverDown; // @synthesize serverDown=_serverDown;

+ (void)_setHapticPlayerCreationBlock:(CDUnknownBlockType)arg1;
+ (BOOL)_supportsPlayingFeedback:(id)arg1;
+ (id)sharedEngine;
- (void).cxx_destruct;
- (void)_activateUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_cooldownUnderlyingPlayerIfPossible;
- (id)_createFeedbackPlayer;
- (void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_feedbackPlayerDidFail:(id)arg1;
- (void)_finishAndRecyclePlayers;
- (void)_initializeFeedbackPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_isSuspended;
- (void)_prewarmUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_recycleFeedbackPlayers:(id)arg1;
- (void)_releaseRenderResourcesIfPossible;
- (void)_resetChannelIndexes;
- (void)_resetHapticPlayer;
- (void)_restartFeedbackPlayerAfterFailure:(id)arg1;
- (void)_startRunningFeedbackPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_stats_key;
- (void)_subscribeToFeedbackServerFailureNotifications;
- (BOOL)_teardownUnderlyingPlayerIfPossible;
- (double)currentTime;
- (id)init;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class AVPictureInPictureController, MPAVItem, MPCPlaybackEngine, MPPlaybackContext, MPQueuePlayer, MPVideoView, NSString;
@protocol MPAVQueueController;

@protocol MPCPlaybackEngineImplementation <NSObject>

@property (nonatomic) long long actionAtQueueEnd;
@property (nonatomic) BOOL autoPlayWhenLikelyToKeepUp;
@property (nonatomic) BOOL automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
@property (readonly, nonatomic) MPAVItem *currentItem;
@property (readonly, nonatomic) float currentRate;
@property (nonatomic) double currentTime;
@property (nonatomic) BOOL hasPlayedSuccessfully;
@property (readonly, nonatomic) AVPictureInPictureController *pictureInPictureController;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (strong, nonatomic) id<MPAVQueueController> queueController;
@property (readonly, nonatomic) MPQueuePlayer *queuePlayer;
@property (readonly, nonatomic, getter=isReloadingPlaybackContext) BOOL reloadingPlaybackContext;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long stateBeforeInterruption;
@property (readonly, nonatomic) MPVideoView *videoView;
@property (nonatomic) BOOL wantsPictureInPicture;

- (BOOL)becomeActiveWithError:(id *)arg1;
- (id)initWithPlaybackEngine:(MPCPlaybackEngine *)arg1;
- (void)loadSessionWithQueueController:(id<MPAVQueueController>)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)reloadWithPlaybackContext:(MPPlaybackContext *)arg1 identifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)replaceCurrentItemWithPlaybackContext:(MPPlaybackContext *)arg1 identifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)updateAudioSession;

@optional
- (void)beginScanningWithDirection:(long long)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)beginSeek:(int)arg1;
- (void)beginUsingVideoLayer;
- (BOOL)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 force:(BOOL)arg4 error:(id *)arg5;
- (void)endPlayback;
- (void)endPlaybackWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)endScanningWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)endSeek;
- (void)endUsingVideoLayer;
- (void)jumpToTime:(double)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)pause;
- (void)pauseWithFadeout:(float)arg1;
- (void)pauseWithFadeout:(double)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)pauseWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)play;
- (void)playWithOptions:(unsigned long long)arg1;
- (void)playWithRate:(float)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)setQueueWithPlaybackContext:(MPPlaybackContext *)arg1 identifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (BOOL)setRate:(float)arg1 completion:(void (^)(void))arg2;
- (void)setRate:(float)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)skipWithDirection:(long long)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (BOOL)skipWithDirectionShouldJumpToItemStart:(long long)arg1;
- (void)togglePlayback;
- (void)togglePlaybackWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
@end


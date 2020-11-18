//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSKLayerMediaPlayerController-Protocol.h>

@class AVPlayer, NSMutableSet, NSString;
@protocol TSKMediaPlayerControllerDelegate;

__attribute__((visibility("hidden")))
@interface TSKAVPlayerController : NSObject <TSKLayerMediaPlayerController>
{
    AVPlayer *mPlayer;
    id<TSKMediaPlayerControllerDelegate> mDelegate;
    BOOL mStreaming;
    long long mRepeatMode;
    float mVolume;
    float mRateBeforeScrubbing;
    unsigned long long mScrubbingCount;
    BOOL mCanPlay;
    BOOL mPlaying;
    BOOL mFastReversing;
    BOOL mFastForwarding;
    BOOL mIsObservingStatus;
    NSMutableSet *mObservationTokens;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) AVPlayer *player; // @synthesize player=mPlayer;
@property (readonly) Class superclass;

+ (BOOL)automaticallyNotifiesObserversOfEndTime;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)automaticallyNotifiesObserversOfStartTime;
+ (id)keyPathsForValuesAffectingAbsoluteDuration;
+ (id)keyPathsForValuesAffectingCanFastForward;
+ (id)keyPathsForValuesAffectingCanFastReverse;
+ (id)keyPathsForValuesAffectingDuration;
+ (id)keyPathsForValuesAffectingEndTime;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingStartTime;
- (double)absoluteCurrentTime;
- (double)absoluteDuration;
- (void)addObservationToken:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)beginScrubbing;
- (BOOL)canFastForward;
- (BOOL)canFastReverse;
- (BOOL)canPlay;
- (void)cancelPendingSeeks;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (void)endScrubbing;
- (double)endTime;
- (id)init;
- (id)initWithPlayer:(id)arg1 delegate:(id)arg2 streaming:(BOOL)arg3;
- (BOOL)isFastForwarding;
- (BOOL)isFastReversing;
- (BOOL)isPlaying;
- (BOOL)isScrubbing;
- (id)newLayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_applyVolumeToPlayerItem;
- (BOOL)p_canFastForwardAtCurrentTime;
- (BOOL)p_canFastReverseAtCurrentTime;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)p_playerItemDidJumpTime:(id)arg1;
- (void)p_playerItemDidPlayToEndTime:(id)arg1;
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;
- (float)rate;
- (double)remainingTime;
- (void)removeObservationToken:(id)arg1;
- (void)removePeriodicTimeObserver:(id)arg1;
- (long long)repeatMode;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)seekBackwardByOneFrame;
- (void)seekForwardByOneFrame;
- (void)seekToBeginning;
- (void)seekToEnd;
- (void)setEndTime:(double)arg1;
- (void)setFastForwarding:(BOOL)arg1;
- (void)setFastReversing:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setRate:(float)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setStartTime:(double)arg1;
- (void)setVolume:(float)arg1;
- (double)startTime;
- (void)stopSynchronously;
- (void)teardown;
- (float)volume;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayer;
@protocol TSKAVPlayerControllerDelegate;

@interface TSKAVPlayerController : NSObject
{
    AVPlayer *mPlayer;
    id<TSKAVPlayerControllerDelegate> mDelegate;
    long long mRepeatMode;
    float mVolume;
    float mRateBeforeScrubbing;
    unsigned long long mScrubbingCount;
    BOOL mCanPlay;
    BOOL mPlaying;
    BOOL mFastReversing;
    BOOL mFastForwarding;
    BOOL mIsObservingStatus;
    unsigned long long mAdditionalReferences;
    double _absoluteCurrentTime;
}

@property (nonatomic) double absoluteCurrentTime; // @synthesize absoluteCurrentTime=_absoluteCurrentTime;
@property (readonly, nonatomic) double absoluteDuration;
@property (readonly, nonatomic) BOOL canPlay; // @synthesize canPlay=mCanPlay;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) id<TSKAVPlayerControllerDelegate> delegate; // @synthesize delegate=mDelegate;
@property (readonly, nonatomic) double duration;
@property (nonatomic) double endTime;
@property (nonatomic, getter=isFastForwarding) BOOL fastForwarding; // @synthesize fastForwarding=mFastForwarding;
@property (nonatomic, getter=isFastReversing) BOOL fastReversing; // @synthesize fastReversing=mFastReversing;
@property (readonly, nonatomic) AVPlayer *player; // @synthesize player=mPlayer;
@property (nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=mPlaying;
@property (readonly, nonatomic) double remainingTime;
@property (nonatomic) long long repeatMode; // @synthesize repeatMode=mRepeatMode;
@property (readonly, nonatomic, getter=isScrubbing) BOOL scrubbing;
@property (nonatomic) double startTime;
@property (nonatomic) float volume; // @synthesize volume=mVolume;

+ (BOOL)automaticallyNotifiesObserversOfEndTime;
+ (BOOL)automaticallyNotifiesObserversOfStartTime;
+ (id)keyPathsForValuesAffectingAbsoluteDuration;
+ (id)keyPathsForValuesAffectingDuration;
+ (id)keyPathsForValuesAffectingEndTime;
+ (id)keyPathsForValuesAffectingStartTime;
- (void)addAdditionalReference;
- (void)beginScrubbing;
- (void)dealloc;
- (void)endScrubbing;
- (id)init;
- (id)initWithPlayer:(id)arg1 delegate:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_applicationDidResignActive;
- (void)p_applyVolumeToPlayerItem;
- (BOOL)p_canFastForward;
- (BOOL)p_canFastReverse;
- (void)p_closedCaptioningStatusDidChange:(id)arg1;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)p_playerItemDidPlayToEndTime:(id)arg1;
- (void)p_startObservingClosedCaptionDisplayEnabled;
- (void)p_stopObservingClosedCaptionDisplayEnabled;
- (void)p_updateClosedCaptionDisplayEnabled;
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)seekBackwardByOneFrame;
- (void)seekForwardByOneFrame;
- (void)seekToBeginning;
- (void)seekToEnd;
- (void)teardown;

@end


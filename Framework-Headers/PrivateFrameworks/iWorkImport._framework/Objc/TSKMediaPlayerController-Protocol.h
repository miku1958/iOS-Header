//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class CALayer;
@protocol TSKMediaPlayerControllerDelegate;

@protocol TSKMediaPlayerController <NSObject>

@property (readonly, nonatomic) double absoluteCurrentTime;
@property (readonly, nonatomic) double absoluteDuration;
@property (readonly, nonatomic) BOOL canFastForward;
@property (readonly, nonatomic) BOOL canFastReverse;
@property (readonly, nonatomic) BOOL canPlay;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) id<TSKMediaPlayerControllerDelegate> delegate;
@property (readonly, nonatomic) double duration;
@property (nonatomic) double endTime;
@property (nonatomic, getter=isFastForwarding) BOOL fastForwarding;
@property (nonatomic, getter=isFastReversing) BOOL fastReversing;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) float rate;
@property (readonly, nonatomic) double remainingTime;
@property (nonatomic) long long repeatMode;
@property (readonly, nonatomic, getter=isScrubbing) BOOL scrubbing;
@property (nonatomic) double startTime;
@property (nonatomic) float volume;

- (id)addPeriodicTimeObserverForInterval:(double)arg1 block:(void (^)(void))arg2;
- (void)beginScrubbing;
- (void)cancelPendingSeeks;
- (void)endScrubbing;
- (CALayer *)newLayer;
- (void)removePeriodicTimeObserver:(id)arg1;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)seekBackwardByOneFrame;
- (void)seekForwardByOneFrame;
- (void)seekToBeginning;
- (void)seekToEnd;
- (void)stopSynchronously;
- (void)teardown;
@end


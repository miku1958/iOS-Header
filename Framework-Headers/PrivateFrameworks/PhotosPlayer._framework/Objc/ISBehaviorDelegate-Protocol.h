//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/NSObject-Protocol.h>

@class ISBehavior, ISPlayerOutputTransitionOptions, ISPlayerState, NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol ISBehaviorDelegate <NSObject>
- (id)behavior:(ISBehavior *)arg1 addBoundaryTimeObserverForTimes:(NSArray *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 usingBlock:(void (^)(void))arg4;
- (void)behavior:(ISBehavior *)arg1 didSetOutputInfo:(ISPlayerState *)arg2 withTransitionOptions:(ISPlayerOutputTransitionOptions *)arg3 completion:(void (^)(BOOL))arg4;
- (void)behavior:(ISBehavior *)arg1 playVideoToTime:(CDStruct_1b6d18a9)arg2 initialRate:(float)arg3 overDuration:(double)arg4 progressHandler:(void (^)(double, struct))arg5;
- (BOOL)behavior:(ISBehavior *)arg1 prerollVideoAtRate:(float)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)behavior:(ISBehavior *)arg1 removeTimeObserver:(id)arg2;
- (BOOL)behavior:(ISBehavior *)arg1 seekVideoPlayerToTime:(CDStruct_1b6d18a9)arg2 completionHandler:(void (^)(BOOL))arg3;
- (BOOL)behavior:(ISBehavior *)arg1 seekVideoPlayerToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(void (^)(BOOL))arg5;
- (void)behavior:(ISBehavior *)arg1 setVideoForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg2;
- (void)behavior:(ISBehavior *)arg1 setVideoPlayRate:(float)arg2;
- (void)behavior:(ISBehavior *)arg1 setVideoVolume:(float)arg2;
- (float)videoPlayRate;
@end


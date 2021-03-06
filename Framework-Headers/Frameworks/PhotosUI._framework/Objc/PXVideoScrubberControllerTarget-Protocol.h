//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class AVPlayerItem, NSObject, PXVideoScrubberController;
@protocol OS_dispatch_queue;

@protocol PXVideoScrubberControllerTarget <NSObject>

@property (copy, nonatomic) CDUnknownBlockType durationChangeHandler;
@property (copy, nonatomic) CDUnknownBlockType playerItemChangeHandler;
@property (copy, nonatomic) CDUnknownBlockType statusChangeHandler;

- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 usingBlock:(void (^)(struct))arg3;
- (void)cancelPendingSeeks;
- (CDStruct_1b6d18a9)currentItemDuration;
- (float)playRate;
- (CDStruct_1b6d18a9)playerCurrentTime;
- (AVPlayerItem *)playerItem;
- (long long)playerStatus;
- (void)removeTimeObserver:(id)arg1;
- (void)videoScrubberController:(PXVideoScrubberController *)arg1 seekToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(void (^)(BOOL))arg5;

@optional
- (void)videoScrubberControllerDidEndSeeking:(PXVideoScrubberController *)arg1;
- (void)videoScrubberControllerWillBeginSeeking:(PXVideoScrubberController *)arg1;
@end


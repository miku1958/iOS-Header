//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/ISChangeObserver-Protocol.h>
#import <PhotosUICore/PXVideoScrubberControllerTarget-Protocol.h>

@class ISWrappedAVPlayer, NSString;

@interface PXSimpleWrappedVideoScrubberControllerTarget : NSObject <ISChangeObserver, PXVideoScrubberControllerTarget>
{
    CDUnknownBlockType statusChangeHandler;
    CDUnknownBlockType playerItemChangeHandler;
    CDUnknownBlockType durationChangeHandler;
    ISWrappedAVPlayer *_videoPlayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType durationChangeHandler; // @synthesize durationChangeHandler;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType playerItemChangeHandler; // @synthesize playerItemChangeHandler;
@property (copy, nonatomic) CDUnknownBlockType statusChangeHandler; // @synthesize statusChangeHandler;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ISWrappedAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;

- (void).cxx_destruct;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)cancelPendingSeeks;
- (CDStruct_1b6d18a9)currentItemDuration;
- (id)init;
- (id)initWithVideoPlayer:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (float)playRate;
- (CDStruct_1b6d18a9)playerCurrentTime;
- (id)playerItem;
- (long long)playerStatus;
- (void)removeTimeObserver:(id)arg1;
- (void)videoScrubberController:(id)arg1 seekToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

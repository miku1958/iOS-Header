//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSKAVPlayerController;

@interface TSKAVPlayerTimeController : NSObject
{
    id mTimeObserver;
    BOOL mObservingPlayerStatus;
    double mAbsoluteCurrentTime;
    double mCurrentTime;
    double mRemainingTime;
    double mUpdateInterval;
    TSKAVPlayerController *mPlayerController;
}

@property (nonatomic) double absoluteCurrentTime; // @synthesize absoluteCurrentTime=mAbsoluteCurrentTime;
@property (nonatomic) double currentTime; // @synthesize currentTime=mCurrentTime;
@property (readonly, strong, nonatomic) TSKAVPlayerController *playerController; // @synthesize playerController=mPlayerController;
@property (readonly, nonatomic) double remainingTime; // @synthesize remainingTime=mRemainingTime;
@property (nonatomic) double updateInterval; // @synthesize updateInterval=mUpdateInterval;

- (void)dealloc;
- (id)initWithPlayerController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_beginScrubbingIfNeeded;
- (void)p_createTimeObserver;
- (void)p_endScrubbing;
- (void)p_setTimeValuesWithoutScrubbing;
- (void)p_teardownTimeObserver;
- (void)startObservingTime;
- (void)stopObservingTime;

@end

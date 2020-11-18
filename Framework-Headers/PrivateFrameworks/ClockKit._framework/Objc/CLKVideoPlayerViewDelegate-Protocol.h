//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/NSObject-Protocol.h>

@class CLKVideoPlayerView;

@protocol CLKVideoPlayerViewDelegate <NSObject>
- (void)videoPlayerViewDidBeginPlaying:(CLKVideoPlayerView *)arg1;
- (void)videoPlayerViewDidFinishPlayingVideoToEnd:(CLKVideoPlayerView *)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(CLKVideoPlayerView *)arg1;

@optional
- (void)videoPlayerViewWillBeginPlaying:(CLKVideoPlayerView *)arg1;
@end


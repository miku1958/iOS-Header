//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@protocol MusicPlaybackProgressScrubbing;

@protocol MusicPlaybackProgressScrubberDelegate <NSObject>

@optional
- (void)playbackProgressScrubber:(id<MusicPlaybackProgressScrubbing>)arg1 didChangeCurrentTime:(double)arg2;
- (void)playbackProgressScrubber:(id<MusicPlaybackProgressScrubbing>)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)playbackProgressScrubberTrackingDidBegin:(id<MusicPlaybackProgressScrubbing>)arg1;
- (void)playbackProgressScrubberTrackingDidEnd:(id<MusicPlaybackProgressScrubbing>)arg1;
@end


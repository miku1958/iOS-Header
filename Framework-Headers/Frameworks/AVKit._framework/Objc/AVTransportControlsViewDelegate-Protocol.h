//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVScrubber, AVTransportControlsView;

@protocol AVTransportControlsViewDelegate <NSObject>
- (void)transportControls:(AVTransportControlsView *)arg1 scrubberDidBeginScrubbing:(AVScrubber *)arg2;
- (void)transportControls:(AVTransportControlsView *)arg1 scrubberDidEndScrubbing:(AVScrubber *)arg2;
- (void)transportControls:(AVTransportControlsView *)arg1 scrubberDidScrub:(AVScrubber *)arg2;
- (void)transportControlsNeedsLayoutIfNeeded:(AVTransportControlsView *)arg1;
@end

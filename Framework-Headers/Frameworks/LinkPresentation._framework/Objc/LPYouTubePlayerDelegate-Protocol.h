//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/NSObject-Protocol.h>

@class LPYouTubePlayerView, NSError;

@protocol LPYouTubePlayerDelegate <NSObject>

@optional
- (void)youTubePlayer:(LPYouTubePlayerView *)arg1 didChangeToFullScreen:(BOOL)arg2;
- (void)youTubePlayer:(LPYouTubePlayerView *)arg1 didChangeToState:(long long)arg2;
- (void)youTubePlayer:(LPYouTubePlayerView *)arg1 didReceiveError:(NSError *)arg2;
- (void)youTubePlayerDidBecomeReady:(LPYouTubePlayerView *)arg1;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayerUI/NSObject-Protocol.h>

@class MPUNowPlayingController, NSDictionary, NSString;

@protocol MPUNowPlayingDelegate <NSObject>

@optional
- (void)nowPlayingController:(MPUNowPlayingController *)arg1 elapsedTimeDidChange:(double)arg2;
- (void)nowPlayingController:(MPUNowPlayingController *)arg1 nowPlayingApplicationDidChange:(NSString *)arg2;
- (void)nowPlayingController:(MPUNowPlayingController *)arg1 nowPlayingInfoDidChange:(NSDictionary *)arg2;
- (void)nowPlayingController:(MPUNowPlayingController *)arg1 playbackStateDidChange:(BOOL)arg2;
- (void)nowPlayingControllerDidBeginListeningForNotifications:(MPUNowPlayingController *)arg1;
- (void)nowPlayingControllerDidStopListeningForNotifications:(MPUNowPlayingController *)arg1;
@end


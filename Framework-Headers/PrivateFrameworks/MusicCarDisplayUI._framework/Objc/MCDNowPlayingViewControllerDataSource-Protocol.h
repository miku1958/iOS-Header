//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicCarDisplayUI/NSObject-Protocol.h>

@class MCDNowPlayingViewController, NSString, UIImage;

@protocol MCDNowPlayingViewControllerDataSource <NSObject>
- (NSString *)albumTextForNowPlayingController:(MCDNowPlayingViewController *)arg1;
- (NSString *)artistTextForNowPlayingController:(MCDNowPlayingViewController *)arg1;
- (UIImage *)backgroundArtForNowPlayingController:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerIsPlaying:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(MCDNowPlayingViewController *)arg1;
- (double)playbackDurationForNowPlayingViewController:(MCDNowPlayingViewController *)arg1 withElapsedTime:(out double *)arg2;
- (NSString *)titleForNowPlayingController:(MCDNowPlayingViewController *)arg1;

@optional
- (BOOL)likedForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (unsigned long long)repeatTypeForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (NSString *)shuffleStringForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (unsigned long long)shuffleTypeForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
@end

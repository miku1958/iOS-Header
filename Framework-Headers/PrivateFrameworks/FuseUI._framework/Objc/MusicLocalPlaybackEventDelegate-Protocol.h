//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class ADBannerView, MusicLocalPlaybackEventDataSource, UIViewController;

@protocol MusicLocalPlaybackEventDelegate <NSObject>
- (UIViewController *)playbackEventDataSource:(MusicLocalPlaybackEventDataSource *)arg1 viewControllerForBannerView:(ADBannerView *)arg2;
@end

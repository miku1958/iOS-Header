//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPNowPlayingContentItem, MPNowPlayingInfoCenter;

@protocol MPNowPlayingContentItemLyricsDataSource <NSObject>
- (void)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 lyricsForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(MPNowPlayingInfoLyricsItem *, NSError *))arg3;
@end


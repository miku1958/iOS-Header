//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MPNowPlayingContentItem;

@protocol MPNowPlayingPlaybackQueueDataSource <NSObject>
- (MPNowPlayingContentItem *)contentItemForOffset:(long long)arg1;

@optional
- (MPNowPlayingContentItem *)childContentItemAtIndex:(long long)arg1 ofItem:(MPNowPlayingContentItem *)arg2;
@end


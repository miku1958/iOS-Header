//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPNowPlayingContentItem, NSString;

@protocol MPNowPlayingPlaybackQueueDataSource <NSObject>
- (MPNowPlayingContentItem *)contentItemForOffset:(long long)arg1;
- (NSString *)contentItemIdentifierForOffset:(long long)arg1;
@end


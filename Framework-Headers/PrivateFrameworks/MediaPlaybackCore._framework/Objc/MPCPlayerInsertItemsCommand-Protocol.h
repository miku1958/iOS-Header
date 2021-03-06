//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlaybackIntent, MPCPlayerCommandRequest, MPCPlayerResponseItem;

@protocol MPCPlayerInsertItemsCommand <MPCPlayerCommand>
- (MPCPlayerCommandRequest *)insertAfterPlayingItemWithPlaybackIntent:(MPCPlaybackIntent *)arg1;
- (MPCPlayerCommandRequest *)insertAtEndOfTracklistWithPlaybackIntent:(MPCPlaybackIntent *)arg1;
- (MPCPlayerCommandRequest *)insertPlaybackIntent:(MPCPlaybackIntent *)arg1 afterItem:(MPCPlayerResponseItem *)arg2;
@end


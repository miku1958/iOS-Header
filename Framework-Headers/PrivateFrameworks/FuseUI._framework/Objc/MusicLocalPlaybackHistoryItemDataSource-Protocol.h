//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MPMediaItem, NSArray;

@protocol MusicLocalPlaybackHistoryItemDataSource <NSObject>
- (NSArray *)offersForMediaItem:(MPMediaItem *)arg1;
- (BOOL)wantsBuyButtonForItem:(MPMediaItem *)arg1;
- (BOOL)wantsContextualActionsButtonForItem:(MPMediaItem *)arg1;
@end


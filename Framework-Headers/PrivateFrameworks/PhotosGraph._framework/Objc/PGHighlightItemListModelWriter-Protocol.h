//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class PGHighlightItemList;
@protocol PGHighlightItem;

@protocol PGHighlightItemListModelWriter <NSObject>
- (id)consumeHighlightItemList:(PGHighlightItemList *)arg1;
- (void)setVisibilityState:(unsigned short)arg1 forHighlightItem:(id<PGHighlightItem>)arg2;
@end


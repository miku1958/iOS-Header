//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayoutTilingOperation.h>

@interface NFLMarsSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation
{
}

+ (void)drawDebugNodeViewInFrame:(struct CGRect)arg1 context:(struct CGContext *)arg2 layoutSeed:(CDStruct_bfc4548b)arg3;
+ (BOOL)mayTileInfosTileSubBatchLayout:(id)arg1 withLayoutSeed:(CDStruct_bfc4548b)arg2;
+ (unsigned long long)tileInfosUsedCount;
- (BOOL)isReliable;
- (id)rankedLayoutRequests;
- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1;

@end


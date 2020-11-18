//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NSCopying-Protocol.h>
#import <NewsFeedLayout/NSObject-Protocol.h>

@class NFLRankedLayoutRequest, NSArray, NSString;

@protocol NFLFeedLayoutSearchConfiguration <NSObject, NSCopying>

@property (readonly, nonatomic) NSArray *allRowTypes;
@property (readonly, nonatomic) unsigned long long preferredTileInfoBatchSize;
@property (nonatomic, getter=isShowingAccessoryText) BOOL showAccessoryText;

- (NSString *)descriptionForRowType:(unsigned long long)arg1;
- (NSArray *)nextRowTypeCandidatesForRowType:(unsigned long long)arg1;
- (unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1;
- (Class)rankedLayoutGenerationOperationClassForRequest:(NFLRankedLayoutRequest *)arg1;
- (CDStruct_bfc4548b)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(NSArray *)arg2;
- (Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1;
- (BOOL)supportsTileInfoType:(unsigned long long)arg1;
- (double)transitionRankFromNoneToRowType:(unsigned long long)arg1;
- (double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2;
- (double)transitionRankFromRowTypeToNone:(unsigned long long)arg1;

@optional
- (BOOL)mayRowType:(unsigned long long)arg1 useTileInfos:(NSArray *)arg2 withPreferedContentSizeCategory:(NSString *)arg3;
- (NSArray *)preferredOrderingOfTileInfos:(NSArray *)arg1;
@end


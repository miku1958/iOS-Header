//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedComponentLayout-Protocol.h>

@class NFLFeedCollectionViewLayoutAttributes, NFLRankedLayout, NSArray, NSString;
@protocol NFLFeedTileInfo;

@interface NFLSingleComponentLayout : NSObject <NFLFeedComponentLayout>
{
    id<NFLFeedTileInfo> _tileInfo;
    NFLRankedLayout *_rankedLayout;
}

@property (readonly, nonatomic) unsigned long long columnSpan;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NFLFeedCollectionViewLayoutAttributes *layoutAttributes;
@property (readonly, nonatomic) double rank;
@property (strong, nonatomic) NFLRankedLayout *rankedLayout; // @synthesize rankedLayout=_rankedLayout;
@property (readonly, nonatomic) unsigned long long rowSpan;
@property (readonly) Class superclass;
@property (copy, nonatomic) id<NFLFeedTileInfo> tileInfo; // @synthesize tileInfo=_tileInfo;
@property (readonly, copy, nonatomic) NSArray *tileInfosUsed;

+ (id)singleComponentLayoutWithRankedLayout:(id)arg1 tileInfo:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (unsigned long long)tileInfosUsedCount;

@end


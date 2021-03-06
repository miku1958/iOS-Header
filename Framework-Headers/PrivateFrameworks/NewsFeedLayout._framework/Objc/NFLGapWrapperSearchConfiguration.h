//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedLayoutSearchConfiguration-Protocol.h>

@class NSArray, NSString;
@protocol NFLFeedLayoutSearchConfiguration;

@interface NFLGapWrapperSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration>
{
    id<NFLFeedLayoutSearchConfiguration> _headlineSearchConfiguration;
}

@property (readonly, nonatomic) NSArray *allRowTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<NFLFeedLayoutSearchConfiguration> headlineSearchConfiguration; // @synthesize headlineSearchConfiguration=_headlineSearchConfiguration;
@property (readonly, nonatomic) unsigned long long preferredTileInfoBatchSize;
@property (nonatomic, getter=isShowingAccessoryText) BOOL showAccessoryText;
@property (readonly) Class superclass;

+ (id)gapWrapperSearchConfigurationWithHeadlineSearchConfiguration:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionForRowType:(unsigned long long)arg1;
- (id)initWithHeadlineSearchConfiguration:(id)arg1;
- (BOOL)mayRowType:(unsigned long long)arg1 useTileInfos:(id)arg2 withPreferedContentSizeCategory:(id)arg3;
- (id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1;
- (unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1;
- (id)preferredOrderingOfTileInfos:(id)arg1;
- (Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1;
- (CDStruct_bfc4548b)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2;
- (Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1;
- (BOOL)supportsTileInfoType:(unsigned long long)arg1;
- (double)transitionRankFromNoneToRowType:(unsigned long long)arg1;
- (double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2;
- (double)transitionRankFromRowTypeToNone:(unsigned long long)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface PRSRankingManager : NSObject
{
    NSDictionary *_groupedResults;
    NSDictionary *_shortcutsDict;
    NSArray *_preferredTopHitGroups;
    NSDictionary *_combinedTopScoreOrder;
    NSDictionary *_combinedBottomScoreOrder;
}

@property (strong) NSDictionary *combinedBottomScoreOrder; // @synthesize combinedBottomScoreOrder=_combinedBottomScoreOrder;
@property (strong) NSDictionary *combinedTopScoreOrder; // @synthesize combinedTopScoreOrder=_combinedTopScoreOrder;
@property (strong, nonatomic) NSDictionary *groupedResults; // @synthesize groupedResults=_groupedResults;
@property (strong, nonatomic) NSArray *preferredTopHitGroups; // @synthesize preferredTopHitGroups=_preferredTopHitGroups;
@property (strong, nonatomic) NSDictionary *shortcutsDict; // @synthesize shortcutsDict=_shortcutsDict;

+ (void)addToGlanceCategories:(id)arg1;
+ (void)fetchDuetValues;
+ (void)getAppRanking;
+ (id)quickGlanceBundleIds;
- (void).cxx_destruct;
- (id)chooseTopHitsWithMaxCount:(unsigned long long)arg1 disabledGroups:(id)arg2 topHit:(id)arg3 queryString:(id)arg4 cepData:(id)arg5;
- (void)getRankedCategoriesForQuery:(id)arg1 meanScores:(id)arg2 maxScores:(id)arg3 standardDeviation:(id)arg4 serverLongTermCategoryRankOrder:(id)arg5 serverShortTermCategoryRankOrder:(id)arg6 sectionHeaderToBundleIdMapping:(id)arg7 parsecResultOrdering:(id)arg8 rankingKnobs:(id)arg9 placements:(id)arg10 allowLocal:(BOOL)arg11 topCategories:(id *)arg12 bottomCategories:(id *)arg13 blacklistedCategories:(id *)arg14 scoresForFeedback:(id *)arg15 scoreToSendInFeedback:(long long)arg16 sessionIdentifier:(unsigned long long)arg17;
- (id)getTopHitsBasedOnCategoryOrder:(id)arg1 groupedResults:(id)arg2 CEPTopHitThreshold:(double)arg3 CEPProbabilityFactor:(double)arg4 topHitCountLimit:(long long)arg5;
- (id)initWithGroupedResult:(id)arg1 preferredTopHitGroups:(id)arg2 shortcuts:(id)arg3;
- (id)postDeDuplicationTopHitResultArray:(id)arg1;
- (BOOL)rankIsMeaningfulForTopHit:(unsigned long long)arg1;

@end


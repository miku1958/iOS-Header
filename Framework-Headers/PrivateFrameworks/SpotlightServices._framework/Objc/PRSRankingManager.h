//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface PRSRankingManager : NSObject
{
    NSDictionary *_groupedResults;
    NSDictionary *_shortcutsDict;
    NSArray *_preferredTopHitGroups;
    NSMutableDictionary *_combinedTopScoreOrder;
    NSMutableDictionary *_combinedBottomScoreOrder;
}

@property (strong) NSMutableDictionary *combinedBottomScoreOrder; // @synthesize combinedBottomScoreOrder=_combinedBottomScoreOrder;
@property (strong) NSMutableDictionary *combinedTopScoreOrder; // @synthesize combinedTopScoreOrder=_combinedTopScoreOrder;
@property (strong, nonatomic) NSDictionary *groupedResults; // @synthesize groupedResults=_groupedResults;
@property (strong, nonatomic) NSArray *preferredTopHitGroups; // @synthesize preferredTopHitGroups=_preferredTopHitGroups;
@property (strong, nonatomic) NSDictionary *shortcutsDict; // @synthesize shortcutsDict=_shortcutsDict;

+ (void)addToGlanceCategories:(id)arg1;
+ (void)fetchDuetValues;
+ (id)getAppWhiteListReader;
+ (void)loadAppWhiteList;
+ (id)quickGlanceBundleIds;
- (void).cxx_destruct;
- (void)adjustScoresUsingCategoryEngagement:(id)arg1 forTopScores:(id)arg2 forBottomScores:(id)arg3 query:(id)arg4 logInfo:(id)arg5 usingRankingKnobs:(id)arg6;
- (void)getRankedCategoriesForQuery:(id)arg1 meanScores:(id)arg2 maxScores:(id)arg3 standardDeviation:(id)arg4 sectionHeaderToBundleIdMapping:(id)arg5 bundleIdToSectionHeaderMapping:(id)arg6 rankingConfiguration:(id)arg7 placements:(id)arg8 topCategories:(id *)arg9 bottomCategories:(id *)arg10 blacklistedCategories:(id *)arg11 sessionIdentifier:(unsigned long long)arg12 logString:(id)arg13 cepsUsed:(id)arg14 poorTextMatchCategories:(id)arg15;
- (id)getTopHitsBasedOnCategoryOrder:(id)arg1 groupedResults:(id)arg2 CEPTopHitThreshold:(double)arg3 CEPProbabilityFactor:(double)arg4 topHitCountLimit:(long long)arg5;
- (id)init;
- (id)initWithGroupedResult:(id)arg1 preferredTopHitGroups:(id)arg2 shortcuts:(id)arg3;
- (id)postDeDuplicationTopHitResultArray:(id)arg1;
- (BOOL)rankIsMeaningfulForTopHit:(unsigned long long)arg1;

@end


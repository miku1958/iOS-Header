//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, PRSRankingServerKnobs, SSPlistDataReader;

@interface PRSRankingConfiguration : NSObject
{
    BOOL _allow_coreduet_influence;
    BOOL _disableResultTruncation;
    NSMutableDictionary *_categoryEngagements;
    NSArray *_rankingQueries;
    NSMutableDictionary *_queryDependentCategoryProbabilities;
    SSPlistDataReader *_queryIndependentCategoryProbabilities;
    NSMutableOrderedSet *_cepBlacklistSet;
    NSArray *_parsecCategoryOrder;
    NSString *_shortcutSectionBundleID;
    NSDictionary *_sqfData;
    NSDictionary *_serverFeatures;
    PRSRankingServerKnobs *_serverKnobs;
}

@property BOOL allow_coreduet_influence; // @synthesize allow_coreduet_influence=_allow_coreduet_influence;
@property (strong) NSMutableDictionary *categoryEngagements; // @synthesize categoryEngagements=_categoryEngagements;
@property (strong) NSMutableOrderedSet *cepBlacklistSet; // @synthesize cepBlacklistSet=_cepBlacklistSet;
@property BOOL disableResultTruncation; // @synthesize disableResultTruncation=_disableResultTruncation;
@property (strong) NSArray *parsecCategoryOrder; // @synthesize parsecCategoryOrder=_parsecCategoryOrder;
@property (strong) NSMutableDictionary *queryDependentCategoryProbabilities; // @synthesize queryDependentCategoryProbabilities=_queryDependentCategoryProbabilities;
@property (strong) SSPlistDataReader *queryIndependentCategoryProbabilities; // @synthesize queryIndependentCategoryProbabilities=_queryIndependentCategoryProbabilities;
@property (strong) NSArray *rankingQueries; // @synthesize rankingQueries=_rankingQueries;
@property (strong) NSDictionary *serverFeatures; // @synthesize serverFeatures=_serverFeatures;
@property (strong) PRSRankingServerKnobs *serverKnobs; // @synthesize serverKnobs=_serverKnobs;
@property (strong) NSString *shortcutSectionBundleID; // @synthesize shortcutSectionBundleID=_shortcutSectionBundleID;
@property (strong) NSDictionary *sqfData; // @synthesize sqfData=_sqfData;

- (void).cxx_destruct;
- (void)appendToExistingCEPBlacklist:(id)arg1;
- (float)enagementProbabilityForCategoryCooked:(id)arg1;
- (float)engagementProbabilityForCategory:(id)arg1;
- (float)engagementProbabilityForCategory:(id)arg1 allowDefault:(BOOL)arg2;
- (id)init;
- (void)mergeWith:(id)arg1;
- (double)queryDependentProbabilityForCategoryWithDefaultFloor:(id)arg1;
- (double)queryIndependentProbabilityForCategoryWithDefaultFloor:(id)arg1;
- (void)updateQueryDependentProbabilityAndBlacklistSetWith:(id)arg1;
- (void)updateWithSQFData:(id)arg1;

@end


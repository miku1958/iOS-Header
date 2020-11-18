//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSNumber, NSString, SSPlistDataReader;

@interface PRSRankingConfiguration : NSObject
{
    BOOL _allow_coreduet_influence;
    BOOL _disableResultTruncation;
    float _numAppsDeduped;
    NSMutableDictionary *_categoryEngagements;
    NSArray *_rankingQueries;
    NSMutableDictionary *_queryDependentCategoryProbabilities;
    SSPlistDataReader *_queryIndependentCategoryProbabilities;
    NSNumber *_localResultQualityThreshold;
    NSMutableOrderedSet *_cepBlacklistSet;
    NSArray *_parsecCategoryOrder;
    NSString *_shortcutSectionBundleID;
    NSDictionary *_sqfData;
    NSDictionary *_serverFeatures;
}

@property (nonatomic) BOOL allow_coreduet_influence; // @synthesize allow_coreduet_influence=_allow_coreduet_influence;
@property (strong, nonatomic) NSMutableDictionary *categoryEngagements; // @synthesize categoryEngagements=_categoryEngagements;
@property (strong, nonatomic) NSMutableOrderedSet *cepBlacklistSet; // @synthesize cepBlacklistSet=_cepBlacklistSet;
@property (nonatomic) BOOL disableResultTruncation; // @synthesize disableResultTruncation=_disableResultTruncation;
@property (strong, nonatomic) NSNumber *localResultQualityThreshold; // @synthesize localResultQualityThreshold=_localResultQualityThreshold;
@property (nonatomic) float numAppsDeduped; // @synthesize numAppsDeduped=_numAppsDeduped;
@property (strong, nonatomic) NSArray *parsecCategoryOrder; // @synthesize parsecCategoryOrder=_parsecCategoryOrder;
@property (strong, nonatomic) NSMutableDictionary *queryDependentCategoryProbabilities; // @synthesize queryDependentCategoryProbabilities=_queryDependentCategoryProbabilities;
@property (strong, nonatomic) SSPlistDataReader *queryIndependentCategoryProbabilities; // @synthesize queryIndependentCategoryProbabilities=_queryIndependentCategoryProbabilities;
@property (strong, nonatomic) NSArray *rankingQueries; // @synthesize rankingQueries=_rankingQueries;
@property (strong, nonatomic) NSDictionary *serverFeatures; // @synthesize serverFeatures=_serverFeatures;
@property (strong, nonatomic) NSString *shortcutSectionBundleID; // @synthesize shortcutSectionBundleID=_shortcutSectionBundleID;
@property (strong, nonatomic) NSDictionary *sqfData; // @synthesize sqfData=_sqfData;

- (void).cxx_destruct;
- (void)appendToExistingCEPBlacklist:(id)arg1;
- (float)engagementProbabilityForCategory:(id)arg1;
- (id)init;
- (void)mergeWith:(id)arg1;
- (double)queryDependentProbabilityForCategory:(id)arg1;
- (double)queryIndependentProbabilityForCategory:(id)arg1;
- (void)updateQueryDependentProbabilityAndBlacklistSetWith:(id)arg1;
- (void)updateWithSQFData:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

#import <Search/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSNumber, NSString, PRSRankingProperties;

@interface SFSearchResult_SpotlightExtras : SFSearchResult <NSSecureCoding>
{
    BOOL _coreSpotlightSourced;
    BOOL _isParsecResult;
    NSString *_queryString;
    NSString *_protectionClass;
    NSDictionary *_featuresSet;
    NSNumber *_fileIdentifier;
    NSNumber *_parentFileIdentifier;
    NSString *_filename;
    NSNumber *_documentIdentifier;
    unsigned long long _topHitScore;
    unsigned long long _rank;
    unsigned long long _originalScore;
    unsigned long long _score;
    NSString *_launchString;
    NSArray *_launchDates;
    NSString *_userActivityType;
    NSString *_userActivitySecondaryString;
    NSData *_userActivityData;
    NSMutableArray *_duplicatedItems;
    PRSRankingProperties *_rankingProperties;
    NSString *_contentURL;
}

@property (strong, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property (nonatomic) BOOL coreSpotlightSourced; // @synthesize coreSpotlightSourced=_coreSpotlightSourced;
@property (strong, nonatomic) NSNumber *documentIdentifier; // @synthesize documentIdentifier=_documentIdentifier;
@property (strong, nonatomic) NSMutableArray *duplicatedItems; // @synthesize duplicatedItems=_duplicatedItems;
@property (strong, nonatomic) NSDictionary *featuresSet; // @synthesize featuresSet=_featuresSet;
@property (strong, nonatomic) NSNumber *fileIdentifier; // @synthesize fileIdentifier=_fileIdentifier;
@property (strong, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property (nonatomic) BOOL isParsecResult; // @synthesize isParsecResult=_isParsecResult;
@property (strong, nonatomic) NSArray *launchDates; // @synthesize launchDates=_launchDates;
@property (strong, nonatomic) NSString *launchString; // @synthesize launchString=_launchString;
@property (nonatomic) unsigned long long originalScore; // @synthesize originalScore=_originalScore;
@property (strong, nonatomic) NSNumber *parentFileIdentifier; // @synthesize parentFileIdentifier=_parentFileIdentifier;
@property (strong, nonatomic) NSString *protectionClass; // @synthesize protectionClass=_protectionClass;
@property (strong, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property (nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property (strong, nonatomic) PRSRankingProperties *rankingProperties; // @synthesize rankingProperties=_rankingProperties;
@property (nonatomic) unsigned long long score; // @synthesize score=_score;
@property (nonatomic) unsigned long long topHitScore; // @synthesize topHitScore=_topHitScore;
@property (strong, nonatomic) NSData *userActivityData; // @synthesize userActivityData=_userActivityData;
@property (strong, nonatomic) NSString *userActivitySecondaryString; // @synthesize userActivitySecondaryString=_userActivitySecondaryString;
@property (strong, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForFeedback;
- (void)setUrl:(id)arg1;

@end


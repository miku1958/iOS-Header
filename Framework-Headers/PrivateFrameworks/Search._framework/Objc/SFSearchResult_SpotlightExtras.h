//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

#import <Search/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSMutableArray, NSNumber, NSString, PRSL2FeatureVector, PRSL3FeatureVector, PRSRankingItem, SFPunchout;

@interface SFSearchResult_SpotlightExtras : SFSearchResult <NSSecureCoding>
{
    SFPunchout *_cachedPunchout;
    BOOL _coreSpotlightSourced;
    BOOL _isParsecResult;
    BOOL _hasAssociatedUserActivity;
    float _l3score;
    float _l2score;
    NSString *_queryString;
    NSString *_protectionClass;
    NSNumber *_fileIdentifier;
    NSNumber *_parentFileIdentifier;
    NSString *_filename;
    NSNumber *_documentIdentifier;
    NSString *_launchString;
    NSArray *_launchDates;
    PRSL2FeatureVector *_L2FeatureVector;
    PRSL3FeatureVector *_L3FeatureVector;
    NSString *_userActivityType;
    NSString *_userActivitySecondaryString;
    NSData *_userActivityData;
    NSDate *_contentCreationDate;
    NSMutableArray *_duplicatedItems;
    NSString *_contentURL;
    PRSRankingItem *_rankingItem;
    NSDate *_lastUsedDate;
    NSString *_mailSubject;
    NSString *_mailAuthor;
    NSArray *_contactAlternateNames;
    NSString *_mailConversationIdentifier;
    NSData *_suggestionsFeedbackData;
    struct ranking_index_score_t _score;
}

@property (strong, nonatomic) PRSL2FeatureVector *L2FeatureVector; // @synthesize L2FeatureVector=_L2FeatureVector;
@property (strong, nonatomic) PRSL3FeatureVector *L3FeatureVector; // @synthesize L3FeatureVector=_L3FeatureVector;
@property (strong) NSArray *contactAlternateNames; // @synthesize contactAlternateNames=_contactAlternateNames;
@property (strong, nonatomic) NSDate *contentCreationDate; // @synthesize contentCreationDate=_contentCreationDate;
@property (strong, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property (nonatomic) BOOL coreSpotlightSourced; // @synthesize coreSpotlightSourced=_coreSpotlightSourced;
@property (strong, nonatomic) NSNumber *documentIdentifier; // @synthesize documentIdentifier=_documentIdentifier;
@property (strong, nonatomic) NSMutableArray *duplicatedItems; // @synthesize duplicatedItems=_duplicatedItems;
@property (strong, nonatomic) NSNumber *fileIdentifier; // @synthesize fileIdentifier=_fileIdentifier;
@property (strong, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property (nonatomic) BOOL hasAssociatedUserActivity; // @synthesize hasAssociatedUserActivity=_hasAssociatedUserActivity;
@property (nonatomic) BOOL isParsecResult; // @synthesize isParsecResult=_isParsecResult;
@property (nonatomic) float l2score; // @synthesize l2score=_l2score;
@property (nonatomic) float l3score; // @synthesize l3score=_l3score;
@property (strong) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property (strong, nonatomic) NSArray *launchDates; // @synthesize launchDates=_launchDates;
@property (strong, nonatomic) NSString *launchString; // @synthesize launchString=_launchString;
@property (strong) NSString *mailAuthor; // @synthesize mailAuthor=_mailAuthor;
@property (strong) NSString *mailConversationIdentifier; // @synthesize mailConversationIdentifier=_mailConversationIdentifier;
@property (strong) NSString *mailSubject; // @synthesize mailSubject=_mailSubject;
@property (strong, nonatomic) NSNumber *parentFileIdentifier; // @synthesize parentFileIdentifier=_parentFileIdentifier;
@property (strong, nonatomic) NSString *protectionClass; // @synthesize protectionClass=_protectionClass;
@property (strong, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property (strong) PRSRankingItem *rankingItem; // @synthesize rankingItem=_rankingItem;
@property (nonatomic) struct ranking_index_score_t score; // @synthesize score=_score;
@property (strong, nonatomic) NSData *suggestionsFeedbackData; // @synthesize suggestionsFeedbackData=_suggestionsFeedbackData;
@property (strong, nonatomic) NSData *userActivityData; // @synthesize userActivityData=_userActivityData;
@property (strong, nonatomic) NSString *userActivitySecondaryString; // @synthesize userActivitySecondaryString=_userActivitySecondaryString;
@property (strong, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)objectForFeedback;
- (id)punchout;
- (void)setUrl:(id)arg1;

@end

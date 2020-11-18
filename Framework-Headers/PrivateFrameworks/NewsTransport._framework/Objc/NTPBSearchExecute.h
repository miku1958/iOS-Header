//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBSearchExecute : PBCodable <NSCopying>
{
    NSMutableArray *_articleResultIds;
    NSString *_campaignId;
    NSString *_campaignType;
    NSMutableArray *_channelResultFeedIds;
    NSString *_completedSearchString;
    NSString *_creativeId;
    int _searchExecutionMethod;
    int _searchLocation;
    NSString *_searchString;
    NSString *_storeFrontId;
    NSString *_topResultArticleId;
    NSString *_topResultChannelId;
    NSString *_topResultFeedId;
    NSString *_topResultTopicId;
    NSMutableArray *_topicResultFeedIds;
    int _totalResults;
    struct {
        unsigned int searchExecutionMethod:1;
        unsigned int searchLocation:1;
        unsigned int totalResults:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *articleResultIds; // @synthesize articleResultIds=_articleResultIds;
@property (strong, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property (strong, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property (strong, nonatomic) NSMutableArray *channelResultFeedIds; // @synthesize channelResultFeedIds=_channelResultFeedIds;
@property (strong, nonatomic) NSString *completedSearchString; // @synthesize completedSearchString=_completedSearchString;
@property (strong, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasCompletedSearchString;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasSearchExecutionMethod;
@property (nonatomic) BOOL hasSearchLocation;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (readonly, nonatomic) BOOL hasStoreFrontId;
@property (readonly, nonatomic) BOOL hasTopResultArticleId;
@property (readonly, nonatomic) BOOL hasTopResultChannelId;
@property (readonly, nonatomic) BOOL hasTopResultFeedId;
@property (readonly, nonatomic) BOOL hasTopResultTopicId;
@property (nonatomic) BOOL hasTotalResults;
@property (nonatomic) int searchExecutionMethod; // @synthesize searchExecutionMethod=_searchExecutionMethod;
@property (nonatomic) int searchLocation; // @synthesize searchLocation=_searchLocation;
@property (strong, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (strong, nonatomic) NSString *storeFrontId; // @synthesize storeFrontId=_storeFrontId;
@property (strong, nonatomic) NSString *topResultArticleId; // @synthesize topResultArticleId=_topResultArticleId;
@property (strong, nonatomic) NSString *topResultChannelId; // @synthesize topResultChannelId=_topResultChannelId;
@property (strong, nonatomic) NSString *topResultFeedId; // @synthesize topResultFeedId=_topResultFeedId;
@property (strong, nonatomic) NSString *topResultTopicId; // @synthesize topResultTopicId=_topResultTopicId;
@property (strong, nonatomic) NSMutableArray *topicResultFeedIds; // @synthesize topicResultFeedIds=_topicResultFeedIds;
@property (nonatomic) int totalResults; // @synthesize totalResults=_totalResults;

+ (Class)articleResultIdsType;
+ (Class)channelResultFeedIdsType;
+ (Class)topicResultFeedIdsType;
- (void).cxx_destruct;
- (int)StringAsSearchExecutionMethod:(id)arg1;
- (int)StringAsSearchLocation:(id)arg1;
- (void)addArticleResultIds:(id)arg1;
- (void)addChannelResultFeedIds:(id)arg1;
- (void)addTopicResultFeedIds:(id)arg1;
- (id)articleResultIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)articleResultIdsCount;
- (id)channelResultFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelResultFeedIdsCount;
- (void)clearArticleResultIds;
- (void)clearChannelResultFeedIds;
- (void)clearTopicResultFeedIds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)searchExecutionMethodAsString:(int)arg1;
- (id)searchLocationAsString:(int)arg1;
- (id)topicResultFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicResultFeedIdsCount;
- (void)writeTo:(id)arg1;

@end

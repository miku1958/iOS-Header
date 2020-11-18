//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBSearchResultSelect : PBCodable <NSCopying>
{
    NSMutableArray *_channelResultFeedIds;
    NSMutableArray *_nonSelectedResultFeedIds;
    int _searchExecutionMethod;
    int _searchLocation;
    int _searchResultSelectLocation;
    NSMutableArray *_searchResults;
    NSString *_searchString;
    int _selectedResultActionType;
    NSString *_selectedResultFeedId;
    int _selectedResultRankInSection;
    int _selectedResultSection;
    NSString *_selectedResultString;
    int _selectedResultType;
    NSString *_storeFrontId;
    NSString *_topResultFeedId;
    NSMutableArray *_topicResultFeedIds;
    int _totalResults;
    int _totalResultsInSelectedSection;
    BOOL _didSelectResult;
    BOOL _selectedResultShowMore;
    struct {
        unsigned int searchExecutionMethod:1;
        unsigned int searchLocation:1;
        unsigned int searchResultSelectLocation:1;
        unsigned int selectedResultActionType:1;
        unsigned int selectedResultRankInSection:1;
        unsigned int selectedResultSection:1;
        unsigned int selectedResultType:1;
        unsigned int totalResults:1;
        unsigned int totalResultsInSelectedSection:1;
        unsigned int didSelectResult:1;
        unsigned int selectedResultShowMore:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *channelResultFeedIds; // @synthesize channelResultFeedIds=_channelResultFeedIds;
@property (nonatomic) BOOL didSelectResult; // @synthesize didSelectResult=_didSelectResult;
@property (nonatomic) BOOL hasDidSelectResult;
@property (nonatomic) BOOL hasSearchExecutionMethod;
@property (nonatomic) BOOL hasSearchLocation;
@property (nonatomic) BOOL hasSearchResultSelectLocation;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (nonatomic) BOOL hasSelectedResultActionType;
@property (readonly, nonatomic) BOOL hasSelectedResultFeedId;
@property (nonatomic) BOOL hasSelectedResultRankInSection;
@property (nonatomic) BOOL hasSelectedResultSection;
@property (nonatomic) BOOL hasSelectedResultShowMore;
@property (readonly, nonatomic) BOOL hasSelectedResultString;
@property (nonatomic) BOOL hasSelectedResultType;
@property (readonly, nonatomic) BOOL hasStoreFrontId;
@property (readonly, nonatomic) BOOL hasTopResultFeedId;
@property (nonatomic) BOOL hasTotalResults;
@property (nonatomic) BOOL hasTotalResultsInSelectedSection;
@property (strong, nonatomic) NSMutableArray *nonSelectedResultFeedIds; // @synthesize nonSelectedResultFeedIds=_nonSelectedResultFeedIds;
@property (nonatomic) int searchExecutionMethod; // @synthesize searchExecutionMethod=_searchExecutionMethod;
@property (nonatomic) int searchLocation; // @synthesize searchLocation=_searchLocation;
@property (nonatomic) int searchResultSelectLocation; // @synthesize searchResultSelectLocation=_searchResultSelectLocation;
@property (strong, nonatomic) NSMutableArray *searchResults; // @synthesize searchResults=_searchResults;
@property (strong, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (nonatomic) int selectedResultActionType; // @synthesize selectedResultActionType=_selectedResultActionType;
@property (strong, nonatomic) NSString *selectedResultFeedId; // @synthesize selectedResultFeedId=_selectedResultFeedId;
@property (nonatomic) int selectedResultRankInSection; // @synthesize selectedResultRankInSection=_selectedResultRankInSection;
@property (nonatomic) int selectedResultSection; // @synthesize selectedResultSection=_selectedResultSection;
@property (nonatomic) BOOL selectedResultShowMore; // @synthesize selectedResultShowMore=_selectedResultShowMore;
@property (strong, nonatomic) NSString *selectedResultString; // @synthesize selectedResultString=_selectedResultString;
@property (nonatomic) int selectedResultType; // @synthesize selectedResultType=_selectedResultType;
@property (strong, nonatomic) NSString *storeFrontId; // @synthesize storeFrontId=_storeFrontId;
@property (strong, nonatomic) NSString *topResultFeedId; // @synthesize topResultFeedId=_topResultFeedId;
@property (strong, nonatomic) NSMutableArray *topicResultFeedIds; // @synthesize topicResultFeedIds=_topicResultFeedIds;
@property (nonatomic) int totalResults; // @synthesize totalResults=_totalResults;
@property (nonatomic) int totalResultsInSelectedSection; // @synthesize totalResultsInSelectedSection=_totalResultsInSelectedSection;

+ (Class)channelResultFeedIdsType;
+ (Class)nonSelectedResultFeedIdType;
+ (Class)searchResultsType;
+ (Class)topicResultFeedIdsType;
- (void).cxx_destruct;
- (int)StringAsSearchExecutionMethod:(id)arg1;
- (int)StringAsSearchLocation:(id)arg1;
- (void)addChannelResultFeedIds:(id)arg1;
- (void)addNonSelectedResultFeedId:(id)arg1;
- (void)addSearchResults:(id)arg1;
- (void)addTopicResultFeedIds:(id)arg1;
- (id)channelResultFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelResultFeedIdsCount;
- (void)clearChannelResultFeedIds;
- (void)clearNonSelectedResultFeedIds;
- (void)clearSearchResults;
- (void)clearTopicResultFeedIds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nonSelectedResultFeedIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)nonSelectedResultFeedIdsCount;
- (BOOL)readFrom:(id)arg1;
- (id)searchExecutionMethodAsString:(int)arg1;
- (id)searchLocationAsString:(int)arg1;
- (id)searchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchResultsCount;
- (id)topicResultFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicResultFeedIdsCount;
- (void)writeTo:(id)arg1;

@end


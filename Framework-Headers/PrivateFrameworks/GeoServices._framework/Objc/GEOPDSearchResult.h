//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, GEOPDDirectionIntent, GEOPDRelatedSearchSuggestion, GEOPDResolvedItem, GEOPDSearchClientBehavior, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDSearchResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDResolvedItem *_clientResolvedResult;
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    GEOPDDirectionIntent *_directionIntent;
    NSMutableArray *_disambiguationLabels;
    NSMutableArray *_displayHeaderSubstitutes;
    GEOMapRegion *_displayMapRegion;
    unsigned int _dymSuggestionVisibleTime;
    NSMutableArray *_relatedSearchSuggestions;
    NSMutableArray *_resultDetourInfos;
    NSString *_resultDisplayHeader;
    unsigned int _retainSearchTime;
    NSMutableArray *_retainSearchs;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    int _searchResultType;
    BOOL _enablePartialClientization;
    BOOL _isChainResultSet;
    BOOL _showDymSuggestionCloseButton;
    struct {
        unsigned int dymSuggestionVisibleTime:1;
        unsigned int retainSearchTime:1;
        unsigned int searchResultType:1;
        unsigned int enablePartialClientization:1;
        unsigned int isChainResultSet:1;
        unsigned int showDymSuggestionCloseButton:1;
    } _has;
}

@property (strong, nonatomic) GEOPDResolvedItem *clientResolvedResult; // @synthesize clientResolvedResult=_clientResolvedResult;
@property (strong, nonatomic) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion; // @synthesize defaultRelatedSearchSuggestion=_defaultRelatedSearchSuggestion;
@property (strong, nonatomic) GEOPDDirectionIntent *directionIntent; // @synthesize directionIntent=_directionIntent;
@property (strong, nonatomic) NSMutableArray *disambiguationLabels; // @synthesize disambiguationLabels=_disambiguationLabels;
@property (strong, nonatomic) NSMutableArray *displayHeaderSubstitutes; // @synthesize displayHeaderSubstitutes=_displayHeaderSubstitutes;
@property (strong, nonatomic) GEOMapRegion *displayMapRegion; // @synthesize displayMapRegion=_displayMapRegion;
@property (nonatomic) unsigned int dymSuggestionVisibleTime; // @synthesize dymSuggestionVisibleTime=_dymSuggestionVisibleTime;
@property (nonatomic) BOOL enablePartialClientization; // @synthesize enablePartialClientization=_enablePartialClientization;
@property (readonly, nonatomic) BOOL hasClientResolvedResult;
@property (readonly, nonatomic) BOOL hasDefaultRelatedSearchSuggestion;
@property (readonly, nonatomic) BOOL hasDirectionIntent;
@property (readonly, nonatomic) BOOL hasDisplayMapRegion;
@property (nonatomic) BOOL hasDymSuggestionVisibleTime;
@property (nonatomic) BOOL hasEnablePartialClientization;
@property (nonatomic) BOOL hasIsChainResultSet;
@property (readonly, nonatomic) BOOL hasResultDisplayHeader;
@property (nonatomic) BOOL hasRetainSearchTime;
@property (readonly, nonatomic) BOOL hasSearchClientBehavior;
@property (nonatomic) BOOL hasSearchResultType;
@property (nonatomic) BOOL hasShowDymSuggestionCloseButton;
@property (nonatomic) BOOL isChainResultSet; // @synthesize isChainResultSet=_isChainResultSet;
@property (strong, nonatomic) NSMutableArray *relatedSearchSuggestions; // @synthesize relatedSearchSuggestions=_relatedSearchSuggestions;
@property (strong, nonatomic) NSMutableArray *resultDetourInfos; // @synthesize resultDetourInfos=_resultDetourInfos;
@property (strong, nonatomic) NSString *resultDisplayHeader; // @synthesize resultDisplayHeader=_resultDisplayHeader;
@property (nonatomic) unsigned int retainSearchTime; // @synthesize retainSearchTime=_retainSearchTime;
@property (strong, nonatomic) NSMutableArray *retainSearchs; // @synthesize retainSearchs=_retainSearchs;
@property (strong, nonatomic) GEOPDSearchClientBehavior *searchClientBehavior; // @synthesize searchClientBehavior=_searchClientBehavior;
@property (nonatomic) int searchResultType; // @synthesize searchResultType=_searchResultType;
@property (nonatomic) BOOL showDymSuggestionCloseButton; // @synthesize showDymSuggestionCloseButton=_showDymSuggestionCloseButton;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)disambiguationLabelType;
+ (Class)displayHeaderSubstituteType;
+ (Class)relatedSearchSuggestionType;
+ (Class)resultDetourInfoType;
+ (Class)retainSearchType;
- (void).cxx_destruct;
- (int)StringAsSearchResultType:(id)arg1;
- (void)addDisambiguationLabel:(id)arg1;
- (void)addDisplayHeaderSubstitute:(id)arg1;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (void)addResultDetourInfo:(id)arg1;
- (void)addRetainSearch:(id)arg1;
- (void)clearDisambiguationLabels;
- (void)clearDisplayHeaderSubstitutes;
- (void)clearRelatedSearchSuggestions;
- (void)clearResultDetourInfos;
- (void)clearRetainSearchs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (id)displayHeaderSubstituteAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayHeaderSubstitutesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedSearchSuggestionsCount;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultDetourInfosCount;
- (id)retainSearchAtIndex:(unsigned long long)arg1;
- (unsigned long long)retainSearchsCount;
- (id)searchResultTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


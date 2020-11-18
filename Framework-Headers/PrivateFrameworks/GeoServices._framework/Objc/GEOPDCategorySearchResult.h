//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, GEOPDRelatedSearchSuggestion, GEOPDSearchClientBehavior, NSMutableArray, PBUnknownFields;

@interface GEOPDCategorySearchResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_browseCategorys;
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    GEOMapRegion *_displayMapRegion;
    NSMutableArray *_relatedSearchSuggestions;
    NSMutableArray *_resultDetourInfos;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    BOOL _enablePartialClientization;
    BOOL _isChainResultSet;
    struct {
        unsigned int enablePartialClientization:1;
        unsigned int isChainResultSet:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *browseCategorys; // @synthesize browseCategorys=_browseCategorys;
@property (strong, nonatomic) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion; // @synthesize defaultRelatedSearchSuggestion=_defaultRelatedSearchSuggestion;
@property (strong, nonatomic) GEOMapRegion *displayMapRegion; // @synthesize displayMapRegion=_displayMapRegion;
@property (nonatomic) BOOL enablePartialClientization; // @synthesize enablePartialClientization=_enablePartialClientization;
@property (readonly, nonatomic) BOOL hasDefaultRelatedSearchSuggestion;
@property (readonly, nonatomic) BOOL hasDisplayMapRegion;
@property (nonatomic) BOOL hasEnablePartialClientization;
@property (nonatomic) BOOL hasIsChainResultSet;
@property (readonly, nonatomic) BOOL hasSearchClientBehavior;
@property (nonatomic) BOOL isChainResultSet; // @synthesize isChainResultSet=_isChainResultSet;
@property (strong, nonatomic) NSMutableArray *relatedSearchSuggestions; // @synthesize relatedSearchSuggestions=_relatedSearchSuggestions;
@property (strong, nonatomic) NSMutableArray *resultDetourInfos; // @synthesize resultDetourInfos=_resultDetourInfos;
@property (strong, nonatomic) GEOPDSearchClientBehavior *searchClientBehavior; // @synthesize searchClientBehavior=_searchClientBehavior;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)browseCategoryType;
+ (Class)relatedSearchSuggestionType;
+ (Class)resultDetourInfoType;
- (void).cxx_destruct;
- (void)addBrowseCategory:(id)arg1;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (void)addResultDetourInfo:(id)arg1;
- (id)browseCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)browseCategorysCount;
- (void)clearBrowseCategorys;
- (void)clearRelatedSearchSuggestions;
- (void)clearResultDetourInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedSearchSuggestionsCount;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultDetourInfosCount;
- (void)writeTo:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntry, GEOPDRecentRouteInfo, GEOPDRetainedSearchMetadata, GEOPDSearchFilter, GEOPDSearchLocationParameters, GEOPDSearchStructureIntentRequestType, GEOPDViewportInfo, NSData, NSString, PBUnknownFields;

@interface GEOPDSearchParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _maxResults;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    GEOPDRetainedSearchMetadata *_retainedSearch;
    GEOPDSearchFilter *_searchFilter;
    GEOPDSearchLocationParameters *_searchLocationParameters;
    NSString *_searchString;
    GEOPDSearchStructureIntentRequestType *_searchStructureIntentType;
    int _searchType;
    int _sortOrder;
    GEOPDAutocompleteEntry *_suggestionEntry;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    GEOPDViewportInfo *_viewportInfo;
    BOOL _supportDirectionIntentSearch;
    BOOL _supportDymSuggestion;
    BOOL _supportUnresolvedDirectionIntent;
    struct {
        unsigned int maxResults:1;
        unsigned int searchType:1;
        unsigned int sortOrder:1;
        unsigned int supportDirectionIntentSearch:1;
        unsigned int supportDymSuggestion:1;
        unsigned int supportUnresolvedDirectionIntent:1;
    } _has;
}

@property (nonatomic) BOOL hasMaxResults;
@property (readonly, nonatomic) BOOL hasRecentRouteInfo;
@property (readonly, nonatomic) BOOL hasRetainedSearch;
@property (readonly, nonatomic) BOOL hasSearchFilter;
@property (readonly, nonatomic) BOOL hasSearchLocationParameters;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (readonly, nonatomic) BOOL hasSearchStructureIntentType;
@property (nonatomic) BOOL hasSearchType;
@property (nonatomic) BOOL hasSortOrder;
@property (readonly, nonatomic) BOOL hasSuggestionEntry;
@property (readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property (readonly, nonatomic) BOOL hasSuggestionMetadata;
@property (nonatomic) BOOL hasSupportDirectionIntentSearch;
@property (nonatomic) BOOL hasSupportDymSuggestion;
@property (nonatomic) BOOL hasSupportUnresolvedDirectionIntent;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
@property (strong, nonatomic) GEOPDRecentRouteInfo *recentRouteInfo; // @synthesize recentRouteInfo=_recentRouteInfo;
@property (strong, nonatomic) GEOPDRetainedSearchMetadata *retainedSearch; // @synthesize retainedSearch=_retainedSearch;
@property (strong, nonatomic) GEOPDSearchFilter *searchFilter; // @synthesize searchFilter=_searchFilter;
@property (strong, nonatomic) GEOPDSearchLocationParameters *searchLocationParameters; // @synthesize searchLocationParameters=_searchLocationParameters;
@property (strong, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (strong, nonatomic) GEOPDSearchStructureIntentRequestType *searchStructureIntentType; // @synthesize searchStructureIntentType=_searchStructureIntentType;
@property (nonatomic) int searchType; // @synthesize searchType=_searchType;
@property (nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property (strong, nonatomic) GEOPDAutocompleteEntry *suggestionEntry; // @synthesize suggestionEntry=_suggestionEntry;
@property (strong, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property (strong, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
@property (nonatomic) BOOL supportDirectionIntentSearch; // @synthesize supportDirectionIntentSearch=_supportDirectionIntentSearch;
@property (nonatomic) BOOL supportDymSuggestion; // @synthesize supportDymSuggestion=_supportDymSuggestion;
@property (nonatomic) BOOL supportUnresolvedDirectionIntent; // @synthesize supportUnresolvedDirectionIntent=_supportUnresolvedDirectionIntent;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;

- (void).cxx_destruct;
- (int)StringAsSearchType:(id)arg1;
- (int)StringAsSortOrder:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned int)arg6 traits:(id)arg7;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)searchTypeAsString:(int)arg1;
- (id)sortOrderAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

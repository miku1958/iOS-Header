//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntryAddress, GEOPDAutocompleteEntryBrandProfile, GEOPDAutocompleteEntryBusiness, GEOPDAutocompleteEntryCategory, GEOPDAutocompleteEntryClientResolved, GEOPDAutocompleteEntryDirectionIntent, GEOPDAutocompleteEntryHighlightLine, GEOPDAutocompleteEntryQuery, GEOPDRetainedSearchMetadata, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntry : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteEntryAddress *_address;
    GEOPDAutocompleteEntryBrandProfile *_brandProfile;
    GEOPDAutocompleteEntryBusiness *_business;
    GEOPDAutocompleteEntryCategory *_category;
    GEOPDAutocompleteEntryClientResolved *_clientResolved;
    GEOPDAutocompleteEntryDirectionIntent *_directionIntent;
    GEOPDAutocompleteEntryHighlightLine *_highlightExtra;
    GEOPDAutocompleteEntryHighlightLine *_highlightMain;
    GEOPDAutocompleteEntryQuery *_query;
    GEOPDRetainedSearchMetadata *_retainSearch;
    int _sortPriority;
    int _type;
    struct {
        unsigned int sortPriority:1;
        unsigned int type:1;
    } _has;
}

@property (strong, nonatomic) GEOPDAutocompleteEntryAddress *address; // @synthesize address=_address;
@property (strong, nonatomic) GEOPDAutocompleteEntryBrandProfile *brandProfile; // @synthesize brandProfile=_brandProfile;
@property (strong, nonatomic) GEOPDAutocompleteEntryBusiness *business; // @synthesize business=_business;
@property (strong, nonatomic) GEOPDAutocompleteEntryCategory *category; // @synthesize category=_category;
@property (strong, nonatomic) GEOPDAutocompleteEntryClientResolved *clientResolved; // @synthesize clientResolved=_clientResolved;
@property (strong, nonatomic) GEOPDAutocompleteEntryDirectionIntent *directionIntent; // @synthesize directionIntent=_directionIntent;
@property (readonly, nonatomic) BOOL hasAddress;
@property (readonly, nonatomic) BOOL hasBrandProfile;
@property (readonly, nonatomic) BOOL hasBusiness;
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasClientResolved;
@property (readonly, nonatomic) BOOL hasDirectionIntent;
@property (readonly, nonatomic) BOOL hasHighlightExtra;
@property (readonly, nonatomic) BOOL hasHighlightMain;
@property (readonly, nonatomic) BOOL hasQuery;
@property (readonly, nonatomic) BOOL hasRetainSearch;
@property (nonatomic) BOOL hasSortPriority;
@property (nonatomic) BOOL hasType;
@property (strong, nonatomic) GEOPDAutocompleteEntryHighlightLine *highlightExtra; // @synthesize highlightExtra=_highlightExtra;
@property (strong, nonatomic) GEOPDAutocompleteEntryHighlightLine *highlightMain; // @synthesize highlightMain=_highlightMain;
@property (strong, nonatomic) GEOPDAutocompleteEntryQuery *query; // @synthesize query=_query;
@property (strong, nonatomic) GEOPDRetainedSearchMetadata *retainSearch; // @synthesize retainSearch=_retainSearch;
@property (nonatomic) int sortPriority; // @synthesize sortPriority=_sortPriority;
@property (nonatomic) int type; // @synthesize type=_type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


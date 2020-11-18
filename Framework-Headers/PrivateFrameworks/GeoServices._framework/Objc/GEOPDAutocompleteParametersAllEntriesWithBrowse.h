//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntry, GEOPDViewportInfo, NSData, NSString;

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying>
{
    GEOPDAutocompleteEntry *_categorySuggestionEntry;
    NSData *_categorySuggestionEntryMetadata;
    int _maxResults;
    NSString *_query;
    GEOPDViewportInfo *_viewportInfo;
    BOOL _highlightDiff;
    CDStruct_00ef3c1e _has;
}

@property (strong, nonatomic) GEOPDAutocompleteEntry *categorySuggestionEntry; // @synthesize categorySuggestionEntry=_categorySuggestionEntry;
@property (strong, nonatomic) NSData *categorySuggestionEntryMetadata; // @synthesize categorySuggestionEntryMetadata=_categorySuggestionEntryMetadata;
@property (readonly, nonatomic) BOOL hasCategorySuggestionEntry;
@property (readonly, nonatomic) BOOL hasCategorySuggestionEntryMetadata;
@property (nonatomic) BOOL hasHighlightDiff;
@property (nonatomic) BOOL hasMaxResults;
@property (readonly, nonatomic) BOOL hasQuery;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (nonatomic) BOOL highlightDiff; // @synthesize highlightDiff=_highlightDiff;
@property (nonatomic) int maxResults; // @synthesize maxResults=_maxResults;
@property (strong, nonatomic) NSString *query; // @synthesize query=_query;
@property (strong, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


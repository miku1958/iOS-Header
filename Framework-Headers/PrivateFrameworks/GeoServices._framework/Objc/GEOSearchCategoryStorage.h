//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntry, GEOPDBrowseCategory;

@interface GEOSearchCategoryStorage : PBCodable <NSCopying>
{
    GEOPDAutocompleteEntry *_autocompleteEntry;
    GEOPDBrowseCategory *_browseCategory;
}

@property (strong, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry; // @synthesize autocompleteEntry=_autocompleteEntry;
@property (strong, nonatomic) GEOPDBrowseCategory *browseCategory; // @synthesize browseCategory=_browseCategory;
@property (readonly, nonatomic) BOOL hasAutocompleteEntry;
@property (readonly, nonatomic) BOOL hasBrowseCategory;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithSearchCategory:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


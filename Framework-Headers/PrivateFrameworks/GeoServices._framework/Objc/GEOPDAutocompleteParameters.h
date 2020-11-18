//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteParametersAddressOnly, GEOPDAutocompleteParametersAllEntries, GEOPDAutocompleteParametersAllEntriesWithBrowse, GEOPDAutocompleteParametersFullEntriesOnly, GEOPDAutocompleteParametersLocalitiesAndLandmarks, GEOPDAutocompleteParametersSiriSearch, PBUnknownFields;

@interface GEOPDAutocompleteParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteParametersAddressOnly *_addressOnly;
    GEOPDAutocompleteParametersAllEntries *_allEntries;
    GEOPDAutocompleteParametersAllEntriesWithBrowse *_allEntriesWithBrowse;
    GEOPDAutocompleteParametersFullEntriesOnly *_fullEntries;
    GEOPDAutocompleteParametersLocalitiesAndLandmarks *_localitiesAndLandmarks;
    int _requestType;
    GEOPDAutocompleteParametersSiriSearch *_siriSearch;
    CDStruct_7c66fec0 _has;
}

@property (strong, nonatomic) GEOPDAutocompleteParametersAddressOnly *addressOnly; // @synthesize addressOnly=_addressOnly;
@property (strong, nonatomic) GEOPDAutocompleteParametersAllEntries *allEntries; // @synthesize allEntries=_allEntries;
@property (strong, nonatomic) GEOPDAutocompleteParametersAllEntriesWithBrowse *allEntriesWithBrowse; // @synthesize allEntriesWithBrowse=_allEntriesWithBrowse;
@property (strong, nonatomic) GEOPDAutocompleteParametersFullEntriesOnly *fullEntries; // @synthesize fullEntries=_fullEntries;
@property (readonly, nonatomic) BOOL hasAddressOnly;
@property (readonly, nonatomic) BOOL hasAllEntries;
@property (readonly, nonatomic) BOOL hasAllEntriesWithBrowse;
@property (readonly, nonatomic) BOOL hasFullEntries;
@property (readonly, nonatomic) BOOL hasLocalitiesAndLandmarks;
@property (nonatomic) BOOL hasRequestType;
@property (readonly, nonatomic) BOOL hasSiriSearch;
@property (strong, nonatomic) GEOPDAutocompleteParametersLocalitiesAndLandmarks *localitiesAndLandmarks; // @synthesize localitiesAndLandmarks=_localitiesAndLandmarks;
@property (nonatomic) int requestType; // @synthesize requestType=_requestType;
@property (strong, nonatomic) GEOPDAutocompleteParametersSiriSearch *siriSearch; // @synthesize siriSearch=_siriSearch;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (int)StringAsRequestType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


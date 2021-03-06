//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSString, PBDataReader;

@interface GEORPCorrectedSearch : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
    GEOPlaceSearchRequest *_placeSearchRequest;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSString *_preferredSearchDisplayLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _correctedSearchResultIndex;
    unsigned int _originalSearchResultIndex;
    struct {
        unsigned int has_correctedSearchResultIndex:1;
        unsigned int has_originalSearchResultIndex:1;
        unsigned int read_placeRequest:1;
        unsigned int read_placeResponse:1;
        unsigned int read_placeSearchRequest:1;
        unsigned int read_placeSearchResponse:1;
        unsigned int read_preferredSearchDisplayLocation:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) unsigned int correctedSearchResultIndex;
@property (nonatomic) BOOL hasCorrectedSearchResultIndex;
@property (nonatomic) BOOL hasOriginalSearchResultIndex;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (readonly, nonatomic) BOOL hasPlaceResponse;
@property (readonly, nonatomic) BOOL hasPlaceSearchRequest;
@property (readonly, nonatomic) BOOL hasPlaceSearchResponse;
@property (readonly, nonatomic) BOOL hasPreferredSearchDisplayLocation;
@property (nonatomic) unsigned int originalSearchResultIndex;
@property (strong, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (strong, nonatomic) GEOPDPlaceResponse *placeResponse;
@property (strong, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;
@property (strong, nonatomic) GEOPlaceSearchResponse *placeSearchResponse;
@property (strong, nonatomic) NSString *preferredSearchDisplayLocation;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (BOOL)containsReportableData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSString;

@interface GEORPCorrectedSearch : PBCodable <NSCopying>
{
    unsigned int _correctedSearchResultIndex;
    unsigned int _originalSearchResultIndex;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
    GEOPlaceSearchRequest *_placeSearchRequest;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSString *_preferredSearchDisplayLocation;
    struct {
        unsigned int correctedSearchResultIndex:1;
        unsigned int originalSearchResultIndex:1;
    } _has;
}

@property (nonatomic) unsigned int correctedSearchResultIndex; // @synthesize correctedSearchResultIndex=_correctedSearchResultIndex;
@property (nonatomic) BOOL hasCorrectedSearchResultIndex;
@property (nonatomic) BOOL hasOriginalSearchResultIndex;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (readonly, nonatomic) BOOL hasPlaceResponse;
@property (readonly, nonatomic) BOOL hasPlaceSearchRequest;
@property (readonly, nonatomic) BOOL hasPlaceSearchResponse;
@property (readonly, nonatomic) BOOL hasPreferredSearchDisplayLocation;
@property (nonatomic) unsigned int originalSearchResultIndex; // @synthesize originalSearchResultIndex=_originalSearchResultIndex;
@property (strong, nonatomic) GEOPDPlaceRequest *placeRequest; // @synthesize placeRequest=_placeRequest;
@property (strong, nonatomic) GEOPDPlaceResponse *placeResponse; // @synthesize placeResponse=_placeResponse;
@property (strong, nonatomic) GEOPlaceSearchRequest *placeSearchRequest; // @synthesize placeSearchRequest=_placeSearchRequest;
@property (strong, nonatomic) GEOPlaceSearchResponse *placeSearchResponse; // @synthesize placeSearchResponse=_placeSearchResponse;
@property (strong, nonatomic) NSString *preferredSearchDisplayLocation; // @synthesize preferredSearchDisplayLocation=_preferredSearchDisplayLocation;

- (BOOL)containsReportableData;
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


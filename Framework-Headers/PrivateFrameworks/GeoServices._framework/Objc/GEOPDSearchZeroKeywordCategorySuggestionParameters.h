//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, PBUnknownFields;

@interface GEOPDSearchZeroKeywordCategorySuggestionParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _requestLocalTimestamp;
    unsigned int _maxNumCategoriesPerEntry;
    GEOLatLng *_significantLocation;
    int _userPreferredTransportType;
    struct {
        unsigned int requestLocalTimestamp:1;
        unsigned int maxNumCategoriesPerEntry:1;
        unsigned int userPreferredTransportType:1;
    } _has;
}

@property (nonatomic) BOOL hasMaxNumCategoriesPerEntry;
@property (nonatomic) BOOL hasRequestLocalTimestamp;
@property (readonly, nonatomic) BOOL hasSignificantLocation;
@property (nonatomic) BOOL hasUserPreferredTransportType;
@property (nonatomic) unsigned int maxNumCategoriesPerEntry; // @synthesize maxNumCategoriesPerEntry=_maxNumCategoriesPerEntry;
@property (nonatomic) double requestLocalTimestamp; // @synthesize requestLocalTimestamp=_requestLocalTimestamp;
@property (strong, nonatomic) GEOLatLng *significantLocation; // @synthesize significantLocation=_significantLocation;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) int userPreferredTransportType; // @synthesize userPreferredTransportType=_userPreferredTransportType;

- (int)StringAsUserPreferredTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)userPreferredTransportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


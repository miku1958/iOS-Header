//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSData, PBDataReader;

@interface GEORPPhotoWithMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    double _creationDate;
    NSData *_data;
    GEOLatLng *_geotagCoordinate;
    double _geotagHorizontalAccuracy;
    double _geotagTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_creationDate:1;
        unsigned int has_geotagHorizontalAccuracy:1;
        unsigned int has_geotagTimestamp:1;
        unsigned int read_data:1;
        unsigned int read_geotagCoordinate:1;
        unsigned int wrote_creationDate:1;
        unsigned int wrote_data:1;
        unsigned int wrote_geotagCoordinate:1;
        unsigned int wrote_geotagHorizontalAccuracy:1;
        unsigned int wrote_geotagTimestamp:1;
    } _flags;
}

@property (nonatomic) double creationDate;
@property (strong, nonatomic) NSData *data;
@property (strong, nonatomic) GEOLatLng *geotagCoordinate;
@property (nonatomic) double geotagHorizontalAccuracy;
@property (nonatomic) double geotagTimestamp;
@property (nonatomic) BOOL hasCreationDate;
@property (readonly, nonatomic) BOOL hasData;
@property (readonly, nonatomic) BOOL hasGeotagCoordinate;
@property (nonatomic) BOOL hasGeotagHorizontalAccuracy;
@property (nonatomic) BOOL hasGeotagTimestamp;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)_readData;
- (void)_readGeotagCoordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

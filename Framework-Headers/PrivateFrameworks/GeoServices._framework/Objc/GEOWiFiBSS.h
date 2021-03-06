//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOLatLngE7, NSMutableArray, NSString, PBDataReader;

@interface GEOWiFiBSS : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_95bda58d _attributes;
    NSString *_identifier;
    GEOLatLngE7 *_latLngE7;
    GEOLatLng *_location;
    NSMutableArray *_qualities;
    long long _uniqueIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_uniqueIdentifier:1;
        unsigned int read_attributes:1;
        unsigned int read_identifier:1;
        unsigned int read_latLngE7:1;
        unsigned int read_location:1;
        unsigned int read_qualities:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, nonatomic) int *attributes;
@property (readonly, nonatomic) unsigned long long attributesCount;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLatLngE7;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasUniqueIdentifier;
@property (strong, nonatomic) NSString *identifier;
@property (strong, nonatomic) GEOLatLngE7 *latLngE7;
@property (strong, nonatomic) GEOLatLng *location;
@property (strong, nonatomic) NSMutableArray *qualities;
@property (nonatomic) long long uniqueIdentifier;

+ (BOOL)isValid:(id)arg1;
+ (Class)qualitiesType;
- (void).cxx_destruct;
- (int)StringAsAttributes:(id)arg1;
- (void)addAttributes:(int)arg1;
- (void)addQualities:(id)arg1;
- (id)attributesAsString:(int)arg1;
- (int)attributesAtIndex:(unsigned long long)arg1;
- (void)clearAttributes;
- (void)clearQualities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
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
- (id)qualitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)qualitiesCount;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end


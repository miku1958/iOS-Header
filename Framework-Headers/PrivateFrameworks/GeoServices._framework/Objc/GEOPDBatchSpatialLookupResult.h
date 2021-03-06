//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchSpatialLookupResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spatialEventLookupResults;
    NSMutableArray *_spatialPlaceLookupResults;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _statusCode;
    struct {
        unsigned int has_statusCode:1;
        unsigned int read_unknownFields:1;
        unsigned int read_spatialEventLookupResults:1;
        unsigned int read_spatialPlaceLookupResults:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (strong, nonatomic) NSMutableArray *spatialEventLookupResults;
@property (strong, nonatomic) NSMutableArray *spatialPlaceLookupResults;
@property (nonatomic) int statusCode;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
+ (Class)spatialEventLookupResultType;
+ (Class)spatialPlaceLookupResultType;
- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addSpatialEventLookupResult:(id)arg1;
- (void)addSpatialPlaceLookupResult:(id)arg1;
- (void)clearSpatialEventLookupResults;
- (void)clearSpatialPlaceLookupResults;
- (void)clearUnknownFields:(BOOL)arg1;
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
- (id)spatialEventLookupResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)spatialEventLookupResultsCount;
- (id)spatialPlaceLookupResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)spatialPlaceLookupResultsCount;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


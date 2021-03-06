//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOAddressCorrectionResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_addressID;
    NSMutableArray *_significantLocations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_addressID:1;
        unsigned int read_significantLocations:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSString *addressID;
@property (readonly, nonatomic) BOOL hasAddressID;
@property (strong, nonatomic) NSMutableArray *significantLocations;

+ (BOOL)isValid:(id)arg1;
+ (Class)significantLocationType;
- (void).cxx_destruct;
- (void)addSignificantLocation:(id)arg1;
- (void)clearSensitiveFields;
- (void)clearSignificantLocations;
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
- (id)significantLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)significantLocationsCount;
- (void)writeTo:(id)arg1;

@end


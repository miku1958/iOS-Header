//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOLPRVehicle : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_licensePlate;
    NSString *_name;
    NSString *_powerTypeKey;
    NSString *_vehicleTypeKey;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_licensePlate:1;
        unsigned int read_name:1;
        unsigned int read_powerTypeKey:1;
        unsigned int read_vehicleTypeKey:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, nonatomic) BOOL hasLicensePlate;
@property (readonly, nonatomic) BOOL hasPowerTypeKey;
@property (readonly, nonatomic) BOOL hasVehicleTypeKey;
@property (strong, nonatomic) NSString *licensePlate;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *powerTypeKey;
@property (strong, nonatomic) NSString *vehicleTypeKey;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
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


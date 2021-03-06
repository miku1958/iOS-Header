//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLPRLicensePlateStructure, NSMutableArray, PBDataReader;

@interface GEOLPRLicensePlateInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOLPRLicensePlateStructure *_licensePlateStructure;
    NSMutableArray *_powerTypeKeys;
    NSMutableArray *_vehicleTypeKeys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_licensePlateStructure:1;
        unsigned int read_powerTypeKeys:1;
        unsigned int read_vehicleTypeKeys:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, nonatomic) BOOL hasLicensePlateStructure;
@property (strong, nonatomic) GEOLPRLicensePlateStructure *licensePlateStructure;
@property (strong, nonatomic) NSMutableArray *powerTypeKeys;
@property (strong, nonatomic) NSMutableArray *vehicleTypeKeys;

+ (BOOL)isValid:(id)arg1;
+ (Class)powerTypeKeysType;
+ (Class)vehicleTypeKeysType;
- (void).cxx_destruct;
- (void)addPowerTypeKeys:(id)arg1;
- (void)addVehicleTypeKeys:(id)arg1;
- (void)clearPowerTypeKeys;
- (void)clearVehicleTypeKeys;
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
- (id)powerTypeKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)powerTypeKeysCount;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)vehicleTypeKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)vehicleTypeKeysCount;
- (void)writeTo:(id)arg1;

@end


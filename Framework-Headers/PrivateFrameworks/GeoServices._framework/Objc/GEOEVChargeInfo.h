//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOEVChargeInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _gainedBatteryPercentage;
    unsigned int _chargingTime;
    unsigned int _gainedBatteryCharge;
    unsigned int _gainedTravelRange;
    struct {
        unsigned int has_gainedBatteryPercentage:1;
        unsigned int has_chargingTime:1;
        unsigned int has_gainedBatteryCharge:1;
        unsigned int has_gainedTravelRange:1;
    } _flags;
}

@property (nonatomic) unsigned int chargingTime;
@property (nonatomic) unsigned int gainedBatteryCharge;
@property (nonatomic) double gainedBatteryPercentage;
@property (nonatomic) unsigned int gainedTravelRange;
@property (nonatomic) BOOL hasChargingTime;
@property (nonatomic) BOOL hasGainedBatteryCharge;
@property (nonatomic) BOOL hasGainedBatteryPercentage;
@property (nonatomic) BOOL hasGainedTravelRange;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaCarPlayHeadUnitContext : PBCodable
{
    NSString *_vehicleName;
    NSString *_vehicleModel;
    NSString *_vehicleManufacturer;
    BOOL _hasVehicleName;
    BOOL _hasVehicleModel;
    BOOL _hasVehicleManufacturer;
}

@property (nonatomic) BOOL hasVehicleManufacturer; // @synthesize hasVehicleManufacturer=_hasVehicleManufacturer;
@property (nonatomic) BOOL hasVehicleModel; // @synthesize hasVehicleModel=_hasVehicleModel;
@property (nonatomic) BOOL hasVehicleName; // @synthesize hasVehicleName=_hasVehicleName;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *vehicleManufacturer; // @synthesize vehicleManufacturer=_vehicleManufacturer;
@property (copy, nonatomic) NSString *vehicleModel; // @synthesize vehicleModel=_vehicleModel;
@property (copy, nonatomic) NSString *vehicleName; // @synthesize vehicleName=_vehicleName;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end


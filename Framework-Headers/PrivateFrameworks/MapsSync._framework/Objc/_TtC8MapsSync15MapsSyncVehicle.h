//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSync/_TtC8MapsSync16MapsSyncBaseItem.h>

@class MISSING_TYPE, NSData, NSDate, NSNumber, NSString;

@interface _TtC8MapsSync15MapsSyncVehicle : _TtC8MapsSync16MapsSyncBaseItem
{
    MISSING_TYPE *_colorHex;
    MISSING_TYPE *_currentVehicleState;
    MISSING_TYPE *_dateOfVehicleIngestion;
    MISSING_TYPE *_displayName;
    MISSING_TYPE *_headUnitBluetoothIdentifier;
    MISSING_TYPE *_headUnitMacAddress;
    MISSING_TYPE *_iapIdentifier;
    MISSING_TYPE *_lastStateUpdateDate;
    MISSING_TYPE *_licensePlate;
    MISSING_TYPE *_lprPowerType;
    MISSING_TYPE *_lprVehicleType;
    MISSING_TYPE *_manufacturer;
    MISSING_TYPE *_model;
    MISSING_TYPE *_pairedAppIdentifier;
    MISSING_TYPE *_powerByConnector;
    MISSING_TYPE *_siriIntentsIdentifier;
    MISSING_TYPE *_supportedConnectors;
    MISSING_TYPE *_vehicleIdentifier;
    MISSING_TYPE *_vehicleType;
    MISSING_TYPE *_year;
}

@property (nonatomic, readonly) NSString *colorHex;
@property (nonatomic, readonly) NSData *currentVehicleState;
@property (nonatomic, readonly) NSDate *dateOfVehicleIngestion;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *headUnitBluetoothIdentifier;
@property (nonatomic, readonly) NSString *headUnitMacAddress;
@property (nonatomic, readonly) NSString *iapIdentifier;
@property (nonatomic, readonly) NSDate *lastStateUpdateDate;
@property (nonatomic, readonly) NSString *licensePlate;
@property (nonatomic, readonly) NSString *lprPowerType;
@property (nonatomic, readonly) NSString *lprVehicleType;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *pairedAppIdentifier;
@property (nonatomic, readonly) NSData *powerByConnector;
@property (nonatomic, readonly) NSString *siriIntentsIdentifier;
@property (nonatomic, readonly) NSNumber *supportedConnectors;
@property (nonatomic, readonly) NSString *vehicleIdentifier;
@property (nonatomic, readonly) NSNumber *vehicleType;
@property (nonatomic, readonly) NSNumber *year;

+ (void)fetch:(long long)arg1:(long long)arg2:(id)arg3 sort:(long long)arg4 ascending:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)fetchForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)arg1;

@end


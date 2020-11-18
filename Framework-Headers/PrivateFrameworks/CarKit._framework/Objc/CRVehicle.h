//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarKit/NSSecureCoding-Protocol.h>

@class NSData, NSSet, NSString, NSUUID;

@interface CRVehicle : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    NSString *_vehicleName;
    NSSet *_accessoryProtocols;
    NSData *_certificateSerialNumber;
    unsigned long long _pairingStatus;
    NSString *_bluetoothAddress;
    NSString *_carplayWiFiUUID;
}

@property (strong, nonatomic) NSSet *accessoryProtocols; // @synthesize accessoryProtocols=_accessoryProtocols;
@property (strong, nonatomic) NSString *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property (strong, nonatomic) NSString *carplayWiFiUUID; // @synthesize carplayWiFiUUID=_carplayWiFiUUID;
@property (strong, nonatomic) NSData *certificateSerialNumber; // @synthesize certificateSerialNumber=_certificateSerialNumber;
@property (strong, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL isPaired;
@property (nonatomic) unsigned long long pairingStatus; // @synthesize pairingStatus=_pairingStatus;
@property (strong, nonatomic) NSString *vehicleName; // @synthesize vehicleName=_vehicleName;

+ (BOOL)supportsSecureCoding;
+ (id)vehicleForVehicleAccessory:(id)arg1;
- (void).cxx_destruct;
- (id)_pairingDebugDescription;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 certificateSerial:(id)arg2;
- (void)mergeAttributesFromVehicle:(id)arg1;

@end


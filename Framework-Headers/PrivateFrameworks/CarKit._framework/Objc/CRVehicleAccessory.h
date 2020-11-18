//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessory, NSArray, NSData, NSNumber, NSString;

@interface CRVehicleAccessory : NSObject
{
    BOOL _supportsUSBCarPlay;
    BOOL _supportsWirelessCarPlay;
    BOOL _supportsWiredBluetoothPairing;
    NSString *_vehicleName;
    NSData *_certificateSerialNumber;
    NSArray *_accessoryProtocols;
    NSString *_bluetoothAddress;
    NSNumber *_connectionID;
    EAAccessory *_accessory;
}

@property (weak, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
@property (strong, nonatomic) NSArray *accessoryProtocols; // @synthesize accessoryProtocols=_accessoryProtocols;
@property (strong, nonatomic) NSString *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property (strong, nonatomic) NSData *certificateSerialNumber; // @synthesize certificateSerialNumber=_certificateSerialNumber;
@property (strong, nonatomic) NSNumber *connectionID; // @synthesize connectionID=_connectionID;
@property (nonatomic) BOOL supportsUSBCarPlay; // @synthesize supportsUSBCarPlay=_supportsUSBCarPlay;
@property (nonatomic) BOOL supportsWiredBluetoothPairing; // @synthesize supportsWiredBluetoothPairing=_supportsWiredBluetoothPairing;
@property (nonatomic) BOOL supportsWirelessCarPlay; // @synthesize supportsWirelessCarPlay=_supportsWirelessCarPlay;
@property (strong, nonatomic) NSString *vehicleName; // @synthesize vehicleName=_vehicleName;

- (void).cxx_destruct;
- (BOOL)_updateName;
- (void)beginWiredBluetoothPairing:(CDUnknownBlockType)arg1;
- (id)description;
- (id)displayName;
- (BOOL)isConnectedWirelessly;
- (void)requestWiFiCredentials;

@end


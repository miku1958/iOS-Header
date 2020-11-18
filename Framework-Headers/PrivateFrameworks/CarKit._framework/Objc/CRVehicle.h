//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarKit/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSSet, NSString, NSUUID;

@interface CRVehicle : NSObject <NSSecureCoding>
{
    BOOL _supportsEnhancedIntegration;
    NSUUID *_identifier;
    NSString *_vehicleName;
    NSSet *_accessoryProtocols;
    unsigned long long _enhancedIntegrationStatus;
    NSData *_certificateSerialNumber;
    unsigned long long _pairingStatus;
    NSString *_bluetoothAddress;
    NSString *_carplayWiFiUUID;
    NSDate *_lastConnectedDate;
    NSString *_vehicleModelName;
    NSString *_PPID;
    NSString *_internalNotes;
    long long _albumArtUserPreference;
}

@property (strong, nonatomic) NSString *PPID; // @synthesize PPID=_PPID;
@property (strong, nonatomic) NSSet *accessoryProtocols; // @synthesize accessoryProtocols=_accessoryProtocols;
@property (nonatomic) long long albumArtUserPreference; // @synthesize albumArtUserPreference=_albumArtUserPreference;
@property (strong, nonatomic) NSString *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property (strong, nonatomic) NSString *carplayWiFiUUID; // @synthesize carplayWiFiUUID=_carplayWiFiUUID;
@property (strong, nonatomic) NSData *certificateSerialNumber; // @synthesize certificateSerialNumber=_certificateSerialNumber;
@property (nonatomic) unsigned long long enhancedIntegrationStatus; // @synthesize enhancedIntegrationStatus=_enhancedIntegrationStatus;
@property (strong, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *internalNotes; // @synthesize internalNotes=_internalNotes;
@property (readonly, nonatomic) BOOL isEnhancedIntegrationEnabled;
@property (readonly, nonatomic) BOOL isPaired;
@property (strong, nonatomic) NSDate *lastConnectedDate; // @synthesize lastConnectedDate=_lastConnectedDate;
@property (nonatomic) unsigned long long pairingStatus; // @synthesize pairingStatus=_pairingStatus;
@property (nonatomic) BOOL supportsEnhancedIntegration; // @synthesize supportsEnhancedIntegration=_supportsEnhancedIntegration;
@property (strong, nonatomic) NSString *vehicleModelName; // @synthesize vehicleModelName=_vehicleModelName;
@property (strong, nonatomic) NSString *vehicleName; // @synthesize vehicleName=_vehicleName;

+ (BOOL)supportsSecureCoding;
+ (id)vehicleForVehicleAccessory:(id)arg1;
- (void).cxx_destruct;
- (id)_enhancedIntegrationDebugDescription;
- (id)_pairingDebugDescription;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 certificateSerial:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeAttributesFromVehicle:(id)arg1;

@end

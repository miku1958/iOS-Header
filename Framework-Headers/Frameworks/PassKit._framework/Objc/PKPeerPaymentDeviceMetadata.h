//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPeerPaymentDeviceMetadata : NSObject <NSSecureCoding>
{
    NSString *_secureElementIdentifier;
    NSString *_uniqueDeviceIdentifier;
    NSString *_serialNumber;
    NSString *_phoneNumber;
    NSString *_deviceName;
}

@property (copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property (copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property (copy, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property (copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property (copy, nonatomic) NSString *uniqueDeviceIdentifier; // @synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier;

+ (id)deviceMetadataForCurrentDevice;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPeerPaymentDeviceMetadata:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class APSConnection, NSData;
@protocol OS_dispatch_semaphore;

@interface AADeviceInfo : NSObject
{
    APSConnection *_apsConnection;
    BOOL _tokenDone;
    NSData *_token;
    NSObject<OS_dispatch_semaphore> *_tokenSema;
}

+ (id)apnsToken;
+ (id)appleIDClientIdentifier;
+ (id)clientInfoHeader;
+ (id)infoDictionary;
+ (id)osVersion;
+ (id)productVersion;
+ (id)serialNumber;
+ (id)udid;
+ (id)userAgentHeader;
- (void).cxx_destruct;
- (id)apnsToken;
- (id)appleIDClientIdentifier;
- (id)buildVersion;
- (id)clientInfoHeader;
- (id)deviceClass;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (id)deviceInfoDictionary;
- (id)deviceName;
- (BOOL)hasCellularCapability;
- (id)internationalMobileEquipmentIdentity;
- (id)mobileEquipmentIdentifier;
- (id)modelNumber;
- (id)osName;
- (id)osVersion;
- (id)productType;
- (id)productVersion;
- (id)regionCode;
- (id)serialNumber;
- (id)storageCapacity;
- (id)udid;
- (id)userAgentHeader;
- (id)wifiMacAddress;

@end


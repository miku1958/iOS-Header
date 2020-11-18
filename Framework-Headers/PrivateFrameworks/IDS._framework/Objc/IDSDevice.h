//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSString, NSUUID, _IDSDevice;

@interface IDSDevice : NSObject
{
    _IDSDevice *_internal;
}

@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, strong, nonatomic) NSString *deviceColor;
@property (readonly, strong, nonatomic) NSString *enclosureColor;
@property (readonly, strong, nonatomic) NSArray *identities;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isDefaultPairedDevice;
@property (readonly, nonatomic) BOOL isHSATrusted;
@property (readonly, nonatomic) BOOL isLocallyPaired;
@property (readonly, strong, nonatomic) NSDate *lastActivityDate;
@property (readonly, strong, nonatomic) NSArray *linkedUserURIs;
@property (readonly, nonatomic) BOOL locallyPresent;
@property (readonly, nonatomic) unsigned long long maxCompatibilityVersion;
@property (readonly, nonatomic) unsigned long long minCompatibilityVersion;
@property (readonly, strong, nonatomic) NSString *modelIdentifier;
@property (readonly, strong, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isNearby) BOOL nearby;
@property (strong, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property (readonly, nonatomic) CDStruct_2ec95fd7 operatingSystemVersion;
@property (readonly, nonatomic) unsigned long long pairingProtocolVersion;
@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, strong, nonatomic) NSData *pushToken;
@property (readonly, strong, nonatomic) NSString *service;
@property (readonly, nonatomic) BOOL supportsHandoff;
@property (readonly, nonatomic) BOOL supportsMMSRelay;
@property (readonly, nonatomic) BOOL supportsPhoneCalls;
@property (readonly, nonatomic) BOOL supportsSMSRelay;
@property (readonly, nonatomic) BOOL supportsTethering;
@property (readonly, nonatomic) BOOL supportsiCloudPairing;
@property (readonly, strong, nonatomic) NSString *uniqueID;
@property (readonly, strong, nonatomic) NSString *uniqueIDOverride;

- (void)_addIdentity:(id)arg1;
- (id)_initWithDictionary:(id)arg1;
- (id)_internal;
- (void)_setAccount:(id)arg1;
- (void)_updateNSUUID:(id)arg1;
- (void)cleanupStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)closeSocket:(int)arg1;
- (void)closeSocketForDomain:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)establishStreamPairWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (int)openSocketForDomain:(id)arg1;
- (int)openSocketForDomain:(id)arg1 transportType:(long long)arg2;
- (void)openSocketWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (int)socketForDomain:(id)arg1;

@end


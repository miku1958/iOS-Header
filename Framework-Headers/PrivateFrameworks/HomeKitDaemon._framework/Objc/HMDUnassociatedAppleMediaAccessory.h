//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDUnassociatedMediaAccessory.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCapabilityFlags, HMDDevice, HMDHomeKitVersion, HMFSoftwareVersion, NSString;

@interface HMDUnassociatedAppleMediaAccessory : HMDUnassociatedMediaAccessory <HMFLogging>
{
    BOOL _currentAccessory;
    NSString *_model;
    NSString *_serialNumber;
    HMFSoftwareVersion *_softwareVersion;
    HMDDevice *_device;
    unsigned long long _supportedStereoPairVersions;
    HMDHomeKitVersion *_minimumRequiredPairingSoftwareVersion;
    HMDCapabilityFlags *_requiredPairingCapbilities;
}

@property (nonatomic, getter=isCurrentAccessory) BOOL currentAccessory; // @synthesize currentAccessory=_currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) HMDDevice *device; // @synthesize device=_device;
@property (readonly) unsigned long long hash;
@property (strong) HMDHomeKitVersion *minimumRequiredPairingSoftwareVersion; // @synthesize minimumRequiredPairingSoftwareVersion=_minimumRequiredPairingSoftwareVersion;
@property (copy) NSString *model; // @synthesize model=_model;
@property (readonly) HMDCapabilityFlags *requiredPairingCapbilities; // @synthesize requiredPairingCapbilities=_requiredPairingCapbilities;
@property (copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property (copy) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property (readonly) Class superclass;
@property unsigned long long supportedStereoPairVersions; // @synthesize supportedStereoPairVersions=_supportedStereoPairVersions;

+ (id)logCategory;
+ (id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;
+ (id)namespace;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
- (BOOL)canPairGivenCapabilities:(unsigned long long)arg1;
- (id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 requiredPairingCapabilities:(unsigned long long)arg4 messageDispatcher:(id)arg5;
- (id)logIdentifier;

@end

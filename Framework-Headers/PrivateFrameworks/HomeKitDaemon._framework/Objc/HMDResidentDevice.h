//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMerging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDDevice, HMDHome, HMDResidentDeviceManager, NSString, NSUUID;

@interface HMDResidentDevice : HMFObject <HMFDumpState, HMFLogging, HMFMerging, NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    BOOL _enabled;
    BOOL _confirmed;
    BOOL _reachable;
    BOOL _lowBattery;
    NSUUID *_identifier;
    HMDDevice *_device;
    long long _batteryState;
    HMDHome *_home;
    HMDResidentDeviceManager *_residentDeviceManager;
}

@property (nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (nonatomic, getter=isConfirmed) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HMDDevice *device; // @synthesize device=_device;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHome *home; // @synthesize home=_home;
@property (copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (nonatomic, getter=isLowBattery) BOOL lowBattery; // @synthesize lowBattery=_lowBattery;
@property (nonatomic, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property (weak, nonatomic) HMDResidentDeviceManager *residentDeviceManager; // @synthesize residentDeviceManager=_residentDeviceManager;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsMediaSystem;
@property (readonly, nonatomic) BOOL supportsSharedEventTriggerActivation;

+ (id)batteryStateAsString:(long long)arg1;
+ (id)logCategory;
+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_handleResidentDeviceUpdateConfirmed:(BOOL)arg1;
- (BOOL)_handleResidentDeviceUpdateDeviceWithUUID:(id)arg1;
- (void)_handleResidentDeviceUpdateEnabled:(BOOL)arg1;
- (void)_residentDeviceModelUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (BOOL)_updateDevice:(id)arg1;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 home:(id)arg2;
- (id)initWithModel:(id)arg1 residentDeviceManager:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mergeObject:(id)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)shortDescription;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;

@end

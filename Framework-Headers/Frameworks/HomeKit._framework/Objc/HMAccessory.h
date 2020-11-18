//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMutableApplicationData-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMApplicationData, HMDelegateCaller, HMFMessageDispatcher, HMHome, HMRoom, HMThreadSafeMutableArrayCollection, NSArray, NSNumber, NSString, NSUUID;
@protocol HMAccessoryDelegate, OS_dispatch_queue;

@interface HMAccessory : NSObject <NSSecureCoding, HMFMessageReceiver, HMObjectMerge, HMMutableApplicationData>
{
    BOOL _firmwareUpdateAvailable;
    BOOL _reachable;
    BOOL _discoveredBridgeableAccessory;
    BOOL _bridgedAccessory;
    BOOL _blocked;
    BOOL _bridgeSupportsConfiguration;
    BOOL _paired;
    NSUUID *_uniqueIdentifier;
    id<HMAccessoryDelegate> _delegate;
    NSString *_name;
    HMHome *_home;
    HMRoom *_room;
    NSString *_model;
    NSString *_manufacturer;
    NSString *_firmwareVersion;
    NSString *_serialNumber;
    NSString *_bundleID;
    NSString *_storeID;
    NSArray *_uniqueIdentifiersForBridgedAccessories;
    NSArray *_uniqueIdentifiersForBridgeAccessories;
    HMAccessoryCategory *_category;
    HMApplicationData *_applicationData;
    unsigned long long _transportTypes;
    unsigned long long _additionalSetupStatus;
    NSNumber *_accessoryFlags;
    HMFMessageDispatcher *_msgDispatcher;
    long long _reachableTransports;
    HMThreadSafeMutableArrayCollection *_currentServices;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMThreadSafeMutableArrayCollection *_accessories;
    NSUUID *_uuid;
    HMDelegateCaller *_delegateCaller;
    HMThreadSafeMutableArrayCollection *_accessoryProfiles;
}

@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *accessories; // @synthesize accessories=_accessories;
@property (strong, nonatomic) NSNumber *accessoryFlags; // @synthesize accessoryFlags=_accessoryFlags;
@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *accessoryProfiles; // @synthesize accessoryProfiles=_accessoryProfiles;
@property (nonatomic) unsigned long long additionalSetupStatus; // @synthesize additionalSetupStatus=_additionalSetupStatus;
@property (readonly, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property (nonatomic, getter=isBlocked) BOOL blocked; // @synthesize blocked=_blocked;
@property (nonatomic) BOOL bridgeSupportsConfiguration; // @synthesize bridgeSupportsConfiguration=_bridgeSupportsConfiguration;
@property (readonly, nonatomic, getter=isBridged) BOOL bridged;
@property (nonatomic) BOOL bridgedAccessory; // @synthesize bridgedAccessory=_bridgedAccessory;
@property (strong) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, copy, nonatomic) NSArray *cameraProfiles;
@property (strong, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (copy, nonatomic) HMThreadSafeMutableArrayCollection *currentServices; // @synthesize currentServices=_currentServices;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL discoveredBridgeableAccessory; // @synthesize discoveredBridgeableAccessory=_discoveredBridgeableAccessory;
@property (nonatomic) BOOL firmwareUpdateAvailable; // @synthesize firmwareUpdateAvailable=_firmwareUpdateAvailable;
@property (strong) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSArray *identifiersForBridgedAccessories;
@property (strong) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong) NSString *model; // @synthesize model=_model;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) BOOL paired; // @synthesize paired=_paired;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (nonatomic, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property (nonatomic) long long reachableTransports; // @synthesize reachableTransports=_reachableTransports;
@property (weak, nonatomic) HMRoom *room; // @synthesize room=_room;
@property (strong) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property (readonly, copy, nonatomic) NSArray *services;
@property (strong) NSString *storeID; // @synthesize storeID=_storeID;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transportTypes; // @synthesize transportTypes=_transportTypes;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (copy, nonatomic) NSArray *uniqueIdentifiersForBridgeAccessories; // @synthesize uniqueIdentifiersForBridgeAccessories=_uniqueIdentifiersForBridgeAccessories;
@property (copy, nonatomic) NSArray *uniqueIdentifiersForBridgedAccessories; // @synthesize uniqueIdentifiersForBridgedAccessories=_uniqueIdentifiersForBridgedAccessories;
@property (copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_accessoryInformationService;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 configCompletionQueue:(id)arg5 configCompletion:(CDUnknownBlockType)arg6;
- (void)_configureClientQueue:(id)arg1;
- (void)_configureMessageDispatcher:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3;
- (void)_configureProfilesWithClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3 home:(id)arg4;
- (void)_copyFrom:(id)arg1;
- (void)_createCameraProfiles:(id)arg1;
- (id)_findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)_findService:(id)arg1;
- (void)_handleAccessoryCategoryChanged:(id)arg1;
- (void)_handleAccessoryFlagsChanged:(id)arg1;
- (void)_handleAccessoryNotificationsUpdated:(id)arg1;
- (void)_handleAppDataUpdatedNotification:(id)arg1;
- (void)_handleBridgeStatusNotification:(id)arg1;
- (void)_handleCharacteristicValueUpdated:(id)arg1;
- (void)_handleCharacteristicsUpdated:(id)arg1;
- (void)_handleConnectivityChanged:(id)arg1;
- (id)_handleMultipleCharacteristicsUpdated:(id)arg1 informDelegate:(BOOL)arg2;
- (void)_handleRenamed:(id)arg1;
- (void)_handleServiceRenamed:(id)arg1;
- (void)_handleServiceTypeAssociated:(id)arg1;
- (void)_handleServicesUpdated:(id)arg1;
- (void)_handleUpdateRoom:(id)arg1;
- (void)_identifyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_mergeProfileObjects:(id)arg1 currentOperations:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_notifyDelegateOfAppDataUpdateForService:(id)arg1;
- (void)_notifyDelegatesOfAdditionalSetupRequiredChange;
- (id)_privateDelegate;
- (void)_readValueForCharacteristic:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerNotificationHandlers;
- (void)_setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)_unconfigure;
- (void)_updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateAssociatedServiceType:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateAuthorizationData:(id)arg1 forService:(id)arg2 characteristic:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_updateFromAccessory:(id)arg1;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateName:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_valueForCharacteristic:(id)arg1 ofService:(id)arg2;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)identifyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAdditionalSetupRequired;
- (BOOL)isFirmwareUpdateAvailable;
- (void)notifyDelegateOfAppDataUpdateForService:(id)arg1;
- (void)setApplicationData:(id)arg1;
- (void)updateAccessoryInfo:(id)arg1;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


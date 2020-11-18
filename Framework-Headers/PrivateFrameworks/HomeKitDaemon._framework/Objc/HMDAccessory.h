//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMDAccessoryTransaction, HMDAccessoryVersion, HMDApplicationData, HMDApplicationRegistry, HMDHome, HMDRoom, HMDVendorModelEntry, HMFMessageDispatcher, NSArray, NSMutableSet, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAccessory : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMDHomeMessageReceiver, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging>
{
    BOOL _primary;
    BOOL _reachable;
    BOOL _remotelyReachable;
    NSMutableSet *_accessoryProfiles;
    BOOL _blocked;
    BOOL _remoteAccessEnabled;
    BOOL _unblockPending;
    NSString *_identifier;
    HMDRoom *_room;
    NSString *_model;
    NSString *_manufacturer;
    HMDAccessoryVersion *_firmwareVersion;
    NSString *_serialNumber;
    HMDApplicationData *_appData;
    NSUUID *_uuid;
    HMAccessoryCategory *_category;
    HMDHome *_home;
    NSString *_providedName;
    NSString *_configurationAppIdentifier;
    NSString *_configuredName;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSNumber *_categoryIdentifier;
    unsigned long long _configNumber;
    HMDApplicationRegistry *_appRegistry;
    HMDAccessoryTransaction *_transaction;
    unsigned long long _accessoryReprovisionState;
}

@property (readonly, copy) NSArray *accessoryProfiles;
@property (nonatomic) unsigned long long accessoryReprovisionState; // @synthesize accessoryReprovisionState=_accessoryReprovisionState;
@property (strong, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property (strong, nonatomic) HMDApplicationRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
@property (nonatomic, getter=isBlocked) BOOL blocked; // @synthesize blocked=_blocked;
@property (strong, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property (strong, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property (nonatomic) unsigned long long configNumber; // @synthesize configNumber=_configNumber;
@property (copy, nonatomic) NSString *configurationAppIdentifier; // @synthesize configurationAppIdentifier=_configurationAppIdentifier;
@property (strong, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, getter=isCurrentAccessory) BOOL currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) HMDAccessoryVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHome *home; // @synthesize home=_home;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic, getter=isPrimary) BOOL primary; // @synthesize primary=_primary;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (copy, nonatomic) NSString *providedName; // @synthesize providedName=_providedName;
@property (nonatomic, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property (readonly, nonatomic) long long reachableTransports;
@property (nonatomic, getter=isRemoteAccessEnabled) BOOL remoteAccessEnabled; // @synthesize remoteAccessEnabled=_remoteAccessEnabled;
@property (nonatomic, getter=isRemotelyReachable) BOOL remotelyReachable; // @synthesize remotelyReachable=_remotelyReachable;
@property (readonly) BOOL requiresHomeAppForManagement;
@property (strong, nonatomic) HMDRoom *room; // @synthesize room=_room;
@property (readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsUserManagement;
@property (strong, nonatomic) HMDAccessoryTransaction *transaction; // @synthesize transaction=_transaction;
@property (nonatomic) BOOL unblockPending; // @synthesize unblockPending=_unblockPending;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (readonly, copy, nonatomic) HMDVendorModelEntry *vendorInfo;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_createCameraProfiles:(id)arg1;
- (void)_handleGetAccessoryAdvertisingParams:(id)arg1;
- (void)_handleIdentify:(id)arg1;
- (void)_handleListPairings:(id)arg1;
- (void)_handleRename:(id)arg1;
- (void)_handleSetAppData:(id)arg1;
- (void)_handleUpdateRoom:(id)arg1;
- (void)_notifyConnectivityChangedWithReachabilityState:(BOOL)arg1 remoteAccessChanged:(BOOL)arg2;
- (void)_registerForMessages;
- (void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1;
- (void)_remoteAccessEnabled:(BOOL)arg1;
- (void)_sendBlockedNotification:(BOOL)arg1 withError:(id)arg2 withIdentifier:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)_updateCategory:(id)arg1 notifyClients:(BOOL)arg2;
- (id)_updateRoom:(id)arg1 message:(id *)arg2;
- (void)addAccessoryProfile:(id)arg1;
- (void)addAdvertisement:(id)arg1;
- (void)appDataRemoved:(id)arg1 message:(id)arg2;
- (void)appDataUpdated:(id)arg1 message:(id)arg2;
- (id)assistantObject;
- (id)assistantUniqueIdentifier;
- (id)backingStoreObjects:(long long)arg1;
- (void)blockWithError:(id)arg1;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3;
- (void)dealloc;
- (void)didEncounterError:(id)arg1;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)getConfiguredName;
- (void)handleReachabilityChange:(BOOL)arg1;
- (void)handleRemoteReachabilityChange:(BOOL)arg1;
- (void)handleUpdatedName:(id)arg1;
- (id)hashRouteID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (BOOL)isReachableForXPCClients;
- (void)logDuetRoomEvent;
- (id)logIdentifier;
- (id)messageDestination;
- (void)notifyAccessoryNameChanged:(BOOL)arg1;
- (void)pairingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (BOOL)providesHashRouteID;
- (void)registerForMessagesWithNewUUID:(id)arg1;
- (void)remoteAccessEnabled:(BOOL)arg1;
- (void)removeAccessoryProfile:(id)arg1;
- (void)removeAdvertisement:(id)arg1;
- (void)setAccessoryProfiles:(id)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (BOOL)shouldEnableDaemonRelaunch;
- (BOOL)supportsMinimumUserPrivilege;
- (void)takeOwnershipOfAppData:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (void)unblockWithMessageIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unconfigure;
- (id)updateAppData:(id)arg1;
- (void)updateCategory:(id)arg1;
- (void)updateManufacturer:(id)arg1 model:(id)arg2 firmwareVersion:(id)arg3 serialNumber:(id)arg4;
- (void)updateMediaSession:(id)arg1;
- (void)updateProvidedName:(id)arg1;
- (void)updateRoom:(id)arg1;
- (void)updateRoom:(id)arg1 message:(id)arg2;
- (id)url;

@end

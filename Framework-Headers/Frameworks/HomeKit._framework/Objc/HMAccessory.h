//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMAccessorySettingsContainer-Protocol.h>
#import <HomeKit/HMControllable-Protocol.h>
#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMutableApplicationData-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMAccessorySettings, HMApplicationData, HMDevice, HMFPairingIdentity, HMFSoftwareVersion, HMFUnfairLock, HMFWiFiNetworkInfo, HMHome, HMMutableArray, HMRemoteLoginHandler, HMRoom, HMSoftwareUpdateController, HMSymptomsHandler, NSArray, NSNumber, NSString, NSUUID, _HMContext;
@protocol HMAccessoryDelegate, OS_dispatch_queue;

@interface HMAccessory : NSObject <HMFLogging, NSSecureCoding, HMFMessageReceiver, HMObjectMerge, HMMutableApplicationData, HMAccessorySettingsContainer, HMControllable>
{
    HMFUnfairLock *_lock;
    BOOL _currentAccessory;
    HMDevice *_device;
    HMSoftwareUpdateController *_softwareUpdateController;
    BOOL _supportsIdentify;
    BOOL _firmwareUpdateAvailable;
    BOOL _reachable;
    BOOL _bridgedAccessory;
    BOOL _blocked;
    BOOL _controllable;
    BOOL _supportsMediaAccessControl;
    BOOL _supportsTargetControl;
    BOOL _supportsTargetController;
    BOOL _paired;
    BOOL _needsReprovisioning;
    NSUUID *_uniqueIdentifier;
    id<HMAccessoryDelegate> _delegate;
    NSString *_name;
    NSString *_configuredName;
    NSString *_deviceIdentifier;
    HMHome *_home;
    HMRoom *_room;
    NSString *_model;
    NSString *_manufacturer;
    NSString *_firmwareVersion;
    NSString *_serialNumber;
    HMFSoftwareVersion *_softwareVersion;
    NSString *_bundleID;
    NSString *_storeID;
    NSArray *_uniqueIdentifiersForBridgedAccessories;
    HMAccessoryCategory *_category;
    HMApplicationData *_applicationData;
    unsigned long long _transportTypes;
    unsigned long long _additionalSetupStatus;
    NSNumber *_accessoryFlags;
    long long _certificationStatus;
    long long _associationOptions;
    NSUUID *_accountIdentifier;
    HMAccessorySettings *_settings;
    HMFPairingIdentity *_pairingIdentity;
    HMFWiFiNetworkInfo *_wifiNetworkInfo;
    NSArray *_controlTargetUUIDs;
    HMSymptomsHandler *_symptomsHandler;
    _HMContext *_context;
    long long _reachableTransports;
    HMMutableArray *_currentServices;
    NSUUID *_uuid;
    unsigned long long _accessoryReprovisionState;
    HMRemoteLoginHandler *_remoteLoginHandler;
    HMMutableArray *_accessoryProfiles;
}

@property (strong, nonatomic) NSNumber *accessoryFlags; // @synthesize accessoryFlags=_accessoryFlags;
@property (strong, nonatomic) HMMutableArray *accessoryProfiles; // @synthesize accessoryProfiles=_accessoryProfiles;
@property (nonatomic) unsigned long long accessoryReprovisionState; // @synthesize accessoryReprovisionState=_accessoryReprovisionState;
@property (copy) NSUUID *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (nonatomic) unsigned long long additionalSetupStatus; // @synthesize additionalSetupStatus=_additionalSetupStatus;
@property (readonly, nonatomic) HMApplicationData *applicationData;
@property (nonatomic) long long associationOptions; // @synthesize associationOptions=_associationOptions;
@property (nonatomic, getter=isBlocked) BOOL blocked; // @synthesize blocked=_blocked;
@property (readonly, nonatomic, getter=isBridged) BOOL bridged;
@property (nonatomic) BOOL bridgedAccessory; // @synthesize bridgedAccessory=_bridgedAccessory;
@property (copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, copy, nonatomic) NSArray *cameraProfiles;
@property (strong, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property (nonatomic) long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property (copy, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property (readonly, weak) HMHome *containerHome;
@property (strong, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (copy, nonatomic) NSArray *controlTargetUUIDs; // @synthesize controlTargetUUIDs=_controlTargetUUIDs;
@property (readonly, getter=isControllable) BOOL controllable; // @synthesize controllable=_controllable;
@property (copy, nonatomic) HMMutableArray *currentServices; // @synthesize currentServices=_currentServices;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (nonatomic) BOOL firmwareUpdateAvailable; // @synthesize firmwareUpdateAvailable=_firmwareUpdateAvailable;
@property (copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSArray *identifiersForBridgedAccessories;
@property (copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) BOOL needsReprovisioning; // @synthesize needsReprovisioning=_needsReprovisioning;
@property (nonatomic) BOOL paired; // @synthesize paired=_paired;
@property (readonly, copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
@property (readonly, copy) NSArray *profiles;
@property (nonatomic, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property (nonatomic) long long reachableTransports; // @synthesize reachableTransports=_reachableTransports;
@property (strong) HMRemoteLoginHandler *remoteLoginHandler; // @synthesize remoteLoginHandler=_remoteLoginHandler;
@property (weak, nonatomic) HMRoom *room; // @synthesize room=_room;
@property (copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property (readonly, copy, nonatomic) NSArray *services;
@property (readonly) HMAccessorySettings *settings; // @synthesize settings=_settings;
@property (copy) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property (copy) NSString *storeID; // @synthesize storeID=_storeID;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsIdentify; // @synthesize supportsIdentify=_supportsIdentify;
@property (nonatomic) BOOL supportsMediaAccessControl; // @synthesize supportsMediaAccessControl=_supportsMediaAccessControl;
@property (nonatomic) BOOL supportsTargetControl; // @synthesize supportsTargetControl=_supportsTargetControl;
@property (nonatomic) BOOL supportsTargetController; // @synthesize supportsTargetController=_supportsTargetController;
@property (copy) HMSymptomsHandler *symptomsHandler; // @synthesize symptomsHandler=_symptomsHandler;
@property (nonatomic) unsigned long long transportTypes; // @synthesize transportTypes=_transportTypes;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (copy, nonatomic) NSArray *uniqueIdentifiersForBridgedAccessories; // @synthesize uniqueIdentifiersForBridgedAccessories=_uniqueIdentifiersForBridgedAccessories;
@property (copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo; // @synthesize wifiNetworkInfo=_wifiNetworkInfo;

+ (id)_cameraProfilesForAccessoryProfiles:(id)arg1;
+ (id)_mediaProfilesForAccessoryProfiles:(id)arg1;
+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)__handleConnectivityChanged:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)__updateSymptomsHandler:(id)arg1 operations:(id)arg2;
- (id)_accessoryInformationService;
- (void)_configureProfilesWithContext:(id)arg1;
- (void)_copyFrom:(id)arg1;
- (id)_findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)_findService:(id)arg1;
- (void)_handleAccessoryCategoryChanged:(id)arg1;
- (void)_handleAccessoryControllableChanged:(id)arg1;
- (void)_handleAccessoryFlagsChanged:(id)arg1;
- (void)_handleAccessoryNotificationsUpdated:(id)arg1;
- (void)_handleAppDataUpdatedNotification:(id)arg1;
- (void)_handleCharacteristicValueUpdated:(id)arg1;
- (void)_handleCharacteristicsUpdated:(id)arg1;
- (void)_handleConfiguredNameChanged:(id)arg1;
- (void)_handleConnectivityChanged:(id)arg1;
- (void)_handleControlTargetsUpdatedMessage:(id)arg1;
- (id)_handleMultipleCharacteristicsUpdated:(id)arg1 informDelegate:(BOOL)arg2;
- (void)_handleRenamed:(id)arg1;
- (void)_handleRootSettingsUpdated:(id)arg1;
- (void)_handleServiceConfigurationState:(id)arg1;
- (void)_handleServiceConfiguredNameUpdate:(id)arg1;
- (void)_handleServiceDefaultNameUpdate:(id)arg1;
- (void)_handleServiceRenamed:(id)arg1;
- (void)_handleServiceSubtype:(id)arg1;
- (void)_handleServiceTypeAssociated:(id)arg1;
- (void)_handleServicesUpdated:(id)arg1;
- (void)_handleSymptomsHandlerUpdatedMessage:(id)arg1;
- (void)_handleTargetControlSupportUpdatedMessage:(id)arg1;
- (void)_handleUpdateRoom:(id)arg1;
- (void)_identifyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_listPairingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_mergeControlTargets:(id)arg1 operations:(id)arg2;
- (void)_mergeProfileObjects:(id)arg1 currentOperations:(id)arg2;
- (BOOL)_mergeServices:(id)arg1 operations:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_notifyClientsOfSymptomsHandlerAddedOrRemoved:(BOOL)arg1;
- (void)_notifyClientsOfTargetControlSupportUpdate;
- (void)_notifyDelegateOfAddedControlTarget:(id)arg1;
- (void)_notifyDelegateOfAppDataUpdateForService:(id)arg1;
- (void)_notifyDelegateOfRemovedControlTarget:(id)arg1;
- (void)_notifyDelegateOfUpdatedSettings:(id)arg1;
- (void)_notifyDelegatesOfAdditionalSetupRequiredChange;
- (void)_notifyDelegatesOfUpdatedControllable;
- (id)_privateDelegate;
- (void)_readValueForCharacteristic:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
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
- (void)addControlTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addControlTargetUUIDs:(id)arg1;
- (id)controlTargets;
- (void)dealloc;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (void)identifyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAdditionalSetupRequired;
- (BOOL)isCurrentAccessory;
- (BOOL)isFirmwareUpdateAvailable;
- (id)logIdentifier;
- (id)mediaProfile;
- (void)notifyDelegateOfAppDataUpdateForService:(id)arg1;
- (void)pairingIdentityWithPrivateKey:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryAdvertisementInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeControlTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeControlTargetUUIDs:(id)arg1;
- (void)resetControlTargetUUIDs;
- (void)resetControlTargetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setApplicationData:(id)arg1;
- (void)setControllable:(BOOL)arg1;
- (void)setCurrentAccessory:(BOOL)arg1;
- (void)setDevice:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSoftwareUpdateController:(id)arg1;
- (void)setSupportsIdentify:(BOOL)arg1;
- (id)softwareUpdateController;
- (id)targetControllers;
- (void)updateAccessoryInfo:(id)arg1;
- (void)updateAccessoryName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


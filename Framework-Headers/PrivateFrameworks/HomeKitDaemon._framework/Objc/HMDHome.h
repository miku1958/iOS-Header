//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDAccessoryBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemon/HMDRelayManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDResidentDeviceManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDUserManagementOperationDelegate-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessoryBrowser, HMDApplicationData, HMDCharacteristicNotificationRegistry, HMDHomeLocationHandler, HMDHomeManager, HMDHomeRemoteNotificationHandler, HMDRelayManager, HMDRemoteAdminEnforcementMessageFilter, HMDRemoteMessageFilter, HMDResidentDevice, HMDResidentDeviceManager, HMDRoom, HMDUser, HMFMessageDispatcher, HMFTimer, NSArray, NSDate, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDHome : NSObject <HMDBulletinIdentifiers, HMDResidentDeviceManagerDelegate, HMDUserManagementOperationDelegate, HMFLogging, HMDAccessoryBrowserDelegate, HMFMessageReceiver, HMDRelayManagerDelegate, HMFTimerDelegate, HMFDumpState, NSSecureCoding>
{
    BOOL _anyBTLEAccessoryReachable;
    BOOL _remoteAccessIsEnabled;
    BOOL _adminUser;
    BOOL _ownerUser;
    BOOL _registeredNotificationWithRemoteGateway;
    BOOL _allowsRemoteAccess;
    BOOL _currentRemoteReachabilityRegistration;
    int _regionState;
    HMDUser *_currentUser;
    HMDUser *_owner;
    long long _homeLocation;
    long long _atHomeLevel;
    NSString *_name;
    HMDHomeManager *_homeManager;
    NSUUID *_uuid;
    HMDHomeLocationHandler *_homeLocationHandler;
    NSDate *_notificationsUpdatedTime;
    NSMutableSet *_notificationRegistrations;
    NSMutableSet *_notificationDeregistrations;
    HMDHomeRemoteNotificationHandler *_remoteNotificationHandler;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSHashTable *_removeAccessoryInProgressForHMDAccessories;
    HMDApplicationData *_appData;
    NSMutableDictionary *_addPendingAccessorySetupCodeHandlers;
    NSMutableDictionary *_addPendingAccessorySetupCodes;
    NSMutableSet *_addPendingAccessories;
    HMDResidentDeviceManager *_residentDeviceManager;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDAccessoryBrowser *_accessoryBrowser;
    unsigned long long _stateHandle;
    HMDRelayManager *_relayManager;
    NSMutableArray *_rooms;
    NSMutableArray *_zones;
    NSMutableArray *_accessories;
    NSMutableArray *_discoveredAccessories;
    NSMutableArray *_services;
    NSMutableArray *_serviceGroups;
    NSMutableArray *_actionSets;
    NSMutableArray *_triggers;
    NSMutableArray *_triggerOwnedActionSets;
    NSMutableArray *_outgoingInvitations;
    NSMutableArray *_users;
    NSMutableArray *_pendingUsers;
    NSMutableArray *_removedUsers;
    NSMutableArray *_unconfiguredResidentDevices;
    HMDRoom *_roomForEntireHome;
    long long _lastKnownReachableIPAccessoryCount;
    long long _lastKnownReachableAccessoryCount;
    long long _configurationVersion;
    long long _expectedConfigurationVersion;
    NSString *_ownerName;
    HMDCharacteristicNotificationRegistry *_characteristicNotificationRegistry;
    NSMutableSet *_heartbeatPingMessagesQueuedWithServer;
    NSMutableSet *_pendingResponsesForRemoteAccessSetup;
    NSMutableArray *_assistantOperations;
    NSMutableDictionary *_enableNotificationPayload;
    NSMutableDictionary *_disableNotificationPayload;
    HMFTimer *_modifyNotificationsCoalesceTimer;
    NSMapTable *_retrievalCompletionTuplesForAccessories;
    NSHashTable *_unpairedSecondaryHAPAccessories;
    HMDResidentDevice *_resident;
    HMFTimer *_reachabilityDeregistrationTimer;
    NSMutableArray *_reachabilityRegisteredDevices;
    HMFTimer *_reachabilityNotificationTimer;
    NSMutableArray *_remoteReachabilityNotificationPendingAccessories;
    HMFTimer *_disableNotificationTimer;
    HMDRemoteMessageFilter *_remoteMessageFilter;
    HMDRemoteAdminEnforcementMessageFilter *_remoteAdminEnforcementMessageFilter;
    NSMutableArray *_ownedTriggers;
}

@property (strong, nonatomic) NSMutableArray *accessories; // @synthesize accessories=_accessories;
@property (strong, nonatomic) HMDAccessoryBrowser *accessoryBrowser; // @synthesize accessoryBrowser=_accessoryBrowser;
@property (strong, nonatomic) NSMutableArray *actionSets; // @synthesize actionSets=_actionSets;
@property (strong, nonatomic) NSMutableSet *addPendingAccessories; // @synthesize addPendingAccessories=_addPendingAccessories;
@property (strong, nonatomic) NSMutableDictionary *addPendingAccessorySetupCodeHandlers; // @synthesize addPendingAccessorySetupCodeHandlers=_addPendingAccessorySetupCodeHandlers;
@property (strong, nonatomic) NSMutableDictionary *addPendingAccessorySetupCodes; // @synthesize addPendingAccessorySetupCodes=_addPendingAccessorySetupCodes;
@property (nonatomic, getter=isAdminUser) BOOL adminUser; // @synthesize adminUser=_adminUser;
@property (nonatomic) BOOL allowsRemoteAccess; // @synthesize allowsRemoteAccess=_allowsRemoteAccess;
@property (readonly, nonatomic, getter=isAnyBTLEAccessoryReachable) BOOL anyBTLEAccessoryReachable; // @synthesize anyBTLEAccessoryReachable=_anyBTLEAccessoryReachable;
@property (strong, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property (strong, nonatomic) NSMutableArray *assistantOperations; // @synthesize assistantOperations=_assistantOperations;
@property long long atHomeLevel; // @synthesize atHomeLevel=_atHomeLevel;
@property (strong, nonatomic) HMDCharacteristicNotificationRegistry *characteristicNotificationRegistry; // @synthesize characteristicNotificationRegistry=_characteristicNotificationRegistry;
@property (nonatomic) long long configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property (nonatomic) BOOL currentRemoteReachabilityRegistration; // @synthesize currentRemoteReachabilityRegistration=_currentRemoteReachabilityRegistration;
@property (readonly, nonatomic) HMDUser *currentUser; // @synthesize currentUser=_currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *disableNotificationPayload; // @synthesize disableNotificationPayload=_disableNotificationPayload;
@property (strong, nonatomic) HMFTimer *disableNotificationTimer; // @synthesize disableNotificationTimer=_disableNotificationTimer;
@property (strong, nonatomic) NSMutableArray *discoveredAccessories; // @synthesize discoveredAccessories=_discoveredAccessories;
@property (readonly, nonatomic) NSMutableDictionary *enableNotificationPayload; // @synthesize enableNotificationPayload=_enableNotificationPayload;
@property (nonatomic) long long expectedConfigurationVersion; // @synthesize expectedConfigurationVersion=_expectedConfigurationVersion;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableSet *heartbeatPingMessagesQueuedWithServer; // @synthesize heartbeatPingMessagesQueuedWithServer=_heartbeatPingMessagesQueuedWithServer;
@property long long homeLocation; // @synthesize homeLocation=_homeLocation;
@property (strong, nonatomic) HMDHomeLocationHandler *homeLocationHandler; // @synthesize homeLocationHandler=_homeLocationHandler;
@property (weak, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (nonatomic) long long lastKnownReachableAccessoryCount; // @synthesize lastKnownReachableAccessoryCount=_lastKnownReachableAccessoryCount;
@property (nonatomic) long long lastKnownReachableIPAccessoryCount; // @synthesize lastKnownReachableIPAccessoryCount=_lastKnownReachableIPAccessoryCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMFTimer *modifyNotificationsCoalesceTimer; // @synthesize modifyNotificationsCoalesceTimer=_modifyNotificationsCoalesceTimer;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSMutableSet *notificationDeregistrations; // @synthesize notificationDeregistrations=_notificationDeregistrations;
@property (strong, nonatomic) NSMutableSet *notificationRegistrations; // @synthesize notificationRegistrations=_notificationRegistrations;
@property (copy, nonatomic) NSDate *notificationsUpdatedTime; // @synthesize notificationsUpdatedTime=_notificationsUpdatedTime;
@property (strong, nonatomic) NSMutableArray *outgoingInvitations; // @synthesize outgoingInvitations=_outgoingInvitations;
@property (strong, nonatomic) NSMutableArray *ownedTriggers; // @synthesize ownedTriggers=_ownedTriggers;
@property (readonly, nonatomic) HMDUser *owner; // @synthesize owner=_owner;
@property (strong, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property (nonatomic, getter=isOwnerUser) BOOL ownerUser; // @synthesize ownerUser=_ownerUser;
@property (strong, nonatomic) NSMutableSet *pendingResponsesForRemoteAccessSetup; // @synthesize pendingResponsesForRemoteAccessSetup=_pendingResponsesForRemoteAccessSetup;
@property (strong, nonatomic) NSMutableArray *pendingUsers; // @synthesize pendingUsers=_pendingUsers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (strong, nonatomic) HMFTimer *reachabilityDeregistrationTimer; // @synthesize reachabilityDeregistrationTimer=_reachabilityDeregistrationTimer;
@property (strong, nonatomic) HMFTimer *reachabilityNotificationTimer; // @synthesize reachabilityNotificationTimer=_reachabilityNotificationTimer;
@property (strong, nonatomic) NSMutableArray *reachabilityRegisteredDevices; // @synthesize reachabilityRegisteredDevices=_reachabilityRegisteredDevices;
@property (nonatomic) int regionState; // @synthesize regionState=_regionState;
@property (nonatomic) BOOL registeredNotificationWithRemoteGateway; // @synthesize registeredNotificationWithRemoteGateway=_registeredNotificationWithRemoteGateway;
@property (strong, nonatomic) HMDRelayManager *relayManager; // @synthesize relayManager=_relayManager;
@property (nonatomic) BOOL remoteAccessIsEnabled; // @synthesize remoteAccessIsEnabled=_remoteAccessIsEnabled;
@property (readonly, nonatomic) HMDRemoteAdminEnforcementMessageFilter *remoteAdminEnforcementMessageFilter; // @synthesize remoteAdminEnforcementMessageFilter=_remoteAdminEnforcementMessageFilter;
@property (readonly, nonatomic) HMDRemoteMessageFilter *remoteMessageFilter; // @synthesize remoteMessageFilter=_remoteMessageFilter;
@property (readonly, nonatomic) HMDHomeRemoteNotificationHandler *remoteNotificationHandler; // @synthesize remoteNotificationHandler=_remoteNotificationHandler;
@property (strong, nonatomic) NSMutableArray *remoteReachabilityNotificationPendingAccessories; // @synthesize remoteReachabilityNotificationPendingAccessories=_remoteReachabilityNotificationPendingAccessories;
@property (strong, nonatomic) NSHashTable *removeAccessoryInProgressForHMDAccessories; // @synthesize removeAccessoryInProgressForHMDAccessories=_removeAccessoryInProgressForHMDAccessories;
@property (strong, nonatomic) NSMutableArray *removedUsers; // @synthesize removedUsers=_removedUsers;
@property (strong, nonatomic) HMDResidentDevice *resident; // @synthesize resident=_resident;
@property (readonly, copy, nonatomic) NSArray *residentCapableDevices;
@property (readonly, nonatomic) HMDResidentDeviceManager *residentDeviceManager; // @synthesize residentDeviceManager=_residentDeviceManager;
@property (readonly, nonatomic, getter=isResidentSupported) BOOL residentSupported;
@property (strong, nonatomic) NSMapTable *retrievalCompletionTuplesForAccessories; // @synthesize retrievalCompletionTuplesForAccessories=_retrievalCompletionTuplesForAccessories;
@property (strong, nonatomic) HMDRoom *roomForEntireHome; // @synthesize roomForEntireHome=_roomForEntireHome;
@property (strong, nonatomic) NSMutableArray *rooms; // @synthesize rooms=_rooms;
@property (strong, nonatomic) NSMutableArray *serviceGroups; // @synthesize serviceGroups=_serviceGroups;
@property (strong, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property (nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableArray *triggerOwnedActionSets; // @synthesize triggerOwnedActionSets=_triggerOwnedActionSets;
@property (strong, nonatomic) NSMutableArray *triggers; // @synthesize triggers=_triggers;
@property (strong, nonatomic) NSMutableArray *unconfiguredResidentDevices; // @synthesize unconfiguredResidentDevices=_unconfiguredResidentDevices;
@property (readonly, nonatomic) NSHashTable *unpairedSecondaryHAPAccessories; // @synthesize unpairedSecondaryHAPAccessories=_unpairedSecondaryHAPAccessories;
@property (strong, nonatomic) NSMutableArray *users; // @synthesize users=_users;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property (strong, nonatomic) NSMutableArray *zones; // @synthesize zones=_zones;

+ (void)_initialize;
+ (void)appendCharacteristicsToAccessoryList:(id)arg1 responseTuples:(id)arg2 forMultipleCharacteristicsRemoteRead:(id)arg3;
+ (void)appendCharacteristicsToAccessoryList:(id)arg1 responseTuples:(id)arg2 forMultipleCharacteristicsRemoteWrite:(id)arg3;
+ (id)getBuiltinActionSets;
+ (BOOL)isObjectContainedInHome:(id)arg1;
+ (id)logCategory;
+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)__accessoryIdentifiers;
- (void)__handleAcceptedOutgoingInvitationResponse:(id)arg1 destinationAddress:(id)arg2 publicKey:(id)arg3 username:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)__handleCancelledOutgoingInvitation:(id)arg1;
- (void)__handleCompletedOutgoingInvitation:(id)arg1;
- (BOOL)_accessoryServerIsBlocked:(id)arg1;
- (id)_addAccessory:(id)arg1 configurationApp:(id)arg2;
- (void)_addAllUsersToAccessories:(id)arg1;
- (void)_addNewAccessories:(id)arg1 bridgeAccessory:(id)arg2 message:(id)arg3;
- (void)_addNewTrigger:(id)arg1 message:(id)arg2 notification:(id)arg3 payloadAnnex:(id)arg4;
- (void)_addOutgoingInvitations:(id)arg1 message:(id)arg2;
- (void)_addPairedAccessories:(id)arg1;
- (void)_addPairedAccessory:(id)arg1;
- (void)_addResidentWithUsername:(id)arg1 publicKey:(id)arg2 destination:(id)arg3;
- (void)_addResponseTuplesFromDictionary:(id)arg1 accessoryRequestMapTable:(id)arg2 responseTuples:(id)arg3 completedGroup:(id)arg4 logEvents:(id)arg5;
- (void)_addUser:(id)arg1 userPrivilege:(unsigned long long)arg2 confirm:(BOOL)arg3 message:(id)arg4;
- (void)_addUserToIdentityRegistry:(id)arg1;
- (void)_addUsersWithIDs:(id)arg1 message:(id)arg2;
- (id)_applyDeviceLockCheck:(id)arg1;
- (void)_auditNotifications;
- (id)_changedHMDCharacteristicsForHAPCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (id)_characteristicNotificationPayloadsForRemoteGateway:(BOOL)arg1;
- (id)_characteristicNotificationPayloadsOnDirectTransports:(BOOL)arg1;
- (void)_cleanAddAccessoryOperations;
- (void)_configureBulletinNotification;
- (void)_configureConfiguredResident:(id)arg1 desiredConfigState:(unsigned long long)arg2 message:(id)arg3;
- (void)_configurePairedAccessoriesForServer:(id)arg1 reAddServices:(BOOL)arg2;
- (void)_configureUnconfiguredResident:(id)arg1 desiredConfigState:(unsigned long long)arg2;
- (id)_createBuiltinActionSets;
- (id)_createPairedAccessoriesForUnpairedAccessory:(id)arg1 accessoryServer:(id)arg2;
- (id)_createPairedSecondaryAccessoriesForNewlyPairedAccessory:(id)arg1;
- (id)_currentUser;
- (id)_dequeueAllRetrievalCompletionTuplesForLinkType:(long long)arg1 accessory:(id)arg2;
- (void)_deregisterDeviceForReachabilityNotification:(id)arg1;
- (void)_deregisterPairedAccessory:(id)arg1;
- (void)_deregisterStateHandler;
- (void)_disableNotificationsForClient:(id)arg1;
- (void)_disablePairedAccessoriesForServer:(id)arg1 error:(id)arg2;
- (id)_discoveredAccessoriesForServer:(id)arg1;
- (id)_discoveredAccessoriesForServer:(id)arg1 linkType:(long long)arg2;
- (BOOL)_doesResidentExistInMyCircleWithAddress:(id)arg1 homeManager:(id)arg2;
- (void)_encodeActionSets:(id)arg1 coder:(id)arg2;
- (void)_encodeObjectsWithAcessoriesWithCoder:(id)arg1;
- (void)_enqueueRetrievalCompletionTuple:(id)arg1 forAccessory:(id)arg2;
- (void)_evaluateShouldRelaunchAndSetRelaunch;
- (id)_getContainerForAppData:(id)arg1 keyName:(id *)arg2;
- (id)_getLogEventsForOperation:(BOOL)arg1 accessories:(id)arg2 readRequestMap:(id)arg3 identifier:(id)arg4;
- (void)_handleAccessoryReachabilityChange:(id)arg1;
- (void)_handleAccessoryReachabilityRegistration:(id)arg1 register:(BOOL)arg2;
- (void)_handleAddAccessories:(id)arg1;
- (void)_handleAddAccessory:(id)arg1;
- (void)_handleAddActionSet:(id)arg1;
- (void)_handleAddEventTrigger:(id)arg1;
- (void)_handleAddRelayAccessTokens:(id)arg1;
- (void)_handleAddRoom:(id)arg1;
- (void)_handleAddServiceGroup:(id)arg1;
- (void)_handleAddTimerTrigger:(id)arg1;
- (void)_handleAddTriggers:(id)arg1;
- (void)_handleAddUser:(id)arg1;
- (void)_handleAddUserToRelayAccessories:(id)arg1;
- (void)_handleAddZone:(id)arg1;
- (void)_handleCancelPairingAccessory:(id)arg1;
- (void)_handleCharacterisiticsChangedNotification:(id)arg1;
- (void)_handleCharacteristicEnableNotification:(id)arg1;
- (void)_handleCoalescedModifyNotifications;
- (void)_handleContinuePairingAccessory:(id)arg1;
- (void)_handleDidReceiveIDSMessageWithNoListenerFromAddress:(id)arg1;
- (void)_handleDisableNotificationsTimerFired;
- (void)_handleEnableNotifications:(id)arg1;
- (void)_handleEnableRemoteAccess:(id)arg1;
- (void)_handleExecuteActionSet:(id)arg1;
- (void)_handleExecuteConfirmationOfTrigger:(id)arg1;
- (void)_handleModifyCharacteristicNotifications:(id)arg1;
- (void)_handleMultipleCharacteristicRead:(id)arg1;
- (void)_handleMultipleCharacteristicWrite:(id)arg1;
- (void)_handleNewlyDiscoveredAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (void)_handleNewlyPairedAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (void)_handleOutgoingInvitations:(id)arg1;
- (void)_handleQueryRemoteAccess:(id)arg1;
- (void)_handleQueryUserIsAdmin:(id)arg1;
- (void)_handleRemoteGatewayNotificationRegistration:(id)arg1 enable:(BOOL)arg2;
- (void)_handleRemoteReachabilityDeregistrationTimerFired;
- (void)_handleRemoteReachabilityNotificationTimerFired;
- (void)_handleRemoveAccessory:(id)arg1;
- (void)_handleRemoveActionSet:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (void)_handleRemoveServiceGroup:(id)arg1;
- (void)_handleRemoveTrigger:(id)arg1;
- (void)_handleRemoveUser:(id)arg1;
- (void)_handleRemoveZone:(id)arg1;
- (void)_handleRemovedDiscoveredAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (void)_handleRemovedPairedAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (void)_handleRename:(id)arg1;
- (void)_handleRequestHomeDataSync:(id)arg1;
- (void)_handleResponseForElectMessageToResident:(id)arg1 error:(id)arg2;
- (void)_handleRetrievalForBlockedAccessory:(id)arg1 hapAccessory:(id)arg2 blockedBridgedAccessories:(id)arg3 unblockMessage:(id)arg4;
- (void)_handleSetAppData:(id)arg1;
- (void)_handleUnblock:(id)arg1;
- (void)_handleUpdateOutgoingInvitationState:(id)arg1;
- (void)_handleUpdateRequestForHomeInvitationFromInvitee:(id)arg1;
- (void)_handleUpdateUserAccess:(id)arg1;
- (void)_handleUserInvitations:(id)arg1;
- (BOOL)_hasPairedReachableBTLEAccessories;
- (BOOL)_isEventTriggerOnLocalDeviceForAccessory:(id)arg1;
- (BOOL)_isEventTriggerOnRemoteGatewayForAccessory:(id)arg1;
- (BOOL)_isRegisteredForNotificationsForClients:(id)arg1;
- (BOOL)_isRegisteredForNotificationsWithRemoteGateway:(id)arg1;
- (BOOL)_isRetrievalInProgressForLinkType:(long long)arg1 accessory:(id)arg2;
- (BOOL)_isUserValid:(id)arg1 error:(id *)arg2;
- (BOOL)_isValidEventIdentifier:(id)arg1;
- (BOOL)_mergeResidentsMissingInCloud:(id)arg1 homeManager:(id)arg2;
- (void)_migrateTrigger:(id)arg1 actionSetsInHome:(id)arg2 triggersToReactivate:(id)arg3;
- (void)_modifyAllRegistrationsForNotificationsInNotificationRegistry:(BOOL)arg1;
- (void)_modifyNotificationOnResident:(BOOL)arg1 ignoreDeviceUnlockRequirement:(BOOL)arg2 forCharacteristics:(id)arg3;
- (void)_modifyNotificationsOnResidentWithPayload:(id)arg1 enableNotification:(BOOL)arg2;
- (void)_modifyNotificationsWithPayload:(id)arg1 enableNotification:(BOOL)arg2 withResidentDevice:(id)arg3;
- (id)_notificationPayloadForChangedCharacterisitics:(id)arg1 destinationIsXPCTransport:(BOOL)arg2;
- (void)_notifyChangedCharacteristics:(id)arg1 identifier:(id)arg2 multiPartResponse:(BOOL)arg3 moreMessagesInMultipart:(BOOL)arg4 requestMessage:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (void)_notifyChangedCharacteristics:(id)arg1 message:(id)arg2 modifiedCharacteristics:(id)arg3;
- (void)_notifyChangedCharacteristics:(id)arg1 toUserDeviceAddress:(id)arg2;
- (void)_notifyClientOfAccessoryInfoUpdatedForAccessories:(id)arg1 shouldRefreshBadge:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_notifyClientsOfUpdatedResidentUser:(id)arg1;
- (void)_notifyRemoteUsersOfChangedCharacteristics:(id)arg1 message:(id)arg2;
- (void)_notifyRetrievalError:(id)arg1 accessoryServer:(id)arg2 linkType:(long long)arg3 accessoryOperationBlock:(CDUnknownBlockType)arg4;
- (id)_owner;
- (id)_pairedAccessories;
- (id)_pairedAccessoriesForServer:(id)arg1;
- (id)_pairedAccessoriesForServer:(id)arg1 linkType:(long long)arg2;
- (id)_pairedAccessoryWithIdentifier:(id)arg1;
- (void)_performOperation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_populateCharacteristicsThatNeedNotificationsFromDictionary:(id)arg1 error:(id *)arg2;
- (void)_postInternalNotificationForChangedCharacterisitics:(id)arg1 modifiedCharacteristics:(id)arg2 modifiedAccessories:(id)arg3;
- (void)_postInternalNotificationForChangedCharacterisitics:(id)arg1 modifiedCharacteristics:(id)arg2 modifiedAccessories:(id)arg3 changedByThisDevice:(BOOL)arg4 residentShouldNotifyPeers:(BOOL)arg5 message:(id)arg6;
- (void)_postOutgoingInvitationStateChangedNotification:(id)arg1 newInvitationState:(long long)arg2;
- (id)_prepareMultipleCharacteristicRead:(id)arg1;
- (id)_prepareUserManagementOperationForUser:(id)arg1 accessories:(id)arg2 type:(unsigned long long)arg3 error:(id *)arg4;
- (id)_prepareUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 type:(unsigned long long)arg3 error:(id *)arg4;
- (void)_presentPairingPasswordDialogForAccessory:(id)arg1 setupCodeAvailable:(CDUnknownBlockType)arg2;
- (id)_primaryAccessoryForServer:(id)arg1;
- (void)_processPairingRequestForMessage:(id)arg1 cancelPairing:(BOOL)arg2;
- (void)_purgeResidentUsers;
- (void)_reachabilityChangedForAccessory:(id)arg1 reachable:(BOOL)arg2;
- (void)_readCharacteristicValues:(id)arg1 requestMessage:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_readCharacteristicValuesForAccessories:(id)arg1 readRequestMap:(id)arg2 responseTuples:(id)arg3 requestMessage:(id)arg4 viaDevice:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_redispatchReadForAccessories:(id)arg1 dispatchGroup:(id)arg2 requestMap:(id)arg3 requestMessage:(id)arg4 responseTuples:(id)arg5;
- (void)_redispatchWriteForAccessories:(id)arg1 dispatchGroup:(id)arg2 requestMap:(id)arg3 requestMessage:(id)arg4 responseTuples:(id)arg5;
- (void)_reevaluateAccessoryInfoWithBadgeRefresh:(BOOL)arg1;
- (void)_registerDeviceForReachabilityNotification:(id)arg1 accessoryList:(id)arg2;
- (void)_registerForMessages;
- (void)_registerForReachabilityChangeNotifications:(id)arg1 mode:(BOOL)arg2;
- (void)_registerPairedAccessory:(id)arg1 btleTransport:(BOOL)arg2;
- (void)_registerStateHandler;
- (void)_remoteAccessEnabled:(BOOL)arg1;
- (void)_remoteAccessHealthMonitorTimerDidFire;
- (void)_removeAccessories:(id)arg1 bridgeAccessory:(id)arg2 message:(id)arg3;
- (id)_removeAccessoriesCommon:(id)arg1 message:(id)arg2;
- (void)_removeAccessoriesForPrimaryAccessory:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeAccessoriesFromContainers:(id)arg1;
- (void)_removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeAccessoryWithUUID:(id)arg1 message:(id)arg2;
- (void)_removeAllAccessoriesWithCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)_removeAllUsersFromAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeCharacteristic:(id)arg1;
- (void)_removeOutgoingInvitationForUser:(id)arg1;
- (void)_removePairedAccessory:(id)arg1;
- (void)_removeReachableAccessory:(id)arg1 hapAccessory:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeService:(id)arg1;
- (void)_removeTrigger:(id)arg1 message:(id)arg2;
- (void)_removeUser:(id)arg1 message:(id)arg2;
- (void)_removeWithMergeSecondaryAccessory:(id)arg1 removedFromBridgeAccessory:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_residentDeviceAvailable;
- (id)_residentDeviceForResidentUser:(id)arg1;
- (id)_residentUserForResidentDevice:(id)arg1;
- (id)_residentUsers;
- (void)_retrieveHAPAccessoryForHMDAccessory:(id)arg1 linkType:(long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_sendAccessTokensToUser:(id)arg1 user:(id)arg2 error:(id)arg3;
- (void)_sendClientCharacteristicsChangedNotification:(id)arg1 identifier:(id)arg2 isSecure:(BOOL)arg3 multiPartResponse:(BOOL)arg4 moreMessagesInMultipart:(BOOL)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (void)_sendInvitation:(id)arg1 confirm:(BOOL)arg2 message:(id)arg3;
- (void)_sendInvitationCancelationRequestToInvitee:(id)arg1;
- (void)_sendRemoveCompletionStatusForHMDAccessories:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)_sendResidentInviteWithDestination:(id)arg1;
- (CDUnknownBlockType)_setupCodeProviderForMessage:(id)arg1;
- (BOOL)_shouldAddAccessory:(id)arg1;
- (BOOL)_shouldWaitForAccessoriesToBeReachable;
- (id)_splitSecureCharacteristicChanges:(id)arg1 changedAccessories:(id)arg2;
- (void)_startHomeNotificationDeregistrationTimer;
- (void)_startSearchingForBridgedAccessories;
- (void)_stopSearchingForBridgedAccessories;
- (void)_subscribeForHomeNotificationsFromRemoteGateway:(BOOL)arg1;
- (void)_subscribeForHomeNotificationsOnDirectTransports:(BOOL)arg1;
- (void)_subscribeForNotificationFromRemoteGateway:(BOOL)arg1;
- (void)_unconfigurePairedAccessoriesForServer:(id)arg1 updateReachability:(BOOL)arg2;
- (void)_updateBulletinBoardOfChangedCharacteristics:(id)arg1 changedByThisDevice:(BOOL)arg2;
- (void)_updateCloudRelaySupport;
- (void)_updateConfigurationStateForResidentDevice:(id)arg1 desiredConfigState:(unsigned long long)arg2 message:(id)arg3;
- (void)_updateExpectConfigurationVersion;
- (void)_updateOutgoingInviationsWithCompleteUserManagementOperation:(id)arg1;
- (void)_updateOutgoingInvitationForUser:(id)arg1 invitationState:(long long)arg2 error:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_updateOwnedTriggers;
- (void)_updatePairedAccessoriesForServer:(id)arg1 reAddServices:(BOOL)arg2;
- (void)_updateReachabilityChangeToRegisteredDevices:(id)arg1;
- (void)_updateRemoteReachability:(BOOL)arg1 accessories:(id)arg2;
- (void)_updateWoWState:(id)arg1;
- (BOOL)_validateAddingNewTriggerWithName:(id)arg1 message:(id)arg2;
- (BOOL)_verifyUserManagementPermissionForAccessory:(id)arg1 error:(id *)arg2;
- (void)_writeCharacteristicValues:(id)arg1 requestMessage:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_writeCharacteristicValuesForAccessories:(id)arg1 writeRequestMap:(id)arg2 responseTuples:(id)arg3 requestMessage:(id)arg4 viaDevice:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didDiscoverAccessories:(id)arg3 transaction:(id)arg4 error:(id)arg5;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didStopPairingWithError:(id)arg3;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateCategory:(id)arg3;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateHasPairings:(BOOL)arg3;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateName:(id)arg3;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateValuesForCharacteristics:(id)arg3 stateNumber:(id)arg4;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 isBlockedWithCompletionHandler:(CDUnknownBlockType)arg3;
- (void)accessoryBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(BOOL)arg3 stateNumber:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)accessoryBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2 error:(id)arg3;
- (void)accessoryBrowser:(id)arg1 didTombstoneAccessoryServer:(id)arg2;
- (void)accessoryBrowser:(id)arg1 didUpdateReachability:(BOOL)arg2 forBTLEAccessoriesWithServerIdentifier:(id)arg3;
- (void)accessoryBrowser:(id)arg1 discoveryFailedWithError:(id)arg2 accessoryServer:(id)arg3 linkType:(long long)arg4;
- (id)accessoryWithUUID:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)actionSetWithUUID:(id)arg1;
- (void)addCompanionAsResidentUser:(id)arg1;
- (id)addName:(id)arg1;
- (void)addPairedAccessories:(id)arg1;
- (void)addResidentCapableDevice:(id)arg1;
- (void)addTriggerOwnedActionSet:(id)arg1;
- (void)addUnconfiguredResidentDeviceWithName:(id)arg1 userID:(id)arg2 deviceIdentifier:(id)arg3;
- (void)addUserToRelayAccessoriesWithConsentTokens:(id)arg1;
- (BOOL)applyDeviceLockStatus:(id)arg1;
- (id)assistantObject;
- (id)assistantUniqueIdentifier;
- (void)auditNotifications;
- (void)auditUsersForNotifications:(id)arg1;
- (void)btleAccessoryReachabilityProbeTimer:(BOOL)arg1;
- (id)builtInActionSetInfo;
- (void)checkTimerTriggers;
- (void)computeBridgedAccessoriesForAllBridges;
- (BOOL)configure:(id)arg1 accessoriesPresent:(id)arg2;
- (void)configureBulletinNotification;
- (void)configureWithRelayManager:(id)arg1;
- (id)createActionSetWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3;
- (void)dealloc;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)dumpActionSetDescription;
- (id)dumpCharacteristicNotificationRegistry;
- (id)dumpState;
- (id)dumpUnpairedSecondaryAccessories;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluateShouldRelaunchAndSetRelaunch;
- (void)executeActionSet:(id)arg1;
- (id)filterBuiltinActionSets:(id)arg1;
- (struct NSDictionary *)firmwareUpdateBulletinContext;
- (void)fixupBridgeForBridgedAccessories:(id)arg1 potentialBridgeAccessories:(id)arg2;
- (void)fixupReplacementAccessories:(id)arg1 commonAccessories:(id)arg2 idsDataSync:(BOOL)arg3 dataVersion:(long long)arg4 locallyAdded:(id)arg5;
- (id)getHomeConfigurationForAWD;
- (id)getReachabilityTupleForAccessoryUUID:(id)arg1;
- (void)handleAccessoryReachabilityChangeNotification:(id)arg1;
- (void)handleActiveAccountChanged:(id)arg1;
- (void)handleAppTermination:(id)arg1;
- (void)handleBackgroundTaskAgentJob:(id)arg1;
- (void)handleDidReceiveIDSMessageWithNoListener:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 defaultRoomUUID:(id)arg3 owner:(id)arg4 homeManager:(id)arg5;
- (void)invalidate;
- (BOOL)isCurrentDeviceAvaliableResident;
- (id)logIdentifier;
- (BOOL)mergeOutgoingInvitations:(id)arg1 dataVersion:(long long)arg2 locallyAddedUsers:(id)arg3 locallyRemovedUsers:(id)arg4;
- (BOOL)mergeResidentFromHome:(id)arg1 dataVersion:(unsigned long long)arg2;
- (BOOL)mergeUsersWithExistingUsers:(id)arg1 remoteAdminUser:(id)arg2 homeManager:(id)arg3 dataVersion:(long long)arg4;
- (BOOL)migrateAfterResidentChange;
- (id)migrateOwnedTriggers;
- (void)modifyNotificationOnResident:(BOOL)arg1 ignoreDeviceUnlockRequirement:(BOOL)arg2 forCharacteristics:(id)arg3;
- (id)namesOfServicesWithNewFirmwareAvailableInHome;
- (void)notifyClientOfAccessoryInfoUpdatedForAccessories:(id)arg1;
- (void)notifyClientOfVendorInfoUpdatedForManufacturers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)notifyDidArriveHome;
- (void)notifyDidEnterHomeRegion;
- (void)notifyDidLeaveHome;
- (void)notifyDidLeaveHomeRegion;
- (void)notifyNewRemotePeersFound:(BOOL)arg1 remoteUsersRemoved:(id)arg2 forceRemoteNotificationRegistration:(BOOL)arg3;
- (void)notifyOfChangedCharacteristic:(id)arg1 changedByThisDevice:(BOOL)arg2 residentShouldNotifyPeers:(BOOL)arg3 message:(id)arg4;
- (id)pairedAccessories;
- (void)pairedAccessoryCountForRoom:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)pairedAccessoryServerIdentifiers;
- (void)reEvaluateTriggers;
- (void)reachabilityChangedForAccessory:(id)arg1 reachable:(BOOL)arg2;
- (long long)reachableAccessories;
- (unsigned long long)reachableIPAccessories;
- (void)readCharacteristicValues:(id)arg1 identifier:(id)arg2 isSPIEntitled:(BOOL)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)readCharacteristicValues:(id)arg1 requestMessage:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)redispatchToResidentMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3;
- (void)redispatchToResidentMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 viaDevice:(id)arg4;
- (void)reevaluateAccessoryInfo;
- (void)regionStateUpdated:(int)arg1;
- (void)registerForRemoteAccessoryReachabilityNotifications:(BOOL)arg1;
- (void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2;
- (void)remoteAccessEnabled:(BOOL)arg1;
- (void)remoteAccessHealthMonitorTimerDidFire;
- (void)removeAccessoriesFromContainers:(id)arg1;
- (void)removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllAccessoriesWithCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)removeCharacteristic:(id)arg1;
- (void)removeDiscoveredAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (id)removeName:(id)arg1;
- (void)removeResidentCapableDevice:(id)arg1;
- (void)removeService:(id)arg1;
- (void)removeTrigger:(id)arg1;
- (void)removeTriggerNoNotification:(id)arg1;
- (void)removeTriggerOwnedActionSet:(id)arg1;
- (void)removeUnconfiguredResidentDeviceWithUserID:(id)arg1;
- (void)removeUser:(id)arg1;
- (void)removeWithMergeSecondaryAccessory:(id)arg1 removedFromBridgeAccessory:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)replaceName:(id)arg1 withNewName:(id)arg2;
- (void)resetConfiguration;
- (void)residentDeviceManager:(id)arg1 didUpdatePrimaryResident:(id)arg2;
- (void)residentDeviceManager:(id)arg1 didUpdateResidentAvailable:(BOOL)arg2;
- (void)retrieveHAPAccessoryForHMDAccessory:(id)arg1 linkType:(long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)roomWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (void)saveToCurrentAccountWithReason:(id)arg1;
- (void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3;
- (void)saveWithReason:(id)arg1 postSyncNotification:(BOOL)arg2;
- (void)sendAccessTokensToUser:(id)arg1 user:(id)arg2;
- (id)serviceGroupWithName:(id)arg1;
- (id)serviceGroupWithUUID:(id)arg1;
- (void)setAnyBTLEAccessoryReachable:(BOOL)arg1;
- (void)setPairedAccessories:(id)arg1;
- (id)shortDescription;
- (BOOL)shouldRelayNotificationToRegisteredDevicesForSource:(id)arg1;
- (void)startSearchingForBridgedAccessories;
- (void)stopSearchingForBridgedAccessories;
- (void)subscribeForNotificationsFromRemoteGateway;
- (void)takeOwnershipOfAccessories:(id)arg1;
- (void)takeOwnershipOfAppData:(id)arg1;
- (BOOL)takeOwnershipOfBuiltinActionSets:(id)arg1;
- (void)takeOwnershipOfNotificationRegistry:(id)arg1;
- (void)takeOwnershipOfTriggers:(id)arg1 triggersToReactivate:(id)arg2 dataVersion:(long long)arg3 pendingTransactions:(id)arg4;
- (void)timerDidFire:(id)arg1;
- (id)triggerOwnedActionSetWithUUID:(id)arg1;
- (id)triggerWithName:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (void)updateActionSetExecutionDates:(id)arg1;
- (void)updateHomeLocation;
- (void)updateNetworkConnectivity:(BOOL)arg1 companionReachable:(BOOL)arg2;
- (id)url;
- (void)userManagementOperationDidFinish:(id)arg1;
- (id)userWithUUID:(id)arg1;
- (void)validateDuetEventIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)validateName:(id)arg1;
- (void)writeCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)writeCharacteristicValues:(id)arg1 transactionId:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)writeRequestTuplesFromMessage:(id)arg1;
- (id)zoneWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;

@end


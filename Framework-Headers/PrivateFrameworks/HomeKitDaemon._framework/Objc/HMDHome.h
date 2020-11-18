//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDAccessoryManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDRelayManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDUserManagementOperationDelegate-Protocol.h>
#import <HomeKitDaemon/HMMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessoryManager, HMDCharacteristicNotificationRegistry, HMDHomeLocationHandler, HMDHomeManager, HMDRelayManager, HMDRoom, HMDUser, HMMessageDispatcher, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDHome : NSObject <HMDUserManagementOperationDelegate, HMDAccessoryManagerDelegate, HMMessageReceiver, HMDRelayManagerDelegate, NSSecureCoding>
{
    BOOL _remoteAccessIsEnabled;
    BOOL _adminUser;
    BOOL _registeredNotificationWithRemoteGateway;
    BOOL _allowsRemoteAccess;
    HMDUser *_currentUser;
    HMDUser *_administrator;
    NSString *_name;
    HMDHomeManager *_homeManager;
    NSUUID *_uuid;
    HMDHomeLocationHandler *_homeLocationHandler;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_msgDispatcher;
    HMDAccessoryManager *_accessoryManager;
    HMDRelayManager *_relayManager;
    NSMutableArray *_rooms;
    NSMutableArray *_zones;
    NSMutableArray *_accessories;
    NSMutableArray *_services;
    NSMutableArray *_serviceGroups;
    NSMutableArray *_actionSets;
    NSMutableArray *_triggers;
    NSMutableArray *_outgoingInvitations;
    NSMutableDictionary *_pendingAccessoriesToAdd;
    NSMutableArray *_users;
    NSMutableArray *_unconfiguredResidentDevices;
    HMDRoom *_roomForEntireHome;
    long long _lastKnownReachableIPAccessoryCount;
    long long _lastKnownReachableAccessoryCount;
    long long _configurationVersion;
    NSString *_administratorName;
    HMDCharacteristicNotificationRegistry *_characteristicNotificationRegistry;
    NSMutableSet *_heartbeatPingMessagesQueuedWithServer;
    NSMutableSet *_pendingResponsesForRemoteAccessSetup;
}

@property (strong, nonatomic) NSMutableArray *accessories; // @synthesize accessories=_accessories;
@property (strong, nonatomic) HMDAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property (strong, nonatomic) NSMutableArray *actionSets; // @synthesize actionSets=_actionSets;
@property (nonatomic, getter=isAdminUser) BOOL adminUser; // @synthesize adminUser=_adminUser;
@property (readonly, nonatomic) HMDUser *administrator; // @synthesize administrator=_administrator;
@property (strong, nonatomic) NSString *administratorName; // @synthesize administratorName=_administratorName;
@property (nonatomic) BOOL allowsRemoteAccess; // @synthesize allowsRemoteAccess=_allowsRemoteAccess;
@property (strong, nonatomic) HMDCharacteristicNotificationRegistry *characteristicNotificationRegistry; // @synthesize characteristicNotificationRegistry=_characteristicNotificationRegistry;
@property (nonatomic) long long configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, nonatomic) HMDUser *currentUser; // @synthesize currentUser=_currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableSet *heartbeatPingMessagesQueuedWithServer; // @synthesize heartbeatPingMessagesQueuedWithServer=_heartbeatPingMessagesQueuedWithServer;
@property (strong, nonatomic) HMDHomeLocationHandler *homeLocationHandler; // @synthesize homeLocationHandler=_homeLocationHandler;
@property (weak, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (nonatomic) long long lastKnownReachableAccessoryCount; // @synthesize lastKnownReachableAccessoryCount=_lastKnownReachableAccessoryCount;
@property (nonatomic) long long lastKnownReachableIPAccessoryCount; // @synthesize lastKnownReachableIPAccessoryCount=_lastKnownReachableIPAccessoryCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSMutableArray *outgoingInvitations; // @synthesize outgoingInvitations=_outgoingInvitations;
@property (strong, nonatomic) NSMutableDictionary *pendingAccessoriesToAdd; // @synthesize pendingAccessoriesToAdd=_pendingAccessoriesToAdd;
@property (strong, nonatomic) NSMutableSet *pendingResponsesForRemoteAccessSetup; // @synthesize pendingResponsesForRemoteAccessSetup=_pendingResponsesForRemoteAccessSetup;
@property (nonatomic) BOOL registeredNotificationWithRemoteGateway; // @synthesize registeredNotificationWithRemoteGateway=_registeredNotificationWithRemoteGateway;
@property (strong, nonatomic) HMDRelayManager *relayManager; // @synthesize relayManager=_relayManager;
@property (nonatomic) BOOL remoteAccessIsEnabled; // @synthesize remoteAccessIsEnabled=_remoteAccessIsEnabled;
@property (strong, nonatomic) HMDRoom *roomForEntireHome; // @synthesize roomForEntireHome=_roomForEntireHome;
@property (strong, nonatomic) NSMutableArray *rooms; // @synthesize rooms=_rooms;
@property (strong, nonatomic) NSMutableArray *serviceGroups; // @synthesize serviceGroups=_serviceGroups;
@property (strong, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableArray *triggers; // @synthesize triggers=_triggers;
@property (strong, nonatomic) NSMutableArray *unconfiguredResidentDevices; // @synthesize unconfiguredResidentDevices=_unconfiguredResidentDevices;
@property (strong, nonatomic) NSMutableArray *users; // @synthesize users=_users;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property (strong, nonatomic) NSMutableArray *zones; // @synthesize zones=_zones;

+ (id)filterTunneledAccessories:(id)arg1;
+ (BOOL)isObjectContainedInHome:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)__accessoryIdentifiers;
- (void)__handleAcceptedOutgoingInvitationResponse:(id)arg1 destinationAddress:(id)arg2 publicKey:(id)arg3 username:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)__handleCancelledOutgoingInvitation:(id)arg1;
- (void)__handleCompletedOutgoingInvitation:(id)arg1;
- (id)_addAccessory:(id)arg1 configurationApp:(id)arg2;
- (void)_addAllUsersToAccessories:(id)arg1;
- (void)_addNewAccessories:(id)arg1 bridgeAccessory:(id)arg2 message:(id)arg3;
- (void)_addNewTrigger:(id)arg1 message:(id)arg2 notification:(id)arg3 payloadAnnex:(id)arg4;
- (void)_addRegularUsersWithIDs:(id)arg1 message:(id)arg2;
- (void)_addResidentWithUsername:(id)arg1 publicKey:(id)arg2 destination:(id)arg3;
- (void)_addResponseTuplesFromDictionary:(id)arg1 accessoryRequestMapTable:(id)arg2 responseTuples:(id)arg3 completedGroup:(id)arg4;
- (void)_addUser:(id)arg1 userPrivilege:(unsigned long long)arg2 confirm:(BOOL)arg3 message:(id)arg4;
- (id)_administrator;
- (unsigned long long)_appendCharacteristicsToAccessoryList:(id)arg1 responseTuples:(id)arg2 forMultipleCharacteristicsRemoteRead:(id)arg3;
- (unsigned long long)_appendCharacteristicsToAccessoryList:(id)arg1 responseTuples:(id)arg2 forMultipleCharacteristicsRemoteWrite:(id)arg3;
- (id)_applyDeviceLockCheck:(id)arg1;
- (id)_characteristicNotificationPayloadForRemoteGatewayForAccessories:(id)arg1;
- (void)_configureConfiguredResident:(id)arg1 desiredConfigState:(unsigned long long)arg2 message:(id)arg3;
- (void)_configureUnconfiguredResident:(id)arg1 desiredConfigState:(unsigned long long)arg2;
- (id)_createBuiltinActionSets;
- (id)_currentUser;
- (BOOL)_doesResidentExistInMyCircleWithAddress:(id)arg1 homeManager:(id)arg2;
- (void)_encodeActionSets:(id)arg1 coder:(id)arg2;
- (void)_encodeObjectsWithAcessoriesWithCoder:(id)arg1;
- (id)_generateWhitelistForContainer:(id)arg1 blacklistedAccessoryUUIDs:(id)arg2;
- (void)_handleActiveAccountChanged:(id)arg1;
- (void)_handleAddAccessory:(id)arg1;
- (void)_handleAddActionSet:(id)arg1;
- (void)_handleAddEventTrigger:(id)arg1;
- (void)_handleAddRelayAccessTokens:(id)arg1;
- (void)_handleAddRoom:(id)arg1;
- (void)_handleAddServiceGroup:(id)arg1;
- (void)_handleAddTimerTrigger:(id)arg1;
- (void)_handleAddUser:(id)arg1;
- (void)_handleAddUserToRelayAccessories:(id)arg1;
- (void)_handleAddZone:(id)arg1;
- (void)_handleCancelPairingAccessory:(id)arg1;
- (void)_handleCharacterisiticsChangedNotification:(id)arg1;
- (void)_handleContinuePairingAccessory:(id)arg1;
- (void)_handleDidReceiveIDSMessageWithNoListenerFromAddress:(id)arg1;
- (void)_handleEnableRemoteAccess:(id)arg1;
- (void)_handleExecuteActionSet:(id)arg1;
- (void)_handleModifyCharacteristicNotifications:(id)arg1;
- (void)_handleMultipleCharacteristicRead:(id)arg1;
- (void)_handleMultipleCharacteristicWrite:(id)arg1;
- (void)_handleQueryRemoteAccess:(id)arg1;
- (void)_handleQueryUserIsAdmin:(id)arg1;
- (void)_handleRemoveAccessory:(id)arg1;
- (void)_handleRemoveActionSet:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (void)_handleRemoveServiceGroup:(id)arg1;
- (void)_handleRemoveTrigger:(id)arg1;
- (void)_handleRemoveUser:(id)arg1;
- (void)_handleRemoveZone:(id)arg1;
- (void)_handleRename:(id)arg1;
- (void)_handleResponseForElectMessageToResident:(id)arg1 error:(id)arg2;
- (void)_handleRetrievalForBlockedAccessory:(id)arg1 hapAccessory:(id)arg2 blockedBridgedAccessories:(id)arg3 unblockMessage:(id)arg4;
- (void)_handleUnblock:(id)arg1;
- (void)_handleUpdateOutgoingInvitationState:(id)arg1;
- (void)_handleUpdateRequestForHomeInvitationFromInvitee:(id)arg1;
- (void)_handleUserInvitations:(id)arg1;
- (BOOL)_isUserValid:(id)arg1 error:(id *)arg2;
- (BOOL)_mergeResidentsMissingInCloud:(id)arg1 homeManager:(id)arg2;
- (void)_modifyAllRegistrationsForNotificationsInNotificationRegistry:(BOOL)arg1;
- (void)_modifyNotificationOnResident:(BOOL)arg1 ignoreDeviceUnlockRequirement:(BOOL)arg2 forCharacteristics:(id)arg3;
- (void)_modifyNotificationsOnResidentWithPayload:(id)arg1 enableNotification:(BOOL)arg2;
- (void)_modifyNotificationsWithPayload:(id)arg1 enableNotification:(BOOL)arg2 withRemoteGateway:(id)arg3;
- (id)_notificationPayloadForChangedCharacterisitics:(id)arg1;
- (void)_notifyChangedCharacteristics:(id)arg1;
- (void)_notifyChangedCharacteristics:(id)arg1 identifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_notifyChangedCharacteristics:(id)arg1 toUserDeviceAddress:(id)arg2;
- (void)_notifyRemoteUsersOfChangedCharacteristics:(id)arg1;
- (id)_populateCharacteristicsThatNeedNotificationsFromDictionary:(id)arg1 error:(id *)arg2;
- (void)_postInternalNotificationForChangedCharacterisitics:(id)arg1 modifiedAccessories:(id)arg2;
- (void)_postInternalNotificationForChangedCharacterisitics:(id)arg1 modifiedAccessories:(id)arg2 changedByThisDevice:(BOOL)arg3;
- (void)_postOutgoingInvitationStateChangedNotification:(id)arg1 newInvitationState:(long long)arg2;
- (id)_prepareMultipleCharacteristicRead:(id)arg1;
- (id)_prepareUserManagementOperationForUser:(id)arg1 accessories:(id)arg2 type:(unsigned long long)arg3 error:(id *)arg4;
- (id)_prepareUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 type:(unsigned long long)arg3 error:(id *)arg4;
- (void)_presentPairingPasswordDialogForAccessory:(id)arg1 setupCodeAvailable:(CDUnknownBlockType)arg2;
- (void)_processPairingRequestForMessage:(id)arg1 cancelPairing:(BOOL)arg2;
- (void)_reachabilityChangedForAccessory:(id)arg1 reachable:(BOOL)arg2;
- (void)_readCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_registerForMessages;
- (void)_remoteAccessEnabled:(BOOL)arg1;
- (void)_remoteAccessHealthMonitorTimerDidFire;
- (void)_removeAccessories:(id)arg1 bridgeAccessory:(id)arg2 message:(id)arg3;
- (id)_removeAccessoriesCommon:(id)arg1 message:(id)arg2;
- (void)_removeAccessoryWithUUID:(id)arg1 message:(id)arg2;
- (void)_removeAllAccessoriesWithCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)_removeAllUsersFromAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeCharacteristic:(id)arg1;
- (void)_removeService:(id)arg1;
- (void)_removeTunneledAccessories:(id)arg1;
- (void)_removeUser:(id)arg1 message:(id)arg2;
- (BOOL)_residentDeviceAvailable;
- (id)_residentUsers;
- (void)_sendAccessTokensToUser:(id)arg1 user:(id)arg2 error:(id)arg3;
- (void)_sendInvitationCancelationRequestToInvitee:(id)arg1;
- (void)_sendInviteRequestForUser:(id)arg1 inviteIdentifier:(id)arg2 userPrivilege:(unsigned long long)arg3 confirm:(BOOL)arg4 expiryDate:(id)arg5 message:(id)arg6;
- (void)_sendResidentInviteWithDestination:(id)arg1;
- (CDUnknownBlockType)_setupCodeProviderForMessage:(id)arg1;
- (BOOL)_shouldAddAccessory:(id)arg1;
- (void)_subscribeForNotificationFromRemoteGateway;
- (void)_updateBulletinBoardOfChangedCharacteristics:(id)arg1;
- (void)_updateCloudRelaySupport;
- (void)_updateConfigurationStateForResidentDevice:(id)arg1 desiredConfigState:(unsigned long long)arg2 message:(id)arg3;
- (void)_updateOutgoingInviationsWithCompleteUserManagementOperation:(id)arg1;
- (void)_updateOutgoingInvitationForUser:(id)arg1 invitationState:(long long)arg2 error:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_updateWoWState;
- (BOOL)_validateAddingNewTriggerWithName:(id)arg1 message:(id)arg2;
- (BOOL)_verifyUserManagementPermissionForAccessory:(id)arg1 error:(id *)arg2;
- (void)_writeCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)accessoryManager:(id)arg1 didAddPairedAccessories:(id)arg2 toBridgeAccessory:(id)arg3;
- (void)accessoryManager:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didRemovePairedAccessories:(id)arg2 fromBridgeAccessory:(id)arg3;
- (id)accessoryWithName:(id)arg1;
- (id)accessoryWithUUID:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)actionSetWithUUID:(id)arg1;
- (void)addAccessoryToCollection:(id)arg1;
- (void)addCompanionAsResidentUser:(id)arg1;
- (id)addName:(id)arg1;
- (void)addUnconfiguredResidentDeviceWithName:(id)arg1 userID:(id)arg2 deviceIdentifier:(id)arg3;
- (void)addUserToRelayAccessoriesWithConsentTokens:(id)arg1;
- (BOOL)applyDeviceLockStatus:(id)arg1;
- (id)assistantUniqueIdentifier;
- (id)builtInActionSetInfo;
- (void)checkTimerTriggers;
- (void)computeBridgedAccessoriesForAllBridges;
- (BOOL)configure:(id)arg1;
- (void)configureWithRelayManager:(id)arg1;
- (unsigned long long)countOfIPAccessories;
- (void)createBuiltinActionSets;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)executeActionSet:(id)arg1;
- (id)filterBuiltinActionSets:(id)arg1;
- (void)fixupBridgeForBridgedAccessories:(id)arg1 potentialBridgeAccessories:(id)arg2;
- (void)fixupReplacementAccessories:(id)arg1 commonAccessories:(id)arg2 idsDataSync:(BOOL)arg3 dataVersion:(long long)arg4 locallyAdded:(id)arg5;
- (void)fixupUserResidentIdentifiersWithResidents:(id)arg1;
- (void)handleBackgroundTaskAgentJob:(id)arg1;
- (void)handleDidReceiveIDSMessageWithNoListener:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 entireRoomUUID:(id)arg3 administrator:(id)arg4 homeManager:(id)arg5;
- (void)invalidate;
- (BOOL)isDeviceLocked;
- (BOOL)mergeOutgoingInvitations:(id)arg1 dataVersion:(long long)arg2;
- (BOOL)mergeUsersWithExistingUsers:(id)arg1 remoteAdminUser:(id)arg2 homeManager:(id)arg3 dataVersion:(long long)arg4;
- (void)modifyNotificationOnResident:(BOOL)arg1 ignoreDeviceUnlockRequirement:(BOOL)arg2 forCharacteristics:(id)arg3;
- (void)notifyChangedCharacteristics:(id)arg1;
- (void)notifyNewRemotePeersFound:(BOOL)arg1 remoteUsersRemoved:(id)arg2;
- (void)notifyOfChangedCharacterisitic:(id)arg1;
- (void)reEvaluateTriggers;
- (void)reachabilityChangedForAccessory:(id)arg1 reachable:(BOOL)arg2;
- (long long)reachableAccessories;
- (unsigned long long)reachableIPAccessories;
- (void)readCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)redispatchToResidentMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3;
- (void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2;
- (void)remoteAccessEnabled:(BOOL)arg1;
- (void)remoteAccessHealthMonitorTimerDidFire;
- (void)removeAllAccessoriesWithCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)removeCharacteristic:(id)arg1;
- (id)removeName:(id)arg1;
- (void)removeService:(id)arg1;
- (void)removeTunneledAccessories:(id)arg1;
- (void)removeUnconfiguredResidentDeviceWithUserID:(id)arg1;
- (void)removeUser:(id)arg1;
- (id)replaceName:(id)arg1 withNewName:(id)arg2;
- (id)roomWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (void)saveToLocalStoreWithReason:(id)arg1;
- (void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3;
- (void)saveWithReason:(id)arg1 postSyncNotification:(BOOL)arg2;
- (void)sendAccessTokensToUser:(id)arg1 user:(id)arg2;
- (id)serviceGroupWithName:(id)arg1;
- (id)serviceGroupWithUUID:(id)arg1;
- (void)takeOwnershipOfBuiltinActionSets:(id)arg1;
- (void)takeOwnershipOfNotificationRegistry:(id)arg1;
- (void)takeOwnershipOfTriggers:(id)arg1 triggersToReactivate:(id)arg2;
- (id)triggerWithName:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (void)updateNetworkConnectivity:(BOOL)arg1 companionReachable:(BOOL)arg2;
- (id)url;
- (void)userManagementOperationDidFinish:(id)arg1;
- (id)userWithUUID:(id)arg1;
- (void)writeCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)writeCharacteristicValues:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)writeRequestTuplesFromMessage:(id)arg1;
- (id)zoneWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;

@end


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
#import <HomeKit/_HMLocationHandlerDelegate-Protocol.h>

@class CLLocation, HMApplicationData, HMFUnfairLock, HMHomeManager, HMMutableArray, HMRoom, HMSetupViewController, HMUser, NSArray, NSDate, NSString, NSUUID, _HMContext;
@protocol HMHomeDelegate, HMSetupRemoteService, OS_dispatch_queue;

@interface HMHome : NSObject <_HMLocationHandlerDelegate, NSSecureCoding, HMFMessageReceiver, HMObjectMerge, HMMutableApplicationData>
{
    HMFUnfairLock *_lock;
    BOOL _automaticSoftwareUpdateEnabled;
    long long _minimumMediaUserPrivilege;
    BOOL _mediaPeerToPeerEnabled;
    NSString *_mediaPassword;
    BOOL _primary;
    BOOL _notificationsEnabled;
    BOOL _ownerUser;
    BOOL _adminUser;
    BOOL _notificationEnableRequested;
    int _locationAuthorization;
    NSUUID *_uniqueIdentifier;
    id<HMHomeDelegate> _delegate;
    CLLocation *_homeLocation;
    NSString *_name;
    HMUser *_currentUser;
    HMApplicationData *_applicationData;
    NSDate *_notificationsUpdatedTime;
    unsigned long long _homeHubState;
    HMHomeManager *_homeManager;
    HMSetupViewController *_setupViewController;
    id<HMSetupRemoteService> _setupRemoteViewController;
    HMMutableArray *_currentAccessories;
    HMMutableArray *_currentRooms;
    HMMutableArray *_currentZones;
    HMMutableArray *_currentServiceGroups;
    HMMutableArray *_currentActionSets;
    HMMutableArray *_currentTriggerOwnedActionSets;
    HMMutableArray *_currentActions;
    HMMutableArray *_currentTriggers;
    HMMutableArray *_currentUsers;
    HMMutableArray *_currentResidentDevices;
    HMMutableArray *_currentOutgoingInvitations;
    _HMContext *_context;
    NSUUID *_uuid;
    HMRoom *_homeAsRoom;
    HMMutableArray *_currentMediaSystems;
}

@property (readonly, copy, nonatomic) NSArray *accessories;
@property (readonly, copy, nonatomic) NSArray *actionSets;
@property (nonatomic, getter=isAdminUser) BOOL adminUser; // @synthesize adminUser=_adminUser;
@property (readonly, nonatomic) HMApplicationData *applicationData;
@property (readonly, getter=isAutomaticSoftwareUpdateEnabled) BOOL automaticSoftwareUpdateEnabled;
@property (getter=isAutomaticSoftwareUpdateEnabled) BOOL automaticSoftwareUpdateEnabled; // @dynamic automaticSoftwareUpdateEnabled;
@property (strong, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (strong, nonatomic) HMMutableArray *currentAccessories; // @synthesize currentAccessories=_currentAccessories;
@property (strong, nonatomic) HMMutableArray *currentActionSets; // @synthesize currentActionSets=_currentActionSets;
@property (strong, nonatomic) HMMutableArray *currentActions; // @synthesize currentActions=_currentActions;
@property (strong, nonatomic) HMMutableArray *currentMediaSystems; // @synthesize currentMediaSystems=_currentMediaSystems;
@property (strong, nonatomic) HMMutableArray *currentOutgoingInvitations; // @synthesize currentOutgoingInvitations=_currentOutgoingInvitations;
@property (strong, nonatomic) HMMutableArray *currentResidentDevices; // @synthesize currentResidentDevices=_currentResidentDevices;
@property (strong, nonatomic) HMMutableArray *currentRooms; // @synthesize currentRooms=_currentRooms;
@property (strong, nonatomic) HMMutableArray *currentServiceGroups; // @synthesize currentServiceGroups=_currentServiceGroups;
@property (strong, nonatomic) HMMutableArray *currentTriggerOwnedActionSets; // @synthesize currentTriggerOwnedActionSets=_currentTriggerOwnedActionSets;
@property (strong, nonatomic) HMMutableArray *currentTriggers; // @synthesize currentTriggers=_currentTriggers;
@property (readonly, nonatomic) HMUser *currentUser;
@property (strong, nonatomic) HMUser *currentUser; // @synthesize currentUser=_currentUser;
@property (strong, nonatomic) HMMutableArray *currentUsers; // @synthesize currentUsers=_currentUsers;
@property (strong, nonatomic) HMMutableArray *currentZones; // @synthesize currentZones=_currentZones;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMHomeDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMRoom *homeAsRoom; // @synthesize homeAsRoom=_homeAsRoom;
@property (readonly, nonatomic) unsigned long long homeHubState; // @synthesize homeHubState=_homeHubState;
@property (strong, nonatomic) CLLocation *homeLocation; // @synthesize homeLocation=_homeLocation;
@property (weak, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (nonatomic) int locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property (readonly, copy) NSString *mediaPassword;
@property (copy) NSString *mediaPassword; // @dynamic mediaPassword;
@property (readonly, getter=isMediaPeerToPeerEnabled) BOOL mediaPeerToPeerEnabled;
@property (getter=isMediaPeerToPeerEnabled) BOOL mediaPeerToPeerEnabled; // @dynamic mediaPeerToPeerEnabled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) long long minimumMediaUserPrivilege;
@property long long minimumMediaUserPrivilege; // @dynamic minimumMediaUserPrivilege;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) BOOL notificationEnableRequested; // @synthesize notificationEnableRequested=_notificationEnableRequested;
@property (nonatomic, getter=areNotificationsEnabled) BOOL notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property (copy, nonatomic) NSDate *notificationsUpdatedTime; // @synthesize notificationsUpdatedTime=_notificationsUpdatedTime;
@property (nonatomic, getter=isOwnerUser) BOOL ownerUser; // @synthesize ownerUser=_ownerUser;
@property (nonatomic, getter=isPrimary) BOOL primary; // @synthesize primary=_primary;
@property (readonly, copy, nonatomic) NSArray *rooms;
@property (readonly, copy, nonatomic) NSArray *serviceGroups;
@property (weak, nonatomic) id<HMSetupRemoteService> setupRemoteViewController; // @synthesize setupRemoteViewController=_setupRemoteViewController;
@property (weak, nonatomic) HMSetupViewController *setupViewController; // @synthesize setupViewController=_setupViewController;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *triggerOwnedActionSets; // @dynamic triggerOwnedActionSets;
@property (readonly, copy, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, copy, nonatomic) NSArray *users;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (readonly, copy, nonatomic) NSArray *zones;

+ (BOOL)accessorySupportsMediaAccessControl:(id)arg1;
+ (id)generateMediaPasswordWithError:(id *)arg1;
+ (BOOL)isValidMediaPassword:(id)arg1 error:(id *)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 homeManager:(id)arg2;
- (void)_acceptInvitation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addAccessory:(id)arg1 appID:(id)arg2 password:(id)arg3 setupCodeDeferred:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_addActionSetWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addAndSetupAccessoriesWithSetupPayload:(id)arg1 browseRequest:(id)arg2 suggestedRoomName:(id)arg3 legacyAPI:(BOOL)arg4 trustedOrigin:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_addIdentifier:(id)arg1 bridgeUUID:(id)arg2;
- (void)_addRoomWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addServiceGroupWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addTrigger:(id)arg1 triggerUUID:(id)arg2 message:(id)arg3;
- (void)_addUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_addZoneWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_callProgressHandler:(CDUnknownBlockType)arg1 updatingAccessoryDescription:(id)arg2 fromMessage:(id)arg3;
- (void)_cancelInvitation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelPairingForAccessoryWithDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_configureOutgoingInvitiation:(id)arg1;
- (void)_continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_createFailedAccessoriesListFromError:(id)arg1;
- (void)_enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_enableNotifications:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_enableRemoteAccess:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_executeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_getContainerForAppData:(id)arg1;
- (void)_handleAccessoryAddedNotification:(id)arg1;
- (void)_handleAccessoryInfoUpdatedNotification:(id)arg1;
- (void)_handleAccessoryRemovedNotification:(id)arg1;
- (void)_handleAccessoryReprovisionStateUpdate:(id)arg1;
- (void)_handleAccessoryReprovisionedNotification:(id)arg1;
- (void)_handleActionSetAddedNotification:(id)arg1;
- (void)_handleActionSetRemovedNotification:(id)arg1;
- (void)_handleAddAccessoryProgressNotification:(id)arg1;
- (void)_handleAddedResidentDevice:(id)arg1;
- (void)_handleAppDataUpdatedNotification:(id)arg1;
- (void)_handleBlockedStateNotification:(id)arg1;
- (void)_handleEventTriggerAddedNotification:(id)arg1;
- (void)_handleEventTriggerOwnerDeviceNotification:(id)arg1;
- (void)_handleEventTriggerOwnerUserNotification:(id)arg1;
- (void)_handleHomeHubStateUpdatedNotification:(id)arg1;
- (void)_handleHomeLocationUpdateNotificaton:(id)arg1;
- (void)_handleHomeRenamedNotification:(id)arg1;
- (void)_handleMediaSystemAddedNotification:(id)arg1;
- (void)_handleMediaSystemRemovedNotification:(id)arg1;
- (void)_handleMultipleCharacteristicValuesUpdated:(id)arg1;
- (void)_handleNotificationsEnabled:(id)arg1;
- (void)_handlePairedAccessoryErrorNotification:(id)arg1;
- (void)_handleRegisteredProgressNotification:(id)arg1;
- (void)_handleRemovedResidentDevice:(id)arg1;
- (void)_handleRequestAccessorySetupCodeRequestKey:(id)arg1;
- (void)_handleRoomAddedNotification:(id)arg1;
- (void)_handleRoomRemovedNotification:(id)arg1;
- (void)_handleRuntimeStateUpdate:(id)arg1;
- (void)_handleServiceGroupAddedNotification:(id)arg1;
- (void)_handleServiceGroupRemovedNotification:(id)arg1;
- (void)_handleTimerTriggerAddedNotification:(id)arg1;
- (void)_handleTriggerRemovedNotification:(id)arg1;
- (void)_handleUpdatedPresenceAuthNotification:(id)arg1;
- (void)_handleUpdatedPresenceComputeNotification:(id)arg1;
- (void)_handleUpdatedResidentDevice:(id)arg1;
- (void)_handleUpdatedUserAccessNotification:(id)arg1;
- (void)_handleUserAddedNotification:(id)arg1;
- (void)_handleUserInvitationsUpdatedNotification:(id)arg1;
- (void)_handleUserRemovedNotification:(id)arg1;
- (void)_handleZoneAddedNotification:(id)arg1;
- (void)_handleZoneRemovedNotification:(id)arg1;
- (void)_invalidate;
- (void)_inviteWithUserInformation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_invokeDelegateForAppData:(id)arg1;
- (void)_launchSetupViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_manageUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)_mergeAccessoriesForMergeCollection:(id)arg1 currentAccessories:(id)arg2;
- (unsigned long long)_mergeCurrentHomeAccessoriesWithNewHomeAccessories:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeActionSetsWithNewHomeActionSets:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeMediaSystemsWithNewMediaSystems:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeResidentDevicesWithNewHomeResidentDevices:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeRoomsWithNewHomeRooms:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeServiceGroupsWithNewHomeServiceGroups:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeTriggerOwnedActionSetsWithNewHomeActionSets:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeTriggersWithNewHomeTriggers:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeUsersWithNewHomeUsers:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeZonesWithNewHomeZones:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeRoomsForMergeCollection:(id)arg1 currentRooms:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_notifyDelegateOfAccesoryInvitationsUpdateForUser:(id)arg1;
- (void)_notifyDelegateOfAccessControlUpdateForUser:(id)arg1;
- (void)_notifyDelegateOfAddedMediaSystem:(id)arg1;
- (void)_notifyDelegateOfAppDataUpdate;
- (void)_notifyDelegateOfAppDataUpdateForActionSet:(id)arg1;
- (void)_notifyDelegateOfAppDataUpdateForRoom:(id)arg1;
- (void)_notifyDelegateOfAppDataUpdateForServiceGroup:(id)arg1;
- (void)_notifyDelegateOfHomeHubStateUpdate;
- (void)_notifyDelegateOfRemovedMediaSystem:(id)arg1;
- (void)_notifyDelegateOfTriggerAdded:(id)arg1;
- (void)_notifyDelegateOfTriggerRemoved:(id)arg1;
- (void)_notifyDelegateOfTriggerUpdated:(id)arg1;
- (void)_performBatchCharacteristicRequest:(id)arg1;
- (id)_privateDelegate;
- (void)_queryRemoteAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_registerNotificationHandlers;
- (void)_removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeIdentifier:(id)arg1 bridgeUUID:(id)arg2;
- (void)_removeIncompatibleTrigger:(id)arg1;
- (void)_removeMediaSystem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeServiceGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeServices:(id)arg1;
- (void)_removeTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_reprovisionAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_retrieveLocation;
- (void)_setupBuiltinActionSets:(id)arg1;
- (void)_startPairingWithAccessoryDescription:(id)arg1 setupRemoteViewController:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_startSearchForAccessoriesNeedingReprovisioning;
- (void)_unblockAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_unconfigureHome;
- (void)_updateApplicationData:(id)arg1 forAppDataContainerWithUUID:(id)arg2 appDataContainerUUIDKeyName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_updateInvitation:(id)arg1 invitationState:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateLocation:(id)arg1;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_userDidConfirmExecution:(BOOL)arg1 ofTriggerWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)accessoryWithUUID:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)actionSetWithUUID:(id)arg1;
- (void)addAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAccessory:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addAccessoryWithSetupPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addActionSetWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAndSetUpNewAccessoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addAndSetupAccessoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addAndSetupAccessoriesWithPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAndSetupAccessoriesWithSetupPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addRoomWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addServiceGroupWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addUser:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addUserWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addUserWithoutConfirmation:(id)arg1 privilege:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addZoneWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)administrator;
- (void)assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)builtinActionSetOfType:(id)arg1;
- (void)cancelPairingForAccessoryWithDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)controlTargets;
- (id)createActionSetWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;
- (id)createAndAddActionSetWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;
- (void)dealloc;
- (void)didUpdateAuthorization:(int)arg1;
- (void)enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enableNotifications:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enableRemoteAccess:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)executeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleDaemonInterruptedNotification:(id)arg1;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (void)handleStartWithError:(id)arg1 response:(id)arg2;
- (void)handleUIApplicationWillResignActiveNotification:(id)arg1;
- (id)homeAccessControlForUser:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)initWithName:(id)arg1 uuid:(id)arg2 homeAsRoomUUID:(id)arg3 homeAsRoomName:(id)arg4 actionSets:(id)arg5;
- (void)invalidate;
- (void)inviteUsers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)inviteUsersWithInviteInformation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)location;
- (void)manageUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)mediaSystems;
- (void)mergeWithNewObjectNoMergeCount:(id)arg1;
- (id)messageDestination;
- (void)notifyDelegateOfAccesoryInvitationsUpdateForUser:(id)arg1;
- (void)notifyDelegateOfAccessControlUpdateForUser:(id)arg1;
- (void)notifyDelegateOfAppDataUpdateForActionSet:(id)arg1;
- (void)notifyDelegateOfAppDataUpdateForRoom:(id)arg1;
- (void)notifyDelegateOfAppDataUpdateForServiceGroup:(id)arg1;
- (void)notifyDelegatesOfExecution:(id)arg1 actionSet:(id)arg2;
- (id)outgoingInvitations;
- (id)owner;
- (void)performBatchCharacteristicRequest:(id)arg1;
- (void)queryRemoteAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reEnableNotifications;
- (void)registerSetupProgressHandler:(CDUnknownBlockType)arg1 forAccessory:(id)arg2;
- (void)removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeMediaSystem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeServiceGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeServices:(id)arg1;
- (void)removeTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeUserWithoutConfirmation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reprovisionAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)residentDevices;
- (id)roomForEntireHome;
- (id)roomWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (void)sendConfigureBulletinNotification;
- (id)serviceGroupWithName:(id)arg1;
- (id)serviceGroupWithUUID:(id)arg1;
- (id)servicesWithTypes:(id)arg1;
- (void)setApplicationData:(id)arg1;
- (void)startDiscoveringSymptomsForNearbyDevices;
- (void)startPairingWithAccessory:(id)arg1 accessorySetupDescription:(id)arg2 setupRemoteViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startPairingWithAccessoryDescription:(id)arg1 setupRemoteViewController:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startPairingWithAccessoryDescription:(id)arg1 setupRemoteViewController:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startSearchForAccessoriesNeedingReprovisioning;
- (void)stopDiscoveringSymptomsForNearbyDevices;
- (id)targetControllers;
- (id)triggerOwnedActionSetWithUUID:(id)arg1;
- (id)triggerWithName:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (void)unblockAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unconfigureHome;
- (void)updateAccessForUser:(id)arg1 administrator:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateAccessForUser:(id)arg1 remoteAccess:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateApplicationData:(id)arg1 forActionSet:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateApplicationData:(id)arg1 forAppDataContainerWithUUID:(id)arg2 appDataContainerUUIDKeyName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateApplicationData:(id)arg1 forRoom:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateApplicationData:(id)arg1 forServiceGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateAutomaticSoftwareUpdateEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateForUser:(id)arg1 presenceAuthorizationStatus:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateMediaPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateMediaPeerToPeerEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateMinimumMediaUserPrivilege:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)userDidConfirmExecution:(BOOL)arg1 ofTrigger:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)userDidConfirmExecution:(BOOL)arg1 ofTriggerWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)userDidRespondToConsentRequestForSetupAccessoryDescription:(id)arg1 withResponse:(long long)arg2;
- (id)zoneWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;

@end


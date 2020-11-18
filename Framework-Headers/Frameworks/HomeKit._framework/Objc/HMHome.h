//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>
#import <HomeKit/_HMLocationHandlerDelegate-Protocol.h>

@class CLLocation, HMDelegateCaller, HMHomeManager, HMMessageDispatcher, HMPendingRequests, HMRoom, HMSetupViewController, HMThreadSafeMutableArrayCollection, HMUser, NSArray, NSString, NSUUID;
@protocol HMHomeDelegate, OS_dispatch_queue;

@interface HMHome : NSObject <_HMLocationHandlerDelegate, NSSecureCoding, HMMessageReceiver, HMObjectMerge>
{
    BOOL _primary;
    BOOL _adminUser;
    int _locationAuthorization;
    NSUUID *_uniqueIdentifier;
    id<HMHomeDelegate> _delegate;
    CLLocation *_homeLocation;
    NSString *_name;
    HMPendingRequests *_pendingRequests;
    HMUser *_currentUser;
    NSUUID *_uuid;
    HMRoom *_homeAsRoom;
    HMDelegateCaller *_delegateCaller;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMHomeManager *_homeManager;
    HMMessageDispatcher *_msgDispatcher;
    HMSetupViewController *_setupViewController;
    HMThreadSafeMutableArrayCollection *_currentAccessories;
    HMThreadSafeMutableArrayCollection *_currentRooms;
    HMThreadSafeMutableArrayCollection *_currentZones;
    HMThreadSafeMutableArrayCollection *_currentServiceGroups;
    HMThreadSafeMutableArrayCollection *_currentActionSets;
    HMThreadSafeMutableArrayCollection *_currentActions;
    HMThreadSafeMutableArrayCollection *_currentTriggers;
    HMThreadSafeMutableArrayCollection *_currentUsers;
    HMThreadSafeMutableArrayCollection *_currentResidentDevices;
    HMThreadSafeMutableArrayCollection *_currentOutgoingInvitations;
}

@property (readonly, copy, nonatomic) NSArray *accessories;
@property (readonly, copy, nonatomic) NSArray *actionSets;
@property (nonatomic, getter=isAdminUser) BOOL adminUser; // @synthesize adminUser=_adminUser;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *currentAccessories; // @synthesize currentAccessories=_currentAccessories;
@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *currentActionSets; // @synthesize currentActionSets=_currentActionSets;
@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *currentActions; // @synthesize currentActions=_currentActions;
@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *currentOutgoingInvitations; // @synthesize currentOutgoingInvitations=_currentOutgoingInvitations;
@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *currentResidentDevices; // @synthesize currentResidentDevices=_currentResidentDevices;
@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *currentRooms; // @synthesize currentRooms=_currentRooms;
@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *currentServiceGroups; // @synthesize currentServiceGroups=_currentServiceGroups;
@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *currentTriggers; // @synthesize currentTriggers=_currentTriggers;
@property (readonly, nonatomic) HMUser *currentUser;
@property (strong, nonatomic) HMUser *currentUser; // @synthesize currentUser=_currentUser;
@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *currentUsers; // @synthesize currentUsers=_currentUsers;
@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *currentZones; // @synthesize currentZones=_currentZones;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMHomeDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMRoom *homeAsRoom; // @synthesize homeAsRoom=_homeAsRoom;
@property (strong, nonatomic) CLLocation *homeLocation; // @synthesize homeLocation=_homeLocation;
@property (weak, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (nonatomic) int locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) HMPendingRequests *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property (nonatomic, getter=isPrimary) BOOL primary; // @synthesize primary=_primary;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, copy, nonatomic) NSArray *rooms;
@property (readonly, copy, nonatomic) NSArray *serviceGroups;
@property (weak, nonatomic) HMSetupViewController *setupViewController; // @synthesize setupViewController=_setupViewController;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, copy, nonatomic) NSArray *users;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (readonly, copy, nonatomic) NSArray *zones;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_acceptInvitation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addAccessory:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_addAccessory:(id)arg1 toBridge:(id)arg2 password:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_addActionSetWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addIdentifier:(id)arg1 bridgeUUID:(id)arg2;
- (void)_addRegularUsersWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addRoomWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addServiceGroupWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addTrigger:(id)arg1 triggerUUID:(id)arg2 message:(id)arg3;
- (void)_addUser:(id)arg1 privilege:(unsigned long long)arg2 confirmWithLocalUser:(BOOL)arg3 confirmWithRemoteUser:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_addUser:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_addUserWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_addUserWithoutConfirmation:(id)arg1 privilege:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_addUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_addZoneWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_cancelInvitation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_configure:(id)arg1 primary:(BOOL)arg2 messageDispatcher:(id)arg3 pendingRequests:(id)arg4 delegateCaller:(id)arg5;
- (void)_continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_createFailedAccessoriesListFromError:(id)arg1;
- (void)_enableRemoteAccess:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_executeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleAccessoryAddedNotification:(id)arg1;
- (void)_handleAccessoryRemovedNotification:(id)arg1;
- (void)_handleActionSetAddedNotification:(id)arg1;
- (void)_handleActionSetRemovedNotification:(id)arg1;
- (void)_handleBlockedStateNotification:(id)arg1;
- (void)_handleConfigurationStateChangedNotification:(id)arg1;
- (void)_handleDiscoveredNewResidentDevice:(id)arg1;
- (void)_handleEventTriggerAddedNotification:(id)arg1;
- (void)_handleHomeLocationUpdateNotificaton:(id)arg1;
- (void)_handleHomeRenamedNotification:(id)arg1;
- (void)_handleMultipleCharacteristicValuesUpdated:(id)arg1;
- (void)_handlePairedAccessoryErrorNotification:(id)arg1;
- (void)_handleRequestAccessorySetupCodeRequestKey:(id)arg1;
- (void)_handleRoomAddedNotification:(id)arg1;
- (void)_handleRoomRemovedNotification:(id)arg1;
- (void)_handleServiceGroupAddedNotification:(id)arg1;
- (void)_handleServiceGroupRemovedNotification:(id)arg1;
- (void)_handleTimerTriggerAddedNotification:(id)arg1;
- (void)_handleTriggerRemovedNotification:(id)arg1;
- (void)_handleUserAddedNotification:(id)arg1;
- (void)_handleUserInvitationsUpdatedNotification:(id)arg1;
- (void)_handleUserRemovedNotification:(id)arg1;
- (void)_handleZoneAddedNotification:(id)arg1;
- (void)_handleZoneRemovedNotification:(id)arg1;
- (void)_invalidate;
- (void)_inviteUsers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_manageUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)_mergeCurrentHomeAccessoriesWithNewHomeAccessories:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeActionSetsWithNewHomeActionSets:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeResidentDevicesWithNewHomeResidentDevices:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeRoomsWithNewHomeRooms:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeServiceGroupsWithNewHomeServiceGroups:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeTriggersWithNewHomeTriggers:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeUsersWithNewHomeUsers:(id)arg1 operations:(id)arg2;
- (unsigned long long)_mergeCurrentHomeZonesWithNewHomeZones:(id)arg1 operations:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_privateDelegate;
- (void)_queryRemoteAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_readCharacteristicValues:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_registerNotificationHandlers;
- (void)_removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeIdentifier:(id)arg1 bridgeUUID:(id)arg2;
- (void)_removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeServiceGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeServices:(id)arg1;
- (void)_removeTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeUser:(id)arg1 confirm:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeUserWithoutConfirmation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_retrieveLocation;
- (void)_setupBuiltinActionSets:(id)arg1;
- (void)_unblockAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_unconfigureHome;
- (void)_updateInvitation:(id)arg1 invitationState:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateLocation:(id)arg1;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_writeCharacteristicValues:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)accessoryWithUUID:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)actionSetWithUUID:(id)arg1;
- (void)addAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAccessory:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addAccessory:(id)arg1 toBridge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addAccessory:(id)arg1 toBridge:(id)arg2 password:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addActionSetWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addRoomWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addServiceGroupWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addUser:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addUserWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addUserWithoutConfirmation:(id)arg1 privilege:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addZoneWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)administrator;
- (void)assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)builtinActionSetOfType:(id)arg1;
- (void)cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configure:(id)arg1 primary:(BOOL)arg2 messageDispatcher:(id)arg3 pendingRequests:(id)arg4 delegateCaller:(id)arg5;
- (void)configure:(id)arg1 primary:(BOOL)arg2 messageDispatcher:(id)arg3 pendingRequests:(id)arg4 delegateCaller:(id)arg5 isAdminUser:(BOOL)arg6;
- (void)continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)didUpdateAuthorization:(int)arg1;
- (void)enableRemoteAccess:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)executeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)homeAccessControlForUser:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)initWithName:(id)arg1 uuid:(id)arg2 actionSets:(id)arg3;
- (void)invalidate;
- (void)inviteUsers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)location;
- (void)manageUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)mergeWithNewObjectNoMergeCount:(id)arg1;
- (id)outgoingInvitations;
- (void)queryRemoteAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)readCharacteristicValues:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeServiceGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeServices:(id)arg1;
- (void)removeTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeUserWithoutConfirmation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)residentDevices;
- (id)roomForEntireHome;
- (id)roomWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)serviceGroupWithName:(id)arg1;
- (id)serviceGroupWithUUID:(id)arg1;
- (id)servicesWithTypes:(id)arg1;
- (id)triggerWithName:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (void)unblockAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unconfigureHome;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeCharacteristicValues:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)zoneWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareTrustManagerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareTrustManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMDSettingsControllerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDUserDataControllerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDUserSettingsBackingStoreControllerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class AVOutputDeviceAuthorizedPeer, HAPPairingIdentity, HMBShareUserID, HMDAccountHandle, HMDAccountIdentifier, HMDAssistantAccessControl, HMDCloudShareMessenger, HMDCloudShareTrustManager, HMDHome, HMDPersonSettingsManager, HMDPhotosPersonManager, HMDSettingsControllerDependency, HMDUserDataController, HMDUserPhotosPersonDataManager, HMDUserSettingsBackingStoreController, HMFMessageDispatcher, HMPhotosPersonManagerSettings, HMUserPresenceAuthorization, NAFuture, NSMutableArray, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDUser : HMFObject <HMDSettingsControllerDelegate, HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDUserDataControllerDelegate, HMDUserSettingsBackingStoreControllerDelegate, HMFLogging, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding>
{
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_uuid;
    BOOL _remoteAccessAllowed;
    NSMutableArray *_relayAccessTokens;
    HMDAccountHandle *_accountHandle;
    HMDAccountIdentifier *_accountIdentifier;
    BOOL _needsiTunesMultiUserRepair;
    unsigned long long _privilege;
    HMDHome *_home;
    NSString *_userID;
    HMUserPresenceAuthorization *_presenceAuthStatus;
    NSString *_relayIdentifier;
    NSNumber *_camerasAccessLevelValue;
    HAPPairingIdentity *_pairingIdentity;
    NSString *_displayName;
    HMDAssistantAccessControl *_assistantAccessControl;
    HMBShareUserID *_cloudShareID;
    NAFuture *_cloudShareIDFuture;
    HMDUserPhotosPersonDataManager *_photosPersonDataManager;
    HMDPersonSettingsManager *_personSettingsManager;
    HMDSettingsControllerDependency *_sharedSettingsControllerDependency;
    HMDCloudShareMessenger *_shareMessenger;
    HMDSettingsControllerDependency *_privateSettingsControllerDependency;
    HMDUserSettingsBackingStoreController *_privateBackingStoreController;
    HMDUserDataController *_userDataController;
    HMFMessageDispatcher *_messageDispatcher;
    HMDCloudShareTrustManager *_cloudShareTrustManager;
    HMDUserSettingsBackingStoreController *_sharedBackingStoreController;
}

@property (copy) HMDAccountIdentifier *accountIdentifier;
@property (readonly, getter=isAdministrator) BOOL administrator;
@property (strong) HMDAssistantAccessControl *assistantAccessControl; // @synthesize assistantAccessControl=_assistantAccessControl;
@property (readonly) NSUUID *assistantAccessControlModelUUID;
@property (readonly, copy) AVOutputDeviceAuthorizedPeer *av_authorizedPeer;
@property (strong, nonatomic) NSNumber *camerasAccessLevelValue; // @synthesize camerasAccessLevelValue=_camerasAccessLevelValue;
@property (strong) HMBShareUserID *cloudShareID; // @synthesize cloudShareID=_cloudShareID;
@property (readonly) NAFuture *cloudShareIDFuture; // @synthesize cloudShareIDFuture=_cloudShareIDFuture;
@property (strong) HMDCloudShareTrustManager *cloudShareTrustManager; // @synthesize cloudShareTrustManager=_cloudShareTrustManager;
@property (readonly, getter=isCurrentUser) BOOL currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, copy, nonatomic) NSString *encodingRemoteDisplayName;
@property (readonly) BOOL hasCameraClipsAccess;
@property (readonly) unsigned long long hash;
@property (weak) HMDHome *home; // @synthesize home=_home;
@property (readonly) BOOL isCurrentUser;
@property (readonly) BOOL isRunningOnHomeOwnersDevice;
@property (readonly) BOOL isUserSettingsPrefEnabled;
@property (strong) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property BOOL needsiTunesMultiUserRepair; // @synthesize needsiTunesMultiUserRepair=_needsiTunesMultiUserRepair;
@property (readonly, getter=isOwner) BOOL owner;
@property (copy) HAPPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
@property (strong) HMDPersonSettingsManager *personSettingsManager; // @synthesize personSettingsManager=_personSettingsManager;
@property (strong) HMDUserPhotosPersonDataManager *photosPersonDataManager; // @synthesize photosPersonDataManager=_photosPersonDataManager;
@property (readonly) HMDPhotosPersonManager *photosPersonManager;
@property (readonly, copy) HMPhotosPersonManagerSettings *photosPersonManagerSettings;
@property (copy) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
@property (strong) HMDUserSettingsBackingStoreController *privateBackingStoreController; // @synthesize privateBackingStoreController=_privateBackingStoreController;
@property (strong) HMDSettingsControllerDependency *privateSettingsControllerDependency; // @synthesize privateSettingsControllerDependency=_privateSettingsControllerDependency;
@property unsigned long long privilege; // @synthesize privilege=_privilege;
@property (copy) NSString *relayIdentifier; // @synthesize relayIdentifier=_relayIdentifier;
@property (getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed; // @synthesize remoteAccessAllowed=_remoteAccessAllowed;
@property (readonly, getter=isRemoteGateway) BOOL remoteGateway;
@property (strong) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property (strong) HMDUserSettingsBackingStoreController *sharedBackingStoreController; // @synthesize sharedBackingStoreController=_sharedBackingStoreController;
@property (strong) HMDSettingsControllerDependency *sharedSettingsControllerDependency; // @synthesize sharedSettingsControllerDependency=_sharedSettingsControllerDependency;
@property (readonly) Class superclass;
@property (strong) HMDUserDataController *userDataController; // @synthesize userDataController=_userDataController;
@property (copy) NSString *userID; // @synthesize userID=_userID;
@property (readonly) NSUUID *userUUID;
@property (copy, setter=setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (readonly, getter=isValid) BOOL valid;

+ (id)UUIDWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 pairingIdentity:(id)arg4;
+ (id)currentUserWithPrivilege:(unsigned long long)arg1 forHome:(id)arg2;
+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)ownerWithUserID:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 homeManager:(id)arg4;
+ (BOOL)supportsSecureCoding;
+ (id)userIDForAccountHandle:(id)arg1;
+ (id)userWithDictionary:(id)arg1 forHome:(id)arg2;
- (void).cxx_destruct;
- (void)__handleAddedAccount:(id)arg1;
- (void)__handleRemovedAccount:(id)arg1;
- (void)_addRelayAccessToken:(id)arg1;
- (unsigned long long)_compatiblePrivilege;
- (void)_fixupRelayAccessTokens;
- (void)_handleAssistantAccessControlUpdate:(id)arg1;
- (void)_handleMediaContentProfileAccessControlUpdate:(id)arg1;
- (void)_handleMultiUserSharePayloadRequest:(id)arg1;
- (void)_handleNeedsiTunesMultiUserRepair:(id)arg1;
- (void)_handlePairingIdentityRequest:(id)arg1;
- (void)_handleShareClientRepairRequest:(id)arg1;
- (void)_handleShareLookupInfoRequest:(id)arg1;
- (void)_migrateRelayAccessTokensCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_relayAccessTokenForIdentifier:(id)arg1;
- (void)_removeRelayAccessToken:(id)arg1;
- (void)_sendAccountMessage:(id)arg1 payload:(id)arg2 deviceCapabilities:(id)arg3 multicast:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_sendSecureShareClientPayloadToMostEligibleDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_transactionUserUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)account;
- (id)accountHandle;
- (void)addRelayAccessToken:(id)arg1;
- (id)attributeDescriptions;
- (id)backingStoreController:(id)arg1 createParticipantManagerForCloudZone:(id)arg2;
- (void)backingStoreController:(id)arg1 didUpdatePhotosPersonManagerSettingsModel:(id)arg2 previousPhotosPersonManagerSettingsModel:(id)arg3;
- (id)backingStoreObjects:(long long)arg1;
- (unsigned long long)camerasAccessLevel;
- (void)cloudShareTrustManager:(id)arg1 didFetchOwnerCloudShareID:(id)arg2;
- (void)cloudShareTrustManager:(id)arg1 didRemoveUserWithUUID:(id)arg2;
- (BOOL)cloudShareTrustManager:(id)arg1 shouldShareTrustWithUser:(id)arg2;
- (void)configureCloudShareTrustManager;
- (void)configurePersonSettingsManager;
- (void)configurePhotosPersonDataManager;
- (void)configureWithHome:(id)arg1;
- (BOOL)containsRelayAccessToken:(id)arg1;
- (void)dealloc;
- (void)deregisterForMessages;
- (void)deregisterIDSActivityObserver:(id)arg1;
- (void)deregisterIDSActivityObserver:(id)arg1 subActivity:(id)arg2 subjectDevice:(id)arg3;
- (void)deregisterIdentity;
- (id)dictionaryEncoding;
- (void)didFinishConfiguringForCloudShareTrustManager:(id)arg1;
- (void)didRemoveTrustZoneInCloudShareTrustManager:(id)arg1;
- (void)didStartBackingStoreController:(id)arg1;
- (void)didStartLocalZoneForBackingStoreController:(id)arg1;
- (void)didStopBackingStoreController:(id)arg1;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAssistantAccessControlUpdate:(id)arg1;
- (void)handleMediaContentProfileAccessControlUpdate:(id)arg1;
- (void)handleRemovedAccessory:(id)arg1;
- (id)homeForCloudShareTrustManager:(id)arg1;
- (id)initWithAccountHandle:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelObject:(id)arg1;
- (void)initializeUserSettingsWithHome:(id)arg1;
- (BOOL)isCurrentUserAndOwner;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOwnerCapableForTrustManager:(id)arg1;
- (id)logIdentifier;
- (id)messageDestination;
- (void)migrateCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)ownerForCloudShareTrustManager:(id)arg1;
- (id)ownerForUserSettingsBackingStoreController:(id)arg1;
- (id)pairingUsername;
- (void)postUserSettingsUpdatedNotificationWithReason:(id)arg1;
- (id)privateSettingValuesByKeyPathForAWD;
- (id)privateZoneControllerForUserDataController:(id)arg1;
- (id)publicKey;
- (id)pushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2;
- (void)recoverTrustManagerDueToUUIDChange;
- (void)recoverUserCloudDataDueToUUIDChangeFromOldUUID:(id)arg1;
- (void)recoverUserSettingsDueToUUIDChange;
- (BOOL)refreshDisplayName;
- (void)registerForMessages;
- (void)registerIDSActivityObserver:(id)arg1 subActivity:(id)arg2 subjectDevice:(id)arg3;
- (void)registerIdentity;
- (id)relayAccessTokenForAccessory:(id)arg1;
- (id)relayAccessTokens;
- (void)removeAccessoriesFromAssistantAccessControlList:(id)arg1;
- (void)removeCloudData;
- (void)removeCloudShareID;
- (void)removeRelayAccessToken:(id)arg1;
- (BOOL)requiresMakoSupport;
- (void)setAccountHandle:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)settingsController:(id)arg1 didUpdateWithCompletion:(CDUnknownBlockType)arg2;
- (id)settingsController:(id)arg1 willUpdateSettingAtKeyPath:(id)arg2 withValue:(id)arg3;
- (id)sharedSettingValuesByKeyPathForAWD;
- (id)sharedZoneControllerForUserDataController:(id)arg1;
- (id)shortDescription;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)trustTargetUUID;
- (void)unconfigure;
- (BOOL)updateAdministrator:(BOOL)arg1;
- (void)updateCloudShareID:(id)arg1;
- (void)updateIDSActivityObserver:(id)arg1;
- (id)updatePhotosPersonManagerSettings:(id)arg1;
- (void)updateRelayIdentifier:(id)arg1;
- (BOOL)userDataController:(id)arg1 isMediaContentProfileCapableAccessoryID:(id)arg2;
- (BOOL)userDataController:(id)arg1 isPersonalRequestCapableAccessoryID:(id)arg2;
- (void)userDataControllerDidUpdateAssistantAccessControl:(id)arg1;
- (void)userDataControllerDidUpdateMediaContentProfile:(id)arg1;
- (id)zoneNameForCloudShareTrustManager:(id)arg1;

@end

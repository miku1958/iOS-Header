//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMBLocalZoneModelObserver-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareMessengerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareParticipantsManagerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareParticipantsManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMDSettingsBackingStoreController-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBCloudZone, HMBLocalZone, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, HMDLogEventDispatcher, NSString, NSUUID;
@protocol HMDAssistantAccessControlModelUpdateReceiver, HMDDatabase, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMDSettingTransactionReceiverProtocol, HMDUserSettingsBackingStoreControllerDelegate, OS_dispatch_queue, OS_os_log;

@interface HMDUserSettingsBackingStoreController : NSObject <HMBLocalZoneModelObserver, HMFLogging, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDCloudShareMessengerDelegate, HMDDatabaseDelegate, HMDSettingsBackingStoreController>
{
    NSObject<OS_os_log> *_logger;
    unsigned long long _startupSignPost;
    id<HMDUserSettingsBackingStoreControllerDelegate> _delegate;
    HMBLocalZone *_localZone;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_zoneName;
    id<HMDDatabase> _database;
    HMDLogEventDispatcher *_logEventDispatcher;
    HMDCloudShareMessenger *_shareMessenger;
    HMDCloudShareParticipantsManager *_participantsManager;
    HMBCloudZone *_cloudZone;
    long long _runState;
    id<HMDSettingTransactionReceiverProtocol> _transactionReceiver;
    id<HMDAssistantAccessControlModelUpdateReceiver> _assistantAccessControlModelUpdateReceiver;
    NSUUID *_assistantAccessControlModelID;
    id<HMDMediaContentProfileAccessControlModelUpdateReceiver> _mediaContentProfileAccessControlModelUpdateReceiver;
    NSUUID *_mediaContentProfileAccessControlModelID;
}

@property (copy) NSUUID *assistantAccessControlModelID; // @synthesize assistantAccessControlModelID=_assistantAccessControlModelID;
@property (weak) id<HMDAssistantAccessControlModelUpdateReceiver> assistantAccessControlModelUpdateReceiver; // @synthesize assistantAccessControlModelUpdateReceiver=_assistantAccessControlModelUpdateReceiver;
@property (strong) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property (readonly) id<HMDDatabase> database; // @synthesize database=_database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) id<HMDUserSettingsBackingStoreControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property (readonly) HMDLogEventDispatcher *logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
@property (copy) NSUUID *mediaContentProfileAccessControlModelID; // @synthesize mediaContentProfileAccessControlModelID=_mediaContentProfileAccessControlModelID;
@property (weak) id<HMDMediaContentProfileAccessControlModelUpdateReceiver> mediaContentProfileAccessControlModelUpdateReceiver; // @synthesize mediaContentProfileAccessControlModelUpdateReceiver=_mediaContentProfileAccessControlModelUpdateReceiver;
@property (strong) HMDCloudShareParticipantsManager *participantsManager; // @synthesize participantsManager=_participantsManager;
@property long long runState; // @synthesize runState=_runState;
@property (readonly) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property (readonly) Class superclass;
@property (weak) id<HMDSettingTransactionReceiverProtocol> transactionReceiver; // @synthesize transactionReceiver=_transactionReceiver;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property (readonly, copy) NSString *zoneName; // @synthesize zoneName=_zoneName;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_didFetchZonesWithResult:(id)arg1 isOwnedZone:(BOOL)arg2 error:(id)arg3;
- (void)_invalidate;
- (void)_localZone:(id)arg1 updatedModel:(id)arg2 previousModel:(id)arg3 options:(id)arg4 result:(id)arg5;
- (void)_startWithOwnedZone;
- (void)_startWithSharedZone;
- (void)_updateRunState:(long long)arg1;
- (void)clearParticipants;
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(BOOL)arg3;
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(BOOL)arg3;
- (void)deregisterObserverDeviceIdentifier:(id)arg1;
- (void)deregisterObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4;
- (void)destroyZone;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 zoneName:(id)arg3 database:(id)arg4 home:(id)arg5 shareMessenger:(id)arg6;
- (id)loadAssistantAccessControlModelWithModelID:(id)arg1 error:(id *)arg2;
- (id)loadMediaContentAccessControlModelWithModelID:(id)arg1 error:(id *)arg2;
- (id)loadPrivateUserDataModelWithError:(id *)arg1;
- (id)loadSharedUserDataModelWithError:(id *)arg1;
- (id)loadUserSettings;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (id)logIdentifier;
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;
- (BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)messengerDidReceiveInvitationRequest:(id)arg1;
- (id)queryPushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2;
- (void)registerForAssistantAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;
- (void)registerForMediaContentAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;
- (void)registerForSettingsTransactions:(id)arg1;
- (void)registerObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4;
- (void)runSettingTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runSettingTransaction:(id)arg1 waitForCloudPush:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)runTransaction:(id)arg1 waitForCloudPush:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)settingTransactionWithName:(id)arg1;
- (void)start;
- (void)updateObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2;
- (void)updateParticipants;

@end


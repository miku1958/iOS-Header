//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCloudShareMessengerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareParticipantsManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBCloudZone, HMBCloudZoneConfiguration, HMBLocalZone, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, HMDHome, NSObject, NSSet, NSString, NSUUID;
@protocol HMBLocalZoneDelegate><HMBCloudZoneDelegate, HMDCloudShareParticipantsManagerDataSource, HMDDatabase, HMDDatabaseZoneManagerDelegate, OS_dispatch_queue;

@interface HMDDatabaseZoneManager : HMFObject <HMFLogging, HMDDatabaseDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDelegate>
{
    id<HMDDatabaseZoneManagerDelegate> _delegate;
    id<HMDCloudShareParticipantsManagerDataSource> _participantsManagerDataSource;
    NSString *_zoneName;
    HMBLocalZone *_localZone;
    HMBCloudZone *_cloudZone;
    NSSet *_externalRecordTypesForSubscriptions;
    HMBCloudZoneConfiguration *_cloudZoneConfiguration;
    long long _state;
    id<HMDDatabase> _database;
    HMDHome *_home;
    HMDCloudShareMessenger *_shareMessenger;
    HMDCloudShareParticipantsManager *_participantsManager;
    id<HMBLocalZoneDelegate><HMBCloudZoneDelegate> _zoneDelegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _participantsManagerFactory;
}

@property (strong) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property (copy) HMBCloudZoneConfiguration *cloudZoneConfiguration; // @synthesize cloudZoneConfiguration=_cloudZoneConfiguration;
@property (readonly, copy) NSString *containerIdentifier;
@property (readonly) id<HMDDatabase> database; // @synthesize database=_database;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDDatabaseZoneManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy) NSSet *externalRecordTypesForSubscriptions; // @synthesize externalRecordTypesForSubscriptions=_externalRecordTypesForSubscriptions;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home; // @synthesize home=_home;
@property (strong) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (readonly, getter=isOwnerUser) BOOL ownerUser;
@property (strong) HMDCloudShareParticipantsManager *participantsManager; // @synthesize participantsManager=_participantsManager;
@property (weak) id<HMDCloudShareParticipantsManagerDataSource> participantsManagerDataSource; // @synthesize participantsManagerDataSource=_participantsManagerDataSource;
@property (copy) CDUnknownBlockType participantsManagerFactory; // @synthesize participantsManagerFactory=_participantsManagerFactory;
@property (readonly) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (strong) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property (readonly, weak) id<HMBLocalZoneDelegate><HMBCloudZoneDelegate> zoneDelegate; // @synthesize zoneDelegate=_zoneDelegate;
@property (readonly, copy) NSString *zoneName; // @synthesize zoneName=_zoneName;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_tearDownState;
- (void)configure;
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2;
- (void)database:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2;
- (id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 messageTargetUUID:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6;
- (id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 shareMessenger:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6;
- (id)logIdentifier;
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)messengerDidReceiveInvitationRequest:(id)arg1;
- (id)remove;
- (void)start;
- (void)updateShareParticipants;

@end

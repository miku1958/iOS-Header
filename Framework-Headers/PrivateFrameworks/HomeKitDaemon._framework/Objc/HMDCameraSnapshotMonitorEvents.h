//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDAccessory, HMDBulletinBoard, HMDCameraSnapshotManager, HMDNotificationRegistration, HMFMessageDispatcher, NSMutableSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotMonitorEvents : NSObject <HMFMessageReceiver, HMFLogging, HMFTimerDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSUUID *_uniqueIdentifier;
    HMDCameraSnapshotManager *_snapshotManager;
    NSMutableSet *_snapShotNotificationResponseTimers;
    HMDAccessory *_accessory;
    NSString *_bulletinImagesDirectory;
    NSString *_logID;
    NSMutableSet *_characteristicsList;
    HMDBulletinBoard *_bulletinBoard;
    HMDNotificationRegistration *_notificationRegistration;
}

@property (readonly, weak, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) HMDBulletinBoard *bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property (readonly, nonatomic) NSString *bulletinImagesDirectory; // @synthesize bulletinImagesDirectory=_bulletinImagesDirectory;
@property (readonly, nonatomic) NSMutableSet *characteristicsList; // @synthesize characteristicsList=_characteristicsList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (strong, nonatomic) NSMutableSet *snapShotNotificationResponseTimers; // @synthesize snapShotNotificationResponseTimers=_snapShotNotificationResponseTimers;
@property (readonly, weak, nonatomic) HMDCameraSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_characteristicsUpdated:(id)arg1 modifiedCharacteristics:(id)arg2;
- (void)_enableNotificationForCharacteristics:(id)arg1;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_handleRemoteNotification:(id)arg1;
- (void)_handleSnapshotResponse:(id)arg1 cameraSessionID:(id)arg2 changedCharacteristics:(id)arg3 response:(id)arg4 responseTimer:(id)arg5;
- (void)_monitorForEventsForServices:(id)arg1;
- (void)_removeBulletins:(id)arg1 sessionID:(id)arg2;
- (void)_sendReleaseSnapshot:(id)arg1;
- (void)_subscribeToNotifications;
- (void)dealloc;
- (void)handleAccessoryReachable:(id)arg1;
- (void)handleRemoteNotificationGenerated:(id)arg1;
- (id)initWithSnapshotManager:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;
- (id)logIdentifier;
- (void)monitorForEventsForServices:(id)arg1;
- (void)processPostedBulletin:(id)arg1 responseTimer:(id)arg2;
- (void)registerForMessages;
- (void)timerDidFire:(id)arg1;

@end


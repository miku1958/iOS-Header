//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMBulletinBoardNotification, HMDelegateCaller, HMFMessageDispatcher, NSArray, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMBulletinBoardNotificationServiceGroup : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver, HMFLogging>
{
    NSArray *_cameraProfiles;
    NSArray *_associatedServices;
    NSSet *_cameraProfileUUIDs;
    NSSet *_associatedServiceUUIDs;
    HMBulletinBoardNotification *_bulletinBoardNotification;
    NSUUID *_uniqueIdentifier;
    NSUUID *_targetUUID;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
    HMFMessageDispatcher *_msgDispatcher;
    NSString *_logID;
}

@property (strong, nonatomic) NSSet *associatedServiceUUIDs; // @synthesize associatedServiceUUIDs=_associatedServiceUUIDs;
@property (strong, nonatomic) NSArray *associatedServices; // @synthesize associatedServices=_associatedServices;
@property (readonly, weak, nonatomic) HMBulletinBoardNotification *bulletinBoardNotification; // @synthesize bulletinBoardNotification=_bulletinBoardNotification;
@property (strong, nonatomic) NSSet *cameraProfileUUIDs; // @synthesize cameraProfileUUIDs=_cameraProfileUUIDs;
@property (strong, nonatomic) NSArray *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *targetUUID; // @synthesize targetUUID=_targetUUID;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_callServiceGroupUpdate;
- (void)_configureClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3;
- (void)_findObjects;
- (void)_handleBulletinBoardNotificationServiceGroupUpdateNotification:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_requestServiceGroup;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)handleConfigureNotification:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;

@end


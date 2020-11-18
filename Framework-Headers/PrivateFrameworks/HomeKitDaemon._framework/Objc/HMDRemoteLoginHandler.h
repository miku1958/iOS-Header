//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class ACAccount, HMDAppleMediaAccessory, HMDRemoteLoginAnisetteDataHandler, HMDRemoteLoginInitiator, HMDRemoteLoginReceiver, HMFMessageDispatcher, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDRemoteLoginHandler : HMFObject <HMDHomeMessageReceiver, HMFLogging, NSSecureCoding>
{
    NSUUID *_uuid;
    HMDRemoteLoginInitiator *_initiator;
    HMDRemoteLoginReceiver *_receiver;
    HMDAppleMediaAccessory *_accessory;
    HMDRemoteLoginAnisetteDataHandler *_anisetteDataHandler;
    ACAccount *_loggedInAccount;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
}

@property (readonly, weak, nonatomic) HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) HMDRemoteLoginAnisetteDataHandler *anisetteDataHandler; // @synthesize anisetteDataHandler=_anisetteDataHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMDRemoteLoginInitiator *initiator; // @synthesize initiator=_initiator;
@property (strong, nonatomic) ACAccount *loggedInAccount; // @synthesize loggedInAccount=_loggedInAccount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (readonly, nonatomic) HMDRemoteLoginReceiver *receiver; // @synthesize receiver=_receiver;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)remoteMessages;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__handleUpdateLoggedInAccount:(id)arg1;
- (void)_handleRemoteLoginAccount:(id)arg1 message:(id)arg2;
- (void)_initialize;
- (void)_sendAccountUpdateNotification:(id)arg1;
- (void)_updateLoggedInAccount:(id)arg1;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessory:(id)arg1 loggedInAccountData:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (void)registerForMessages;

@end


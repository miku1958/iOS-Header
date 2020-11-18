//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDRemoteLoginMessageSender, HMFMessageDispatcher, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDRemoteLoginAnisetteDataProviderBridge : HMFObject <HMFLogging, HMDHomeMessageReceiver, NSSecureCoding>
{
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDRemoteLoginMessageSender *_remoteMessageSender;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (strong, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 remoteMessageSender:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)logIdentifier;
- (void)registerForMessages;

@end


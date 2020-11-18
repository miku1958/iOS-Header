//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class ACAccount, HMAccessory, HMDelegateCaller, HMFMessageDispatcher, HMRemoteLoginAnisetteDataProvider, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMRemoteLoginHandler : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    ACAccount *_loggedInAccount;
    NSString *_currentSessionID;
    NSUUID *_uniqueIdentifier;
    HMRemoteLoginAnisetteDataProvider *_anisetteDataProvider;
    NSUUID *_uuid;
    HMAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMDelegateCaller *_delegateCaller;
    HMFMessageDispatcher *_msgDispatcher;
}

@property (readonly, weak, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) HMRemoteLoginAnisetteDataProvider *anisetteDataProvider; // @synthesize anisetteDataProvider=_anisetteDataProvider;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, getter=isControllable) BOOL controllable;
@property (strong, nonatomic) NSString *currentSessionID; // @synthesize currentSessionID=_currentSessionID;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) ACAccount *loggedInAccount; // @synthesize loggedInAccount=_loggedInAccount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, nonatomic, getter=isSessionInProgress) BOOL sessionInProgress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_callAccountUpdateDelegate:(id)arg1;
- (void)_companionLoginWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configureClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3;
- (void)_handleLoginResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleQueryProxiedDeviceResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleRemoteLoginAccountUpdated:(id)arg1;
- (void)_handleRemoteLoginSignoutResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_proxyLoginWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queryProxiedDevice:(CDUnknownBlockType)arg1;
- (void)_signout:(CDUnknownBlockType)arg1;
- (void)companionLoginWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)proxyLoginWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryProxiedDevice:(CDUnknownBlockType)arg1;
- (void)registerForMessages;
- (void)setLoggedInAccount:(id)arg1;
- (void)signout:(CDUnknownBlockType)arg1;

@end


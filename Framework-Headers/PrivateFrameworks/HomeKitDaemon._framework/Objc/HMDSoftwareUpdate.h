//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFObject-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessory, HMDSoftwareUpdateModel, HMFMessageDispatcher, HMFSoftwareVersion, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSoftwareUpdate : HMFObject <HMFObject, HMDBackingStoreObjectProtocol, HMFMessageReceiver, NSSecureCoding>
{
    long long _state;
    NSUUID *_identifier;
    HMFSoftwareVersion *_version;
    unsigned long long _downloadSize;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDAccessory *_accessory;
    HMFMessageDispatcher *_messageDispatcher;
}

@property (weak) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property (readonly) unsigned long long hash;
@property (copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy) HMDSoftwareUpdateModel *model;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, copy) HMFSoftwareVersion *version; // @synthesize version=_version;

+ (id)modelNamespace;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)__init;
- (void)_handleUpdateState:(id)arg1;
- (void)configureWithAccessory:(id)arg1 messageDispatcher:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)messageDestination;
- (void)registerForMessages;
- (void)setState:(long long)arg1;
- (id)stateUpdateNotificationWithMessage:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;

@end


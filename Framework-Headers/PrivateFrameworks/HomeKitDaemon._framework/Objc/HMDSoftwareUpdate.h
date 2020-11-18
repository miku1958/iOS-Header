//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFObject-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessory, HMDSoftwareUpdateModel, HMFMessageDispatcher, HMFSoftwareVersion, HMSoftwareUpdateDocumentationMetadata, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSoftwareUpdate : HMFObject <HMFLogging, HMFObject, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding>
{
    long long _state;
    HMSoftwareUpdateDocumentationMetadata *_documentationMetadata;
    NSUUID *_identifier;
    HMFSoftwareVersion *_version;
    unsigned long long _downloadSize;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_messageDispatcher;
    HMDAccessory *_accessory;
}

@property (weak) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // @synthesize documentationMetadata=_documentationMetadata;
@property (readonly) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property (readonly) unsigned long long hash;
@property (copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy) HMDSoftwareUpdateModel *model;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, copy) HMFSoftwareVersion *version; // @synthesize version=_version;

+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)modelNamespace;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)__init;
- (void)_handleDocumentationRequest:(id)arg1;
- (void)_handleDocumentationStateNotification:(id)arg1;
- (void)_handleUpdateDocumentationMetadata:(id)arg1;
- (void)_handleUpdateState:(id)arg1;
- (void)configureWithAccessory:(id)arg1 messageDispatcher:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)messageDestination;
- (void)registerForMessages;
- (void)setDocumentationMetadata:(id)arg1;
- (void)setState:(long long)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;

@end

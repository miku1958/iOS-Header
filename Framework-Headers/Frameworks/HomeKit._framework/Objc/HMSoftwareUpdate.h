//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessory, HMFSoftwareVersion, HMSoftwareUpdateDocumentation, HMSoftwareUpdateDocumentationMetadata, NSString, NSUUID, _HMContext;
@protocol HMSoftwareUpdateDelegate, OS_dispatch_queue;

@interface HMSoftwareUpdate : NSObject <HMFMessageReceiver, HMObjectMerge, NSSecureCoding>
{
    NSUUID *_identifier;
    NSUUID *_uniqueIdentifier;
    long long _state;
    HMSoftwareUpdateDocumentationMetadata *_documentationMetadata;
    HMSoftwareUpdateDocumentation *_documentation;
    id<HMSoftwareUpdateDelegate> _delegate;
    HMFSoftwareVersion *_version;
    unsigned long long _downloadSize;
    _HMContext *_context;
    HMAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property (weak) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property (strong, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMSoftwareUpdateDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) HMSoftwareUpdateDocumentation *documentation; // @synthesize documentation=_documentation;
@property (readonly, getter=isDocumentationAvailable) BOOL documentationAvailable;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // @synthesize documentationMetadata=_documentationMetadata;
@property (readonly) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property (readonly) unsigned long long hash;
@property (copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, copy) HMFSoftwareVersion *version; // @synthesize version=_version;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_handleUpdatedDocumentation:(id)arg1;
- (void)_handleUpdatedDocumentationMetadata:(id)arg1;
- (void)_handleUpdatedState:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)configureWithContext:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 documentationMetadata:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)messageDestination;
- (void)requestDocumentation;
- (void)setDocumentation:(id)arg1;
- (void)setDocumentationMetadata:(id)arg1;
- (void)setState:(long long)arg1;
- (void)updateDocumentationMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


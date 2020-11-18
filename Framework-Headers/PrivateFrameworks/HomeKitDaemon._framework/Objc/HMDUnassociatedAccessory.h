//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDUnassociatedAccessory : HMFObject <HMFLogging, HMFMessageReceiver, NSSecureCoding>
{
    NSUUID *_uuid;
    NSString *_name;
    HMAccessoryCategory *_category;
    NSString *_identifier;
    long long _associationOptions;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_messageDispatcher;
}

@property (readonly) long long associationOptions; // @synthesize associationOptions=_associationOptions;
@property (strong) HMAccessoryCategory *category; // @synthesize category=_category;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, getter=isReachable) BOOL reachable;
@property (readonly) Class superclass;
@property (copy, setter=setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (id)logCategory;
+ (id)otherAccessoryCategory;
+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_handleIdentify:(id)arg1;
- (void)_registerForMessages;
- (void)dealloc;
- (id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)identifyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)messageDestination;
- (void)notifyClientOfUpdatedCategory:(id)arg1;
- (void)notifyClientOfUpdatedName:(id)arg1;
- (id)shortDescription;
- (void)updateCategoryWithCategoryIdentifier:(id)arg1;

@end


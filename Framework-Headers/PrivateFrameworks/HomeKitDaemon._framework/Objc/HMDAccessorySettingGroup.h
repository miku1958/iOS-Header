//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessory, HMDAccessorySettingGroupModel, HMFMessageDispatcher, NSArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAccessorySettingGroup : HMFObject <HMFLogging, HMDBackingStoreObjectProtocol, HMFMessageReceiver, NSSecureCoding>
{
    NSMutableSet *_settings;
    NSMutableSet *_groups;
    NSUUID *_identifier;
    HMDAccessorySettingGroup *_group;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_messageDispatcher;
    HMDAccessory *_accessory;
}

@property (weak, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) HMDAccessorySettingGroup *group; // @synthesize group=_group;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly) NSString *keyPath;
@property (strong, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) HMDAccessorySettingGroupModel *model;
@property (readonly, copy) NSArray *models;
@property (readonly, copy) NSString *name; // @synthesize name=_name;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)supportedGroupsClasses;
+ (id)supportedSettingsClasses;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_handleAddGroup:(id)arg1;
- (void)_handleAddSetting:(id)arg1;
- (void)_handleRemoveGroup:(id)arg1;
- (void)_handleRemoveSetting:(id)arg1;
- (void)_relayRequestMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_shouldAcceptMessage:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)addSetting:(id)arg1;
- (void)configureWithAccessory:(id)arg1 messageDispatcher:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)groupWithIdentifier:(id)arg1;
- (void)handleAddedGroupModel:(id)arg1 message:(id)arg2;
- (void)handleAddedSettingModel:(id)arg1 message:(id)arg2;
- (void)handleRemovedGroupModel:(id)arg1 message:(id)arg2;
- (void)handleRemovedSettingModel:(id)arg1 message:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)mergeWithGroupMetadata:(id)arg1;
- (id)messageDestination;
- (void)registerForMessages;
- (id)remoteMessageDestination;
- (void)removeGroup:(id)arg1;
- (void)removeSetting:(id)arg1;
- (id)settingWithIdentifier:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;

@end


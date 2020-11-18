//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMMutableApplicationData-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessory, HMApplicationData, HMBulletinBoardNotification, HMDelegateCaller, HMFMessageDispatcher, HMThreadSafeMutableArrayCollection, NSArray, NSNumber, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface HMService : NSObject <NSSecureCoding, HMObjectMerge, HMMutableApplicationData>
{
    BOOL _userInteractive;
    BOOL _primaryService;
    NSUUID *_uniqueIdentifier;
    HMAccessory *_accessory;
    NSString *_serviceType;
    NSString *_name;
    NSString *_configuredName;
    NSString *_defaultName;
    NSString *_associatedServiceType;
    NSString *_serviceSubtype;
    long long _configurationState;
    HMApplicationData *_applicationData;
    HMBulletinBoardNotification *_bulletinBoardNotificationInternal;
    NSURL *_homeObjectURLInternal;
    NSNumber *_instanceID;
    NSArray *_linkedServiceInstanceIDs;
    HMThreadSafeMutableArrayCollection *_currentCharacteristics;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
    NSUUID *_uuid;
}

@property (weak, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) HMApplicationData *applicationData;
@property (copy, nonatomic) NSString *associatedServiceType; // @synthesize associatedServiceType=_associatedServiceType;
@property (readonly, nonatomic) HMBulletinBoardNotification *bulletinBoardNotificationInternal; // @synthesize bulletinBoardNotificationInternal=_bulletinBoardNotificationInternal;
@property (readonly, copy, nonatomic) NSArray *characteristics;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (nonatomic) long long configurationState; // @synthesize configurationState=_configurationState;
@property (strong, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property (copy, nonatomic) HMThreadSafeMutableArrayCollection *currentCharacteristics; // @synthesize currentCharacteristics=_currentCharacteristics;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSString *defaultName; // @synthesize defaultName=_defaultName;
@property (strong, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSURL *homeObjectURLInternal; // @synthesize homeObjectURLInternal=_homeObjectURLInternal;
@property (readonly, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property (readonly, copy, nonatomic) NSArray *linkedServiceInstanceIDs; // @synthesize linkedServiceInstanceIDs=_linkedServiceInstanceIDs;
@property (readonly, copy, nonatomic) NSArray *linkedServices;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic, getter=isPrimaryService) BOOL primaryService; // @synthesize primaryService=_primaryService;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (copy, nonatomic) NSString *serviceSubtype; // @synthesize serviceSubtype=_serviceSubtype;
@property (copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, nonatomic, getter=isUserInteractive) BOOL userInteractive; // @synthesize userInteractive=_userInteractive;
@property (copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)__localizedDescriptionForServiceType:(id)arg1;
+ (id)_mapToIsConfiguredValueFromServiceConfigurationState:(long long)arg1;
+ (long long)_mapToServiceConfigurationStateFromIsConfiguredValue:(id)arg1;
+ (id)_serviceTypeAsString:(id)arg1;
+ (id)localizedDescriptionForServiceType:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_addCharacteristic:(id)arg1;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 msgDispatcher:(id)arg4;
- (id)_findCharacteristic:(id)arg1;
- (void)_handleMarkServiceInteractive:(id)arg1;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleUpdateConfigurationState:(long long)arg1;
- (void)_handleUpdateConfiguredName:(id)arg1;
- (void)_handleUpdateDefaultName:(id)arg1;
- (void)_handleUpdateName:(id)arg1;
- (void)_handleUpdateServiceSubtype:(id)arg1;
- (BOOL)_hasCharacteristic:(id)arg1;
- (BOOL)_hasCharacteristicOfType:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_removeCharacteristic:(id)arg1;
- (id)_serviceTypeDescription;
- (void)_updateAssociatedServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateConfigurationState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)bulletinBoardNotification;
- (void)encodeWithCoder:(id)arg1;
- (id)homeObjectURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setApplicationData:(id)arg1;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAssociatedServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateConfigurationState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


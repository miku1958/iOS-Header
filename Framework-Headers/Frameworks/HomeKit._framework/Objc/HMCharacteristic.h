//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMCharacteristicMetadata, HMDelegateCaller, HMService, NSArray, NSDate, NSNumber, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMCharacteristic : NSObject <NSSecureCoding, HMObjectMerge>
{
    BOOL _notificationEnabled;
    BOOL _requiresDeviceUnlock;
    BOOL _hasAuthorizationData;
    BOOL _notificationEnabledByThisClient;
    NSUUID *_uniqueIdentifier;
    NSString *_characteristicType;
    NSArray *_properties;
    id _value;
    NSDate *_valueUpdatedTime;
    NSDate *_notificationEnabledTime;
    HMService *_service;
    HMCharacteristicMetadata *_metadata;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
    NSNumber *_instanceID;
}

@property (copy, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property (readonly, copy) NSString *description;
@property BOOL hasAuthorizationData; // @synthesize hasAuthorizationData=_hasAuthorizationData;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) HMCharacteristicMetadata *metadata; // @synthesize metadata=_metadata;
@property (nonatomic, getter=isNotificationEnabled) BOOL notificationEnabled; // @synthesize notificationEnabled=_notificationEnabled;
@property (nonatomic) BOOL notificationEnabledByThisClient; // @synthesize notificationEnabledByThisClient=_notificationEnabledByThisClient;
@property (copy, nonatomic) NSDate *notificationEnabledTime; // @synthesize notificationEnabledTime=_notificationEnabledTime;
@property (copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (nonatomic) BOOL requiresDeviceUnlock; // @synthesize requiresDeviceUnlock=_requiresDeviceUnlock;
@property (weak, nonatomic) HMService *service; // @synthesize service=_service;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (copy, nonatomic) id value; // @synthesize value=_value;
@property (copy, nonatomic) NSDate *valueUpdatedTime; // @synthesize valueUpdatedTime=_valueUpdatedTime;

+ (id)__localizedDescriptionForCharacteristicType:(id)arg1;
+ (id)_characteristicTypeAsString:(id)arg1;
+ (id)localizedDescriptionForCharacteristicType:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_characteristicTypeDescription;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3;
- (void)_enableNotification:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_readValueWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateAuthorizationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateValue:(id)arg1 updateTime:(id)arg2;
- (void)_writeValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enableNotification:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mapHAPProperties:(long long)arg1;
- (void)readValueWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setValueUpdateTime:(id)arg1;
- (void)updateAuthorizationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


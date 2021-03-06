//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessory, HMFUnfairLock, HMHome, NSArray, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HMAccessoryProfile : NSObject <HMObjectMerge, HMFMessageReceiver, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    NSUUID *_uniqueIdentifier;
    _HMContext *_context;
    HMAccessory *_accessory;
    HMHome *_home;
    NSUUID *_profileUniqueIdentifier;
    NSArray *_services;
}

@property (readonly, weak, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
@property (readonly, nonatomic) NSArray *services; // @synthesize services=_services;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 services:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end


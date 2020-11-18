//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMutableApplicationData-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMApplicationData, HMFUnfairLock, HMHome, HMMutableArray, NSArray, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue;

@interface HMServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData>
{
    HMFUnfairLock *_lock;
    NSUUID *_uniqueIdentifier;
    NSUUID *_uuid;
    NSString *_name;
    HMHome *_home;
    HMApplicationData *_applicationData;
    _HMContext *_context;
    HMMutableArray *_currentServices;
}

@property (strong, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (strong, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (strong, nonatomic) HMMutableArray *currentServices; // @synthesize currentServices=_currentServices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, copy, nonatomic) NSArray *services;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_addService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_findService:(id)arg1;
- (void)_handleServiceAddedNotification:(id)arg1;
- (void)_handleServiceGroupRenamedNotification:(id)arg1;
- (void)_handleServiceRemovedNotification:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_removeService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeServices:(id)arg1;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)logIdentifier;
- (void)removeService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setName:(id)arg1;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

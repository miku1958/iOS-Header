//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMDevice, HMFUnfairLock, HMHome, HMMutableArray, HMUser, NSArray, NSDate, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue;

@interface HMTrigger : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    HMFUnfairLock *_lock;
    BOOL _enabled;
    NSString *_name;
    NSUUID *_uniqueIdentifier;
    NSDate *_lastFireDate;
    NSUUID *_uuid;
    HMHome *_home;
    HMDevice *_ownerDevice;
    HMUser *_owner;
    _HMContext *_context;
    HMMutableArray *_currentActionSets;
}

@property (readonly, copy, nonatomic) NSArray *actionSets;
@property (readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, weak, nonatomic) HMUser *creator;
@property (readonly, nonatomic) HMDevice *creatorDevice;
@property (strong, nonatomic) HMMutableArray *currentActionSets; // @synthesize currentActionSets=_currentActionSets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMHome *home; // @synthesize home=_home;
@property (copy, nonatomic) NSDate *lastFireDate; // @synthesize lastFireDate=_lastFireDate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (weak, nonatomic) HMUser *owner; // @synthesize owner=_owner;
@property (strong, nonatomic) HMDevice *ownerDevice; // @synthesize ownerDevice=_ownerDevice;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_addActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addActionSetOfType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_enable:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleTriggerFired:(id)arg1;
- (void)_handleTriggerFiredNotification:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_serializeForAdd;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)_updateActionSet:(id)arg1 add:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_updateActionSetFromResponse:(id)arg1 responsePayload:(id)arg2;
- (void)_updateClientWithResults:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_updateTriggerNameFromResponse:(CDUnknownBlockType)arg1 responsePayload:(id)arg2;
- (void)addActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addActionSetOfType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addActionSetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)compatibleWithApp;
- (void)dealloc;
- (void)enable:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


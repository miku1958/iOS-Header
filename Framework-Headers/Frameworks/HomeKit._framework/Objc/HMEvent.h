//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMEventTrigger, HMFUnfairLock, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue;

@interface HMEvent : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver>
{
    HMFUnfairLock *_lock;
    BOOL _endEvent;
    HMEventTrigger *_eventTrigger;
    NSUUID *_uniqueIdentifier;
    _HMContext *_context;
    NSUUID *_uuid;
    NSString *_triggerType;
}

@property (strong, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEndEvent) BOOL endEvent; // @synthesize endEvent=_endEvent;
@property (weak, nonatomic) HMEventTrigger *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)isSupportedForHome:(id)arg1;
+ (BOOL)sharedTriggerActivationSupportedForHome:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (void)_invalidate;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (id)_serializeForAdd;
- (void)_updateTriggerType;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

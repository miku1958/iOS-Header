//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDHome, HMMessageDispatcher, NSDate, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDTrigger : NSObject <HMMessageReceiver, NSSecureCoding>
{
    BOOL _active;
    NSString *_name;
    NSUUID *_uuid;
    HMDHome *_home;
    NSMutableArray *_currentActionSets;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_msgDispatcher;
    NSDate *_mostRecentFireDate;
}

@property (nonatomic) BOOL active; // @synthesize active=_active;
@property (strong, nonatomic) NSMutableArray *currentActionSets; // @synthesize currentActionSets=_currentActionSets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, nonatomic) NSDate *mostRecentFireDate; // @synthesize mostRecentFireDate=_mostRecentFireDate;
@property (strong, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_executeActionSets;
- (void)_handleActivateTriggerRequest:(id)arg1;
- (void)_handleRenameRequest:(id)arg1;
- (void)_handleUpdateActionSetRequest:(id)arg1;
- (void)_registerForMessages;
- (id)_updateActionSets:(id)arg1 add:(BOOL)arg2;
- (id)actionSets;
- (void)activate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkForNoActions;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (BOOL)containsAccessoryWithUUID:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (void)reEvaluate;
- (void)removeAccessory:(id)arg1;
- (void)removeActionSet:(id)arg1;
- (void)sendTriggerFiredNotification:(id)arg1;
- (BOOL)shouldEncodeLastFireDate:(id)arg1;
- (void)triggerFired;

@end

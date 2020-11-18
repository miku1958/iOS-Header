//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, HMDNotificationRegistration, HMFMessageDispatcher, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDHomePresenceBase : HMFObject <HMFLogging, HMDHomeMessageReceiver>
{
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_logString;
    NSUUID *_uuid;
    HMFMessageDispatcher *_msgDispatcher;
    HMDNotificationRegistration *_notificationRegistration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHome *home; // @synthesize home=_home;
@property (strong, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
- (void).cxx_destruct;
- (void)_initialize:(id)arg1;
- (void)_registerForMessages;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2;
- (void)handleHomeDataLoadedNotification:(id)arg1;
- (id)logIdentifier;
- (void)residentChanged;
- (void)timerFired:(id)arg1;

@end

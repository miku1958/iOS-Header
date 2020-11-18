//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDDevice, HMDEventTrigger, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDEventTriggerSession : HMFObject <HMFDumpState, HMFLogging, HMFMessageReceiver>
{
    NSUUID *_sessionID;
    NSString *_logString;
    HMFMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDEventTrigger *_eventTrigger;
    NSUUID *_eventTriggerUUID;
    HMDDevice *_currentDevice;
}

@property (readonly, nonatomic) HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) HMDEventTrigger *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
@property (readonly, nonatomic) NSUUID *eventTriggerUUID; // @synthesize eventTriggerUUID=_eventTriggerUUID;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (readonly, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_registerForMessages;
- (void)dealloc;
- (id)dumpState;
- (id)initWithSessionID:(id)arg1 eventTrigger:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;
- (id)logIdentifier;
- (BOOL)sendMessage:(id)arg1 payload:(id)arg2 device:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (BOOL)sendMessage:(id)arg1 payload:(id)arg2 device:(id)arg3 target:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (BOOL)sendResidentMessage:(id)arg1 payload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end


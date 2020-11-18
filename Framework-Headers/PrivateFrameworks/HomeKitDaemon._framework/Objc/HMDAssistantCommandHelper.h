//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMMessageReceiver-Protocol.h>

@class HMDHome, HMMessageDispatcher, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAssistantCommandHelper : NSObject <HMMessageReceiver>
{
    CDUnknownBlockType _responseHandler;
    NSUUID *_messageId;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_queue;
    HMMessageDispatcher *_msgDispatcher;
    NSUUID *_uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHome *home; // @synthesize home=_home;
@property (strong, nonatomic) NSUUID *messageId; // @synthesize messageId=_messageId;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

- (void).cxx_destruct;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_register;
- (void)addActionSetRequest:(id)arg1 actionSet:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addReadRequest:(id)arg1 characteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)addWriteRequest:(id)arg1 characteristics:(id)arg2 withArrayCompletionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 msgDispatcher:(id)arg2;

@end

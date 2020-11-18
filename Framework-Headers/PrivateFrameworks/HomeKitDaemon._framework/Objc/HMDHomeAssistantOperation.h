//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTimerDelegate-Protocol.h>

@class HAPTimer, NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface HMDHomeAssistantOperation : NSObject <HAPTimerDelegate>
{
    BOOL _completionHandlerCalled;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _completionHandler;
    HAPTimer *_accessoryConnectivityWaitTimer;
    NSSet *_accessoriesToOperateOn;
    NSMutableSet *_reachableAccessoriesToOperateOn;
}

@property (readonly, nonatomic) NSSet *accessoriesToOperateOn; // @synthesize accessoriesToOperateOn=_accessoriesToOperateOn;
@property (readonly, nonatomic) HAPTimer *accessoryConnectivityWaitTimer; // @synthesize accessoryConnectivityWaitTimer=_accessoryConnectivityWaitTimer;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic) BOOL completionHandlerCalled; // @synthesize completionHandlerCalled=_completionHandlerCalled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableSet *reachableAccessoriesToOperateOn; // @synthesize reachableAccessoriesToOperateOn=_reachableAccessoriesToOperateOn;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)homeAssistantOperationWithActionSet:(id)arg1 queue:(id)arg2;
+ (id)homeAssistantOperationWithReadRequests:(id)arg1 queue:(id)arg2;
+ (id)homeAssistantOperationWithWriteRequests:(id)arg1 queue:(id)arg2;
- (void).cxx_destruct;
- (void)_callCompletion;
- (BOOL)_testForReachability;
- (void)dealloc;
- (void)handleAccessoryIsReachable:(id)arg1;
- (id)initWithAccessories:(id)arg1 queue:(id)arg2;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)timerDidFire:(id)arg1;

@end


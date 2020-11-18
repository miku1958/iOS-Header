//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/AWFrameworkClient-Protocol.h>
#import <AttentionAwareness/AWServiceObserver-Protocol.h>

@class AWAttentionAwarenessConfiguration, AWAttentionEvent, AWClientPollWaiter, NSString;
@protocol NSXPCProxyCreating, OS_dispatch_queue;

@interface AWAttentionAwarenessClient : NSObject <AWServiceObserver, AWFrameworkClient>
{
    NSObject<OS_dispatch_queue> *_queue;
    AWClientPollWaiter *_pollWaiter;
    id<NSXPCProxyCreating> _remoteClientProxy;
    unsigned long long _suspensionCount;
    BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_clientNotifQueue;
    CDUnknownBlockType _clientNotifBlock;
    NSObject<OS_dispatch_queue> *_clientEventQueue;
    CDUnknownBlockType _clientEventBlock;
    AWAttentionAwarenessConfiguration *_configuration;
    BOOL _unitTestMode;
    int _clientIndex;
    BOOL _lastAttentionState;
}

@property (copy, nonatomic) AWAttentionAwarenessConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) AWAttentionEvent *lastEvent;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)_invokeRequiringClient:(BOOL)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)cancelPollForAttentionWithError:(id *)arg1;
- (id)connect:(BOOL)arg1;
- (id)init;
- (BOOL)invalidateRemoteClientWithError:(id *)arg1;
- (BOOL)invalidateWithError:(id *)arg1;
- (BOOL)invokeRequiringClient:(BOOL)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)notify:(unsigned long long)arg1;
- (void)notifyEvent:(id)arg1;
- (void)notifyPollEventType:(unsigned long long)arg1 event:(id)arg2;
- (BOOL)pollForAttentionWithTimeout:(double)arg1 event:(id *)arg2 error:(id *)arg3;
- (BOOL)pollForAttentionWithTimeout:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (BOOL)resetAttentionLostTimeoutWithError:(id *)arg1;
- (BOOL)resumeWithError:(id *)arg1;
- (void)serviceInterrupted;
- (void)setConfiguration:(id)arg1 shouldReset:(BOOL)arg2;
- (BOOL)setConfiguration:(id)arg1 shouldReset:(BOOL)arg2 error:(id *)arg3;
- (void)setEventHandlerWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setNotificationHandlerWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setUnitTestMode:(BOOL)arg1;
- (BOOL)suspendWithError:(id *)arg1;
- (id)unitTestSampler;

@end

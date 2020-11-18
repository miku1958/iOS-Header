//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/AWFrameworkClient-Protocol.h>

@class AWAttentionAwarenessConfiguration, AWAttentionEvent, AWClientPollWaiter, AWSchedulerManager, NSString;
@protocol AWRemoteClient, AWScheduler, OS_dispatch_queue;

@interface AWAttentionAwarenessClient : NSObject <AWFrameworkClient>
{
    NSObject<OS_dispatch_queue> *_queue;
    AWSchedulerManager *_schedulerManager;
    id<AWScheduler> _scheduler;
    AWClientPollWaiter *_pollWaiter;
    id<AWRemoteClient> _remoteClient;
    unsigned long long _suspensionCount;
    BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_clientQueue;
    CDUnknownBlockType _clientBlock;
    int _clientState;
    AWAttentionAwarenessConfiguration *_configuration;
}

@property (copy, nonatomic) AWAttentionAwarenessConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) AWAttentionEvent *lastEvent;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)cancelPollForAttentionWithError:(id *)arg1;
- (id)init;
- (BOOL)invalidateWithError:(id *)arg1;
- (BOOL)invokeRequiringClient:(BOOL)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)notifyEvent:(id)arg1;
- (void)notifyPollEventType:(unsigned long long)arg1 event:(id)arg2;
- (BOOL)pollForAttentionWithTimeout:(double)arg1 event:(id *)arg2 error:(id *)arg3;
- (BOOL)pollForAttentionWithTimeout:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (id)reconnect;
- (BOOL)resetAttentionLostTimeoutWithError:(id *)arg1;
- (BOOL)resumeWithError:(id *)arg1;
- (void)setConfiguration:(id)arg1 shouldReset:(BOOL)arg2;
- (void)setEventHandlerWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)suspendWithError:(id *)arg1;
- (id)unitTestSampler;
- (void)useUnitTestSampling:(BOOL)arg1;

@end


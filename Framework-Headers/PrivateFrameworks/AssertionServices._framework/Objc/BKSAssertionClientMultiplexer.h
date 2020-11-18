//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSBaseXPCClient.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BKSAssertionClientMultiplexer : BSBaseXPCClient
{
    NSObject<OS_dispatch_queue> *_assertionQueue;
    NSMutableDictionary *_listeners;
}

@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue;

- (void)_assertionQueue_handleEvent:(id)arg1 forListener:(id)arg2;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (void)queue_connectionWasDestroyed;
- (void)queue_handleMessage:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)sendEvent:(id)arg1 withAssertionType:(id)arg2 forEventType:(unsigned long long)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(CDUnknownBlockType)arg1 withReplyHandler:(CDUnknownBlockType)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMRemoteObjectBroadcaster : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultBroadcaster;
- (id)_queue;
- (void)blockUntilSendQueueIsEmpty;
- (id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3;
- (id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4;
- (id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (id)broadcastProxyForTargets:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3;
- (void)dealloc;
- (void)flushProxy:(id)arg1;
- (id)init;

@end


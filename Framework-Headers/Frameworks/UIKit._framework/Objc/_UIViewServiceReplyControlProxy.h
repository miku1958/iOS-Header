//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIViewServiceProxy_ReplyControl-Protocol.h>

@class NSLock, _UIViewServiceReplyAwaitingTrampoline, _UIViewServiceReplyControlTrampoline;

__attribute__((visibility("hidden")))
@interface _UIViewServiceReplyControlProxy : NSObject <_UIViewServiceProxy_ReplyControl>
{
    id _target;
    _UIViewServiceReplyControlTrampoline *_controlTrampoline;
    _UIViewServiceReplyAwaitingTrampoline *_awaitingTrampoline;
    NSLock *_lock;
}

+ (id)proxyWithTarget:(id)arg1;
- (void).cxx_destruct;
- (id)_awaitingReply;
- (id)_deliveringRepliesAsynchronously;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end


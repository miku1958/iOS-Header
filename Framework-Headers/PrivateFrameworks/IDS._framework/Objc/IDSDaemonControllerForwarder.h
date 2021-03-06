//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSObject, NSProtocolChecker;
@protocol OS_dispatch_queue;

@interface IDSDaemonControllerForwarder : NSProxy
{
    NSProtocolChecker *_protocol;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    int _priority;
}

@property (readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // @synthesize ivarQueue=_ivarQueue;
@property (nonatomic) int priority; // @synthesize priority=_priority;
@property (readonly, nonatomic) NSProtocolChecker *protocol; // @synthesize protocol=_protocol;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteMessageQueue; // @synthesize remoteMessageQueue=_remoteMessageQueue;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3;
- (id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)methodSignatureForSelector:(SEL)arg1;

@end


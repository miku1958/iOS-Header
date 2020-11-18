//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AXIPCOutstandingAsyncRequest : NSObject
{
    unsigned int _replyPort;
    NSObject<OS_dispatch_queue> *_replyQueue;
    CDUnknownBlockType _replyHandler;
    struct __CFRunLoopSource *_replyMachPortSource;
}

@property (readonly, nonatomic) CDUnknownBlockType replyHandler; // @synthesize replyHandler=_replyHandler;
@property (readonly, nonatomic) struct __CFRunLoopSource *replyMachPortSource; // @synthesize replyMachPortSource=_replyMachPortSource;
@property (readonly, nonatomic) unsigned int replyPort; // @synthesize replyPort=_replyPort;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;

+ (void)initialize;
+ (id)lookupByPort:(unsigned int)arg1;
+ (void)registerOutstandingRequest:(id)arg1;
+ (void)unregisterByPort:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)_responseReceived:(id)arg1;
- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)arg1 handlerQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)initialSendAborted;
- (void)rawResponseReceived:(id)arg1;
- (void)registerAndListenForResponse;
- (void)sendOnceRightDestroyed;

@end


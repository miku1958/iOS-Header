//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BSXPCConnectionListenerHandler, OS_dispatch_queue, OS_xpc_object;

@interface BSXPCConnectionListener : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    id<BSXPCConnectionListenerHandler> _handler;
    NSString *_service;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) id<BSXPCConnectionListenerHandler> handler; // @synthesize handler=_handler;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, copy) NSString *service; // @synthesize service=_service;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithConnection:(id)arg1 forService:(id)arg2 withHandler:(id)arg3 onQueue:(id)arg4;
- (void)invalidate;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SPXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_eventQueue;
    BOOL _ownsQueue;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _disconnectHandler;
    id _context;
    NSString *_bundleID;
}

@property (readonly, weak) NSString *bundleID;
@property (strong, nonatomic) id context; // @synthesize context=_context;
@property (copy, nonatomic) CDUnknownBlockType disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property (copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property (readonly, weak) NSString *serviceName;

- (void).cxx_destruct;
- (void)_handleXPCError:(id)arg1;
- (void)_handleXPCMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setEventHandlerOnConnection:(id)arg1;
- (void)barrier:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)eventQueue;
- (id)eventQueueWithQOS:(unsigned int)arg1;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (id)initWithXPCConnection:(id)arg1 qos:(unsigned int)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)shutdown;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SKXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _disconnectBlock;
    CDUnknownBlockType _messageBlock;
}

@property (copy) CDUnknownBlockType disconnectBlock;
@property (copy) CDUnknownBlockType messageBlock;

- (void).cxx_destruct;
- (id)_initSKXPCConnection;
- (void)_reloadEventHandler;
- (id)createXPCEndpoint;
- (id)init;
- (id)initWithServiceName:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)sendSynchronousMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface BSBaseXPCServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableSet *_clients;
    BOOL _connectionResumed;
    BOOL _usesAnonymousConnection;
    NSString *_serviceName;
    int _notifyToken;
}

@property (nonatomic, getter=usesAnonymousConnection) BOOL usesAnonymousConnection; // @synthesize usesAnonymousConnection=_usesAnonymousConnection;

- (void)_addClientConnection:(id)arg1;
- (id)_clients;
- (id)_connection;
- (id)_copyEndpoint;
- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;
- (void)_invalidate;
- (id)_notifyTokenName;
- (id)_queue_clientForConnection:(id)arg1;
- (void)_queue_removeClientConnection:(id)arg1;
- (void)_sendMessageReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (void)_sendReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (void)_sendReplyForMessage:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (id)queue;
- (Class)queue_classForNewClientConnection:(id)arg1;
- (void)queue_clientAdded:(id)arg1;
- (void)queue_clientRemoved:(id)arg1;
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;
- (id)queue_newClientForConnection:(id)arg1;
- (BOOL)queue_shouldAcceptNewConnection:(id)arg1;
- (void)registerServerSuspended;
- (void)resumeServer;
- (void)run;

@end


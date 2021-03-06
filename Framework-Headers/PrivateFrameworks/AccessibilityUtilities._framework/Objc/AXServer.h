//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, AXIPCClient, AXIPCServer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AXServer : NSObject
{
    BOOL _shouldRegisterClientCallbackSourceOnMainRunloop;
    AXIPCServer *_server;
    AXIPCClient *_client;
    NSString *_serverIdentifier;
    NSMutableArray *_assertionWorkBacklog;
    AXDispatchTimer *_assertionRetryTimer;
    NSObject<OS_dispatch_queue> *_assertionWorkQueue;
}

@property (strong, nonatomic) AXDispatchTimer *assertionRetryTimer; // @synthesize assertionRetryTimer=_assertionRetryTimer;
@property (strong, nonatomic) NSMutableArray *assertionWorkBacklog; // @synthesize assertionWorkBacklog=_assertionWorkBacklog;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *assertionWorkQueue; // @synthesize assertionWorkQueue=_assertionWorkQueue;
@property (strong, nonatomic) AXIPCClient *client; // @synthesize client=_client;
@property (strong, nonatomic) AXIPCServer *server; // @synthesize server=_server;
@property (copy, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
@property (nonatomic) BOOL shouldRegisterClientCallbackSourceOnMainRunloop; // @synthesize shouldRegisterClientCallbackSourceOnMainRunloop=_shouldRegisterClientCallbackSourceOnMainRunloop;

- (void).cxx_destruct;
- (BOOL)_connectIfNecessary;
- (BOOL)_connectServerIfNecessary;
- (void)_didConnectToClient;
- (void)_didConnectToServer;
- (void)_ensureAssertionsHaveBeenProcessedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_initializeAssertionBookkeeping;
- (void)_processAssertionBacklog;
- (id)_sendMessage:(id)arg1 error:(id *)arg2;
- (id)_serviceName;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 boolResultHandler:(CDUnknownBlockType)arg3;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 objectResultHandler:(CDUnknownBlockType)arg3;
- (id)sendMessage:(id)arg1;
- (void)sendSimpleMessage:(id)arg1;
- (BOOL)sendSimpleMessage:(id)arg1 enqueueError:(id *)arg2;
- (id)sendSimpleMessageWithObjectResult:(id)arg1;
- (BOOL)sendSimpleMessageWithResult:(id)arg1;

@end


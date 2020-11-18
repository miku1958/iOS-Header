//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface MSService : NSObject
{
    int _canceled;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_responseListener;
    NSObject<OS_xpc_object> *_responseHandler;
}

@property (readonly, getter=isCanceled) BOOL canceled;

- (void).cxx_destruct;
- (void)_callServicesMethod:(id)arg1 arguments:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)_callServicesMethod:(id)arg1 arguments:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (id)_connection;
- (id)_createMessageForService:(id)arg1 arguments:(id)arg2 index:(long long *)arg3;
- (id)_createServiceOnQueue:(id)arg1;
- (id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id *)arg3;
- (void)_generateUnitTestResponsesForResultArray:(id)arg1;
- (id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id *)arg4;
- (void)_registerConnection:(id)arg1 onQueue:(id)arg2;
- (BOOL)_shouldSimulate;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (BOOL)_unitTestsAreEnabled;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)responseConnection:(id)arg1 handleError:(id)arg2;
- (void)responseConnection:(id)arg1 handleResponse:(id)arg2;
- (void)setupResponseConnectionOnQueue:(id)arg1;
- (void)start;
- (void)stop;

@end

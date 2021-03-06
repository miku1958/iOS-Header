//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SSXPCConnection;
@protocol OS_dispatch_queue, SSErrorHandlerDelegate;

@interface SSErrorHandler : NSObject
{
    SSXPCConnection *_controlConnection;
    id<SSErrorHandlerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_failureTypes;
    SSXPCConnection *_observerConnection;
}

@property id<SSErrorHandlerDelegate> delegate;
@property (copy) NSArray *failureTypes;

- (void)_dispatchToDelegate:(CDUnknownBlockType)arg1;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)_openSessionWithMessage:(id)arg1;
- (void)_reconnectToDaemonWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_sendDisconnectMessage;
- (void)_tearDownConnections;
- (void)dealloc;
- (id)init;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stopWithCompletionBlock:(CDUnknownBlockType)arg1;

@end


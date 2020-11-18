//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, NSError, NSString, NSXPCConnection, _UIAsyncInvocation, _UIRemoteViewService;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceInterfaceConnectionRequest : NSObject
{
    CDUnknownBlockType _connectionHandler;
    NSString *_serviceBundleIdentifier;
    _UIRemoteViewService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCancelled;
    NSError *_cancellationError;
    _UIAsyncInvocation *_cancellationInvocation;
    int _sessionRequestNotifyToken;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceSessionConnection;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

+ (id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)connectToViewService:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;
- (int)__automatic_invalidation_logic;
- (void)_cancelUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)_cancelWithError:(id)arg1;
- (void)_createAndEstablishConnection;
- (void)_createPlugInProcessAssertion;
- (void)_createProcessAssertion;
- (void)_createProcessAssertionForPID:(int)arg1 orBundleIdentifier:(id)arg2 acquiredHandler:(CDUnknownBlockType)arg3;
- (void)_didConnectToService;
- (void)_establishConnection;
- (BOOL)_isDeallocating;
- (void)_launchService;
- (BOOL)_tryRetain;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end


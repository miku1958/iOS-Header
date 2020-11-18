//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSXPCConnectionDelegate-Protocol.h>

@class BKSProcessAssertion, NSError, NSString, NSXPCConnection, _UIAsyncInvocation, _UIRemoteViewService;

__attribute__((visibility("hidden")))
@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate>
{
    int _terminationStateLock;
    NSError *_terminationError;
    CDUnknownBlockType _terminationHandler;
    BOOL _isTerminated;
    _UIAsyncInvocation *_terminateInvocation;
    NSString *_serviceBundleIdentifier;
    _UIRemoteViewService *_service;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceConnection;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CDStruct_4c969caf serviceAuditToken;
@property (readonly, nonatomic) int servicePID;
@property (readonly) Class superclass;

+ (id)connectToViewService:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
- (int)__automatic_invalidation_logic;
- (id)_initWithConnectionInfo:(CDStruct_d58a15aa)arg1 service:(id)arg2 deputyInterfaces:(id)arg3;
- (id)_initWithConnectionInfo:(CDStruct_d58a15aa)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3;
- (id)_initWithConnectionInfo:(CDStruct_d58a15aa)arg1 serviceBundleIdentifier:(id)arg2 service:(id)arg3 deputyInterfaces:(id)arg4;
- (BOOL)_isDeallocating;
- (void)_terminateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (id)_terminateWithError:(id)arg1;
- (BOOL)_tryRetain;
- (id)connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)dealloc;
- (id)disconnect;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setTerminationHandler:(CDUnknownBlockType)arg1;

@end


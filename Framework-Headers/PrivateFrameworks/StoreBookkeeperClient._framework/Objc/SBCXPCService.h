//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSXPCConnection, SBCClientConfiguration, SBCXPCServiceInterface;
@protocol OS_dispatch_queue;

@interface SBCXPCService : NSObject
{
    BOOL _isConnecting;
    NSObject<OS_dispatch_queue> *_queue;
    id _serviceProxy;
    id _applicationWillTerminateObserver;
    NSXPCConnection *_xpcConnection;
    SBCClientConfiguration *_clientConfiguration;
    NSMutableDictionary *_pendingReplyBlockCompletionHandlers;
    SBCXPCServiceInterface *_XPCServiceInterface;
}

@property (readonly) SBCXPCServiceInterface *XPCServiceInterface; // @synthesize XPCServiceInterface=_XPCServiceInterface;
@property (readonly, weak) id applicationWillTerminateObserver; // @synthesize applicationWillTerminateObserver=_applicationWillTerminateObserver;
@property (readonly) SBCClientConfiguration *clientConfiguration; // @synthesize clientConfiguration=_clientConfiguration;
@property (readonly) BOOL isConnecting; // @synthesize isConnecting=_isConnecting;
@property (readonly) NSMutableDictionary *pendingReplyBlockCompletionHandlers; // @synthesize pendingReplyBlockCompletionHandlers=_pendingReplyBlockCompletionHandlers;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) id serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property (readonly) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (id)XPCInterfaceDebugDescription;
+ (Class)XPCServiceInterfaceClass;
+ (id)newListener;
- (void).cxx_destruct;
- (void)_dequeueReplyBlockMessageWithEnqueuedToken:(id)arg1;
- (id)_enqueueReplyBlockMessageWithSelector:(SEL)arg1 withClientCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_invalidateOutstandingRequests:(id)arg1;
- (void)_onQueueCloseServiceConnection;
- (void)_onQueueInvalidateOutstandingRequests:(id)arg1;
- (void)_openServiceConnection;
- (id)_serviceProxy;
- (void)closeServiceConnection;
- (void)dealloc;
- (void)didConnectToService;
- (id)initWithClientConfiguration:(id)arg1;
- (id)newServiceConnection;
- (void)sendMessage:(SEL)arg1 withClientCompletionHandler:(CDUnknownBlockType)arg2 messageBlock:(CDUnknownBlockType)arg3;
- (oneway void)setClientConfiguration:(id)arg1;

@end

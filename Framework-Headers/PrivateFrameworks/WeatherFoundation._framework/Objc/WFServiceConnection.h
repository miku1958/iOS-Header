//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WeatherServiceClientProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, WeatherServiceProtocol;

@interface WFServiceConnection : NSObject <WeatherServiceClientProtocol>
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_internalStateQueue;
    NSXPCConnection *_xpcConnection;
    id<WeatherServiceProtocol> _serviceProxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tasksPendingResponseForTaskIdentifier;
    NSMutableDictionary *_dispatchGroupForTaskIdentifier;
    NSMutableDictionary *_executionStartTimeForTaskIdentifier;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSMutableDictionary *dispatchGroupForTaskIdentifier; // @synthesize dispatchGroupForTaskIdentifier=_dispatchGroupForTaskIdentifier;
@property (readonly) NSMutableDictionary *executionStartTimeForTaskIdentifier; // @synthesize executionStartTimeForTaskIdentifier=_executionStartTimeForTaskIdentifier;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *internalStateQueue; // @synthesize internalStateQueue=_internalStateQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) id<WeatherServiceProtocol> serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *tasksPendingResponseForTaskIdentifier; // @synthesize tasksPendingResponseForTaskIdentifier=_tasksPendingResponseForTaskIdentifier;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (id)allAllowedClasses;
+ (id)weatherServiceClientInterface;
+ (id)weatherServiceInterface;
- (void).cxx_destruct;
- (void)_handleRemoteObjectProxyError:(id)arg1;
- (void)_onQueueInvalidateConnection:(id)arg1;
- (void)_onQueueOpenConnection;
- (void)accessServiceWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)enqueueRequest:(id)arg1;
- (void)enqueueRequest:(id)arg1 waitUntilDone:(BOOL)arg2;
- (id)init;
- (void)invalidate;
- (void)serviceDidReceiveResponse:(id)arg1;
- (void)taskIdentifier:(CDUnknownBlockType)arg1;

@end


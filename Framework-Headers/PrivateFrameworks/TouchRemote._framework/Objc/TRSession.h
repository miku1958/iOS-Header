//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TRAnisetteDataHandler, TRConnection, TRNearbyDevice;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TRSession : NSObject
{
    TRConnection *_connection;
    TRNearbyDevice *_nearbyDevice;
    CDUnknownBlockType _disconnectHandler;
    NSMutableDictionary *_messageHandlerMap;
    TRAnisetteDataHandler *_anisetteDataHandler;
    NSObject<OS_dispatch_queue> *_messageHandlerMapQ;
    NSObject<OS_dispatch_queue> *_connectionQ;
    NSObject<OS_dispatch_source> *_heartbeatRequestTimer;
}

@property (strong, nonatomic) TRAnisetteDataHandler *anisetteDataHandler; // @synthesize anisetteDataHandler=_anisetteDataHandler;
@property (readonly, getter=isConnected) BOOL connected;
@property (strong) TRConnection *connection;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *connectionQ; // @synthesize connectionQ=_connectionQ;
@property (copy, nonatomic) CDUnknownBlockType disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property (strong) NSObject<OS_dispatch_source> *heartbeatRequestTimer; // @synthesize heartbeatRequestTimer=_heartbeatRequestTimer;
@property (strong, nonatomic) NSMutableDictionary *messageHandlerMap; // @synthesize messageHandlerMap=_messageHandlerMap;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *messageHandlerMapQ; // @synthesize messageHandlerMapQ=_messageHandlerMapQ;
@property (strong, nonatomic) TRNearbyDevice *nearbyDevice; // @synthesize nearbyDevice=_nearbyDevice;

- (void).cxx_destruct;
- (void)_handleEvent:(id)arg1;
- (void)_handleHeartbeatWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)_handleRequest:(id)arg1;
- (CDUnknownBlockType)_handlerForEventClass:(Class)arg1;
- (CDUnknownBlockType)_handlerForRequestClass:(Class)arg1;
- (id)_messageHandlerForMessageClass:(Class)arg1;
- (void)_respondToRequest:(id)arg1 withError:(id)arg2;
- (void)_sendHeartbeats;
- (void)_sendResponse:(id)arg1 forRequest:(id)arg2;
- (void)_setMessageHandler:(id)arg1 forMessageClass:(Class)arg2;
- (void)disconnect;
- (id)init;
- (id)initWithNearbyDevice:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)sendHeartbeatWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)setEventHandler:(CDUnknownBlockType)arg1 forEventClass:(Class)arg2;
- (void)setRequestHandler:(CDUnknownBlockType)arg1 forRequestClass:(Class)arg2;
- (void)startHeartbeat;

@end


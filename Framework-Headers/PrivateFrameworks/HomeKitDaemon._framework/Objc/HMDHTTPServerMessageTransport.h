//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFHTTPServerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFHTTPServer, NSArray, NSDictionary, NSMutableArray, NSObject, NSString, NSUUID;
@protocol HMDHTTPServerMessageTransportDelegate, OS_dispatch_queue;

@interface HMDHTTPServerMessageTransport : HMFObject <HMFHTTPServerDelegate, HMFTimerDelegate>
{
    NSMutableArray *_clientConnections;
    HMFHTTPServer *_server;
    id<HMDHTTPServerMessageTransportDelegate> _delegate;
    NSUUID *_identifier;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property (readonly, copy, nonatomic) NSDictionary *TXTRecord;
@property (readonly, nonatomic) NSArray *clientConnections;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDHTTPServerMessageTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, nonatomic) HMFHTTPServer *server; // @synthesize server=_server;
@property (readonly) Class superclass;

+ (id)shortDescription;
- (void).cxx_destruct;
- (void)__registerPingHandler;
- (void)__registerReceiveMessageHandler;
- (void)__registerSendMessageHandler;
- (void)__registerSendResponseHandler;
- (id)_clientConnectionForDevice:(id)arg1;
- (void)_stopWithError:(id)arg1;
- (void)addClientConnection:(id)arg1;
- (void)confirmDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)init;
- (id)initWithServerIdentifier:(id)arg1;
- (void)removeAllClientConnections;
- (void)removeClientConnection:(id)arg1;
- (void)removeTXTRecordValueForKey:(id)arg1;
- (void)sendMessage:(id)arg1 toDevices:(id)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)server:(id)arg1 didCloseConnection:(id)arg2;
- (void)server:(id)arg1 didOpenConnection:(id)arg2;
- (void)server:(id)arg1 didStopWithError:(id)arg2;
- (BOOL)server:(id)arg1 shouldAcceptConnection:(id)arg2;
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;
- (id)shortDescription;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)timerDidFire:(id)arg1;

@end

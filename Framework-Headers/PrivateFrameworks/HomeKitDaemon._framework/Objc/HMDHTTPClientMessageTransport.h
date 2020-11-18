//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFHTTPClientDelegate-Protocol.h>

@class HMDHTTPDevice, HMFHTTPClient, HMFNetService, NSString, NSUUID;
@protocol HMDHTTPClientMessageTransportDelegate;

@interface HMDHTTPClientMessageTransport : NSObject <HMFHTTPClientDelegate>
{
    BOOL _running;
    id<HMDHTTPClientMessageTransportDelegate> _delegate;
    NSUUID *_identifier;
    HMFNetService *_netService;
    HMDHTTPDevice *_remoteDevice;
    HMFHTTPClient *_client;
}

@property (readonly, nonatomic) HMFHTTPClient *client; // @synthesize client=_client;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDHTTPClientMessageTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) HMFNetService *netService; // @synthesize netService=_netService;
@property (readonly, nonatomic, getter=isReachable) BOOL reachable;
@property (readonly, nonatomic) HMDHTTPDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property (nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;
- (void).cxx_destruct;
- (void)_receiveMessage;
- (void)_sendResponseMessage:(id)arg1 forTransactionIdentifier:(id)arg2;
- (void)_stopWithError:(id)arg1;
- (void)client:(id)arg1 didRequestPingWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)clientDidBecomeUnreachable:(id)arg1;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 netService:(id)arg2;
- (id)logIdentifier;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendPingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)shortDescription;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;

@end


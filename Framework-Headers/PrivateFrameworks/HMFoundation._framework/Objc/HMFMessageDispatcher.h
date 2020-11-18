//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFMessageTransportDelegate-Protocol.h>

@class HMFMessageTransport, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HMFMessageDispatcher : NSObject <HMFMessageTransportDelegate>
{
    BOOL _remoteSource;
    HMFMessageTransport *_transport;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_notificationHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *notificationHandlers; // @synthesize notificationHandlers=_notificationHandlers;
@property (nonatomic, getter=isRemoteSource) BOOL remoteSource; // @synthesize remoteSource=_remoteSource;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMFMessageTransport *transport; // @synthesize transport=_transport;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (void)_deregisterForMessage:(id)arg1 receiver:(id)arg2 token:(id)arg3;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)dispatchMessage:(id)arg1;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (id)init;
- (id)initWithTransport:(id)arg1;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end


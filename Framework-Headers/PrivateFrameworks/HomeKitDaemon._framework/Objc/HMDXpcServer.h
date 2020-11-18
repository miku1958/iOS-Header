//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessageDispatcher.h>

#import <HomeKitDaemon/HMDApplicationMonitorDelegate-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSXPCListenerDelegate-Protocol.h>

@class HMDApplicationMonitor, HMDApplicationRegistry, HMDBackgroundAppMessageFilter, HMDCentralMessageDispatcher, HMDLostModeMessageFilter, NSMutableSet, NSObject, NSString, NSUUID, NSXPCListener;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface HMDXpcServer : HMFMessageDispatcher <NSXPCListenerDelegate, HMFMessageReceiver, HMDApplicationMonitorDelegate>
{
    HMDApplicationRegistry *_appRegistry;
    NSObject<OS_dispatch_queue> *_xpcWorkQueue;
    NSUUID *_uuid;
    NSXPCListener *_xpcListener;
    NSMutableSet *_xpcClients;
    HMDApplicationMonitor *_appMonitor;
    NSObject<OS_dispatch_group> *_activeMessageTracker;
    HMDCentralMessageDispatcher *_recvDispatcher;
    HMDBackgroundAppMessageFilter *_backgroundAppMsgFilter;
    HMDLostModeMessageFilter *_lostModeMessageFilter;
}

@property (strong, nonatomic) NSObject<OS_dispatch_group> *activeMessageTracker; // @synthesize activeMessageTracker=_activeMessageTracker;
@property (weak, nonatomic) HMDApplicationMonitor *appMonitor; // @synthesize appMonitor=_appMonitor;
@property (strong, nonatomic) HMDApplicationRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
@property (strong, nonatomic) HMDBackgroundAppMessageFilter *backgroundAppMsgFilter; // @synthesize backgroundAppMsgFilter=_backgroundAppMsgFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMDLostModeMessageFilter *lostModeMessageFilter; // @synthesize lostModeMessageFilter=_lostModeMessageFilter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMDCentralMessageDispatcher *recvDispatcher; // @synthesize recvDispatcher=_recvDispatcher;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSMutableSet *xpcClients; // @synthesize xpcClients=_xpcClients;
@property (strong, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *xpcWorkQueue; // @synthesize xpcWorkQueue=_xpcWorkQueue;

- (void).cxx_destruct;
- (void)_handleResumeXPCConnectionRequest:(id)arg1;
- (void)_handleSuspendXPCConnectionRequest:(id)arg1;
- (void)_registerForMessages;
- (void)_sendMessage:(id)arg1 andInvokeCompletionHandler:(CDUnknownBlockType)arg2 withDeliveryCompletion:(CDUnknownBlockType)arg3;
- (void)applicationMonitorDidChangeActiveHomeKitAppStatus:(BOOL)arg1;
- (void)applicationMonitorDidChangeAppState:(id)arg1;
- (void)dealloc;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (id)endPoint;
- (id)initWithReceiveDispatcher:(id)arg1 messageFilterChain:(id)arg2 registerAsMachService:(BOOL)arg3;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (void)reset;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 target:(id)arg2 completionQueue:(id)arg3 deliveryCompletionHandler:(CDUnknownBlockType)arg4;
- (BOOL)start;
- (BOOL)stop;

@end


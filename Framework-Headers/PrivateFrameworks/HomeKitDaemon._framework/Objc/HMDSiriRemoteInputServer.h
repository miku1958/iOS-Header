//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface HMDSiriRemoteInputServer : NSObject <HMFLogging>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_xpcServer;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSHashTable *_siriSessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSHashTable *siriSessions; // @synthesize siriSessions=_siriSessions;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property (strong, nonatomic) NSObject<OS_xpc_object> *xpcServer; // @synthesize xpcServer=_xpcServer;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deregisterSiriSession:(id)arg1;
- (void)handleCheckInMsg:(id)arg1;
- (void)handleConnection:(id)arg1;
- (void)handleConnectionEvent:(id)arg1;
- (void)handleDisconnection;
- (void)handleMsg:(id)arg1;
- (void)handleServerEvent:(id)arg1;
- (void)handleStartStreamMsg:(id)arg1;
- (void)handleStopStreamMsg:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (BOOL)registerSiriSession:(id)arg1;
- (void)sendMsg:(id)arg1 args:(id)arg2;
- (void)sendMsgIfCheckedIn:(id)arg1 args:(id)arg2;
- (id)sessionForIdentifier:(id)arg1;

@end


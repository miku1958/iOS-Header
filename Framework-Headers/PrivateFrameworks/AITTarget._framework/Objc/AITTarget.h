//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AITTarget/AITXPCConnectionDelegate-Protocol.h>

@class AITXPCConnection, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AITTarget : NSObject <AITXPCConnectionDelegate>
{
    int _notifyToken;
    NSMutableDictionary *_observerRecords;
    AITXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_clientQueue;
    double _startTime;
    NSMutableArray *_queuedProbes;
    NSObject<OS_dispatch_queue> *_rpcDispatchQueue;
    NSString *_rpcSelectorPrefix;
    id _rpcTarget;
    NSObject<OS_dispatch_source> *_watchdogSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSObject<OS_dispatch_queue> *rpcDispatchQueue;
@property (copy, nonatomic) NSString *rpcSelectorPrefix;
@property (strong, nonatomic) id rpcTarget;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedTarget;
- (BOOL)_appIsWhitelisted;
- (void)_fireProbe:(id)arg1 withArgumentDictionary:(id)arg2;
- (void)_flushQueuedProbes;
- (void)_probeBarrier:(CDUnknownBlockType)arg1;
- (BOOL)_probeIsEnabled:(id)arg1;
- (id)_rpcTarget;
- (void)_sendAckForToken:(id)arg1 success:(BOOL)arg2 returnValue:(id)arg3 details:(id)arg4;
- (void)_setupWatchdog;
- (void)_setupXPCConnectionIfNeeded;
- (void)addObserver:(id)arg1 forMessage:(id)arg2 dispatchQueue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (oneway void)release;
- (void)removeObserver:(id)arg1 forMessage:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
- (void)xpcConnectionFailed:(id)arg1;
- (void)xpcConnectionUnhandledMessage:(id)arg1;

@end


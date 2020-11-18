//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_xpc_object;

@interface CKKSControl : NSObject
{
    NSObject<OS_xpc_object> *_endpoint;
    NSXPCConnection *_connection;
}

@property (strong) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (strong) NSObject<OS_xpc_object> *endpoint; // @synthesize endpoint=_endpoint;

+ (id)controlObject:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithConnection:(id)arg1;
- (void)rpcFastStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcFetchAndProcessChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcFetchAndProcessClassAChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcGetCKDeviceIDWithReply:(CDUnknownBlockType)arg1;
- (void)rpcKnownBadState:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcPerformanceCounters:(CDUnknownBlockType)arg1;
- (void)rpcPushOutgoingChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcResetCloudKit:(id)arg1 reason:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)rpcResetCloudKit:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcResetLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcResync:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcTLKMissing:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end


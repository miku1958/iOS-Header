//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSXPCProxyCreating-Protocol.h>

@class NSString, NSXPCInterface, NSXPCListenerEndpoint;
@protocol NSObject, OS_dispatch_queue;

@interface NSXPCConnection : NSObject <NSXPCProxyCreating>
{
    void *_xconnection;
    id _repliesExpected;
    NSObject<OS_dispatch_queue> *_userQueue;
    unsigned int _state;
    unsigned int _state2;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    id _exportInfo;
    id _repliesRequested;
    id _importInfo;
    id<NSObject> _otherInfo;
    id _reserved1;
    id _lock;
    NSXPCInterface *_remoteObjectInterface;
    NSString *_serviceName;
    NSXPCListenerEndpoint *_endpoint;
    id _eCache;
    id _dCache;
}

@property (readonly) int auditSessionIdentifier;
@property (readonly) unsigned int effectiveGroupIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly, strong) NSXPCListenerEndpoint *endpoint;
@property (strong) NSXPCInterface *exportedInterface;
@property (strong) id exportedObject;
@property (copy) CDUnknownBlockType interruptionHandler;
@property (copy) CDUnknownBlockType invalidationHandler;
@property (readonly) int processIdentifier;
@property (strong) NSXPCInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
@property (readonly, strong) id remoteObjectProxy;
@property (readonly, copy) NSString *serviceName;

+ (id)_currentBoost;
+ (void)beginTransaction;
+ (id)currentConnection;
+ (void)endTransaction;
- (void)_addClassToDecodeCache:(Class)arg1;
- (void)_addClassToEncodeCache:(Class)arg1;
- (void)_addImportedProxy:(id)arg1;
- (void)_cancelProgress:(unsigned long long)arg1;
- (void)_decodeAndInvokeMessageWithData:(id)arg1;
- (void)_decodeAndInvokeReplyBlockWithData:(id)arg1 sequence:(unsigned long long)arg2 replyInfo:(id)arg3;
- (BOOL)_decodeCacheContainsClass:(Class)arg1;
- (void)_decodeProgressMessageWithData:(id)arg1;
- (BOOL)_encodeCacheContainsClass:(Class)arg1;
- (id)_errorDescription;
- (id)_exportTable;
- (unsigned long long)_generationCount;
- (id)_initWithPeerConnection:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3;
- (void)_killConnection:(int)arg1;
- (void)_pauseProgress:(unsigned long long)arg1;
- (id)_queue;
- (void)_removeImportedProxy:(id)arg1;
- (void)_resumeProgress:(unsigned long long)arg1;
- (void)_sendDesistForProxy:(id)arg1;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3 withErrorHandler:(CDUnknownBlockType)arg4;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3 withErrorHandler:(CDUnknownBlockType)arg4 timeout:(double)arg5;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3 withErrorHandler:(CDUnknownBlockType)arg4 timeout:(double)arg5 userInfo:(id)arg6;
- (void)_sendProgressMessage:(id)arg1 forSequence:(unsigned long long)arg2;
- (void)_setQueue:(id)arg1;
- (void)_setTargetUserIdentifier:(unsigned int)arg1;
- (void)_setUUID:(id)arg1;
- (id)_unboostingRemoteObjectProxy;
- (id)_xpcConnection;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;
- (CDStruct_6ad76789)auditToken;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2;
- (void)invalidate;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)replacementObjectForEncoder:(id)arg1 object:(id)arg2;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (void)start;
- (void)stop;
- (void)suspend;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)userInfo;
- (id)valueForEntitlement:(id)arg1;

@end


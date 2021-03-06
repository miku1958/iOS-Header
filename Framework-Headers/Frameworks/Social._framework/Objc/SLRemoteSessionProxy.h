//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSString, NSXPCConnection, NSXPCInterface;

@interface SLRemoteSessionProxy : NSObject
{
    NSString *_serviceName;
    NSXPCInterface *_remoteInterface;
    id _remoteProxy;
    NSXPCConnection *_connection;
    NSMutableArray *_guaranteedRemoteCalls;
    NSLock *_guaranteedRemoteCallsLock;
    NSObject *_exportedObject;
    NSXPCInterface *_exportedInterface;
    CDUnknownBlockType _connectionResetBlock;
}

@property (copy) CDUnknownBlockType connectionResetBlock; // @synthesize connectionResetBlock=_connectionResetBlock;
@property (strong) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property (weak) NSObject *exportedObject; // @synthesize exportedObject=_exportedObject;

- (void).cxx_destruct;
- (void)_remoteSessionConnectionWasInterrupted;
- (void)_setupConnection;
- (void)dealloc;
- (void)disconnect;
- (void)dropGuaraneteedRemoteCall:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initForRemoteServiceName:(id)arg1 remoteInterface:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)registerGuaranteedRemoteCall:(id)arg1;

@end


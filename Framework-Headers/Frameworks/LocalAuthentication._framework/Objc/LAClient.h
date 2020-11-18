//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LocalAuthentication/LAContextCallbackXPC-Protocol.h>
#import <LocalAuthentication/LAContextXPC-Protocol.h>

@class NSData, NSError, NSMutableArray, NSXPCConnection;
@protocol LAContextXPC, LAUIDelegate;

@interface LAClient : NSObject <LAContextXPC, LAContextCallbackXPC>
{
    id<LAContextXPC> _remoteContext;
    NSXPCConnection *_daemonConnection;
    NSError *_permanentError;
    NSMutableArray *_callInvalidationBlocks;
    BOOL _shouldRecoverConnection;
    NSData *_externalizedContext;
    id<LAUIDelegate> _uiDelegate;
    NSData *_connectToContext;
}

@property (strong, nonatomic) NSData *connectToContext; // @synthesize connectToContext=_connectToContext;
@property (readonly) NSData *externalizedContext; // @synthesize externalizedContext=_externalizedContext;
@property (weak, nonatomic) id<LAUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;

+ (void)_performInvalidationBlocks:(id)arg1;
+ (id)_queue;
+ (id)_recoveryQueue;
+ (id)clientWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 error:(id *)arg3;
+ (void)clientWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_performCallBool:(CDUnknownBlockType)arg1 finally:(CDUnknownBlockType)arg2;
- (void)_performCallId:(CDUnknownBlockType)arg1 finally:(CDUnknownBlockType)arg2;
- (void)_recoverConnection;
- (void)_scheduleRecovery;
- (BOOL)_setPermanentError:(id)arg1;
- (void)dealloc;
- (void)enterPassword:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)evaluateACL:(id)arg1 operation:(long long)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)invalidatedWithError:(id)arg1;
- (void)prearmTouchIdWithReply:(CDUnknownBlockType)arg1;
- (id)serverPropertyForOption:(long long)arg1 error:(id *)arg2;
- (void)serverPropertyForOption:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setCredential:(id)arg1 type:(long long)arg2 onlyGet:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)setServerPropertyForOption:(long long)arg1 value:(id)arg2 error:(id *)arg3;
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setupDaemonConnection:(id)arg1 remoteContext:(id)arg2 constInfo:(id)arg3;

@end


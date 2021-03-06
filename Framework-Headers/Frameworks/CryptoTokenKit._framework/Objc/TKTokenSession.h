//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LAContext, NSDictionary, NSNumber, NSString, NSXPCConnection, TKToken;
@protocol OS_dispatch_queue, TKTokenSessionDelegate, TKTokenSessionPrivateDelegate;

@interface TKTokenSession : NSObject
{
    TKToken *_token;
    id<TKTokenSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    id _keepAlive;
    LAContext *_LAContext;
    NSDictionary *_parameters;
    NSXPCConnection *_caller;
    NSNumber *_callerPID;
    CDStruct_4c969caf _creatorAuditToken;
}

@property (readonly, nonatomic) LAContext *LAContext; // @synthesize LAContext=_LAContext;
@property (readonly, nonatomic) NSXPCConnection *caller; // @synthesize caller=_caller;
@property (strong) NSNumber *callerPID; // @synthesize callerPID=_callerPID;
@property (nonatomic) CDStruct_4c969caf creatorAuditToken; // @synthesize creatorAuditToken=_creatorAuditToken;
@property (weak) id<TKTokenSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) id keepAlive; // @synthesize keepAlive=_keepAlive;
@property (readonly, nonatomic) NSString *name;
@property (strong) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property (readonly) id<TKTokenSessionPrivateDelegate> privateDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) TKToken *token; // @synthesize token=_token;

- (void).cxx_destruct;
- (void)attestKey:(id)arg1 usingKey:(id)arg2 nonce:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)auditAuthOperation:(id)arg1 auditToken:(CDStruct_4c969caf)arg2 success:(BOOL)arg3;
- (void)beginAuthForOperation:(long long)arg1 constraint:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)beginRequest;
- (void)bumpKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)checkOperation:(long long)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4;
- (void)commitKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)createObjectWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)decryptData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)deleteObject:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)endRequest;
- (id)errorWithResult:(id)arg1 operation:(id)arg2 forError:(id)arg3;
- (void)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluateAuthOperation:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)evaluateAuthOperation:(id)arg1 retry:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)finalizeAuthOperation:(id)arg1 evaluatedAuthOperation:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getAdvertisedItemsWithReply:(CDUnknownBlockType)arg1;
- (void)getAttributesOfObject:(id)arg1 isCertificate:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (id)initWithToken:(id)arg1;
- (void)objectID:(id)arg1 operation:(long long)arg2 inputData:(id)arg3 algorithms:(id)arg4 parameters:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)performKeyExchangeWithPublicKey:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)setCaller:(id)arg1;
- (void)setLAContext:(id)arg1;
- (void)signData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)terminate;

@end


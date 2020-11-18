//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFAppleIDClient : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;

- (void).cxx_destruct;
- (void)_copyCertificateForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_copyIdentityForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_myAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)_personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)appleIDListWithCompletion:(CDUnknownBlockType)arg1;
- (void)copyCertificateForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)copyIdentityForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)myAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)statusInfoWithCompletion:(CDUnknownBlockType)arg1;

@end


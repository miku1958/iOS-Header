//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString, NSXPCConnection, _AKAppleIDAuthenticationContextManager;
@protocol AKAppleIDAuthenticationDelegate, OS_dispatch_queue;

@interface AKAppleIDAuthenticationController : NSObject
{
    NSString *_serviceID;
    NSXPCConnection *_authenticationServiceConnection;
    _AKAppleIDAuthenticationContextManager *_contextManager;
    NSObject<OS_dispatch_queue> *_replyHandlingQueue;
    NSLock *_connectionLock;
}

@property (weak, nonatomic) id<AKAppleIDAuthenticationDelegate> delegate;

- (void).cxx_destruct;
- (id)_authenticationServiceConnection;
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkSecurityUpgradeEligibilityForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(BOOL)arg2 forService:(long long)arg3;
- (void)setAppleIDWithDSID:(id)arg1 inUse:(BOOL)arg2 forService:(long long)arg3;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

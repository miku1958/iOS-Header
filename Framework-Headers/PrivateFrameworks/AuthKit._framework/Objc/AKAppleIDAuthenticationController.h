//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString, NSXPCConnection, NSXPCListenerEndpoint, _AKAppleIDAuthenticationContextManager;
@protocol AKAppleIDAuthenticationDelegate, OS_dispatch_queue;

@interface AKAppleIDAuthenticationController : NSObject
{
    NSString *_serviceID;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
    NSXPCConnection *_authenticationServiceConnection;
    _AKAppleIDAuthenticationContextManager *_contextManager;
    NSObject<OS_dispatch_queue> *_replyHandlingQueue;
    NSLock *_connectionLock;
}

@property (weak, nonatomic) id<AKAppleIDAuthenticationDelegate> delegate;

- (void).cxx_destruct;
- (id)_authenticationServiceConnection;
- (id)activeLoginCode:(id *)arg1;
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkSecurityUpgradeEligibilityForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)emailsForAltDSID:(id)arg1;
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 daemonXPCEndpoint:(id)arg2;
- (BOOL)isDevicePasscodeProtected:(id *)arg1;
- (void)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renewRecoveryTokenWithRecoveryInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(BOOL)arg2 forService:(long long)arg3;
- (void)setAppleIDWithDSID:(id)arg1 inUse:(BOOL)arg2 forService:(long long)arg3;
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end


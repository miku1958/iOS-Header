//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString, NSXPCConnection, NSXPCListenerEndpoint, _AKAppleIDAuthenticationContextManager;
@protocol AKAppleIDAuthenticationDelegate;

@interface AKAppleIDAuthenticationController : NSObject
{
    NSString *_serviceID;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
    NSXPCConnection *_authenticationServiceConnection;
    _AKAppleIDAuthenticationContextManager *_contextManager;
    NSLock *_connectionLock;
    CDUnknownBlockType _deallocHandler;
}

@property (copy, nonatomic) CDUnknownBlockType deallocHandler; // @synthesize deallocHandler=_deallocHandler;
@property (weak, nonatomic) id<AKAppleIDAuthenticationDelegate> delegate;

+ (id)sensitiveAuthenticationKeys;
- (void).cxx_destruct;
- (id)_authenticationServiceConnection;
- (id)accountNamesForAltDSID:(id)arg1;
- (id)activeLoginCode:(id *)arg1;
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkSecurityUpgradeEligibilityForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)fetchAuthModeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDeviceListWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchDeviceListWithContext:(id)arg1 error:(id *)arg2;
- (void)fetchURLBagWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 daemonXPCEndpoint:(id)arg2;
- (BOOL)isDevicePasscodeProtected:(id *)arg1;
- (void)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)persistMasterKeyVerifier:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(BOOL)arg2 forService:(long long)arg3;
- (void)setAppleIDWithDSID:(id)arg1 inUse:(BOOL)arg2 forService:(long long)arg3;
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)synchronizeFollowUpItemsForContext:(id)arg1 error:(id *)arg2;
- (void)teardownFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)urlBagWithError:(id *)arg1;
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)verifyMasterKey:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

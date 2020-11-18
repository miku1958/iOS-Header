//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDAccountInfoProvider-Protocol.h>

@class ACAccountStore, CKAccountOverrideInfo, CKDBackingAccount, NSPersonNameComponents, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CKDAccount : NSObject <CKDAccountInfoProvider>
{
    BOOL _isUnitTestingAccount;
    BOOL _accountWantsPushRegistration;
    BOOL _accountWantsFlowControl;
    BOOL _isAnonymousAccount;
    BOOL _haveWarnedAboutServerPreferredPushEnvironment;
    CKAccountOverrideInfo *_fakeAccountInfo;
    ACAccountStore *_accountStore;
    CKDBackingAccount *_backingAccount;
    NSObject<OS_dispatch_queue> *_authTokenCallbackQueue;
    NSString *_lastFailedCloudKitAuthToken;
    NSString *_lastFailediCloudAuthToken;
}

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (strong, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (nonatomic) BOOL accountWantsFlowControl; // @synthesize accountWantsFlowControl=_accountWantsFlowControl;
@property (nonatomic) BOOL accountWantsPushRegistration; // @synthesize accountWantsPushRegistration=_accountWantsPushRegistration;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *authTokenCallbackQueue; // @synthesize authTokenCallbackQueue=_authTokenCallbackQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *authTokenQueue;
@property (readonly, nonatomic) CKDBackingAccount *backingAccount; // @synthesize backingAccount=_backingAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayedHostname;
@property (readonly, nonatomic) CKAccountOverrideInfo *fakeAccountInfo; // @synthesize fakeAccountInfo=_fakeAccountInfo;
@property (readonly, nonatomic) NSString *formattedUsername;
@property (readonly, nonatomic) NSPersonNameComponents *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL haveWarnedAboutServerPreferredPushEnvironment; // @synthesize haveWarnedAboutServerPreferredPushEnvironment=_haveWarnedAboutServerPreferredPushEnvironment;
@property (nonatomic) BOOL isAnonymousAccount; // @synthesize isAnonymousAccount=_isAnonymousAccount;
@property (readonly, nonatomic) BOOL isCarryAccount;
@property (readonly, nonatomic) BOOL isFakeAccount;
@property (readonly, nonatomic) BOOL isPrimaryEmailVerified;
@property (nonatomic) BOOL isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
@property (readonly, nonatomic) BOOL isiCloudDevEnvironmentAccount;
@property (copy, nonatomic) NSString *lastFailedCloudKitAuthToken; // @synthesize lastFailedCloudKitAuthToken=_lastFailedCloudKitAuthToken;
@property (copy, nonatomic) NSString *lastFailediCloudAuthToken; // @synthesize lastFailediCloudAuthToken=_lastFailediCloudAuthToken;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSURL *privateCloudDBURL;
@property (readonly, nonatomic) NSURL *privateCodeServiceURL;
@property (readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property (readonly, nonatomic) NSURL *privateMetricsServiceURL;
@property (readonly, nonatomic) NSURL *privateShareServiceURL;
@property (readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *username;

+ (id)globalAuthTokenQueue;
- (void).cxx_destruct;
- (id)_init;
- (id)_lockedCloudKitAuthTokenWithAccessProvider:(id)arg1 error:(id *)arg2;
- (void)_lockedRenewTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 accountAccessProvider:(id)arg3 tokenFetchBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_lockediCloudAuthTokenWithAccessProvider:(id)arg1 error:(id *)arg2;
- (BOOL)_userCloudDBURLisInCarryPartition;
- (void)cloudKitAuthTokenWithAccessProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cloudKitAuthTokenWithAccessProvider:(id)arg1 error:(id *)arg2;
- (void)deviceCountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)dsid;
- (void)iCloudAuthTokenWithAccessProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)iCloudAuthTokenWithAccessProvider:(id)arg1 error:(id *)arg2;
- (id)initAnonymousAccount;
- (id)initFakeAccountWithAccountOverrideInfo:(id)arg1;
- (id)initPrimaryAccount;
- (id)initWithAccountID:(id)arg1;
- (BOOL)isDataclassEnabled:(id)arg1;
- (BOOL)isDataclassEnabledForCellular:(id)arg1;
- (void)renewCloudKitAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 accessProvider:(id)arg3 failedToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)renewiCloudAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 accessProvider:(id)arg3 failedToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)sharingURLHostname;
- (void)updateAccountPropertiesAndSaveAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 accountAccessProvider:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

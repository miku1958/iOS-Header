//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDAccountInfoProvider-Protocol.h>

@class ACAccountStore, ACAccountType, CKAccountOverrideInfo, CKDBackingAccount, CKDClientContext, NSPersonNameComponents, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDAccount : NSObject <CKDAccountInfoProvider>
{
    BOOL _isUnitTestingAccount;
    BOOL _accountWantsPushRegistration;
    BOOL _accountWantsFlowControl;
    BOOL _isAnonymousAccount;
    BOOL _haveWarnedAboutServerPreferredPushEnvironment;
    CKAccountOverrideInfo *_fakeAccountInfo;
    ACAccountType *_acAccountType;
    CKDBackingAccount *_backingAccount;
    CKDClientContext *_context;
    NSObject<OS_dispatch_queue> *_authTokenCallbackQueue;
    NSString *_lastFailedCloudKitAuthToken;
    NSString *_lastFailediCloudAuthToken;
}

@property (strong, nonatomic) ACAccountType *acAccountType; // @synthesize acAccountType=_acAccountType;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL accountWantsFlowControl; // @synthesize accountWantsFlowControl=_accountWantsFlowControl;
@property (nonatomic) BOOL accountWantsPushRegistration; // @synthesize accountWantsPushRegistration=_accountWantsPushRegistration;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *authTokenCallbackQueue; // @synthesize authTokenCallbackQueue=_authTokenCallbackQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *authTokenQueue;
@property (readonly, nonatomic) CKDBackingAccount *backingAccount; // @synthesize backingAccount=_backingAccount;
@property (readonly, nonatomic) BOOL canAccessAccount;
@property (readonly, nonatomic) BOOL canAuthWithCloudKit;
@property (weak, nonatomic) CKDClientContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CKAccountOverrideInfo *fakeAccountInfo; // @synthesize fakeAccountInfo=_fakeAccountInfo;
@property (readonly, nonatomic) NSString *formattedUsername;
@property (readonly, nonatomic) NSPersonNameComponents *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL haveWarnedAboutServerPreferredPushEnvironment; // @synthesize haveWarnedAboutServerPreferredPushEnvironment=_haveWarnedAboutServerPreferredPushEnvironment;
@property (readonly, nonatomic) BOOL iCloudDriveAllowsCellularAccess;
@property (nonatomic) BOOL isAnonymousAccount; // @synthesize isAnonymousAccount=_isAnonymousAccount;
@property (readonly, nonatomic) BOOL isCarryAccount;
@property (readonly, nonatomic) BOOL isFakeAccount;
@property (nonatomic) BOOL isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
@property (readonly, nonatomic) BOOL isiCloudDevEnvironmentAccount;
@property (copy, nonatomic) NSString *lastFailedCloudKitAuthToken; // @synthesize lastFailedCloudKitAuthToken=_lastFailedCloudKitAuthToken;
@property (copy, nonatomic) NSString *lastFailediCloudAuthToken; // @synthesize lastFailediCloudAuthToken=_lastFailediCloudAuthToken;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *username;

+ (id)globalAuthTokenQueue;
- (void).cxx_destruct;
- (void)_fetchContainerInfoForOperation:(id)arg1 requireUserIDs:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_initWithContext:(id)arg1;
- (id)_lockedCloudKitAuthTokenWithError:(id *)arg1;
- (void)_lockedRenewTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 tokenFetchBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_lockediCloudAuthTokenWithError:(id *)arg1;
- (id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2;
- (BOOL)_userCloudDBURLisInCarryPartition;
- (id)applicationBundle;
- (id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (id)bundleID;
- (void)cloudKitAuthTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)config;
- (id)containerID;
- (id)containerScopedUserID;
- (id)deviceName;
- (void)displayAuthenticationPromptWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dsid;
- (void)fetchConfigurationForOperation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDeviceIDForOperation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchImportantUserIDsForOperation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchPrivateURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPublicURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchServerEnvironmentForOperation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)hardwareID;
- (void)iCloudAuthTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initAnonymousAccountWithContext:(id)arg1;
- (id)initFakeAccountWithAccountOverrideInfo:(id)arg1 context:(id)arg2;
- (id)initPrimaryAccountWithContext:(id)arg1;
- (id)initWithAccountID:(id)arg1 context:(id)arg2;
- (BOOL)isDataclassEnabled:(id)arg1;
- (id)languageCode;
- (id)mescalSession;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (id)regionCode;
- (void)renewCloudKitAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 failedToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)renewiCloudAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 failedToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)resetMescalSession;
- (id)serverPreferredPushEnvironment;
- (BOOL)shouldFailAllTasks;
- (id)trafficContainerIdentifier;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end


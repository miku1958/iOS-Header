//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDAccountInfoProvider-Protocol.h>

@class ACAccountStore, ACAccountType, CKDBackingAccount, CKDClientContext, NSString;

__attribute__((visibility("hidden")))
@interface CKDAccount : NSObject <CKDAccountInfoProvider>
{
    BOOL _isUnitTestingAccount;
    BOOL _accountWantsPushRegistration;
    BOOL _isAnonymousAccount;
    BOOL _haveWarnedAboutServerPreferredPushEnvironment;
    ACAccountType *_acAccountType;
    CKDBackingAccount *_backingAccount;
    CKDClientContext *_context;
}

@property (strong, nonatomic) ACAccountType *acAccountType; // @synthesize acAccountType=_acAccountType;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL accountWantsPushRegistration; // @synthesize accountWantsPushRegistration=_accountWantsPushRegistration;
@property (readonly, nonatomic) CKDBackingAccount *backingAccount; // @synthesize backingAccount=_backingAccount;
@property (readonly, nonatomic) BOOL canAccessAccount;
@property (readonly, nonatomic) BOOL cloudKitIsEnabled;
@property (readonly, nonatomic) BOOL cloudPhotosIsEnabled;
@property (weak, nonatomic) CKDClientContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL haveWarnedAboutServerPreferredPushEnvironment; // @synthesize haveWarnedAboutServerPreferredPushEnvironment=_haveWarnedAboutServerPreferredPushEnvironment;
@property (readonly, nonatomic) BOOL iCloudDriveAllowsCellularAccess;
@property (nonatomic) BOOL isAnonymousAccount; // @synthesize isAnonymousAccount=_isAnonymousAccount;
@property (readonly, nonatomic) BOOL isFakeAccount;
@property (nonatomic) BOOL isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithContext:(id)arg1;
- (id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2;
- (id)applicationBundle;
- (id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (id)bundleID;
- (id)cloudKitAuthToken;
- (id)config;
- (id)containerID;
- (id)containerScopedUserID;
- (id)deviceName;
- (id)dsid;
- (id)enabledKeyboards;
- (void)fetchConfigurationUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchContainerScopedUserIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchDeviceIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPublicURLUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 serverType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)hardwareID;
- (id)iCloudAuthToken;
- (id)initAnonymousAccountWithContext:(id)arg1;
- (id)initFakeAccountWithEmail:(id)arg1 password:(id)arg2 context:(id)arg3;
- (id)initPrimaryAccountWithContext:(id)arg1;
- (id)initWithAccountID:(id)arg1 context:(id)arg2;
- (id)languageCode;
- (id)mescalSession;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (id)regionCode;
- (void)renewAuthTokenWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)resetMescalSession;
- (id)serverPreferredPushEnvironment;
- (BOOL)shouldFailAllTasks;
- (id)trafficContainerIdentifier;

@end

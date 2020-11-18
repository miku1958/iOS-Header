//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccountStore.h>

@class ACAccount, NSArray, NSString;

@interface ACAccountStore (AppleMediaServices)

@property (readonly, nonatomic, getter=ams_isActiveAccountCombined) BOOL ams_activeAccountCombined;
@property (readonly, nonatomic) ACAccount *ams_activeiCloudAccount;
@property (readonly, nonatomic) ACAccount *ams_activeiTunesAccount;
@property (readonly, nonatomic) NSArray *ams_iTunesAccounts;
@property (readonly, nonatomic) ACAccount *ams_localiTunesAccount;
@property (readonly, nonatomic) NSString *ams_mediaType;

+ (id)_getSetGlobalCookiesForResponse:(id)arg1;
+ (id)_getSetUserCookiesForResponse:(id)arg1;
+ (id)_secureTokenForIdentifier:(id)arg1;
+ (id)ams_accountTypeIdentifierForMediaType:(id)arg1;
+ (id)ams_sharedAccountStore;
+ (id)ams_sharedAccountStoreForMediaType:(id)arg1;
+ (id)ams_sharedAccountStoreForProcessInfo:(id)arg1;
- (BOOL)_addGlobalCookiesForResponse:(id)arg1 error:(id *)arg2;
- (BOOL)_addUserCookiesForResponse:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (id)_allCommerceiTunesAccounts;
- (id)_alliTunesAccounts;
- (id)_correspondingAccountWithAccountTypeIdentifier:(id)arg1 forAccount:(id)arg2;
- (void)_createLocalAccount;
- (id)ams_IDMSAccountForAccount:(id)arg1;
- (BOOL)ams_addCookiesForResponse:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (BOOL)ams_addCookiesForResponse:(id)arg1 request:(id)arg2 account:(id)arg3 error:(id *)arg4;
- (id)ams_cookiesForURL:(id)arg1;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3;
- (id)ams_iTunesAccountWithDSID:(id)arg1;
- (id)ams_iTunesAccountWithUsername:(id)arg1;
- (id)ams_iTunesSandboxAccounts;
- (BOOL)ams_removeCookiesMatchingProperties:(id)arg1 error:(id *)arg2;
- (id)ams_saveAccount:(id)arg1 verifyCredentials:(BOOL)arg2;
- (id)ams_secureTokenForAccount:(id)arg1;
- (BOOL)ams_setSecureToken:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;
@end


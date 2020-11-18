//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSAuthenticateOptions, NSNumber, NSString;

@interface AMSAuthenticateTask : AMSTask
{
    NSString *_password;
    NSString *_rawPassword;
    NSString *_altDSID;
    NSNumber *_DSID;
    NSString *_username;
    ACAccount *_authenticatedAccount;
    AMSAuthenticateOptions *_options;
}

@property (strong, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property (strong, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property (strong, nonatomic) ACAccount *authenticatedAccount; // @synthesize authenticatedAccount=_authenticatedAccount;
@property (strong, nonatomic) AMSAuthenticateOptions *options; // @synthesize options=_options;
@property (strong, nonatomic) NSString *password; // @synthesize password=_password;
@property (strong, nonatomic) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property (strong, nonatomic) NSString *username; // @synthesize username=_username;

- (void).cxx_destruct;
- (id)_accountForAuthentication;
- (id)_accountStoreForAuthentication;
- (id)_createVerifyCredentialOptionsWithCredentialSource:(unsigned long long)arg1;
- (id)_performAuthenticationUsingAccount:(id)arg1 credentialSource:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_shouldPerformInProcessAuthKitUpdateForAccount:(id)arg1;
- (void)_updateAccountWithProvidedInformation:(id)arg1;
- (id)_updatedAccountForAuthenticationWithError:(id *)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (id)performAuthentication;

@end


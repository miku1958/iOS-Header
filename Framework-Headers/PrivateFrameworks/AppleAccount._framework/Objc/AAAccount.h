//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSDictionary, NSSet, NSString;

@interface AAAccount : NSObject
{
    ACAccount *_account;
    NSString *_fmipToken;
    NSArray *_appleIDAliases;
    NSString *_protocolVersion;
}

@property (copy, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) NSDictionary *accountFirstDisplayAlert;
@property (readonly, nonatomic) NSDictionary *accountFooterButton;
@property (readonly, nonatomic) NSString *accountFooterText;
@property (readonly, nonatomic) int accountServiceType;
@property (readonly, nonatomic) NSArray *appleIDAliases; // @synthesize appleIDAliases=_appleIDAliases;
@property (copy, nonatomic) NSString *authToken;
@property (readonly, nonatomic) NSDictionary *dataclassProperties;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSSet *enabledDataclasses;
@property (readonly, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *fmipToken; // @synthesize fmipToken=_fmipToken;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) BOOL needsEmailConfiguration;
@property (readonly, nonatomic) BOOL needsRegistration;
@property (nonatomic) BOOL needsToVerifyTerms;
@property (copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSString *personID;
@property (nonatomic) BOOL primaryAccount;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) BOOL primaryEmailVerified;
@property (readonly, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property (readonly, nonatomic) NSSet *provisionedDataclasses;
@property (readonly, nonatomic) BOOL serviceUnavailable;
@property (readonly, nonatomic) NSDictionary *serviceUnavailableInfo;
@property (readonly, nonatomic) NSArray *supportedDataclasses;
@property (readonly, nonatomic) NSString *syncStoreIdentifier;
@property (copy, nonatomic) NSString *username;

+ (id)accountTypeString;
- (void).cxx_destruct;
- (id)_childAccounts;
- (id)_mailChildAccount;
- (id)account;
- (id)accountPropertyForKey:(id)arg1;
- (void)authenticateWithHandler:(CDUnknownBlockType)arg1;
- (void)flushCachedPassword;
- (void)flushCachedTokens;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (BOOL)isProvisionedForDataclass:(id)arg1;
- (int)mobileMeAccountStatus;
- (void)notifyUserOfQuotaDepletion;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1;
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)propertiesForDataclass:(id)arg1;
- (void)removePasswordFromKeychain;
- (void)removeTokensFromKeychain;
- (void)renewCredentialsForAppleIDWithHandler:(CDUnknownBlockType)arg1;
- (void)saveFMIPTokenInKeychain;
- (void)savePasswordInKeychain;
- (void)saveTokensInKeychain;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setUseCellular:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setupChildMailAccountAndEnable:(BOOL)arg1 withEmail:(id)arg2;
- (void)updateAccountPropertiesWithHandler:(CDUnknownBlockType)arg1;
- (void)updateAccountWithProvisioningResponse:(id)arg1;
- (BOOL)useCellularForDataclass:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/DAValidityCheckConsumer-Protocol.h>

@class AAAutoAccountVerifier, ACAccount, ACAccountStore, DAAccount, MFAccountValidator, NSMutableArray, NSMutableDictionary, NSString;

@interface AAUICloudSyncServicesController : NSObject <DAValidityCheckConsumer>
{
    ACAccountStore *_accountStore;
    ACAccount *_account;
    NSMutableDictionary *_queuedDataclassActions;
    NSMutableArray *_dataclassesRequiringMergeDecision;
    NSMutableDictionary *_queuedDataclassStates;
    BOOL _didUserConsentToMerge;
    BOOL _isVerifyingExistingEmailAccount;
    MFAccountValidator *_validator;
    AAAutoAccountVerifier *_verifier;
    DAAccount *_accountBeingValidated;
    CDUnknownBlockType _handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)_accountClassForAddress:(id)arg1;
+ (id)_domainFromAddress:(id)arg1;
+ (BOOL)_isInstalledSystemApplication:(id)arg1;
+ (id)_usernameFromAddress:(id)arg1;
+ (BOOL)canAutoSetupMailAccount:(id)arg1;
+ (BOOL)needSetupForMailAccount:(id)arg1;
+ (BOOL)shouldInitiallyEnableDataclass:(id)arg1 forAccount:(id)arg2;
- (void).cxx_destruct;
- (id)_account;
- (void)_addDAEmailAccount:(id)arg1;
- (void)_addMailAccount:(id)arg1;
- (void)_createAndValidateDAMailAccountWithProperties:(id)arg1;
- (void)_createAndValidateMailAccountWithProperties:(id)arg1;
- (void)_presentMergeConfirmationForDataclasses:(id)arg1 account:(id)arg2;
- (void)_validateDAAccount:(id)arg1;
- (void)_validateExistingEmailAccount:(id)arg1 withPassword:(id)arg2;
- (void)_validateMailAccount:(id)arg1;
- (void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(BOOL)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)completeEnablingCloudServicesWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)setBackupEnabled:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setCloudServicesEnabled:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDeviceLocatorEnabled:(BOOL)arg1;
- (void)setupMailAccount:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)verifyAccountWithAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end


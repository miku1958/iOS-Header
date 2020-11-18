//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AAAutoAccountVerifier, ACAccount, ACAccountStore, MFAccountValidator, NSMutableArray, NSMutableDictionary;

@interface AAUICloudSyncServicesController : NSObject
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
    CDUnknownBlockType _handler;
}

+ (id)_domainFromAddress:(id)arg1;
+ (id)_usernameFromAddress:(id)arg1;
- (void).cxx_destruct;
- (id)_account;
- (void)_addMailAccount:(id)arg1;
- (void)_presentMergeConfirmationForDataclasses:(id)arg1 account:(id)arg2;
- (void)_validateMailAccount:(id)arg1;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(BOOL)arg3;
- (void)completeEnablingCloudServicesWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)setBackupEnabled:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setCloudServicesEnabled:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDeviceLocatorEnabled:(BOOL)arg1;
- (void)verifyAccountWithAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

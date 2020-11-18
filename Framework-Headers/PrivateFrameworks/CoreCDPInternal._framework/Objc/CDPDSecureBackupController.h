//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPContext, NSDictionary;
@protocol CDPDSecureBackupDelegate, CDPDSecureBackupProxy, CDPStateUIProviderInternal;

@interface CDPDSecureBackupController : NSObject
{
    BOOL _fakeNearlyDepletedRecords;
    CDPContext *_context;
    id<CDPStateUIProviderInternal> _uiProvider;
    id<CDPDSecureBackupDelegate> _delegate;
    NSDictionary *_cachedAccountInfo;
    NSDictionary *_cachedAccountLockoutInfo;
    id<CDPDSecureBackupProxy> _secureBackupProxy;
}

@property (strong, nonatomic) NSDictionary *cachedAccountInfo; // @synthesize cachedAccountInfo=_cachedAccountInfo;
@property (strong, nonatomic) NSDictionary *cachedAccountLockoutInfo; // @synthesize cachedAccountLockoutInfo=_cachedAccountLockoutInfo;
@property (readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
@property (readonly, weak, nonatomic) id<CDPDSecureBackupDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL fakeNearlyDepletedRecords; // @synthesize fakeNearlyDepletedRecords=_fakeNearlyDepletedRecords;
@property (strong, nonatomic) id<CDPDSecureBackupProxy> secureBackupProxy; // @synthesize secureBackupProxy=_secureBackupProxy;
@property (readonly, nonatomic) id<CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;

+ (id)_sanitizedInfoDictionary:(id)arg1;
- (void).cxx_destruct;
- (void)_accountInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_accountLockoutInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_authenticatedEnableSecureBackupWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_authenticatedRecoverSecureBackupWithSecret:(id)arg1 isSilentAttempt:(BOOL)arg2 device:(id)arg3 useCachedSecret:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_clientMetadataWithSecretType:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)_dateWithSecureBackupDateString:(id)arg1;
- (void)_deleteAllBackupRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteSingleICSCBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_disableSecureBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_enableSecureBackupWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_recoverSecureBackupWithSecret:(id)arg1 isSilentAttempt:(BOOL)arg2 device:(id)arg3 useCachedSecret:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_setBackoffDate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)accountInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountLockoutInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)attemptSilentRecoveryWithLocalSecret:(id)arg1 useCachedSecret:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)backupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg1;
- (void)cdpBackupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkForExistingRecord:(CDUnknownBlockType)arg1;
- (void)deleteAllBackupRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteSingleICSCBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableSecureBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableSecureBackupRemovingExistingRecordWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enableSecureBackupWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getBackupRecordDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 delegate:(id)arg3;
- (void)isAccountLockedWithShouldReset:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isEligibleForCDPWithCompletion:(CDUnknownBlockType)arg1;
- (void)lockAccountOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)recoverSecureBackupWithSecret:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetAccountLockOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBackoffDate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)synchronizeKeyValueStoreWithCompletion:(CDUnknownBlockType)arg1;

@end


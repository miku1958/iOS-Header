//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudServices/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSString, SESWrapper;
@protocol OS_dispatch_queue;

@interface SecureBackup : NSObject <NSSecureCoding>
{
    BOOL _deleteAll;
    BOOL _emcsMode;
    BOOL _fmipRecovery;
    BOOL _icdp;
    BOOL _idmsRecovery;
    BOOL _silent;
    BOOL _stingray;
    BOOL _synchronize;
    BOOL _useCachedPassphrase;
    BOOL _useRecoveryPET;
    BOOL _usesMultipleiCSC;
    BOOL _usesRandomPassphrase;
    BOOL _usesRecoveryKey;
    NSString *_appleID;
    NSString *_authToken;
    NSDate *_backOffDate;
    NSData *_certData;
    NSString *_countryDialCode;
    NSString *_countryCode;
    NSString *_dsid;
    NSString *_emcsCred;
    NSDictionary *_emcsDict;
    NSString *_encodedMetadata;
    NSDictionary *_escrowRecord;
    NSString *_escrowProxyURL;
    NSString *_fmipUUID;
    NSString *_iCloudEnv;
    NSData *_iCloudIdentityData;
    NSString *_iCloudPassword;
    NSData *_idmsData;
    NSDictionary *_metadata;
    NSDictionary *_metadataHash;
    NSString *_oldEMCSCred;
    NSString *_passphrase;
    NSString *_recordID;
    NSString *_recoveryKey;
    NSString *_smsTarget;
    NSString *_verificationToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_error;
    NSString *_activityLabel;
    NSString *_activityUUID;
    SESWrapper *_ses;
}

@property (copy, nonatomic) NSString *activityLabel; // @synthesize activityLabel=_activityLabel;
@property (copy, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
@property (copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property (copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property (strong, nonatomic) NSDate *backOffDate; // @synthesize backOffDate=_backOffDate;
@property (strong, nonatomic) NSData *certData; // @synthesize certData=_certData;
@property (copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (copy, nonatomic) NSString *countryDialCode; // @synthesize countryDialCode=_countryDialCode;
@property (nonatomic) BOOL deleteAll; // @synthesize deleteAll=_deleteAll;
@property (copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property (copy, nonatomic) NSString *emcsCred; // @synthesize emcsCred=_emcsCred;
@property (strong, nonatomic) NSDictionary *emcsDict; // @synthesize emcsDict=_emcsDict;
@property (nonatomic) BOOL emcsMode; // @synthesize emcsMode=_emcsMode;
@property (copy, nonatomic) NSString *encodedMetadata; // @synthesize encodedMetadata=_encodedMetadata;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (copy, nonatomic) NSString *escrowProxyURL; // @synthesize escrowProxyURL=_escrowProxyURL;
@property (strong, nonatomic) NSDictionary *escrowRecord; // @synthesize escrowRecord=_escrowRecord;
@property (nonatomic) BOOL fmipRecovery; // @synthesize fmipRecovery=_fmipRecovery;
@property (copy, nonatomic) NSString *fmipUUID; // @synthesize fmipUUID=_fmipUUID;
@property (copy, nonatomic) NSString *iCloudEnv; // @synthesize iCloudEnv=_iCloudEnv;
@property (strong, nonatomic) NSData *iCloudIdentityData; // @synthesize iCloudIdentityData=_iCloudIdentityData;
@property (copy, nonatomic) NSString *iCloudPassword; // @synthesize iCloudPassword=_iCloudPassword;
@property (nonatomic) BOOL icdp; // @synthesize icdp=_icdp;
@property (strong, nonatomic) NSData *idmsData; // @synthesize idmsData=_idmsData;
@property (nonatomic) BOOL idmsRecovery; // @synthesize idmsRecovery=_idmsRecovery;
@property (strong, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) NSDictionary *metadataHash; // @synthesize metadataHash=_metadataHash;
@property (copy, nonatomic) NSString *oldEMCSCred; // @synthesize oldEMCSCred=_oldEMCSCred;
@property (copy, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property (copy, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property (strong, nonatomic) SESWrapper *ses; // @synthesize ses=_ses;
@property (nonatomic) BOOL silent; // @synthesize silent=_silent;
@property (copy, nonatomic) NSString *smsTarget; // @synthesize smsTarget=_smsTarget;
@property (nonatomic) BOOL stingray; // @synthesize stingray=_stingray;
@property (nonatomic) BOOL synchronize; // @synthesize synchronize=_synchronize;
@property (nonatomic) BOOL useCachedPassphrase; // @synthesize useCachedPassphrase=_useCachedPassphrase;
@property (nonatomic) BOOL useRecoveryPET; // @synthesize useRecoveryPET=_useRecoveryPET;
@property (nonatomic) BOOL usesMultipleiCSC; // @synthesize usesMultipleiCSC=_usesMultipleiCSC;
@property (nonatomic) BOOL usesRandomPassphrase; // @synthesize usesRandomPassphrase=_usesRandomPassphrase;
@property (nonatomic) BOOL usesRecoveryKey; // @synthesize usesRecoveryKey=_usesRecoveryKey;
@property (copy, nonatomic) NSString *verificationToken; // @synthesize verificationToken=_verificationToken;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_CreateSecureBackupConnection;
- (void)backOffDateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)backOffDateWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)backupWithInfo:(id)arg1;
- (void)backupWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cachePassphrase;
- (void)cachePassphraseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)cachePassphraseWithInfo:(id)arg1;
- (void)cachePassphraseWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cacheRecoveryKeyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)changeSMSTargetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)changeSMSTargetWithError:(id *)arg1;
- (id)changeSMSTargetWithInfo:(id)arg1;
- (void)changeSMSTargetWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)disableWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)disableWithError:(id *)arg1;
- (id)disableWithInfo:(id)arg1;
- (void)disableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)enableWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)enableWithError:(id *)arg1;
- (id)enableWithInfo:(id)arg1;
- (void)enableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)getAccountInfoWithError:(id *)arg1;
- (void)getAccountInfoWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;
- (id)getAccountInfoWithInfo:(id)arg1 results:(id *)arg2;
- (void)getAccountInfoWithResults:(CDUnknownBlockType)arg1;
- (void)getCountrySMSCodesWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;
- (void)getCountrySMSCodesWithResults:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserActivityLabel:(id)arg1;
- (void)notificationOccurred:(id)arg1;
- (void)populateWithInfo:(id)arg1;
- (id)recoverWithError:(id *)arg1;
- (void)recoverWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)recoverWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;
- (id)recoverWithInfo:(id)arg1 results:(id *)arg2;
- (void)recoverWithResults:(CDUnknownBlockType)arg1;
- (void)setBackOffDateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setBackOffDateWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)srpInitNonce;
- (id)srpRecoveryBlobFromSRPInitResponse:(id)arg1;
- (id)startSMSChallengeWithError:(id *)arg1;
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;
- (id)startSMSChallengeWithInfo:(id)arg1 results:(id *)arg2;
- (void)startSMSChallengeWithResults:(CDUnknownBlockType)arg1;
- (void)stashRecoveryDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stashRecoveryDataWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)stateCaptureWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)uncachePassphrase;
- (void)uncachePassphraseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)uncachePassphraseWithInfo:(id)arg1;
- (void)uncachePassphraseWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)uncacheRecoveryKeyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateMetadataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)updateMetadataWithError:(id *)arg1;
- (id)updateMetadataWithInfo:(id)arg1;
- (void)updateMetadataWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end


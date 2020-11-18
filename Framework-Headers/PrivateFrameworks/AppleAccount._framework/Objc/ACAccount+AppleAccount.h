//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSArray, NSDictionary, NSString;

@interface ACAccount (AppleAccount)

@property (readonly, nonatomic) NSDictionary *aa_accountFirstDisplayAlert;
@property (readonly, nonatomic) NSDictionary *aa_accountFooterButton;
@property (readonly, nonatomic) NSString *aa_accountFooterText;
@property (readonly, nonatomic) NSString *aa_accountTypeString;
@property (readonly, nonatomic) NSString *aa_altDSID;
@property (readonly, nonatomic) NSArray *aa_appleIDAliases;
@property (readonly, nonatomic) NSString *aa_appleId;
@property (copy, nonatomic, setter=aa_setAuthToken:) NSString *aa_authToken;
@property (readonly, nonatomic) ACAccount *aa_childMailAccount;
@property (readonly, nonatomic) ACAccount *aa_cloudKitAccount;
@property (readonly, nonatomic) NSString *aa_displayName;
@property (copy, nonatomic, setter=aa_setFirstName:) NSString *aa_firstName;
@property (readonly, nonatomic) ACAccount *aa_fmfAccount;
@property (readonly, nonatomic) ACAccount *aa_fmipAccount;
@property (readonly, nonatomic) NSString *aa_fmipToken;
@property (readonly, nonatomic) NSString *aa_formattedUsername;
@property (readonly, nonatomic) BOOL aa_hasOptionalTerms;
@property (readonly, nonatomic) NSString *aa_hsaToken;
@property (nonatomic, setter=aa_setCloudDocsMigrationComplete:) BOOL aa_isCloudDocsMigrationComplete;
@property (readonly, nonatomic) BOOL aa_isManagedAppleID;
@property (readonly, nonatomic) BOOL aa_isNotesMigrated;
@property (nonatomic, setter=aa_setPrimaryAccount:) BOOL aa_isPrimaryAccount;
@property (nonatomic, setter=aa_setPrimaryEmailVerified:) BOOL aa_isPrimaryEmailVerified;
@property (readonly, nonatomic) BOOL aa_isSandboxAccount;
@property (nonatomic, setter=aa_setSyncedAccount:) BOOL aa_isSyncedAccount;
@property (nonatomic, setter=aa_setUndergoingRepair:) BOOL aa_isUndergoingRepair;
@property (nonatomic, setter=aa_setUsesCloudDocs:) BOOL aa_isUsingCloudDocs;
@property (readonly, nonatomic) BOOL aa_isUsingiCloud;
@property (copy, nonatomic, setter=aa_setLastName:) NSString *aa_lastName;
@property (readonly, nonatomic) NSString *aa_mapsToken;
@property (copy, nonatomic, setter=aa_setMiddleName:) NSString *aa_middleName;
@property (readonly, nonatomic) BOOL aa_needsEmailConfiguration;
@property (readonly, nonatomic) BOOL aa_needsRegistration;
@property (nonatomic, setter=aa_setNeedsToVerifyTerms:) BOOL aa_needsToVerifyTerms;
@property (copy, nonatomic, setter=aa_setPassword:) NSString *aa_password;
@property (readonly, nonatomic) NSString *aa_personID;
@property (readonly, nonatomic) NSString *aa_primaryEmail;
@property (readonly, nonatomic) NSString *aa_protocolVersion;
@property (readonly, nonatomic) int aa_repairerPID;
@property (readonly, nonatomic) BOOL aa_serviceUnavailable;
@property (readonly, nonatomic) NSDictionary *aa_serviceUnavailableInfo;
@property (readonly, nonatomic) NSString *aa_syncStoreIdentifier;

+ (id)aa_dataclassesBoundToPrimaryAppleAccount;
+ (id)aa_dataclassesBoundToSingleAppleAccount;
- (id)aa_authTokenWithError:(id *)arg1;
- (id)aa_hsaTokenWithError:(id *)arg1;
- (void)aa_setHSAToken:(id)arg1;
- (void)aa_setMapsToken:(id)arg1;
- (void)aa_setUseCellular:(BOOL)arg1 forDataclass:(id)arg2;
- (void)aa_updateWithProvisioningResponse:(id)arg1;
- (BOOL)aa_useCellularForDataclass:(id)arg1;
- (int)mobileMeAccountStatus;
@end


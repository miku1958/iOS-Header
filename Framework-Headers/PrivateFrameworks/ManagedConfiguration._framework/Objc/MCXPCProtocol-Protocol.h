//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/NSObject-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@protocol MCXPCProtocol <NSObject>
- (void)addAllowedURLString:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addBookmark:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)allowedImportFromAppBundleIDs:(NSArray *)arg1 importingAppBundleID:(NSString *)arg2 importingIsManaged:(BOOL)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(NSArray *)arg1 hostAppBundleID:(NSString *)arg2 accountIsManaged:(BOOL)arg3 completion:(void (^)(NSArray *))arg4;
- (void)allowedOpenInAppBundleIDs:(NSArray *)arg1 originatingAppBundleID:(NSString *)arg2 originatingIsManaged:(BOOL)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)applyRestrictionDictionary:(NSDictionary *)arg1 appsAndOptions:(NSArray *)arg2 clientType:(NSString *)arg3 clientUUID:(NSString *)arg4 localizedClientDescription:(NSString *)arg5 localizedWarningMessage:(NSString *)arg6 completion:(void (^)(BOOL, BOOL, NSError *))arg7;
- (void)cancelFeaturePromptWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)changePasscode:(NSString *)arg1 oldPasscode:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)checkCarrierProfileAndForceReinstallation:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)checkInWithCompletion:(void (^)(NSError *))arg1;
- (void)clearPasscodeWithEscrowKeybagData:(NSData *)arg1 secret:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
- (void)cloudConfigurationMachineInfoDataWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)cloudConfigurationStoreDetails:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)createActivationLockBypassCodeWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)createMDMUnlockTokenIfNeededWithPasscode:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)defaultAppBundleIDForCommunicationServiceType:(NSString *)arg1 forAccountWithIdentifier:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)hasMailAccountsWithFilteringEnabled:(BOOL)arg1 sourceAccountManagement:(int)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)installProfileData:(NSData *)arg1 interactive:(BOOL)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (void)installProvisioningProfileData:(NSData *)arg1 managingProfileIdentifer:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)isPasscodeCompliantWithNamedPolicy:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)isProfileInstalledWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *, BOOL))arg2;
- (void)managedAppIDsWithFlags:(int)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)managedSystemConfigurationServiceIDsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)managedWiFiNetworkNamesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)managingOrganizationInformationWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(void (^)(NSError *))arg2;
- (void)mayShareToAirDropForOriginatingAppBundleID:(NSString *)arg1 originatingAccountIsManaged:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)mayShareToMessagesForOriginatingAppBundleID:(NSString *)arg1 originatingAccountIsManaged:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)migrateCleanupMigratorWithContext:(int)arg1 completion:(void (^)(NSError *))arg2;
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (void)notifyDeviceUnlockedAndPasscodeRequiredWithCompletion:(void (^)(NSError *))arg1;
- (void)notifyDeviceUnlockedWithCompletion:(void (^)(NSError *))arg1;
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(NSDate *)arg1 completion:(void (^)(NSError *))arg2;
- (void)notifyStartComplianceTimer:(NSDate *)arg1 completion:(void (^)(NSError *))arg2;
- (void)openSensitiveURL:(NSString *)arg1 unlock:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (void)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 withCompletion:(void (^)(NSData *, NSError *))arg2;
- (void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)profileDataStoredForPurpose:(int)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)queueProfileDataForInstallation:(NSData *)arg1 originalFileName:(NSString *)arg2 originatingBundleID:(NSString *)arg3 transitionToUI:(BOOL)arg4 completion:(void (^)(NSString *, unsigned long long, NSError *))arg5;
- (void)recomputePerClientUserComplianceWithCompletion:(void (^)(NSError *))arg1;
- (void)recomputeProfileRestrictionsWithCompletionBlock:(void (^)(NSError *))arg1;
- (void)recomputeUserComplianceWarningWithCompletion:(void (^)(NSError *))arg1;
- (void)removeBoolSetting:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeExpiredProfilesWithCompletion:(void (^)(NSError *))arg1;
- (void)removeOrphanedClientRestrictionsWithCompletion:(void (^)(NSError *))arg1;
- (void)removeProfileWithIdentifier:(NSString *)arg1 installationType:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeProtectedProfileWithIdentifier:(NSString *)arg1 installationType:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeProvisioningProfileWithUUID:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)removeUninstalledProfileWithIdentifier:(NSString *)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)removeValueSetting:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeWebContentFilterUserBlacklistedURLString:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)rereadManagedAppAttributesWithCompletion:(void (^)(NSError *))arg1;
- (void)resetAllSettingsToDefaultsIsUserInitiated:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)resetPasscodeMetadataWithCompletion:(void (^)(NSError *))arg1;
- (void)setAllowedURLStrings:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setAutoCorrectionAllowed:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)setContinuousPathKeyboardAllowed:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)setKeyboardShortcutsAllowed:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)setParametersForSettingsByType:(NSDictionary *)arg1 configurationUUID:(NSString *)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 passcode:(NSString *)arg5 credentialSet:(NSData *)arg6 completion:(void (^)(NSError *))arg7;
- (void)setPredictiveKeyboardAllowed:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)setSmartPunctuationAllowed:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)setSpellCheckAllowed:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)setUserBookmarks:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setUserInfo:(NSDictionary *)arg1 forClientUUID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)setupAssistantDidFinishCompletion:(void (^)(NSError *))arg1;
- (void)showFeaturePromptForSetting:(NSString *)arg1 configurationUUID:(NSString *)arg2 promptOptions:(NSDictionary *)arg3 promptIdentifier:(NSString *)arg4 completion:(void (^)(int, NSError *))arg5;
- (void)shutDownWithCompletion:(void (^)(NSError *))arg1;
- (void)stashBlacklistURLStringsWithCompletion:(void (^)(NSError *))arg1;
- (void)stashUserBookmarks:(NSArray *)arg1 withLabel:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)stashWhitelistURLStringsWithCompletion:(void (^)(NSError *))arg1;
- (void)storeActivationRecord:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)storeCertificateData:(NSData *)arg1 forIPCUIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)storeProfileData:(NSData *)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(void (^)(NSError *))arg4;
- (void)unstashBlacklistURLStringsWithCompletion:(void (^)(NSError *))arg1;
- (void)unstashUserBookmarksFromLabel:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)unstashWhitelistURLStringsWithCompletion:(void (^)(NSError *))arg1;
- (void)updateProfileIdentifier:(NSString *)arg1 interactive:(BOOL)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)validateAppBundleIDs:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)waitForMigrationIncludingPostRestoreMigration:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
@end

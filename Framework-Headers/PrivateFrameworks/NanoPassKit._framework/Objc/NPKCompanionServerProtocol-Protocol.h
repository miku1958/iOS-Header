//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/PDXPCServiceExportedInterface-Protocol.h>

@class NSData, NSDate, NSError, NSSet, NSString, NSURL, NSUUID, PKAddSecureElementPassConfiguration, PKPaymentApplication, PKPaymentBalance, PKPaymentBalanceReminder, PKPaymentCommutePlanReminder, PKPaymentPass, PKPaymentWebServiceContext, PKPeerPaymentAccount, PKPeerPaymentWebServiceContext, PKTransitCommutePlan, PKVerificationChannel;

@protocol NPKCompanionServerProtocol <PDXPCServiceExportedInterface>
- (void)balanceReminderForBalance:(PKPaymentBalance *)arg1 pass:(PKPaymentPass *)arg2 withCompletion:(void (^)(PKPaymentBalanceReminder *))arg3;
- (void)balancesForPaymentPassWithUniqueIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)beginProvisioningFromWatchOfferForPaymentPass:(PKPaymentPass *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (BOOL)canAddSecureElementPassWithConfiguration:(PKAddSecureElementPassConfiguration *)arg1;
- (void)commutePlanReminderForCommutePlan:(PKTransitCommutePlan *)arg1 pass:(PKPaymentPass *)arg2 withCompletion:(void (^)(PKPaymentCommutePlanReminder *))arg3;
- (void)connect;
- (void)credentialedPassUniqueIDsWithReply:(void (^)(NSSet *))arg1;
- (void)defaultCard:(void (^)(NSString *))arg1;
- (void)defaultPaymentApplicationForPassWithUniqueID:(NSString *)arg1 completion:(void (^)(PKPaymentApplication *))arg2;
- (void)deletePaymentTransactionWithIdentifier:(NSString *)arg1 fromDeviceWithPairingID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (void)fetchPendingTransactionForPassWithUniqueID:(NSString *)arg1 completion:(void (^)(PKPaymentPass *, PKPaymentTransaction *, NSString *))arg2;
- (void)handleDeviceUnlockedForPendingProvisioningRequestFromGizmo;
- (void)handlePeerPaymentTermsAndConditionsRequestFromGizmo;
- (void)handlePendingUnpairingWithCompletion:(void (^)(void))arg1;
- (void)handlePendingiCloudSignoutWithCompletion:(void (^)(void))arg1;
- (void)initiateConsistencyCheckWithCompletion:(void (^)(void))arg1;
- (void)initiateLostModeExitAuthWithCompletion:(void (^)(NSError *))arg1;
- (void)markAllAppletsForDeletionWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)markPendingTransactionAsProcessedForPassWithUniqueID:(NSString *)arg1;
- (void)noteForegroundVerificationObserverActive:(BOOL)arg1;
- (void)noteProvisioningPreflightCompleteWithSuccess:(BOOL)arg1 error:(NSError *)arg2 completion:(void (^)(void))arg3;
- (void)noteWatchOfferDisplayedForPaymentPassWithUniqueID:(NSString *)arg1;
- (void)paymentPassUniqueIDs:(void (^)(NSSet *))arg1;
- (void)paymentPassWithDeviceAccountIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentPass *))arg2;
- (void)paymentPassWithPairedTerminalIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentPass *))arg2;
- (void)paymentPassWithUniqueID:(NSString *)arg1 reply:(void (^)(PKPaymentPass *))arg2;
- (void)paymentPassesWithPrimaryAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)peerPaymentAccountForPairingID:(NSUUID *)arg1 withCompletion:(void (^)(PKPeerPaymentAccount *))arg2;
- (void)provisionPassForAccountIdentifier:(NSString *)arg1 makeDefault:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)redownloadAllPaymentPassesWithCompletion:(void (^)(void))arg1;
- (void)registerDeviceWithCompletion:(void (^)(unsigned long long, unsigned long long, NSError *))arg1;
- (void)removePaymentPassWithUniqueID:(NSString *)arg1 forPairingID:(NSUUID *)arg2 waitForConfirmation:(BOOL)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)savePaymentPassAtURL:(NSURL *)arg1 withUniqueID:(NSString *)arg2 forPairingID:(NSUUID *)arg3 completion:(void (^)(BOOL))arg4;
- (void)setBalanceReminder:(PKPaymentBalanceReminder *)arg1 forBalance:(PKPaymentBalance *)arg2 pass:(PKPaymentPass *)arg3 completion:(void (^)(BOOL))arg4;
- (void)setCommutePlanReminder:(PKPaymentCommutePlanReminder *)arg1 forCommutePlan:(PKTransitCommutePlan *)arg2 pass:(PKPaymentPass *)arg3 completion:(void (^)(BOOL))arg4;
- (void)setDefaultCard:(NSString *)arg1 completion:(void (^)(BOOL))arg2;
- (void)setDefaultPaymentApplication:(PKPaymentApplication *)arg1 forPassWithUniqueID:(NSString *)arg2 completion:(void (^)(PKPaymentPass *))arg3;
- (void)setPeerPaymentAccount:(PKPeerPaymentAccount *)arg1 forPairingID:(NSUUID *)arg2 completion:(void (^)(void))arg3;
- (void)setSharedPaymentWebServiceContext:(PKPaymentWebServiceContext *)arg1 forPairingID:(NSUUID *)arg2 completion:(void (^)(void))arg3;
- (void)setSharedPeerPaymentWebServiceContext:(PKPeerPaymentWebServiceContext *)arg1 forPairingID:(NSUUID *)arg2 completion:(void (^)(void))arg3;
- (void)sharedPaymentWebServiceContextForPairingID:(NSUUID *)arg1 withCompletion:(void (^)(PKPaymentWebServiceContext *))arg2;
- (void)sharedPeerPaymentWebServiceContextForPairingID:(NSUUID *)arg1 withCompletion:(void (^)(PKPeerPaymentWebServiceContext *))arg2;
- (void)startBackgroundVerificationObserverForPass:(PKPaymentPass *)arg1 verificationMethod:(PKVerificationChannel *)arg2;
- (void)transactionsForTransactionSourceIdentifiers:(NSSet *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(NSDate *)arg4 endDate:(NSDate *)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(void (^)(NSSet *))arg8;
- (void)transitStateWithPassUniqueIdentifier:(NSString *)arg1 paymentApplication:(PKPaymentApplication *)arg2 completion:(void (^)(PKTransitAppletState *))arg3;
- (void)trustedDeviceEnrollmentSignatureWithAccountDSID:(NSString *)arg1 sessionData:(NSData *)arg2 handler:(void (^)(NSString *, unsigned long long, NSData *, NSError *))arg3;
- (void)updateSettings:(unsigned long long)arg1 forPassWithUniqueID:(NSString *)arg2;
- (void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(NSString *)arg1 completion:(void (^)(BOOL))arg2;
@end


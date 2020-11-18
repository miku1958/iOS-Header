//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSData, NSDate, NSDecimalNumber, NSNumber, NSString, NSURL, PKCurrencyAmount, PKPaymentPass, PKPeerPaymentAccount, PKPeerPaymentWebServiceContext;

@protocol PDPeerPaymentServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)accountWithCompletion:(void (^)(PKPeerPaymentAccount *))arg1;
- (void)balanceForPass:(PKPaymentPass *)arg1 completion:(void (^)(PKCurrencyAmount *))arg2;
- (void)checkTLKsMissingWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)cloudStoreStatusWithCompletion:(void (^)(CKAccountInfo *, BOOL, NSError *))arg1;
- (void)deleteAccountWithCompletion:(void (^)(void))arg1;
- (void)downloadPassIfNecessaryWithCompletion:(void (^)(BOOL))arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(void (^)(BOOL, NSError *))arg1;
- (void)lastUsedAlternateFundingSourcePassUniqueIdentifier:(void (^)(NSString *))arg1;
- (void)noteAccountDeletedWithCompletion:(void (^)(void))arg1;
- (void)presentIdentityVerificationFlowWithResponseData:(NSData *)arg1 orientation:(NSNumber *)arg2 completion:(void (^)(BOOL))arg3;
- (void)presentPeerPaymentTermsAndConditionsWithTermsURL:(NSURL *)arg1 termsIdentifier:(NSString *)arg2 orientation:(NSNumber *)arg3 completion:(void (^)(BOOL))arg4;
- (void)presentRegistrationFlowWithAccount:(PKPeerPaymentAccount *)arg1 amount:(PKCurrencyAmount *)arg2 state:(unsigned long long)arg3 orientation:(NSNumber *)arg4 completion:(void (^)(BOOL))arg5;
- (void)registerDeviceWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)registrationStatusWithCompletion:(void (^)(unsigned long long))arg1;
- (void)resetApplePayManateeViewWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)setSharedPeerPaymentWebServiceContext:(PKPeerPaymentWebServiceContext *)arg1 handler:(void (^)(void))arg2;
- (void)sharedPeerPaymentWebServiceContextWithHandler:(void (^)(PKPeerPaymentWebServiceContext *))arg1;
- (void)unregisterDeviceWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)updateAccountWithCompletion:(void (^)(PKPeerPaymentAccount *))arg1;
- (void)updateMemo:(NSString *)arg1 forTransactionWithIdentifier:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)updateMessageReceivedDate:(NSDate *)arg1 forTransactionWithIdentifier:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)updateMockAccountBalanceByAddingAmount:(NSDecimalNumber *)arg1 completion:(void (^)(PKPeerPaymentAccount *))arg2;

@optional
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(void (^)(BOOL))arg1;
@end

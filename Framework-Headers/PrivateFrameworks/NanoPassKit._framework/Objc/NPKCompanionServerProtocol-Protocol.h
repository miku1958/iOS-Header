//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSError, NSString, NSURL, NSUUID, PKPaymentApplication, PKPaymentPass, PKPaymentWebServiceContext, PKPeerPaymentWebServiceContext;

@protocol NPKCompanionServerProtocol <NSObject>
- (void)beginProvisioningFromWatchOfferForPaymentPass:(PKPaymentPass *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)connect;
- (void)defaultCard:(void (^)(NSString *))arg1;
- (void)defaultPaymentApplicationForPassWithUniqueID:(NSString *)arg1 completion:(void (^)(PKPaymentApplication *))arg2;
- (void)deletePaymentTransactionWithIdentifier:(NSString *)arg1 passUniqueIdentifier:(NSString *)arg2 fromDeviceWithPairingID:(NSUUID *)arg3 completion:(void (^)(NSError *))arg4;
- (void)felicaStateWithPassUniqueIdentifier:(NSString *)arg1 paymentApplication:(PKPaymentApplication *)arg2 completion:(void (^)(PKFelicaTransitAppletState *))arg3;
- (void)handlePendingUnpairingWithCompletion:(void (^)(void))arg1;
- (void)handlePendingiCloudSignoutWithCompletion:(void (^)(void))arg1;
- (void)handlePotentialExpressPass:(PKPaymentPass *)arg1 withCompletionHandler:(void (^)(BOOL, NSSet *))arg2;
- (void)initiateConsistencyCheckWithCompletion:(void (^)(void))arg1;
- (void)initiateLostModeExitAuthWithCompletion:(void (^)(NSError *))arg1;
- (void)noteProvisioningPreflightCompleteWithSuccess:(BOOL)arg1 error:(NSError *)arg2 completion:(void (^)(void))arg3;
- (void)noteWatchOfferDisplayedForPaymentPassWithUniqueID:(NSString *)arg1;
- (void)paymentPassUniqueIDs:(void (^)(NSSet *))arg1;
- (void)paymentPassWithDeviceAccountIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentPass *))arg2;
- (void)paymentPassWithUniqueID:(NSString *)arg1 reply:(void (^)(PKPaymentPass *))arg2;
- (void)paymentPassesWithPrimaryAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)peerPaymentAccountForPairingID:(NSUUID *)arg1 withCompletion:(void (^)(PKPeerPaymentAccount *))arg2;
- (void)redownloadAllPaymentPassesWithCompletion:(void (^)(void))arg1;
- (void)removePaymentPassWithUniqueID:(NSString *)arg1 forPairingID:(NSUUID *)arg2 requireRemoteConfirmation:(BOOL)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)savePaymentPassAtURL:(NSURL *)arg1 withUniqueID:(NSString *)arg2 forPairingID:(NSUUID *)arg3 completion:(void (^)(BOOL))arg4;
- (void)setDefaultCard:(NSString *)arg1 completion:(void (^)(BOOL))arg2;
- (void)setDefaultPaymentApplication:(PKPaymentApplication *)arg1 forPassWithUniqueID:(NSString *)arg2 completion:(void (^)(PKPaymentPass *))arg3;
- (void)setSharedPaymentWebServiceContext:(PKPaymentWebServiceContext *)arg1 forPairingID:(NSUUID *)arg2 completion:(void (^)(void))arg3;
- (void)setSharedPeerPaymentWebServiceContext:(PKPeerPaymentWebServiceContext *)arg1 forPairingID:(NSUUID *)arg2 completion:(void (^)(void))arg3;
- (void)sharedPaymentWebServiceContextForPairingID:(NSUUID *)arg1 withCompletion:(void (^)(PKPaymentWebServiceContext *))arg2;
- (void)sharedPeerPaymentWebServiceContextForPairingID:(NSUUID *)arg1 withCompletion:(void (^)(PKPeerPaymentWebServiceContext *))arg2;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(void (^)(NSSet *))arg5;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSError, NSString, NSURL, PKPaymentApplication, PKPaymentPass, PKPaymentWebServiceContext;

@protocol NPKCompanionServerProtocol <NSObject>
- (void)beginProvisioningFromWatchOfferForPaymentPass:(PKPaymentPass *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)defaultCard:(void (^)(NSString *))arg1;
- (void)defaultPaymentApplicationForPassWithUniqueID:(NSString *)arg1 completion:(void (^)(PKPaymentApplication *))arg2;
- (void)handlePendingUnpairingWithCompletion:(void (^)(void))arg1;
- (void)handlePendingiCloudSignoutWithCompletion:(void (^)(void))arg1;
- (void)initiateConsistencyCheckWithCompletion:(void (^)(void))arg1;
- (void)noteProvisioningPreflightCompleteWithSuccess:(BOOL)arg1 error:(NSError *)arg2 completion:(void (^)(void))arg3;
- (void)noteWatchOfferDisplayedForPaymentPassWithUniqueID:(NSString *)arg1;
- (void)paymentPassUniqueIDs:(void (^)(NSSet *))arg1;
- (void)paymentPassWithDeviceAccountIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentPass *))arg2;
- (void)paymentPassWithPrimaryAccountIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentPass *))arg2;
- (void)paymentPassWithUniqueID:(NSString *)arg1 reply:(void (^)(PKPaymentPass *))arg2;
- (void)redownloadAllPaymentPassesWithCompletion:(void (^)(void))arg1;
- (void)removePaymentPassWithUniqueID:(NSString *)arg1 completion:(void (^)(BOOL))arg2;
- (void)savePaymentPassAtURL:(NSURL *)arg1 withUniqueID:(NSString *)arg2 completion:(void (^)(BOOL))arg3;
- (void)setDefaultCard:(NSString *)arg1 completion:(void (^)(BOOL))arg2;
- (void)setDefaultPaymentApplication:(PKPaymentApplication *)arg1 forPassWithUniqueID:(NSString *)arg2 completion:(void (^)(PKPaymentPass *))arg3;
- (void)setSharedPaymentWebServiceContext:(PKPaymentWebServiceContext *)arg1 completion:(void (^)(void))arg2;
- (void)sharedPaymentWebServiceContextWithCompletion:(void (^)(PKPaymentWebServiceContext *))arg1;
@end


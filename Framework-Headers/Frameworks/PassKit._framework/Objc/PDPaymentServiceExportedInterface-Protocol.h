//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSData, NSDate, NSString, PKFelicaAppletHistory, PKPaymentApplication, PKPaymentTransaction, PKPaymentWebServiceContext, PKValueAddedServiceTransaction;

@protocol PDPaymentServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)archiveMessageWithIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)consistencyCheckWithHandler:(void (^)(void))arg1;
- (void)defaultExpressFelicaTransitPassIdentifierWithHandler:(void (^)(NSString *))arg1;
- (void)defaultPaymentApplicationForPassUniqueIdentifier:(NSString *)arg1 handler:(void (^)(PKPaymentApplication *))arg2;
- (void)defaultPaymentPassUniqueIdentifier:(void (^)(NSString *))arg1;
- (void)deleteAllMessagesForPaymentPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)deleteAllTransactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)deletePaymentTransactionWithIdentifier:(NSString *)arg1 forPassWithUniqueIdentifier:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)downloadAllPaymentPassesWithHandler:(void (^)(void))arg1;
- (void)felicaStateWithPassUniqueIdentifier:(NSString *)arg1 paymentApplication:(PKPaymentApplication *)arg2 handler:(void (^)(PKFelicaTransitAppletState *))arg3;
- (void)initializeSecureElementIfNecessaryWithHandler:(void (^)(BOOL, NSData *, NSData *))arg1;
- (void)insertOrUpdatePaymentTransaction:(PKPaymentTransaction *)arg1 forPassUniqueIdentifier:(NSString *)arg2 paymentApplication:(PKPaymentApplication *)arg3 handler:(void (^)(PKPaymentTransaction *))arg4;
- (void)insertOrUpdateValueAddedServiceTransaction:(PKValueAddedServiceTransaction *)arg1 forPassUniqueIdentifier:(NSString *)arg2 paymentTransaction:(PKPaymentTransaction *)arg3 handler:(void (^)(void))arg4;
- (void)messagesAppLaunchTokenForPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(NSString *))arg2;
- (void)messagesForPaymentPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(NSSet *))arg2;
- (void)outstandingExpressTransactionState:(void (^)(unsigned long long))arg1;
- (void)passbookUIServiceDidLaunch:(void (^)(void))arg1;
- (void)paymentDeviceFieldPropertiesWithHandler:(void (^)(PKFieldProperties *))arg1;
- (void)processFelicaTransitTransactionEventWithHistory:(PKFelicaAppletHistory *)arg1 transactionDate:(NSDate *)arg2 forPaymentApplication:(PKPaymentApplication *)arg3 withPassUniqueIdentifier:(NSString *)arg4;
- (void)sanitizeDefaultExpressPasses;
- (void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(BOOL))arg2;
- (void)scheduleSetupReminders:(void (^)(void))arg1;
- (void)setDefaultExpressFelicaTransitPassIdentifier:(NSString *)arg1 withCredential:(NSData *)arg2 completion:(void (^)(BOOL, NSString *))arg3;
- (void)setDefaultPaymentApplication:(PKPaymentApplication *)arg1 forPassUniqueIdentifier:(NSString *)arg2 handler:(void (^)(PKPass *))arg3;
- (void)setDefaultPaymentPassUniqueIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)setSharedPaymentWebServiceContext:(PKPaymentWebServiceContext *)arg1 handler:(void (^)(void))arg2;
- (void)sharedPaymentWebServiceContextWithHandler:(void (^)(PKPaymentWebServiceContext *))arg1;
- (void)simulateDefaultExpressTransitPassIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)simulatePaymentPushWithHandler:(void (^)(void))arg1;
- (void)submitVerificationCode:(NSString *)arg1 verificationData:(NSData *)arg2 forDPANIdentifier:(NSString *)arg3 handler:(void (^)(BOOL, NSError *))arg4;
- (void)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(NSString *))arg2;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(void (^)(NSSet *))arg5;
- (void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(NSString *)arg1 limit:(long long)arg2 handler:(void (^)(NSSet *))arg3;
- (void)valueAddedServiceTransactionsForPaymentTransaction:(PKPaymentTransaction *)arg1 handler:(void (^)(NSSet *))arg2;
@end


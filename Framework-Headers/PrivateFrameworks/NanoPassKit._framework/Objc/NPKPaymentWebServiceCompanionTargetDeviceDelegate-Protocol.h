//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, PKPaymentWebServiceBackgroundContext, PKPaymentWebServiceContext, PKPeerPaymentAccount, PKPeerPaymentWebServiceContext, PKTransitAppletState;

@protocol NPKPaymentWebServiceCompanionTargetDeviceDelegate <NSObject>
- (void)archiveWebServiceBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1;
- (void)archiveWebServiceContext:(PKPaymentWebServiceContext *)arg1;
- (void)checkCompanionPeerPaymentRegistrationState;
- (void)handleAppletState:(PKTransitAppletState *)arg1 forUniqueID:(NSString *)arg2;
- (void)handleBalanceUpdate:(NSSet *)arg1 forUniqueID:(NSString *)arg2;
- (void)handleDownloadAllPaymentPasses;
- (void)handlePaymentTransactions:(NSArray *)arg1 appletStates:(NSDictionary *)arg2 forUniqueIDs:(NSArray *)arg3;
- (void)handlePaymentWebServiceContextFromWatch:(PKPaymentWebServiceContext *)arg1;
- (void)handlePreconditionNotMetWithUniqueIDs:(NSArray *)arg1 preconditionDescription:(NSString *)arg2 shouldUnregister:(BOOL)arg3;
- (void)handlePreferredAID:(NSString *)arg1 forPassWithUniqueID:(NSString *)arg2;
- (void)handlePushToken:(NSString *)arg1;
- (void)handleRemoveTransactionsWithIdentifiers:(NSArray *)arg1;
- (void)handleUpdatePaymentPassWithTypeIdentifier:(NSString *)arg1;
- (void)handleUpdatedPeerPaymentWebServiceContext:(PKPeerPaymentWebServiceContext *)arg1 account:(PKPeerPaymentAccount *)arg2;
- (void)sendPaymentOptionsDefaultsToWatch;
- (void)sendWebServiceContextToWatch;
- (void)setNewAuthRandom:(void (^)(BOOL))arg1;
- (void)showPaymentSetupForAppDisplayName:(NSString *)arg1;
@end


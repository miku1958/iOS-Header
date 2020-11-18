//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSString, PKPaymentProvisioningController, PKPeerPaymentAccount, PKPeerPaymentCredential;

@protocol PKPeerPaymentWebServiceTargetDeviceProtocol <NSObject>
- (PKPeerPaymentAccount *)account;
- (NSString *)bridgedClientInfo;
- (void)cloudStoreStatusWithCompletion:(void (^)(CKAccountInfo *, BOOL, NSError *))arg1;
- (void)downloadPassIfNecessaryWithCompletion:(void (^)(BOOL))arg1;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(void (^)(BOOL))arg1;
- (void)provisionPeerPaymentPassWithProvisioningController:(PKPaymentProvisioningController *)arg1 credential:(PKPeerPaymentCredential *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)setUserHasDisabledPeerPayment:(BOOL)arg1;
- (void)updateAccountWithCompletion:(void (^)(PKPeerPaymentAccount *))arg1;
- (BOOL)userHasDisabledPeerPayment;
@end


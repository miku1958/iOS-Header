//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSString, PKAccount, PKInstallmentPlan, PKPaymentPass;

@interface PKDashboardTransactionInstallmentItem : NSObject <PKDashboardItem>
{
    PKInstallmentPlan *_installmentPlan;
    PKAccount *_account;
    PKPaymentPass *_paymentPass;
}

@property (strong, nonatomic) PKAccount *account; // @synthesize account=_account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PKInstallmentPlan *installmentPlan; // @synthesize installmentPlan=_installmentPlan;
@property (strong, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end

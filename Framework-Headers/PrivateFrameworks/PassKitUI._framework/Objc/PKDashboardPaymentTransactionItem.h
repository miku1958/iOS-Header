//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSString, PKAccount, PKPaymentPass, PKPaymentTransaction;

@interface PKDashboardPaymentTransactionItem : NSObject <PKDashboardItem>
{
    PKPaymentPass *_pass;
    PKPaymentTransaction *_transaction;
    BOOL _isFeaturedTransaction;
    PKAccount *_account;
}

@property (strong, nonatomic) PKAccount *account; // @synthesize account=_account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isFeaturedTransaction; // @synthesize isFeaturedTransaction=_isFeaturedTransaction;
@property (readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;

- (void).cxx_destruct;
- (id)initWithPaymentPass:(id)arg1 transaction:(id)arg2 account:(id)arg3;

@end

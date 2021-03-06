//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSDecimalNumber, NSString, PKPaymentMerchantSession;

@interface PKPaymentAuthorizationPrepareTransactionDetailsStateParam : PKPaymentAuthorizationStateParam
{
    PKPaymentMerchantSession *_merchantSession;
    NSString *_secureElementIdentifier;
    NSDecimalNumber *_transactionAmount;
    NSString *_currencyCode;
}

@property (copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property (strong, nonatomic) PKPaymentMerchantSession *merchantSession; // @synthesize merchantSession=_merchantSession;
@property (copy, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property (copy, nonatomic) NSDecimalNumber *transactionAmount; // @synthesize transactionAmount=_transactionAmount;

+ (id)paramWithMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 transactionAmount:(id)arg3 currencyCode:(id)arg4;
- (void).cxx_destruct;
- (id)description;

@end


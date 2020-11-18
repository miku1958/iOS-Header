//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKPaymentTransactionDetailAmountLineItemGenerator : NSObject
{
    BOOL _hasTrailingLineSeperator;
}

@property (nonatomic) BOOL hasTrailingLineSeperator; // @synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator;

- (id)_feeLineItemsForFees:(id)arg1;
- (id)_lineItemsForPeerPaymentTransaction:(id)arg1 pass:(id)arg2;
- (id)_lineItemsForPurchaseTransaction:(id)arg1 pass:(id)arg2;
- (id)_lineItemsForWithdrawalTransaction:(id)arg1 pass:(id)arg2;
- (id)_primaryFundingSourceLineItemForTransaction:(id)arg1 pass:(id)arg2;
- (id)_secondaryFundingSourceLineItemForTransaction:(id)arg1;
- (id)_subtotalLineItemForTransaction:(id)arg1;
- (id)_totalPaidLineItemForTransaction:(id)arg1 isUnqualified:(BOOL)arg2;
- (id)_totalReceivedLineItemForTransaction:(id)arg1;
- (id)_totalSentLineItemForTransaction:(id)arg1;
- (id)_totalTransferredItemForTransaction:(id)arg1;
- (id)lineItemsForTransaction:(id)arg1 pass:(id)arg2;

@end


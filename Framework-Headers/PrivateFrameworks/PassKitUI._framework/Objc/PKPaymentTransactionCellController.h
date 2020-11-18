//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, PKPeerPaymentContactResolver, UIFont;

@interface PKPaymentTransactionCellController : NSObject
{
    UIFont *_transactionCellPrimaryLabelFont;
    UIFont *_transactionCellPrimaryLabelPeerPaymentFont;
    UIFont *_transactionCellValueLabelFont;
    UIFont *_transactionCellValueLabelPeerPaymentFont;
    UIFont *_transactionCellSecondaryLabelFont;
    UIFont *_transactionCellSecondaryLabelPeerPaymentFont;
    NSData *_businessAvatarImageData;
    NSData *_topUpAvatarImageData;
    PKPeerPaymentContactResolver *_contactResolver;
}

@property (readonly, nonatomic) PKPeerPaymentContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;

+ (id)secondaryFundingSourceDescriptionForTransaction:(id)arg1 includeBankAccountSuffix:(BOOL)arg2 useGenericNameIfNoDescriptionAvailable:(BOOL)arg3;
- (void).cxx_destruct;
- (id)_businessAvatarImageData;
- (id)_relativeDateAndStatusForTransaction:(id)arg1;
- (id)_topUpAvatarImageData;
- (id)_transactionCellPrimaryLabelFontForPass:(id)arg1;
- (id)_transactionCellSecondaryLabelFontForPass:(id)arg1;
- (id)_transactionCellValueLabelFontForPass:(id)arg1;
- (void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3;
- (void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3;
- (void)configureCell:(id)arg1 forTransaction:(id)arg2 paymentPass:(id)arg3 detailStyle:(long long)arg4 avatarViewDelegate:(id)arg5;
- (id)initWithContactResolver:(id)arg1;
- (double)paymentTransactionCellHeightForPass:(id)arg1;

@end

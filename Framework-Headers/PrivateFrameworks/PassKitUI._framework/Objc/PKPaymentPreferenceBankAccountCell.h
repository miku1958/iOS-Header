//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentPreferenceCardCell.h>

@class PKBankAccountInformation, UIImage;

@interface PKPaymentPreferenceBankAccountCell : PKPaymentPreferenceCardCell
{
    UIImage *_bankIcon;
    PKBankAccountInformation *_bankAccount;
}

@property (strong, nonatomic) PKBankAccountInformation *bankAccount; // @synthesize bankAccount=_bankAccount;

- (void).cxx_destruct;
- (void)_updateCellContent;
- (void)_updateCensoredPANLabel;
- (id)initWithReuseIdentifier:(id)arg1;

@end

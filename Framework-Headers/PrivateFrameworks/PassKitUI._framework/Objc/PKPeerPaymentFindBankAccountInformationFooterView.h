//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableFooterView.h>

@class UIButton;

@interface PKPeerPaymentFindBankAccountInformationFooterView : PKTableFooterView
{
    UIButton *_accountInformationButton;
}

@property (strong, nonatomic) UIButton *accountInformationButton; // @synthesize accountInformationButton=_accountInformationButton;

- (void).cxx_destruct;
- (struct CGSize)_sizeForButton:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setButtonsEnabled:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end


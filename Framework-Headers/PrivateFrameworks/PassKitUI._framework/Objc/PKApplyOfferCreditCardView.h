//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface PKApplyOfferCreditCardView : UIView
{
    UIView *_dividerLeft;
    UIView *_dividerRight;
    UILabel *_creditLimitTitleLabel;
    UILabel *_aprForPurchaseTitleLabel;
    UILabel *_feeTitleLabel;
    UILabel *_creditLimitLabel;
    UILabel *_aprForPurchaseLabel;
    UILabel *_feeLabel;
    UILabel *_bodyLabel;
    UIButton *_termsLinkButton;
}

@property (strong, nonatomic) UILabel *aprForPurchaseLabel; // @synthesize aprForPurchaseLabel=_aprForPurchaseLabel;
@property (strong, nonatomic) UILabel *aprForPurchaseTitleLabel; // @synthesize aprForPurchaseTitleLabel=_aprForPurchaseTitleLabel;
@property (strong, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property (strong, nonatomic) UILabel *creditLimitLabel; // @synthesize creditLimitLabel=_creditLimitLabel;
@property (strong, nonatomic) UILabel *creditLimitTitleLabel; // @synthesize creditLimitTitleLabel=_creditLimitTitleLabel;
@property (strong, nonatomic) UILabel *feeLabel; // @synthesize feeLabel=_feeLabel;
@property (strong, nonatomic) UILabel *feeTitleLabel; // @synthesize feeTitleLabel=_feeTitleLabel;
@property (strong, nonatomic) UIButton *termsLinkButton; // @synthesize termsLinkButton=_termsLinkButton;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end


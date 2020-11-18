//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSDecimalNumber, NSNumberFormatter, NSString, UIActivityIndicatorView, UILabel, UITapGestureRecognizer;
@protocol PKEnterValueNewBalanceViewDelegate;

@interface PKEnterValueNewBalanceView : UIView <UIGestureRecognizerDelegate>
{
    NSDecimalNumber *_additionalAmount;
    BOOL _subtractAdditionalAmountFromCurrentAmount;
    BOOL _showSpinner;
    NSNumberFormatter *_currentAmountFormatter;
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
    UITapGestureRecognizer *_tapRecognizer;
    BOOL _amountIsWithdrawal;
    NSString *_promptText;
    NSString *_updatedBalancePromptText;
    NSString *_maxLoadAmountText;
    NSString *_currencyCode;
    NSDecimalNumber *_cardBalance;
    NSDecimalNumber *_maxBalance;
    NSDecimalNumber *_minBalance;
    NSDecimalNumber *_maxLoadAmount;
    NSDecimalNumber *_minLoadAmount;
    id<PKEnterValueNewBalanceViewDelegate> _delegate;
}

@property (nonatomic) BOOL amountIsWithdrawal; // @synthesize amountIsWithdrawal=_amountIsWithdrawal;
@property (copy, nonatomic) NSDecimalNumber *cardBalance; // @synthesize cardBalance=_cardBalance;
@property (copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKEnterValueNewBalanceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDecimalNumber *maxBalance; // @synthesize maxBalance=_maxBalance;
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount; // @synthesize maxLoadAmount=_maxLoadAmount;
@property (copy, nonatomic) NSString *maxLoadAmountText; // @synthesize maxLoadAmountText=_maxLoadAmountText;
@property (copy, nonatomic) NSDecimalNumber *minBalance; // @synthesize minBalance=_minBalance;
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount; // @synthesize minLoadAmount=_minLoadAmount;
@property (copy, nonatomic) NSString *promptText; // @synthesize promptText=_promptText;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *updatedBalancePromptText; // @synthesize updatedBalancePromptText=_updatedBalancePromptText;

- (void).cxx_destruct;
- (void)_addSubviews;
- (void)_createAmountFormatter;
- (id)_minimalFormattedStringForAmount:(id)arg1;
- (id)_textForPrompt:(id)arg1 amount:(id)arg2;
- (void)_updateAdditionalAmount:(id)arg1 subtractAdditionalAmountFromCurrentAmount:(BOOL)arg2;
- (void)_updateBalanceText;
- (void)addAmountToBalance:(id)arg1;
- (void)currentBalanceTapRecognized;
- (id)init;
- (id)initWithCurrencyCode:(id)arg1;
- (void)layoutSubviews;
- (void)showSpinner:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)subtractAmountFromBalance:(id)arg1;

@end

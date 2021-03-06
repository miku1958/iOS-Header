//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSDecimalNumber, NSDecimalNumberHandler, NSNumber, NSNumberFormatter, NSString, PKNumberPadInputView, UIColor, UIFont, UILabel, UITextField;
@protocol PKEnterCurrencyAmountViewDelegate;

@interface PKEnterCurrencyAmountView : UIView <UITextFieldDelegate>
{
    UIView *_internalInputAccessoryView;
    UIColor *_keyboardColor;
    BOOL _showsDecimalPointButton;
    BOOL _enabled;
    BOOL _ignoreIntegralNumber;
    BOOL _clearAmountOnFirstKeyboardInput;
    BOOL _isFirstKeyboardInput;
    UITextField *_amountTextField;
    NSString *_currency;
    UIColor *_textColor;
    UIFont *_amountFont;
    UIFont *_currencySymbolFont;
    NSNumber *_kerning;
    id<PKEnterCurrencyAmountViewDelegate> _delegate;
    UILabel *_amountLabel;
    PKNumberPadInputView *_numberPad;
    NSDecimalNumberHandler *_roundingBehavior;
    NSNumberFormatter *_amountFormatter;
    NSNumberFormatter *_currencySymbolAmountFormatter;
    NSString *_amountString;
    double _labelScaleFactor;
    struct CGSize _lastLayoutBoundsSize;
}

@property (copy, nonatomic) UIFont *amountFont; // @synthesize amountFont=_amountFont;
@property (strong, nonatomic) NSNumberFormatter *amountFormatter; // @synthesize amountFormatter=_amountFormatter;
@property (strong, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property (copy, nonatomic) NSString *amountString; // @synthesize amountString=_amountString;
@property (readonly, nonatomic) UITextField *amountTextField; // @synthesize amountTextField=_amountTextField;
@property (nonatomic) BOOL clearAmountOnFirstKeyboardInput; // @synthesize clearAmountOnFirstKeyboardInput=_clearAmountOnFirstKeyboardInput;
@property (strong, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property (strong, nonatomic) NSNumberFormatter *currencySymbolAmountFormatter; // @synthesize currencySymbolAmountFormatter=_currencySymbolAmountFormatter;
@property (copy, nonatomic) UIFont *currencySymbolFont; // @synthesize currencySymbolFont=_currencySymbolFont;
@property (strong, nonatomic) NSDecimalNumber *currentAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize defaultKeyboardSize;
@property (weak, nonatomic) id<PKEnterCurrencyAmountViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreIntegralNumber; // @synthesize ignoreIntegralNumber=_ignoreIntegralNumber;
@property (strong, nonatomic) UIView *inputAccessoryView;
@property (nonatomic) BOOL isFirstKeyboardInput; // @synthesize isFirstKeyboardInput=_isFirstKeyboardInput;
@property (copy, nonatomic) NSNumber *kerning; // @synthesize kerning=_kerning;
@property (copy, nonatomic) UIColor *keyboardColor;
@property (nonatomic) double labelScaleFactor; // @synthesize labelScaleFactor=_labelScaleFactor;
@property (nonatomic) struct CGSize lastLayoutBoundsSize; // @synthesize lastLayoutBoundsSize=_lastLayoutBoundsSize;
@property (strong, nonatomic) PKNumberPadInputView *numberPad; // @synthesize numberPad=_numberPad;
@property (strong, nonatomic) NSDecimalNumberHandler *roundingBehavior; // @synthesize roundingBehavior=_roundingBehavior;
@property (nonatomic) BOOL showsDecimalPointButton; // @synthesize showsDecimalPointButton=_showsDecimalPointButton;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;

+ (id)_defaultTextColor;
- (void).cxx_destruct;
- (void)_addSuperscriptToAttributedString:(id)arg1 formattedCurrencyAmount:(id)arg2 currencyAmountWithoutSymbols:(id)arg3;
- (void)_addSuperscriptToAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)_createAmountFormatter;
- (void)_createSubviews;
- (id)_decimalNumberFromString:(id)arg1;
- (id)_formatAmount:(id)arg1 minimumFractionDigits:(unsigned long long)arg2;
- (id)_formatAmountForDisplay:(id)arg1 alwaysShowDecimalSeparator:(BOOL)arg2 minimumFractionDigits:(unsigned long long)arg3 useGroupingSeparator:(BOOL)arg4;
- (unsigned long long)_numberOfDecimalPlacesInString:(id)arg1 decimalSeperator:(id)arg2;
- (void)_updateContent;
- (void)didMoveToWindow;
- (void)dismissKeyboard;
- (id)initWithCurrency:(id)arg1 amount:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)showKeyboard;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end


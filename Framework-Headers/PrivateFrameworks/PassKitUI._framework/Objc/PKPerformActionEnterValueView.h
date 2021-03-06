//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKEnterCurrencyAmountViewDelegate-Protocol.h>
#import <PassKitUI/PKNumberPadSuggestionsViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionView-Protocol.h>
#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSDecimalNumber, NSString, PKEnterCurrencyAmountView, PKEnterValueNewBalanceView, PKNumberPadSuggestionsView, PKNumericSuggestionLastInput, PKNumericSuggestionsEnterValueAlgorithm, PKPass, PKPaymentPassAction, PKPeerPaymentAccount, PKPeerPaymentService, PKTransitPassProperties, UITextField;
@protocol PKPaymentDataProvider, PKPerformActionViewDelegate;

@interface PKPerformActionEnterValueView : UIView <PKNumberPadSuggestionsViewDelegate, UITextFieldDelegate, PKPaymentDataProviderDelegate, PKEnterCurrencyAmountViewDelegate, PKPerformActionView>
{
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;
    PKEnterValueNewBalanceView *_newBalanceView;
    PKNumberPadSuggestionsView *_suggestionView;
    PKPass *_pass;
    PKPaymentPassAction *_action;
    PKNumericSuggestionsEnterValueAlgorithm *_suggestionGenerator;
    PKNumericSuggestionLastInput *_lastInput;
    PKTransitPassProperties *_transitProperties;
    NSDecimalNumber *_currentAmount;
    id<PKPerformActionViewDelegate> _delegate;
    id<PKPaymentDataProvider> _paymentServiceDataProvider;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_peerPaymentAccount;
    NSDecimalNumber *_cardBalance;
    NSDecimalNumber *_minLoadAmount;
    NSDecimalNumber *_maxLoadAmount;
    NSDecimalNumber *_minLoadedBalance;
    NSDecimalNumber *_maxLoadedBalance;
}

@property (readonly, nonatomic) UITextField *amountTextField;
@property (copy, nonatomic) NSDecimalNumber *cardBalance; // @synthesize cardBalance=_cardBalance;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPerformActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount; // @synthesize maxLoadAmount=_maxLoadAmount;
@property (copy, nonatomic) NSDecimalNumber *maxLoadedBalance; // @synthesize maxLoadedBalance=_maxLoadedBalance;
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount; // @synthesize minLoadAmount=_minLoadAmount;
@property (copy, nonatomic) NSDecimalNumber *minLoadedBalance; // @synthesize minLoadedBalance=_minLoadedBalance;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_amountTopPadding;
- (void)_createSubviews;
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2;
- (BOOL)_isCurrentAmountValid;
- (void)_peerPaymentAccountChanged:(id)arg1;
- (void)_readCurrentBalance;
- (BOOL)_shouldShakeCard:(id)arg1;
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2;
- (void)_updateCurrentBalanceWithUpdatedTransitProperties;
- (void)_updatePeerPaymentAccount;
- (void)dealloc;
- (BOOL)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (id)init;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
- (void)layoutSubviews;
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;
- (id)pass;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)saveLastInputValues;
- (id)serviceProviderData;
- (void)setMinBalance:(id)arg1;
- (id)transactionAmount;
- (id)transactionCurrency;
- (void)willDismissViewController;

@end


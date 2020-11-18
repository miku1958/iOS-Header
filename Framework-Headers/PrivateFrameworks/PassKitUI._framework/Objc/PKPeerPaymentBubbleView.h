//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSDecimalNumber, NSNumberFormatter, NSString, PKContinuousButton, PKPeerPayment3DTextView, UIActivityIndicatorView, UIImageView, UILabel;

@interface PKPeerPaymentBubbleView : UIView
{
    PKPeerPayment3DTextView *_renderView;
    UILabel *_messageLabel;
    UILabel *_statusLabel;
    PKContinuousButton *_actionButton;
    UIActivityIndicatorView *_actionSpinner;
    CAShapeLayer *_maskLayer;
    struct CGRect _lastBoundsForRoundedCornerLayout;
    NSNumberFormatter *_currencyFormatter;
    UIImageView *_applePayLogoImageView;
    BOOL _showsActionSpinner;
    BOOL _hasRoundedCorners;
    BOOL _displaysApplePayLogo;
    BOOL _liveRenderingEnabled;
    unsigned long long _state;
    NSDecimalNumber *_amount;
    NSString *_currency;
    unsigned long long _action;
    CDUnknownBlockType _actionHandler;
}

@property (nonatomic) unsigned long long action; // @synthesize action=_action;
@property (copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property (copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property (copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property (nonatomic) BOOL displaysApplePayLogo; // @synthesize displaysApplePayLogo=_displaysApplePayLogo;
@property (nonatomic) BOOL hasRoundedCorners; // @synthesize hasRoundedCorners=_hasRoundedCorners;
@property (nonatomic, getter=isLiveRenderingEnabled) BOOL liveRenderingEnabled; // @synthesize liveRenderingEnabled=_liveRenderingEnabled;
@property (nonatomic) BOOL showsActionSpinner; // @synthesize showsActionSpinner=_showsActionSpinner;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;

+ (struct CGSize)referenceSize;
+ (struct CGSize)referenceSizeForState:(unsigned long long)arg1;
+ (struct CGSize)referenceSizeForState:(unsigned long long)arg1 andAction:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)arg1;
- (id)_actionTitle;
- (id)_backgroundColor;
- (void)_commonInit;
- (id)_messageText;
- (id)_messageTextAttributes;
- (id)_messageTextColor;
- (id)_statusText;
- (void)_updateContent;
- (void)_updateCurrencyFormatter;
- (void)awakeFromNib;
- (id)init;
- (id)initWithAmount:(id)arg1 currency:(id)arg2 state:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithPaymentTransaction:(id)arg1;
- (void)updateWithPeerPaymentMessage:(id)arg1;
- (void)updateWithPeerPaymentStatus:(unsigned long long)arg1;
- (void)updateWithPeerPaymentStatusResponse:(id)arg1;

@end


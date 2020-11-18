//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKGlyphViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, PKGlyphView, PKPaymentAuthorizationLayout, UIButton, UILabel;
@protocol PKPaymentAuthorizationFooterViewDelegate;

@interface PKPaymentAuthorizationFooterView : UIView <PKGlyphViewDelegate>
{
    UILabel *_labelView;
    PKGlyphView *_glyphView;
    UIButton *_payWithPasscodeButton;
    UILabel *_passbookPaymentDetailsView;
    UIView *_separatorView;
    UIView *_lockupView;
    unsigned long long _stateTransitionIndex;
    BOOL _deferringState;
    BOOL _deferredStateRequiresRetry;
    NSString *_deferredStateString;
    BOOL _biometricSuccessOutstanding;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_deferredCompletionHandlers;
    NSLayoutConstraint *_separatorLeftConstraint;
    NSArray *_hiddenConstraints;
    NSArray *_staticRegularConstraints;
    NSMutableArray *_dynamicRegularConstraints;
    BOOL _compact;
    BOOL _compactUserIntent;
    long long _constraintState;
    long long _queuedConstraintState;
    BOOL _constraintsDirty;
    long long _state;
    PKPaymentAuthorizationLayout *_layout;
    unsigned long long _requestType;
    unsigned long long _confirmationStyle;
    NSString *_biometricConfirmationTitle;
    NSString *_confirmationTitle;
    id<PKPaymentAuthorizationFooterViewDelegate> _delegate;
}

@property (strong, nonatomic) NSString *biometricConfirmationTitle; // @synthesize biometricConfirmationTitle=_biometricConfirmationTitle;
@property (nonatomic) unsigned long long confirmationStyle; // @synthesize confirmationStyle=_confirmationStyle;
@property (strong, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPaymentAuthorizationFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PKPaymentAuthorizationLayout *layout; // @synthesize layout=_layout;
@property (nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)_payWithPasscodePressed;
- (id)_payWithPasscodeTitleForState:(long long)arg1;
- (void)_prepareConstraints;
- (BOOL)_shouldCompact;
- (id)_titleAttributedStringForState:(long long)arg1;
- (id)_titleLabelAttributedString:(id)arg1;
- (void)dealloc;
- (id)defaultHeightConstraint;
- (void)glyphView:(id)arg1 revealingCheckmark:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 layout:(id)arg2;
- (BOOL)setConstraintState:(long long)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setState:(long long)arg1 string:(id)arg2 animated:(BOOL)arg3;
- (void)setState:(long long)arg1 string:(id)arg2 animated:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)updateConstraints;

@end


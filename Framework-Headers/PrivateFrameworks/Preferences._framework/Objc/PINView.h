//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Preferences/PINEntryView-Protocol.h>

@class FailureBarView, NSString, UIButton, UILabel;
@protocol PSPINEntryViewDelegate;

@interface PINView : UIView <PINEntryView>
{
    UILabel *_titleLabel;
    UILabel *_errorTitleLabel;
    FailureBarView *_failureView;
    UILabel *_pinPolicyLabel;
    BOOL _error;
    UIButton *_optionsButton;
    id<PSPINEntryViewDelegate> _delegate;
    CDUnknownBlockType _passcodeOptionsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PSPINEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType passcodeOptionsHandler; // @synthesize passcodeOptionsHandler=_passcodeOptionsHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendString:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)deleteLastCharacter;
- (void)hideError;
- (void)hideFailedAttempts;
- (void)hidePasscodeField:(BOOL)arg1;
- (void)layoutSubviews;
- (void)notifyDelegatePINChanged;
- (void)notifyDelegatePINEntered;
- (id)optionsButton;
- (void)optionsButtonTapped;
- (void)setBlocked:(BOOL)arg1;
- (void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
- (void)setShowsOptionsButton:(BOOL)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTextFieldKeyboardAppearance:(long long)arg1;
- (void)setTextFieldKeyboardType:(long long)arg1;
- (void)setTitle:(id)arg1 font:(id)arg2;
- (void)showError:(id)arg1 animate:(BOOL)arg2;
- (void)showFailedAttempts:(long long)arg1;
- (id)stringValue;

@end


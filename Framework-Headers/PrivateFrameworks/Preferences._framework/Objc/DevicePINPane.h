//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSEditingPane.h>

#import <Preferences/PSPINEntryViewDelegate-Protocol.h>
#import <Preferences/UIKeyInput-Protocol.h>
#import <Preferences/UITextInputTraits-Protocol.h>

@class DevicePINKeypadContainerView, NSString, UIKeyboard, UITextInputPasswordRules, UITransitionView, UIView;
@protocol PINEntryView;

@interface DevicePINPane : PSEditingPane <UIKeyInput, UITextInputTraits, PSPINEntryViewDelegate>
{
    UITransitionView *_transitionView;
    BOOL _transitioning;
    UIView<PINEntryView> *_pinView;
    UIKeyboard *_keypad;
    BOOL _keypadActive;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _keyboardType;
    long long _keyboardAppearance;
    BOOL _playSound;
    BOOL _isBlocked;
    BOOL _simplePIN;
    BOOL _numericKeyboard;
    DevicePINKeypadContainerView *_keypadContainerView;
    unsigned int _PINLength;
    CDUnknownBlockType _passcodeOptionsHandler;
}

@property (nonatomic) unsigned int PINLength; // @synthesize PINLength=_PINLength;
@property (nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property (nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property (nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property (copy, nonatomic) CDUnknownBlockType passcodeOptionsHandler; // @synthesize passcodeOptionsHandler=_passcodeOptionsHandler;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (strong, nonatomic) UIView<PINEntryView> *pinView; // @synthesize pinView=_pinView;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;

- (void).cxx_destruct;
- (void)_setKeypadState:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setPlaysKeyboardClicks:(BOOL)arg1;
- (void)activateKeypadView;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)clearPassword;
- (void)deactivateKeypadView;
- (void)dealloc;
- (void)delayForTextEntryAnimationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteBackward;
- (void)dismissKeypad;
- (void)hideError;
- (void)hideFailedAttempts;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertText:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)layoutSubviews;
- (void)okButtonPressed;
- (id)password;
- (void)pinView:(id)arg1 pinEntered:(id)arg2;
- (void)pinView:(id)arg1 pinValueChanged:(id)arg2;
- (BOOL)requiresKeyboard;
- (BOOL)resignFirstResponder;
- (void)setKeyboardIsNumeric:(BOOL)arg1;
- (void)setKeyboardUserInteractionEnabled:(BOOL)arg1;
- (void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
- (void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2;
- (void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3;
- (void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 showsOptions:(BOOL)arg4;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)showError:(id)arg1 error:(id)arg2 isBlocked:(BOOL)arg3 animate:(BOOL)arg4;
- (void)showFailedAttempts:(long long)arg1;
- (BOOL)simplePIN;
- (void)slideToNewPasscodeField:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3;
- (void)slideToNewPasscodeField:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 transition:(int)arg4 showsOptionsButton:(BOOL)arg5;
- (void)slideToNewPasscodeField:(BOOL)arg1 withKeyboard:(BOOL)arg2;
- (id)specifierLabel;
- (id)text;
- (void)transitionToSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 showsOptions:(BOOL)arg4;
- (void)transitionViewDidComplete:(id)arg1;

@end


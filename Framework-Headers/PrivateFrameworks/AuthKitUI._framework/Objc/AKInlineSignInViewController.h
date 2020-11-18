//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKBaseSignInViewController.h>

#import <AuthKitUI/AKAppleIDAuthenticationInAppContextPasswordDelegate-Protocol.h>
#import <AuthKitUI/UITextFieldDelegate-Protocol.h>

@class AKAppleIDAuthenticationInAppContext, AKTextField, NSString, UIActivityIndicatorView, UIButton, UIColor, UIView;

@interface AKInlineSignInViewController : AKBaseSignInViewController <UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate>
{
    BOOL _usesDarkMode;
    BOOL _usesVibrancy;
    long long _blurEffectStyle;
    NSString *_secondaryButtonTitle;
    NSString *_tertiaryButtonTitle;
    AKAppleIDAuthenticationInAppContext *_context;
    CDUnknownBlockType _passwordRequiredCompletion;
    BOOL _wantsAuthenticationProgress;
    NSString *_primaryButtonTitle;
    UIColor *_fieldBackgroundColor;
    UIView *_loginFieldsContainer;
    AKTextField *_appleIDField;
    AKTextField *_passwordField;
    UIButton *_signInButton;
    UIButton *_iforgotButton;
    UIButton *_createAppleIDButton;
    UIActivityIndicatorView *_spinner;
}

@property (strong) AKTextField *appleIDField; // @synthesize appleIDField=_appleIDField;
@property (nonatomic) long long blurEffectStyle;
@property (strong) UIButton *createAppleIDButton; // @synthesize createAppleIDButton=_createAppleIDButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIColor *fieldBackgroundColor; // @synthesize fieldBackgroundColor=_fieldBackgroundColor;
@property (readonly) unsigned long long hash;
@property (strong) UIButton *iforgotButton; // @synthesize iforgotButton=_iforgotButton;
@property (strong) UIView *loginFieldsContainer; // @synthesize loginFieldsContainer=_loginFieldsContainer;
@property (strong) AKTextField *passwordField; // @synthesize passwordField=_passwordField;
@property (readonly) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
@property (copy) NSString *secondaryButtonTitle;
@property (strong) UIButton *signInButton; // @synthesize signInButton=_signInButton;
@property (strong) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property (readonly) Class superclass;
@property (copy) NSString *tertiaryButtonTitle;
@property (nonatomic) BOOL usesVibrancy;
@property BOOL wantsAuthenticationProgress; // @synthesize wantsAuthenticationProgress=_wantsAuthenticationProgress;

- (void).cxx_destruct;
- (void)_appleIDTextFieldDidChange:(id)arg1;
- (void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)arg1;
- (void)_hidebusyWorkUI;
- (void)_passwordTextFieldDidChange:(id)arg1;
- (void)_prefillAuthFields;
- (void)_setPasswordFieldHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_startBusyWorkUI;
- (void)_updateFonts:(id)arg1;
- (void)_updatePlaceholderIfNeeded;
- (void)_updateSignInButtonState;
- (void)_updateSignInFieldStatuses;
- (void)_updateVibrancyAndBlurInTextFields;
- (id)context;
- (void)context:(id)arg1 needsPasswordWithCompletion:(CDUnknownBlockType)arg2;
- (void)createAppleIDButtonWasTapped:(id)arg1;
- (void)dealloc;
- (void)iForgotButtonWasTapped:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setSecondaryButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setTertiaryButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setUsesDarkMode:(BOOL)arg1;
- (void)signInButtonWasTapped:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)usesDarkMode;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end


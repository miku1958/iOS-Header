//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import <AuthKitUI/UITextFieldDelegate-Protocol.h>

@class NSString;
@protocol AKBasicLoginAlertControllerDelegate;

@interface AKBasicLoginAlertController : UIAlertController <UITextFieldDelegate>
{
    long long _alertStyle;
    id _codeEntryObserver;
    CDUnknownBlockType _ak_cancelAction;
    CDUnknownBlockType _ak_authenticateAction;
    CDUnknownBlockType _ak_createIDAction;
    CDUnknownBlockType _ak_useIDAction;
    CDUnknownBlockType _ak_forgotIDAction;
    CDUnknownBlockType _ak_forgotPasswordAction;
    NSString *_ak_username;
    NSString *_ak_password;
    NSString *_ak_title;
    NSString *_ak_reason;
    NSString *_ak_authenticateButtonTitle;
    CDUnknownBlockType _ak_regenerateCodeAction;
    CDUnknownBlockType _ak_codeEnteredAction;
    NSString *_generatedCode;
    id<AKBasicLoginAlertControllerDelegate> _delegate;
}

@property (copy, nonatomic) CDUnknownBlockType ak_cancelAction; // @synthesize ak_cancelAction=_ak_cancelAction;
@property (nonatomic) long long alertStyle;
@property (copy, nonatomic) CDUnknownBlockType authenticateAction; // @synthesize authenticateAction=_ak_authenticateAction;
@property (copy, nonatomic) NSString *authenticateButtonTitle; // @synthesize authenticateButtonTitle=_ak_authenticateButtonTitle;
@property (copy, nonatomic) NSString *authenticateTitle; // @synthesize authenticateTitle=_ak_title;
@property (copy, nonatomic) CDUnknownBlockType codeEnteredAction; // @synthesize codeEnteredAction=_ak_codeEnteredAction;
@property (copy, nonatomic) CDUnknownBlockType createIDAction; // @synthesize createIDAction=_ak_createIDAction;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AKBasicLoginAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType forgotIDAction; // @synthesize forgotIDAction=_ak_forgotIDAction;
@property (copy, nonatomic) CDUnknownBlockType forgotPasswordAction; // @synthesize forgotPasswordAction=_ak_forgotPasswordAction;
@property (copy, nonatomic) NSString *generatedCode; // @synthesize generatedCode=_generatedCode;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *password; // @synthesize password=_ak_password;
@property (copy, nonatomic) NSString *reason; // @synthesize reason=_ak_reason;
@property (copy, nonatomic) CDUnknownBlockType regenerateCodeAction; // @synthesize regenerateCodeAction=_ak_regenerateCodeAction;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType useIDAction; // @synthesize useIDAction=_ak_useIDAction;
@property (copy, nonatomic) NSString *username; // @synthesize username=_ak_username;

- (void).cxx_destruct;
- (id)_interpolatedReasonString;
- (void)_jiggleTheAlert;
- (void)_setupAuthenticateAndCancelButtons;
- (void)_setupViewControllerForAlertStyle;
- (void)_setupViewControllerForDefaultStyle;
- (void)_setupViewControllerForIForgotStyle;
- (void)_setupViewControllerForNonEditableUsernameFieldStyle;
- (void)_setupViewControllerForSecondFactorEntryStyle;
- (void)_setupViewControllerForUserOrCreateAppleIDStyle;
- (void)_syncUsernameAndPasswordPropertiesWithTextFieldContent;
- (id)_wrappedCancelAction;
- (void)clearSecondFactorEntry;
- (void)dealloc;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (id)initWithAlertStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setPasscodeFieldDisabled:(BOOL)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end


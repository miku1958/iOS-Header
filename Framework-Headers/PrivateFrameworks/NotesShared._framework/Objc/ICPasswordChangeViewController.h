//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotesShared/ICScrollViewKeyboardResizerDelegate-Protocol.h>
#import <NotesShared/UITextFieldDelegate-Protocol.h>

@class ICLearnMoreTextView, ICPasswordUtilities, ICScrollViewKeyboardResizer, NSArray, NSLayoutConstraint, NSString, UIBarButtonItem, UILabel, UIScrollView, UISwitch, UITextField, UIView;

@interface ICPasswordChangeViewController : UIViewController <ICScrollViewKeyboardResizerDelegate, UITextFieldDelegate>
{
    BOOL _isSetupForChangePassword;
    BOOL _isInSettings;
    BOOL _isSetupForInitialPassword;
    ICScrollViewKeyboardResizer *_scrollViewResizer;
    UIScrollView *_scrollView;
    ICPasswordUtilities *_passwordUtilities;
    UILabel *_headerLabel;
    UILabel *_oldPasswordLabel;
    UILabel *_passwordLabel;
    UILabel *_verifyLabel;
    UILabel *_hintLabel;
    ICLearnMoreTextView *_disclaimerLabel;
    UITextField *_oldPasswordTextField;
    UITextField *_passwordTextField;
    UITextField *_verifyTextField;
    UITextField *_hintTextField;
    NSArray *_orderedTextFields;
    UISwitch *_useTouchIDSwitch;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    NSLayoutConstraint *_oldPasswordHeightConstraint;
    NSLayoutConstraint *_disclaimerHeightConstraint;
    NSLayoutConstraint *_touchIDZeroHeightConstraint;
    long long _incorrectPasswordAttempts;
    UIView *_touchIDContainer;
    CDUnknownBlockType _completionHandler;
}

@property (weak, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSLayoutConstraint *disclaimerHeightConstraint; // @synthesize disclaimerHeightConstraint=_disclaimerHeightConstraint;
@property (weak, nonatomic) ICLearnMoreTextView *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
@property (weak, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property (weak, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property (weak, nonatomic) UITextField *hintTextField; // @synthesize hintTextField=_hintTextField;
@property (nonatomic) long long incorrectPasswordAttempts; // @synthesize incorrectPasswordAttempts=_incorrectPasswordAttempts;
@property (nonatomic) BOOL isInSettings; // @synthesize isInSettings=_isInSettings;
@property (nonatomic) BOOL isSetupForChangePassword; // @synthesize isSetupForChangePassword=_isSetupForChangePassword;
@property (readonly, nonatomic) BOOL isSetupForInitialPassword; // @synthesize isSetupForInitialPassword=_isSetupForInitialPassword;
@property (weak, nonatomic) NSLayoutConstraint *oldPasswordHeightConstraint; // @synthesize oldPasswordHeightConstraint=_oldPasswordHeightConstraint;
@property (weak, nonatomic) UILabel *oldPasswordLabel; // @synthesize oldPasswordLabel=_oldPasswordLabel;
@property (weak, nonatomic) UITextField *oldPasswordTextField; // @synthesize oldPasswordTextField=_oldPasswordTextField;
@property (strong, nonatomic) NSArray *orderedTextFields; // @synthesize orderedTextFields=_orderedTextFields;
@property (readonly, nonatomic) BOOL passwordAndVerifyTextFieldsMatch;
@property (weak, nonatomic) UILabel *passwordLabel; // @synthesize passwordLabel=_passwordLabel;
@property (weak, nonatomic) UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property (strong, nonatomic) ICPasswordUtilities *passwordUtilities; // @synthesize passwordUtilities=_passwordUtilities;
@property (weak, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (strong, nonatomic) ICScrollViewKeyboardResizer *scrollViewResizer; // @synthesize scrollViewResizer=_scrollViewResizer;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *touchIDContainer; // @synthesize touchIDContainer=_touchIDContainer;
@property (weak, nonatomic) NSLayoutConstraint *touchIDZeroHeightConstraint; // @synthesize touchIDZeroHeightConstraint=_touchIDZeroHeightConstraint;
@property (weak, nonatomic) UISwitch *useTouchIDSwitch; // @synthesize useTouchIDSwitch=_useTouchIDSwitch;
@property (weak, nonatomic) UILabel *verifyLabel; // @synthesize verifyLabel=_verifyLabel;
@property (weak, nonatomic) UITextField *verifyTextField; // @synthesize verifyTextField=_verifyTextField;

- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)arg1;
- (double)consumedBottomAreaForResizer:(id)arg1;
- (void)dealloc;
- (id)disclaimerAttributedString;
- (void)doneButtonPressed:(id)arg1;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)keyboardResizerScrollView;
- (void)resetTextFields;
- (void)setUpForChangePassword;
- (void)setUpForInitialPassword;
- (void)setUpNavigationBar;
- (void)setupAccessibility;
- (void)showEnterAPasswordAlert;
- (void)showOldPasswordIsNotCorrectAlert;
- (void)showPasswordsDoNotMatchAlert;
- (void)showSimpleAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showUnableToSetPasswordAlert;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (double)topInsetForResizer:(id)arg1;
- (BOOL)validateInput;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

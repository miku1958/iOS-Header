//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

#import <VideoSubscriberAccount/VSCredentialEntryViewController-Protocol.h>

@class NSArray, NSString, UIButton, UIProgressHUD, VSCredentialEntryViewModel, VSIdentityProviderLogoView, VSViewModel;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryViewController_iOS : ACUIViewController <VSCredentialEntryViewController>
{
    BOOL _cancellationAllowed;
    VSCredentialEntryViewModel *_viewModel;
    id<VSAuthenticationViewControllerDelegate> _delegate;
    VSIdentityProviderLogoView *_logoView;
    UIButton *_linkButton;
    UIProgressHUD *_deletingAccountHUD;
    NSArray *_credentialEntryFieldSpecifiers;
    double _keyboardHeight;
    id _textFieldTextDidChangeObserver;
    id _keyboardWillShowObserver;
    id _keyboardWillHideObserver;
}

@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
@property (strong, nonatomic) NSArray *credentialEntryFieldSpecifiers; // @synthesize credentialEntryFieldSpecifiers=_credentialEntryFieldSpecifiers;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIProgressHUD *deletingAccountHUD; // @synthesize deletingAccountHUD=_deletingAccountHUD;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property (weak, nonatomic) id keyboardWillHideObserver; // @synthesize keyboardWillHideObserver=_keyboardWillHideObserver;
@property (weak, nonatomic) id keyboardWillShowObserver; // @synthesize keyboardWillShowObserver=_keyboardWillShowObserver;
@property (strong, nonatomic) UIButton *linkButton; // @synthesize linkButton=_linkButton;
@property (strong, nonatomic) VSIdentityProviderLogoView *logoView; // @synthesize logoView=_logoView;
@property (readonly, nonatomic) struct CGSize preferredLogoSize;
@property (readonly) Class superclass;
@property (weak, nonatomic) id textFieldTextDidChangeObserver; // @synthesize textFieldTextDidChangeObserver=_textFieldTextDidChangeObserver;
@property (readonly, nonatomic) VSViewModel *viewModel;

- (void).cxx_destruct;
- (id)_credentialEntryFieldForSpecifier:(id)arg1;
- (void)_deleteAccountButtonTapped:(id)arg1;
- (void)_hideDeletingAccountHUD;
- (void)_linkButtonTapped:(id)arg1;
- (id)_linkURL;
- (void)_presentError:(id)arg1;
- (void)_setText:(id)arg1 forSpecifier:(id)arg2;
- (void)_showDeletingAccountHUD;
- (void)_showNavigationBarButtons;
- (id)_specifierForTextField:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_startValidation;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_stopValidationAndShowButtons:(BOOL)arg1;
- (id)_textFieldForSpecifier:(id)arg1;
- (id)_textForSpecifier:(id)arg1;
- (void)_updateLinkButtonLayout;
- (void)cancelButtonTapped:(id)arg1;
- (void)dealloc;
- (void)doneButtonPressed:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AppleAccountUI/AKAppleIDAuthenticationInAppContextPasswordDelegate-Protocol.h>
#import <AppleAccountUI/RemoteUIControllerDelegate-Protocol.h>
#import <AppleAccountUI/UITableViewDataSource-Protocol.h>
#import <AppleAccountUI/UITableViewDelegate-Protocol.h>
#import <AppleAccountUI/UITextFieldDelegate-Protocol.h>

@class AAUIBuddyView, AAUIHeaderView, NSArray, NSString, UILabel, UITableView, UITableViewCell, UITableViewHeaderFooterView;
@protocol AAUISignInViewControllerDelegate;

@interface AAUISignInViewController : UIViewController <AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    UITableView *_tableView;
    UITableViewCell *_usernameCell;
    UITableViewCell *_passwordCell;
    UITableViewHeaderFooterView *_tableHeaderView;
    AAUIHeaderView *_accountsHeaderView;
    UITableViewHeaderFooterView *_tableFooterView;
    NSArray *_compactConstraints;
    NSArray *_expandedConstraints;
    CDUnknownBlockType _passwordHandler;
    BOOL _shouldAnticipatePiggybacking;
    BOOL _allowsAccountCreation;
    BOOL _showServiceIcons;
    long long _akServiceType;
    id<AAUISignInViewControllerDelegate> _delegate;
}

@property (nonatomic, setter=_setAkServiceType:) long long _akServiceType; // @synthesize _akServiceType;
@property (nonatomic, setter=_setShouldAnticipatePiggybacking:) BOOL _shouldAnticipatePiggybacking; // @synthesize _shouldAnticipatePiggybacking;
@property (nonatomic) BOOL allowsAccountCreation; // @synthesize allowsAccountCreation=_allowsAccountCreation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUISignInViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UILabel *messageLabel;
@property (nonatomic) BOOL showServiceIcons; // @synthesize showServiceIcons=_showServiceIcons;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (strong, nonatomic) AAUIBuddyView *view; // @dynamic view;

+ (void)phoneNumberSupportedWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)_accountsHeaderView;
- (void)_actionButtonSelected:(id)arg1;
- (void)_attemptAuthentication;
- (void)_attemptAuthenticationWithContext:(id)arg1;
- (id)_authorizationValueForAuthenticationResults:(id)arg1;
- (void)_beginObservingKeyboardWillShowNotifications;
- (void)_beginObservingSizeCategoryNotification;
- (void)_beginObservingTextFieldDidChangeNotifications;
- (id)_cancelBarButtonItem;
- (void)_cancelButtonSelected:(id)arg1;
- (void)_cancelPasswordDelegateIfNecessary;
- (void)_delegate_signInViewControllerDidCancel;
- (void)_delegate_signInViewControllerDidCompleteWithAuthenticationResults:(id)arg1;
- (void)_endObservingKeyboardWillShowNotifications;
- (void)_endObservingSizeCategoryNotification;
- (void)_endObservingTextFieldDidChangeNotifications;
- (BOOL)_hasValidCredentials;
- (BOOL)_isGreenTeaCapable;
- (BOOL)_isPasswordFieldVisible;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_nextBarButtonItem;
- (void)_nextButtonSelected:(id)arg1;
- (id)_passwordCell;
- (id)_passwordFieldIndexPath;
- (void)_presentCreateAppleIDPane;
- (void)_presentForgotAppleIDPane;
- (void)_prewarmSignInFlowIfApplicable;
- (void)_repairCloudAccountWithAuthenticationResults:(id)arg1;
- (void)_setEnabled:(BOOL)arg1;
- (void)_setPasswordFieldHidden:(BOOL)arg1;
- (void)_setUsernameCellWaiting:(BOOL)arg1;
- (id)_stringForFooter;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (id)_tableView;
- (void)_textFieldDidChange:(id)arg1;
- (void)_updateConstraintsForTraitCollection:(id)arg1;
- (void)_updateContentInsetWithHeight:(double)arg1;
- (id)_usernameCell;
- (id)authenticationContext;
- (void)constrainView:(id)arg1 toFillHeaderFooterView:(id)arg2;
- (void)context:(id)arg1 needsPasswordWithCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)sizeCategoryDidChange:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

#import <DataAccessUI/DAValidityCheckConsumer-Protocol.h>
#import <DataAccessUI/UIActionSheetDelegate-Protocol.h>
#import <DataAccessUI/UIAlertViewDelegate-Protocol.h>

@class DAAccount, NSString;

@interface DASettingsAccountsUIController : ACUIViewController <DAValidityCheckConsumer, UIActionSheetDelegate, UIAlertViewDelegate>
{
    DAAccount *_account;
    BOOL _didSetFullHostURL;
    BOOL _needsSave;
    BOOL _attemptedValidation;
    BOOL _isSettingUpNewAccount;
    BOOL _accountNeedsAdd;
    BOOL _validatedSuccessfully;
    BOOL _confirmedUnvalidatedAccount;
    BOOL _haveRegisteredForAccountsChanged;
    BOOL _transitioningToFinishedAccountSetup;
}

@property (strong, nonatomic) DAAccount *account; // @synthesize account=_account;
@property (nonatomic) BOOL accountNeedsAdd; // @synthesize accountNeedsAdd=_accountNeedsAdd;
@property (nonatomic) BOOL attemptedValidation; // @synthesize attemptedValidation=_attemptedValidation;
@property (nonatomic) BOOL confirmedUnvalidatedAccount; // @synthesize confirmedUnvalidatedAccount=_confirmedUnvalidatedAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetFullHostURL; // @synthesize didSetFullHostURL=_didSetFullHostURL;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL haveRegisteredForAccountsChanged; // @synthesize haveRegisteredForAccountsChanged=_haveRegisteredForAccountsChanged;
@property (nonatomic) BOOL isSettingUpNewAccount; // @synthesize isSettingUpNewAccount=_isSettingUpNewAccount;
@property (nonatomic) BOOL needsSave; // @synthesize needsSave=_needsSave;
@property (readonly) Class superclass;
@property (nonatomic) BOOL transitioningToFinishedAccountSetup; // @synthesize transitioningToFinishedAccountSetup=_transitioningToFinishedAccountSetup;
@property (nonatomic) BOOL validatedSuccessfully; // @synthesize validatedSuccessfully=_validatedSuccessfully;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (void)_beginAccountValidation;
- (void)_confirmSaveUnvalidatedAccount;
- (id)_defaultAccountDescription;
- (void)_deleteAccount;
- (void)_dismissAndUpdateParent;
- (void)_finishSaveAccountDismissWhenDone:(BOOL)arg1;
- (void)_saveAccountDismissWhenDone:(BOOL)arg1;
- (void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3;
- (id)accountBooleanPropertyWithSpecifier:(id)arg1;
- (id)accountFromSpecifier;
- (id)accountPropertyWithSpecifier:(id)arg1;
- (id)accountSpecifiers;
- (void)cancelButtonTapped:(id)arg1;
- (id)currentlyEditingCell;
- (id)daAccountWithBackingAccountInfo:(id)arg1;
- (void)dealloc;
- (void)deleteAccountButtonTapped;
- (void)didConfirmSaveUnvalidatedAccount:(BOOL)arg1;
- (void)didConfirmTryWithoutSSL:(BOOL)arg1;
- (BOOL)dismissesAfterInitialSetup;
- (void)doneButtonTapped:(id)arg1;
- (void)finishedAccountSetup;
- (BOOL)haveEnoughValues;
- (void)hideProgressWithPrompt:(id)arg1;
- (int)indexOfCurrentlyEditingCell;
- (BOOL)isRunningFromMobileMailApp;
- (id)lastGroupSpecifierInSpecifiers:(id)arg1;
- (id)localizedAccountSetupTitleString;
- (id)localizedAccountTitleString;
- (id)localizedConfirmSaveUnvalidatedAccountMessageString;
- (id)localizedConfirmSaveUnvalidatedAccountTitleString;
- (id)localizedValidationFailureTitleString;
- (id)newDefaultAccount;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)propertyValueChanged:(id)arg1;
- (void)reloadAccount;
- (void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)setHostString:(id)arg1;
- (void)setNeedsSaveAndValidation:(BOOL)arg1;
- (void)showIdenticalAccountFailureView;
- (void)showSSLFailureView;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)transitionsAfterInitialSetup;
- (void)updateDoneButton;
- (BOOL)validateAccount;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController
{
    DAAccount *_daAccount;
    BOOL _haveRegisteredForAccountsChanged;
}

@property (strong, nonatomic) DAAccount *daAccount; // @synthesize daAccount=_daAccount;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (void)_listenForAccountsChangedNotifications;
- (id)_navTitle;
- (id)accountDescriptionForFirstTimeSetup;
- (id)accountFromSpecifier;
- (Class)accountInfoControllerClass;
- (void)cancelButtonClicked:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (id)otherSpecifiers;
- (void)reloadAccount;
- (BOOL)shouldVerifyBeforeAccountSave;
- (id)specifiers;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <MediaSocial/UITableViewDataSource-Protocol.h>
#import <MediaSocial/UITableViewDelegate-Protocol.h>
#import <MediaSocial/UITextFieldDelegate-Protocol.h>

@class MSCLAccount, MSCLAccountStore, MSCLSettingsTableViewCell, MSCLSettingsTextFieldTableViewCell, NSString, UITableView;

@interface MSCLManageAccountViewController : SKUIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    MSCLAccount *_account;
    MSCLAccountStore *_accountStore;
    MSCLSettingsTableViewCell *_deleteAccountButtonCell;
    BOOL _isVerifying;
    MSCLSettingsTextFieldTableViewCell *_passwordCell;
    UITableView *_tableView;
    MSCLSettingsTextFieldTableViewCell *_userNameCell;
}

@property (readonly, nonatomic) MSCLAccount *account; // @synthesize account=_account;
@property (readonly, nonatomic) MSCLAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonAction:(id)arg1;
- (void)_deleteAccount;
- (id)_deleteConfirmationMessage;
- (void)_doneButtonAction:(id)arg1;
- (void)_finishVerifyWithAccount:(id)arg1 error:(id)arg2;
- (void)_setVerifying:(BOOL)arg1;
- (void)_textFieldDidChangeNotification:(id)arg1;
- (void)_verifyPassword:(id)arg1;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewWillLayoutSubviews;

@end

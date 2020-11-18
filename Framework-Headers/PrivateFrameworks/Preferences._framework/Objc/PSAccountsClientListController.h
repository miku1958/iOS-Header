//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSAccountsClientListController : PSListController
{
    BOOL _noAccountsSetUp;
    BOOL _showExtraVC;
    PSSpecifier *_accountSpecifier;
    id _acObserver;
}

- (void).cxx_destruct;
- (BOOL)_isAccountModificationDisabledByRestrictions;
- (id)_visibleAccountTypeIDs;
- (void)dealloc;
- (id)init;
- (id)requestedAccountDataclass;
- (void)setSpecifiers:(id)arg1;
- (id)specifierForID:(id)arg1;
- (void)updateAccountSpecifier;
- (void)viewWillAppear:(BOOL)arg1;

@end

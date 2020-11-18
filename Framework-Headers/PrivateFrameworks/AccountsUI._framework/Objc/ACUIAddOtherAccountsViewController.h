//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <AccountsUI/ACUISetupViewControllerDelegate-Protocol.h>
#import <AccountsUI/ACUISignInControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ACUIAddOtherAccountsViewController : PSListController <ACUISetupViewControllerDelegate, ACUISignInControllerDelegate>
{
    NSString *_filteredDataclass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_specifiersForOtherCalendarAccounts;
- (id)_specifiersForOtherContactsAccounts;
- (id)_specifiersForOtherMailAccounts;
- (id)_viewProvidersManager;
- (void)setSpecifier:(id)arg1;
- (void)setupViewControllerDidDismiss:(id)arg1;
- (id)specifiers;

@end

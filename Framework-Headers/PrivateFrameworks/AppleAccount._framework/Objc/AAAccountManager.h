//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject
{
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id _accountStoreDidChangeObserver;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_accountStore;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)_removeAppleIDCertsForUsername:(id)arg1;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (id)accountWithIdentifier:(id)arg1;
- (id)accountWithPersonID:(id)arg1;
- (id)accountWithUsername:(id)arg1;
- (id)accounts;
- (id)accountsEnabledForDataclass:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)dealloc;
- (id)primaryAccount;
- (void)reloadAccounts;
- (void)removeAccount:(id)arg1;
- (void)saveAllAccounts;
- (void)updateAccount:(id)arg1;

@end


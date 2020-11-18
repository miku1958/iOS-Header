//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccountStore.h>

@class ACAccount, NSArray;

@interface ACAccountStore (ICAccountStoreAdditions)

@property (strong, nonatomic, setter=ic_setActiveLockerAccount:) ACAccount *ic_activeLockerAccount;
@property (strong, nonatomic, setter=ic_setActiveStoreAccount:) ACAccount *ic_activeStoreAccount;
@property (readonly, copy, nonatomic) NSArray *ic_allStoreAccounts;
@property (readonly, nonatomic) ACAccount *ic_primaryAppleAccount;

+ (id)ic_sharedAccountStore;
- (id)_ic_storeAccountType;
- (id)ic_storeAccountForStoreAccountID:(id)arg1;
@end


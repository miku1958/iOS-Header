//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSArray;

@interface PSAccountEnumerator : NSObject
{
    NSArray *_accounts;
    ACAccountStore *_accountStore;
    id _accountStoreDidChangeObserver;
}

@property (readonly, nonatomic) NSArray *accounts;

- (void).cxx_destruct;
- (id)_accountStore;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)_loadAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (id)_visibleAccountTypeIDs;
- (id)accountsForcingRefresh:(BOOL)arg1;
- (void)dealloc;

@end

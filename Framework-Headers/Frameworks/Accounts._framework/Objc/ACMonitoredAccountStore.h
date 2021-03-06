//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccountStore.h>

#import <Accounts/ACRemoteAccountStoreSessionDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSSet, NSString;
@protocol ACMonitoredAccountStoreDelegateProtocol, NSObject;

@interface ACMonitoredAccountStore : ACAccountStore <ACRemoteAccountStoreSessionDelegate>
{
    NSSet *_accountTypesToMonitor;
    NSMutableDictionary *_accountsByID;
    id<ACMonitoredAccountStoreDelegateProtocol> _delegate;
    id<NSObject> _credentialsDidChangeObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *monitoredAccounts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountsListPopulated:(id)arg1;
- (void)_processAccountsListForNotifications:(id)arg1;
- (void)_registerAccountMonitorSynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (void)_registerAccountMonitorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_registerForCredentialChangedNotifications;
- (void)_reregister;
- (void)accountWasAdded:(id)arg1;
- (void)accountWasModified:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (void)connectionClosed;
- (id)connectionDelegate;
- (void)credentialsChangedNotification:(id)arg1;
- (void)dealloc;
- (id)initWithAccountTypes:(id)arg1 delegate:(id)arg2;
- (id)initWithWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2 accountTypes:(id)arg3 delegate:(id)arg4;
- (id)monitoredAccountWithIdentifier:(id)arg1;
- (void)registerSynchronouslyWithError:(id *)arg1;
- (void)registerWithCompletion:(CDUnknownBlockType)arg1;

@end


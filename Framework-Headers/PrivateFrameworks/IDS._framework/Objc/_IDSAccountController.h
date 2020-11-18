//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface _IDSAccountController : NSObject <IDSDaemonListenerProtocol>
{
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    NSString *_serviceToken;
    NSString *_service;
    NSMutableSet *_cachedAccounts;
    NSMutableSet *_enabledAccounts;
    NSMutableDictionary *_transactionIDToHandlersMap;
    BOOL _accountsLoaded;
    BOOL _isLocalAccountVisible;
}

@property (readonly, strong, nonatomic) NSSet *accounts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) NSSet *enabledAccounts;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;

- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;
- (void)_connect;
- (void)_loadCachedAccounts;
- (void)_loadCachedAccountsWithDictionaries:(id)arg1;
- (void)_removeAccount:(id)arg1;
- (void)_removeAndDeregisterAccount:(id)arg1;
- (void)_setupAccountWithLoginID:(id)arg1 accountConfig:(id)arg2 authToken:(id)arg3 password:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_updateDelegatesWithOldAccounts:(id)arg1 newAccounts:(id)arg2;
- (void)_updateLocalAccountVisibility;
- (void)accountAdded:(id)arg1;
- (void)accountDisabled:(id)arg1 onService:(id)arg2;
- (void)accountEnabled:(id)arg1 onService:(id)arg2;
- (void)accountRemoved:(id)arg1;
- (void)accountUpdated:(id)arg1;
- (id)accountWithLoginID:(id)arg1 service:(id)arg2;
- (id)accountWithUniqueID:(id)arg1;
- (void)accountsChanged:(id)arg1 forTopic:(id)arg2;
- (void)addAccount:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)daemonDisconnected;
- (void)dealloc;
- (void)disableAccount:(id)arg1;
- (void)enableAccount:(id)arg1;
- (id)initWithService:(id)arg1 delegateContext:(id)arg2;
- (id)internalAccounts;
- (void)removeDelegate:(id)arg1;
- (void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 aliases:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupCompleteForAccount:(id)arg1 transactionID:(id)arg2 setupError:(id)arg3;

@end


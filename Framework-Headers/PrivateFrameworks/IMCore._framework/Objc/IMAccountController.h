//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAccount, NSArray, NSMutableDictionary;

@interface IMAccountController : NSObject
{
    NSMutableDictionary *_accountMap;
    BOOL _isReadOnly;
    BOOL _cachesEnabled;
    NSArray *_operationalAccountsCache;
    NSMutableDictionary *_serviceToActiveAccountsMap;
    NSMutableDictionary *_serviceToAccountsMap;
    NSMutableDictionary *_serviceToConnectedAccountsMap;
    NSMutableDictionary *_serviceToOperationalAccountsMap;
    BOOL _networkDataAvailable;
    NSArray *_accounts;
}

@property (copy) NSArray *accounts; // @synthesize accounts=_accounts;
@property (readonly, nonatomic) NSArray *activeAccounts;
@property (readonly, nonatomic) IMAccount *activeIMessageAccount;
@property (readonly, nonatomic) IMAccount *activeSMSAccount;
@property (readonly, nonatomic) id bestAccountForStatus;
@property (readonly, nonatomic) NSArray *connectedAccounts;
@property (nonatomic) BOOL networkDataAvailable; // @synthesize networkDataAvailable=_networkDataAvailable;
@property (readonly, nonatomic) int numberOfAccounts;
@property (readonly, nonatomic) NSArray *operationalAccounts;

+ (id)bestAccountFromAccounts:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)__iCloudSystemAccountForService:(id)arg1;
- (void)_accountRegistrationStatusChanged:(id)arg1;
- (void)_activeAccountChanged:(id)arg1;
- (id)_bestAccountForAddresses:(id)arg1;
- (id)_bestOperationalAccountForSendingForService:(id)arg1;
- (BOOL)_deactivateAccount:(id)arg1;
- (BOOL)_deactivateAccounts:(id)arg1;
- (void)_disableCache;
- (void)_enableCache;
- (void)_rebuildOperationalAccountsCache:(BOOL)arg1;
- (void)_requestNetworkDataAvailability;
- (BOOL)_shouldPerformDeferredSetup;
- (BOOL)accountActive:(id)arg1;
- (id)accountAtIndex:(int)arg1;
- (BOOL)accountConnected:(id)arg1;
- (BOOL)accountConnecting:(id)arg1;
- (id)accountForUniqueID:(id)arg1;
- (id)accountsForService:(id)arg1;
- (id)accountsWithCapability:(unsigned long long)arg1;
- (BOOL)activateAccount:(id)arg1;
- (BOOL)activateAccount:(id)arg1 force:(BOOL)arg2;
- (BOOL)activateAccount:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3;
- (BOOL)activateAccount:(id)arg1 locally:(BOOL)arg2;
- (BOOL)activateAccounts:(id)arg1;
- (BOOL)activateAccounts:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3;
- (BOOL)activateAndHandleReconnectAccount:(id)arg1;
- (BOOL)activateAndHandleReconnectAccounts:(id)arg1;
- (long long)activeAccountsAreEligibleForAppleSMSFilter;
- (long long)activeAccountsAreEligibleForHawking;
- (long long)activeAccountsAreEligibleForUnknownSendersFiltering;
- (id)activeAccountsForService:(id)arg1;
- (BOOL)addAccount:(id)arg1;
- (BOOL)addAccount:(id)arg1 atIndex:(int)arg2;
- (BOOL)addAccount:(id)arg1 atIndex:(int)arg2 locally:(BOOL)arg3;
- (BOOL)addAccount:(id)arg1 locally:(BOOL)arg2;
- (id)aimAccount;
- (void)autoLogin;
- (id)bestAccountForService:(id)arg1;
- (id)bestAccountForService:(id)arg1 login:(id)arg2 guid:(id)arg3;
- (id)bestAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestAccountWithCapability:(unsigned long long)arg1;
- (id)bestActiveAccountForService:(id)arg1;
- (id)bestActiveAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestConnectedAccountForService:(id)arg1;
- (id)bestConnectedAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestOperationalAccountForService:(id)arg1;
- (id)bestOperationalAccountForService:(id)arg1 withLogin:(id)arg2;
- (BOOL)canActivateAccount:(id)arg1;
- (BOOL)canActivateAccounts:(id)arg1;
- (BOOL)canDeleteAccount:(id)arg1;
- (id)connectedAccountsForService:(id)arg1;
- (id)connectedAccountsWithCapability:(unsigned long long)arg1;
- (BOOL)deactivateAccount:(id)arg1;
- (BOOL)deactivateAccount:(id)arg1 withDisable:(BOOL)arg2;
- (BOOL)deactivateAccounts:(id)arg1;
- (BOOL)deactivateAccounts:(id)arg1 withDisable:(BOOL)arg2;
- (void)dealloc;
- (void)deferredSetup;
- (BOOL)deleteAccount:(id)arg1;
- (BOOL)deleteAccount:(id)arg1 locally:(BOOL)arg2;
- (id)iMessageAccountForLastAddressedHandle:(id)arg1 simID:(id)arg2;
- (id)init;
- (id)jabberAccount;
- (BOOL)metionedHandleMatchesMeCard:(id)arg1;
- (id)mostLoggedInAccount;
- (id)operationalAccountsForService:(id)arg1;
- (id)operationalAccountsWithCapability:(unsigned long long)arg1;
- (BOOL)readOnly;
- (BOOL)receiverIsMyMention:(id)arg1;
- (void)setReadOnly:(BOOL)arg1;

@end


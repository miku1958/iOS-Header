//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface IMDAccountController : NSObject
{
    NSMutableDictionary *_accounts;
    NSMutableDictionary *_activeAccounts;
    BOOL _isLoading;
    BOOL _isFirstLoad;
}

@property (readonly, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) NSArray *activeAccounts;
@property (readonly, nonatomic) NSArray *activeSessions;
@property (readonly, nonatomic) NSArray *connectedAccounts;
@property (readonly, nonatomic) NSArray *connectingAccounts;
@property (readonly, nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property (readonly, nonatomic) NSDictionary *loadOldStatusStore;

+ (id)sharedAccountController;
+ (id)sharedInstance;
- (void)_checkPowerAssertion;
- (void)_daemonWillShutdown:(id)arg1;
- (BOOL)_isAccountActive:(id)arg1 forService:(id)arg2;
- (id)_superFormatFromAIML:(id)arg1;
- (id)accountForAccountID:(id)arg1;
- (id)accountForIDSAccountUniqueID:(id)arg1;
- (id)accountsForLoginID:(id)arg1 onService:(id)arg2;
- (id)accountsForService:(id)arg1;
- (void)activateAccount:(id)arg1;
- (void)activateAccounts:(id)arg1;
- (id)activeAccountsForService:(id)arg1;
- (void)addAccount:(id)arg1;
- (id)anySessionForServiceName:(id)arg1;
- (id)connectedAccountsForService:(id)arg1;
- (id)connectingAccountsForService:(id)arg1;
- (void)deactivateAccount:(id)arg1;
- (void)deactivateAccount:(id)arg1 force:(BOOL)arg2;
- (void)deactivateAccounts:(id)arg1;
- (void)deactivateAccounts:(id)arg1 force:(BOOL)arg2;
- (void)dealloc;
- (void)deferredSave;
- (id)init;
- (BOOL)isAccountActive:(id)arg1;
- (void)load;
- (void)removeAccount:(id)arg1;
- (void)save;
- (id)sessionForAccount:(id)arg1;
- (void)setupAccount:(id)arg1;

@end


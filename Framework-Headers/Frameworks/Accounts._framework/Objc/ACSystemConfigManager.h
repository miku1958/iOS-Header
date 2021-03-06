//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ACSystemConfigManager : NSObject
{
    NSObject<OS_dispatch_queue> *_preferencesQueue;
    struct __SCPreferences *_preferencesSession;
    int _applySkipCount;
}

+ (id)_livingInstance;
+ (void)_scheduleSharedInstanceTeardown;
+ (void)_tearDown;
+ (unsigned long long)_timeoutInterval;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_createSCPreferencesSession;
- (void)_destroySCPreferencesSession;
- (void *)_getValueForKey:(id)arg1;
- (void)_handleSCPreferencesSessionNotification:(unsigned int)arg1;
- (void)_setValue:(void *)arg1 forKey:(id)arg2;
- (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
- (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setAccountsWithAccountTypeIdentifier:(id)arg1 exist:(BOOL)arg2;
- (void)setCountOfAccounts:(long long)arg1 withAccountTypeIdentifier:(id)arg2;

@end


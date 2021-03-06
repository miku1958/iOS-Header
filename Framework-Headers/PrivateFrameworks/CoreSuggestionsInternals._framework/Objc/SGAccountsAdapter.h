//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGAccountsAdapter : NSObject
{
    NSSet *_usernamesCache;
    ACAccountStore *_accountStore;
    NSString *_cachedPrimaryICloudAccount;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_source> *_updateSource;
    BOOL _updateTimerIsSet;
    NSObject<OS_dispatch_queue> *_updateTimerQueue;
    NSObject<OS_dispatch_source> *_updateTimerSource;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)accountsStoreDidChange:(id)arg1;
- (void)cancelUpdateTimer;
- (void)dealloc;
- (BOOL)hasCalendarAccount:(id)arg1;
- (id)init;
- (id)primaryICloudCalendarAccount;
- (BOOL)readCachedAccounts;
- (void)refreshCacheFromAccountsService;
- (void)registerNotificationObserver;
- (void)removeNotificationObserver;
- (id)serverIdentifierForAccount:(id)arg1;
- (void)setCachedAccounts;
- (void)setUpdateTimerWithDelaySeconds:(unsigned long long)arg1;

@end


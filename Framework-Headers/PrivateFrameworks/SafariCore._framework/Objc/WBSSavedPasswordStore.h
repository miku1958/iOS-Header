//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, WBSKeychainCredentialNotificationMonitor;

@interface WBSSavedPasswordStore : NSObject
{
    NSMutableDictionary *_domainToUsers;
    NSArray *_savedPasswords;
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    id _keychainNotificationRegistrationToken;
    BOOL _hasPasswordsEligibleForAutoFill;
}

@property (readonly, nonatomic) BOOL hasPasswordsEligibleForAutoFill; // @synthesize hasPasswordsEligibleForAutoFill=_hasPasswordsEligibleForAutoFill;
@property (readonly, nonatomic) NSArray *savedPasswords;

+ (void)removePassword:(id)arg1;
+ (id)savedPasswordForURL:(id)arg1 user:(id)arg2 password:(id)arg3;
+ (id)sharedStore;
- (void).cxx_destruct;
- (id)_allInternetPasswordEntriesFromKeychain;
- (void)_postSavedPasswordStoreDidChangeNotification;
- (void)_removePassword:(id)arg1;
- (BOOL)canChangeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (BOOL)canSaveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4;
- (BOOL)changeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)removePassword:(id)arg1;
- (void)removeSite:(id)arg1 fromPassword:(id)arg2;
- (void)reset;
- (id)saveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4;

@end


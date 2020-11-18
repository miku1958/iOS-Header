//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable
{
    NSMutableDictionary *_addressBookCache;
}

@property (strong) NSMutableDictionary *addressBookCache; // @synthesize addressBookCache=_addressBookCache;

+ (id)get;
- (void).cxx_destruct;
- (void)cleanUpAddressBookCache_sync;
- (void)dealloc;
- (id)description;
- (id)fetchAddressBookInfoFromCacheForKey:(id)arg1;
- (id)init;
- (void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2;
- (void)registerForContactsNotifications;
- (void)revertAddressBook:(id)arg1;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)arg1;

@end

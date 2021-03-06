//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDSAgent/PDSCDCache-Protocol.h>
#import <PDSAgent/PDSKVStore-Protocol.h>

@class NSPersistentContainer, NSString, NSURL;

@interface PDSCDCacheContainer : NSObject <PDSCDCache, PDSKVStore>
{
    NSPersistentContainer *_container;
    NSURL *_containingPath;
}

@property (weak, nonatomic) NSPersistentContainer *container; // @synthesize container=_container;
@property (strong, nonatomic) NSURL *containingPath; // @synthesize containingPath=_containingPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_KVEntryForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_cdRegistrationsMatchingEntry:(id)arg1 inContext:(id)arg2;
- (id)_cdRegistrationsMatchingUser:(id)arg1 withClientID:(id)arg2 inContext:(id)arg3;
- (id)_cdUsersMatchingUserID:(id)arg1 userType:(short)arg2 inContext:(id)arg3;
- (BOOL)_deleteEntry:(id)arg1 context:(id)arg2 withError:(id *)arg3;
- (id)_entriesFromRegistrations:(id)arg1 inContext:(id)arg2;
- (id)_loadUsersIncludingOnlyActive:(BOOL)arg1;
- (BOOL)_storeEntry:(id)arg1 transitionBlock:(CDUnknownBlockType)arg2 context:(id)arg3 withError:(id *)arg4;
- (void)_syncBlockWithContext:(CDUnknownBlockType)arg1;
- (BOOL)_updateAllEntriesWithState:(unsigned char)arg1 toState:(unsigned char)arg2 withError:(id *)arg3;
- (BOOL)_updateEntryState:(unsigned char)arg1 forUser:(id)arg2 clientID:(id)arg3 withError:(id *)arg4;
- (id)_usersForClientID:(id)arg1 activeOnly:(BOOL)arg2;
- (id)allStoredValues;
- (id)dataForKey:(id)arg1;
- (BOOL)deleteEntriesForUser:(id)arg1 withState:(unsigned char)arg2 withError:(id *)arg3;
- (BOOL)deleteEntry:(id)arg1 withError:(id *)arg2;
- (BOOL)hasActiveEntries;
- (BOOL)hasPendingEntries;
- (id)initWithContainingPath:(id)arg1;
- (id)loadAllActiveUsers;
- (id)loadAllActiveUsersForClientID:(id)arg1;
- (id)loadAllEntries;
- (id)loadAllEntriesForClientID:(id)arg1;
- (id)loadAllEntriesUser:(id)arg1;
- (id)loadAllEntriesUser:(id)arg1 withClientID:(id)arg2;
- (id)loadAllUsers;
- (id)loadAllUsersForClientID:(id)arg1;
- (id)loadPendingEntries;
- (id)loadWithError:(id *)arg1;
- (id)numberForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (BOOL)storeEntries:(id)arg1 transitionBlock:(CDUnknownBlockType)arg2 deleteEntries:(id)arg3 withError:(id *)arg4;
- (BOOL)storeEntry:(id)arg1 transitionBlock:(CDUnknownBlockType)arg2 withError:(id *)arg3;
- (BOOL)storeEntry:(id)arg1 withError:(id *)arg2;
- (id)stringForKey:(id)arg1;
- (BOOL)updateAllEntriesWithState:(unsigned char)arg1 toState:(unsigned char)arg2 withError:(id *)arg3;
- (BOOL)updateEntryState:(unsigned char)arg1 forUser:(id)arg2 clientID:(id)arg3 withError:(id *)arg4;
- (BOOL)updateEntryState:(unsigned char)arg1 forUser:(id)arg2 withError:(id *)arg3;

@end


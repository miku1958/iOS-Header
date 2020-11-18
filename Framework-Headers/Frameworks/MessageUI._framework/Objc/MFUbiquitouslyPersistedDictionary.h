//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageUI/MFMutableDictionaryProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

@interface MFUbiquitouslyPersistedDictionary : NSObject <MFMutableDictionaryProtocol>
{
    NSString *_identifier;
    NSUbiquitousKeyValueStore *_kvStore;
    NSMutableDictionary *_storedObjects;
    NSObject<OS_dispatch_queue> *_mutationQueue;
    NSString *_plistPath;
}

@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *plistPath; // @synthesize plistPath=_plistPath;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;

+ (id)sharedDictionaryWithIdentifier:(id)arg1;
- (void)_ensureStoredObjectsAreInKVStore;
- (void)_mergeKVStoreChangedKeys:(id)arg1;
- (void)_purgeOldestEntries;
- (void)_resetKVStore;
- (void)_storeChangedExternally:(id)arg1;
- (void)_synchronize;
- (void)_writeToPlist;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end


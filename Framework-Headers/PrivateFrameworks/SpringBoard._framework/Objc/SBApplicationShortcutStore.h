//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSApplicationDataStore, NSArray, NSLock, NSString;
@protocol OS_dispatch_queue;

@interface SBApplicationShortcutStore : NSObject
{
    NSLock *_stateLock;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSArray *_cachedApplicationShortcutItems;
    NSArray *_cachedLanguages;
    unsigned long long _cachedVersion;
    BOOL _isLoaded;
    BOOL _isDirty;
    FBSApplicationDataStore *_dataStore;
    NSString *_bundleIdentifier;
}

@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *languages;
@property (readonly, nonatomic) unsigned long long version;

+ (void)clearStore;
- (void).cxx_destruct;
- (id)_applicationShortcutItemsFromPlistArray:(id)arg1;
- (id)_plistArrayFromApplicationShortcutItems:(id)arg1;
- (void)_saveQueue_save;
- (void)_stateLock_loadFromStoreIfNeeded;
- (void)_stateLock_markDirty;
- (BOOL)_stateLock_truncateIfNeeded:(id)arg1;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)invalidateCache;
- (void)saveSynchronously;
- (void)setApplicationShortcutItems:(id)arg1 withLanguages:(id)arg2 version:(unsigned long long)arg3;
- (void)truncateIfNecessary;

@end


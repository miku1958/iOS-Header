//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface SBApplicationShortcutStoreManager : NSObject
{
    NSLock *_stateLock;
    NSMutableDictionary *_storesKeyedByBundleIdentifier;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_installedAppsDidChange:(id)arg1;
- (id)_stateLock_storeForBundleIdentifier:(id)arg1;
- (id)applicationShortcutItemsForBundleIdentifier:(id)arg1 withVersion:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidateCache;
- (void)saveSynchronously;
- (void)setApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2 withVersion:(unsigned long long)arg3;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSLock, NSMapTable, NSPointerArray;

__attribute__((visibility("hidden")))
@interface __NSBundleTables : NSObject
{
    NSLock *_lock;
    NSHashTable *_staticFrameworks;
    NSHashTable *_loadedBundles;
    NSHashTable *_loadedFrameworks;
    NSMapTable *_resolvedPathToBundles;
    NSMapTable *_bundleForClassMap;
    NSPointerArray *_immortalBundles;
}

+ (id)bundleTables;
- (id)addBundle:(id)arg1 forPath:(id)arg2 withType:(unsigned long long)arg3 forClass:(Class)arg4 isImmortal:(BOOL)arg5;
- (void)addStaticFrameworkBundles:(id)arg1;
- (id)allBundles;
- (id)allFrameworks;
- (id)bundleForClass:(Class)arg1;
- (id)bundleForPath:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)loadedBundles;
- (void)removeBundle:(id)arg1 forPath:(id)arg2 type:(unsigned long long)arg3;

@end


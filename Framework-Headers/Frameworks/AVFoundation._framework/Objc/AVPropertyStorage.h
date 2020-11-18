//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AVPropertyStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_storageAccessWorkQueue;
    NSMutableDictionary *_propertyStorage;
    NSArray *_keysRequiringExplicitPerThreadSignal;
}

- (void)dealloc;
- (void)didAccessKVOForAllKeys;
- (void)didAccessKVOForKey:(id)arg1;
- (void)finalize;
- (id)init;
- (id)initWithKeysRequiringExplicitPerThreadSignal:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 defaultObjectBlock:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)shouldUsePropertyStorageCacheForKey:(id)arg1;
- (void)willAccessKVOForAllKeys;
- (void)willAccessKVOForKey:(id)arg1;

@end


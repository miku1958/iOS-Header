//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface OFLRUCache : NSObject
{
    unsigned long long _numberOfSlots;
    NSMutableDictionary *_cacheDictionary;
    NSRecursiveLock *_recursiveLock;
    struct _OFLRUCacheList *_leastRecentUsedList;
    NSMutableDictionary *_leastRecentUsedDictionary;
}

@property (readonly, nonatomic) unsigned long long currentUsedSlots;
@property (nonatomic) unsigned long long numberOfSlots; // @synthesize numberOfSlots=_numberOfSlots;

- (void)_promoteListElement:(struct _OFLRUCacheListElement *)arg1;
- (void)_removeListElement:(struct _OFLRUCacheListElement *)arg1;
- (id)allKeys;
- (void)dealloc;
- (void)evictSlots:(unsigned long long)arg1;
- (id)init;
- (BOOL)loadFromURL:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)writeToURL:(id)arg1;

@end


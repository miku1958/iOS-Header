//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/TSUFlushableObject.h>

@class NSMutableDictionary, NSString;

@interface TSUCache : TSUFlushableObject
{
    NSString *mCacheName;
    NSMutableDictionary *mCache;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (BOOL)hasFlushableContent;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)p_addEntriesFromDictionary:(id)arg1;
- (id)p_objectForKey:(id)arg1;
- (id)p_objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)unload;

@end

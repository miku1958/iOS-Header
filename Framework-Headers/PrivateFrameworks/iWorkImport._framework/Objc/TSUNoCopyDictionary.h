//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface TSUNoCopyDictionary : NSMutableDictionary
{
    struct __CFDictionary *mDictionary;
}

- (id)allKeys;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)initWithCFDictionary:(struct __CFDictionary *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forUncopiedKey:(id)arg2;

@end


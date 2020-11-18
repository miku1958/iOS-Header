//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCNOrderedDictionary : NSObject
{
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (void)_setupFrom:(id)arg1;
- (id)allKeys;
- (id)allValues;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (id)copy;
- (unsigned long long)count;
- (void)dealloc;
- (id)dictionary;
- (id)keys;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

@end


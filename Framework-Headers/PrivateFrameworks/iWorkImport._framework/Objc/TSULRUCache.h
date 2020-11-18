//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, TSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface TSULRUCache : NSObject
{
    TSUNoCopyDictionary *mData;
    NSMutableArray *mOrderedKeys;
    unsigned long long mMax;
    id mCallbackTarget;
    SEL mCallback;
}

@property (readonly, nonatomic) NSArray *allKeys;
@property (readonly, nonatomic) NSArray *allValues;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long maxSize; // @synthesize maxSize=mMax;

- (void)clearEvictionCallbackTarget;
- (void)dealloc;
- (id)description;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (void)p_removeOldestObject;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end


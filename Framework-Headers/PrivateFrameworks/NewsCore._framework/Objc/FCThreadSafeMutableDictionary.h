//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUnfairLock, NSArray, NSDictionary, NSMutableDictionary;

@interface FCThreadSafeMutableDictionary : NSObject
{
    NFUnfairLock *_lock;
    NSMutableDictionary *_dictionary;
}

@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSArray *allValues;
@property (readonly) unsigned long long count;
@property (readonly) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSDictionary *readOnlyDictionary;

- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (void)readWriteWithAccessor:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end


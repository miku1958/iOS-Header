//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock;

@interface MFMessageStoreObjectCache : NSObject
{
    NSLock *_lock;
    long long _capacity;
    struct __CFDictionary *_cache;
    CDUnknownBlockType _keyGenerator;
    CDUnknownBlockType _comparator;
}

@property (copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property (copy, nonatomic) CDUnknownBlockType keyGenerator; // @synthesize keyGenerator=_keyGenerator;

- (void)_nts_evictObject;
- (void)_nts_setObject:(id)arg1 forKey:(id)arg2;
- (id)addObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)flush;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)objectForMessage:(id)arg1 kind:(long long)arg2;
- (void)removeObjectForMessage:(id)arg1 kind:(long long)arg2;
- (void)setObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3;

@end


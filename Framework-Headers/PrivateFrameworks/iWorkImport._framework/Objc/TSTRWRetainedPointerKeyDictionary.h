//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSURetainedPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSTRWRetainedPointerKeyDictionary : NSObject
{
    struct _opaque_pthread_rwlock_t mRWLock;
    TSURetainedPointerKeyDictionary *mRetainedPointerKeyDictionary;
}

- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end


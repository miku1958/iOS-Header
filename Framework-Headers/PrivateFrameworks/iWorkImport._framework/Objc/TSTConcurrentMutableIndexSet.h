//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface TSTConcurrentMutableIndexSet : NSObject
{
    struct _opaque_pthread_rwlock_t mRWLock;
    NSMutableIndexSet *mMutableIndexSet;
}

- (void)addIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)enumerateIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)removeAllIndexes;

@end


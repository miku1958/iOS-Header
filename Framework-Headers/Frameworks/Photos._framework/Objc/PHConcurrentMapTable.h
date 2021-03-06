//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface PHConcurrentMapTable : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMapTable *_protectedTable;
}

+ (id)mapTable;
- (void).cxx_destruct;
- (void)_dispatchIsolatedRead:(CDUnknownBlockType)arg1;
- (void)_dispatchIsolatedWriteAsync:(CDUnknownBlockType)arg1;
- (void)_dispatchIsolatedWriteSync:(CDUnknownBlockType)arg1;
- (id)allKeys;
- (unsigned long long)count;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)tryRemoveObjectForKey:(id)arg1;

@end


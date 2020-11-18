//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCMutexLock, NSMutableSet, NSSet;

@interface FCThreadSafeMutableSet : NSObject
{
    FCMutexLock *_mutexLock;
    NSMutableSet *_set;
}

@property (readonly, copy, nonatomic) NSSet *readOnlySet;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)removeObject:(id)arg1;
- (void)removeObjectsInSet:(id)arg1;

@end

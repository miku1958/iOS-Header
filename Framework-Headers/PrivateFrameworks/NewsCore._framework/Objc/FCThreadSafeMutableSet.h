//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUnfairLock, NSArray, NSMutableSet, NSSet;

@interface FCThreadSafeMutableSet : NSObject
{
    NFUnfairLock *_lock;
    NSMutableSet *_set;
}

@property (readonly, copy) NSArray *allObjects;
@property (readonly) unsigned long long count;
@property (readonly) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSSet *readOnlySet;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (void)readWriteWithAccessor:(CDUnknownBlockType)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsInSet:(id)arg1;

@end


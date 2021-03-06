//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSetChanges.h>

@class NSMutableArray, NSSet;

__attribute__((visibility("hidden")))
@interface NSConcreteSetChanges : NSSetChanges
{
    NSSet *_backing;
    NSMutableArray *_changes;
    BOOL _backingIsMutable;
}

- (void)_fault;
- (void)_willChange;
- (void)addChange:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (unsigned long long)changeCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)filterObjectsWithTest:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (id)member:(id)arg1;
- (void)minusSet:(id)arg1;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)setSet:(id)arg1;
- (void)transformObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)unionSet:(id)arg1;

@end


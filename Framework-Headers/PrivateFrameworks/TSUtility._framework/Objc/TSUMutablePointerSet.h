//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableSet.h>

@interface TSUMutablePointerSet : NSMutableSet
{
    struct __CFSet *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)getObjects:(id *)arg1;
- (id)init;
- (id)initWithCFSet:(struct __CFSet *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)member:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)setByAddingObject:(id)arg1;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;

@end


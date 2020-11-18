//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface _FPItemList : NSObject
{
    NSMutableOrderedSet *_orderedSet;
    NSMutableDictionary *_itemsByIDs;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)indexOfItemID:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(CDUnknownBlockType)arg4;
- (id)init;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)mutableCopy;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectWithID:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)sortUsingDescriptors:(id)arg1;

@end


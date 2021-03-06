//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSFastEnumeration-Protocol.h>

@class NSArray, NSIndexSet, _NSOrderedCollectionDifferenceMoves;

@interface NSOrderedCollectionDifference : NSObject <NSFastEnumeration>
{
    NSIndexSet *_insertIndexes;
    NSArray *_insertObjects;
    NSIndexSet *_removeIndexes;
    NSArray *_removeObjects;
    _NSOrderedCollectionDifferenceMoves *_moves;
}

@property (readonly) BOOL hasChanges;
@property (readonly) NSArray *insertions;
@property (readonly) NSArray *removals;

- (id)_changeWithType:(long long)arg1 index:(unsigned long long)arg2 object:(id)arg3;
- (void)_enumerateChangesInDiffOrderWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)differenceByTransformingChangesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithChanges:(id)arg1;
- (id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4;
- (id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4 additionalChanges:(id)arg5;
- (id)inverseDifference;
- (id)invertedDifference;
- (BOOL)isEqual:(id)arg1;

@end


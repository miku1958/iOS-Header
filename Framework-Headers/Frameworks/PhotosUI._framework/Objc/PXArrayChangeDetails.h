//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSMutableCopying-Protocol.h>

@class NSIndexSet;

@interface PXArrayChangeDetails : NSObject <NSMutableCopying, NSCopying>
{
    NSIndexSet *_removedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movesToIndexes;
    const struct __CFArray *_movesFromIndexes;
    NSIndexSet *_changedIndexes;
}

@property (readonly, nonatomic) NSIndexSet *changedIndexes; // @synthesize changedIndexes=_changedIndexes;
@property (readonly, nonatomic) BOOL hasAnyChanges;
@property (readonly, nonatomic) BOOL hasAnyInsertionsRemovalsOrMoves;
@property (readonly, nonatomic) BOOL hasIncrementalChanges;
@property (readonly, nonatomic) BOOL hasMoves;
@property (readonly, nonatomic) NSIndexSet *insertedIndexes; // @synthesize insertedIndexes=_insertedIndexes;
@property (readonly, nonatomic) const struct __CFArray *movesFromIndexes; // @synthesize movesFromIndexes=_movesFromIndexes;
@property (readonly, nonatomic) NSIndexSet *movesToIndexes; // @synthesize movesToIndexes=_movesToIndexes;
@property (readonly, nonatomic) NSIndexSet *removedIndexes; // @synthesize removedIndexes=_removedIndexes;

+ (BOOL)_mutableCopyInputs;
+ (id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3;
+ (id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3 objectComparator:(CDUnknownBlockType)arg4;
+ (id)changeDetailsFromFetchResultChangeDetails:(id)arg1;
+ (id)changeDetailsWithChangedIndexRange:(struct _NSRange)arg1;
+ (id)changeDetailsWithChangedIndexes:(id)arg1;
+ (id)changeDetailsWithInsertedIndexRange:(struct _NSRange)arg1;
+ (id)changeDetailsWithMovedFromIndexRange:(struct _NSRange)arg1 toIndexRange:(struct _NSRange)arg2;
+ (id)changeDetailsWithNoChanges;
+ (id)changeDetailsWithNoIncrementalChanges;
+ (id)changeDetailsWithOldKeyItemIndex:(long long)arg1 oldCount:(long long)arg2 newKeyItemIndex:(long long)arg3 newCount:(long long)arg4;
+ (id)changeDetailsWithRemovedIndexRange:(struct _NSRange)arg1;
+ (unsigned long long)indexAfterApplyingChanges:(id)arg1 toIndex:(unsigned long long)arg2 objectChanged:(out BOOL *)arg3;
+ (unsigned long long)indexAfterRevertingChanges:(id)arg1 fromIndex:(unsigned long long)arg2 objectChanged:(out BOOL *)arg3;
- (void).cxx_destruct;
- (void)applyToDictionary:(id)arg1 removalHandler:(CDUnknownBlockType)arg2 moveHandler:(CDUnknownBlockType)arg3;
- (void)applyToIndexSet:(id)arg1;
- (BOOL)canPreserveIncrementalChangesWhenAddingChangeDetails:(id)arg1;
- (id)changeDetailsByAddingChangeDetails:(id)arg1;
- (id)changeDetailsByAddingChangedIndexes:(id)arg1;
- (id)changeDetailsShiftedBy:(long long)arg1;
- (id)changeDetailsShiftedBy:(long long)arg1 scaledBy:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateMovedIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMovedRangesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)arg1;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)arg1;
- (id)indexSetAfterApplyingChangesToIndexSet:(id)arg1;
- (id)indexSetAfterRevertingChangesToIndexSet:(id)arg1;
- (id)init;
- (id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 movesToIndexes:(id)arg3 movesFromIndexes:(const struct __CFArray *)arg4 changedIndexes:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOnlyInsertionAtEnd:(BOOL *)arg1 orRemovalAtEnd:(BOOL *)arg2 countBeforeChange:(long long)arg3 countAfterChange:(long long)arg4;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

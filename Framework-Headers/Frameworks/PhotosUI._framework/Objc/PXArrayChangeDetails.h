//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface PXArrayChangeDetails : NSObject
{
    BOOL _hasMoves;
    NSIndexSet *_removedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movesToIndexes;
    const struct __CFArray *_movesFromIndexes;
    NSIndexSet *_changedIndexes;
}

@property (readonly, nonatomic) NSIndexSet *changedIndexes; // @synthesize changedIndexes=_changedIndexes;
@property (readonly, nonatomic) BOOL hasAnyChanges;
@property (readonly, nonatomic) BOOL hasIncrementalChanges;
@property (readonly, nonatomic) BOOL hasMoves; // @synthesize hasMoves=_hasMoves;
@property (readonly, nonatomic) NSIndexSet *insertedIndexes; // @synthesize insertedIndexes=_insertedIndexes;
@property (readonly, nonatomic) const struct __CFArray *movesFromIndexes; // @synthesize movesFromIndexes=_movesFromIndexes;
@property (readonly, nonatomic) NSIndexSet *movesToIndexes; // @synthesize movesToIndexes=_movesToIndexes;
@property (readonly, nonatomic) NSIndexSet *removedIndexes; // @synthesize removedIndexes=_removedIndexes;

+ (id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3;
+ (id)changeDetailsFromFetchResultChangeDetails:(id)arg1;
+ (id)changeDetailsWithChangedIndexRange:(struct _NSRange)arg1;
+ (id)changeDetailsWithInsertedIndexRange:(struct _NSRange)arg1;
+ (id)changeDetailsWithMovedFromIndexRange:(struct _NSRange)arg1 toIndexRange:(struct _NSRange)arg2;
+ (id)changeDetailsWithNoChanges;
+ (id)changeDetailsWithNoIncrementalChanges;
+ (id)changeDetailsWithRemovedIndexRange:(struct _NSRange)arg1;
+ (unsigned long long)indexAfterApplyingChanges:(id)arg1 toIndex:(unsigned long long)arg2 objectChanged:(out BOOL *)arg3;
+ (unsigned long long)indexAfterRevertingChanges:(id)arg1 fromIndex:(unsigned long long)arg2 objectChanged:(out BOOL *)arg3;
- (void).cxx_destruct;
- (void)applyToIndexSet:(id)arg1;
- (id)changeDetailsShiftedBy:(long long)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateMovedIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)arg1;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)arg1;
- (id)indexSetAfterApplyingChangesToIndexSet:(id)arg1;
- (id)init;
- (id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 movesToIndexes:(id)arg3 movesFromIndexes:(const struct __CFArray *)arg4 changedIndexes:(id)arg5;
- (BOOL)isEqual:(id)arg1;

@end


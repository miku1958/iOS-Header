//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (TSUAdditions)

@property (readonly, nonatomic) BOOL tsu_isSingleContiguousRange;

+ (id)tsu_indexSetWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)tsu_indexAtPosition:(unsigned long long)arg1;
- (id)tsu_indexSetByAddingIndex:(unsigned long long)arg1;
- (id)tsu_indexSetByAddingIndexes:(id)arg1;
- (id)tsu_indexSetByExcludingIndexes:(id)arg1;
- (id)tsu_indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)tsu_indexSetByIntersectingWithIndexes:(id)arg1;
- (id)tsu_indexSetByIntersectingWithRange:(struct _NSRange)arg1;
- (id)tsu_initWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (BOOL)tsu_intersectsIndexesInIndexSet:(id)arg1;
- (struct _NSRange)tsu_leadingRangeInRange:(struct _NSRange)arg1;
- (id)tsu_localizedDescription;
- (unsigned long long)tsu_positionOfIndex:(unsigned long long)arg1;
- (struct _NSRange)tsu_trailingRangeInRange:(struct _NSRange)arg1;
@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOrderedSet.h>

#import <NewsCore/FCOrderedCollectionAdditions-Protocol.h>

@interface NSOrderedSet (FCAdditions) <FCOrderedCollectionAdditions>
+ (id)fc_orderedSet:(CDUnknownBlockType)arg1;
- (BOOL)fc_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_diffAgainstOrderedSet:(id)arg1;
- (id)fc_diffAgainstOrderedSet:(id)arg1 withEqualityTest:(CDUnknownBlockType)arg2 identityValueProvider:(CDUnknownBlockType)arg3;
- (id)fc_diffAgainstSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)fc_enumerateObjectsPairwiseUsingBlock:(CDUnknownBlockType)arg1;
- (id)fc_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_indexesOfObjectsInOrderedSet:(id)arg1;
- (BOOL)fc_isEqualToOrderedSet:(id)arg1 inRange:(struct _NSRange)arg2;
- (BOOL)fc_isSortedUsingComparator:(CDUnknownBlockType)arg1;
- (id)fc_orderedSetByAddingObject:(id)arg1;
- (id)fc_orderedSetByCollectingObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_orderedSetByMinusingOrderedSet:(id)arg1;
- (id)fc_orderedSetByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)fc_orderedSetOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_orderedSetWithObjectsAtIndexes:(id)arg1;
- (id)fc_orderedSetWithObjectsInRange:(struct _NSRange)arg1;
@end


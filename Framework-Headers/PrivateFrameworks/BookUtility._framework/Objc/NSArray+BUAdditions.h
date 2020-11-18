//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (BUAdditions)
- (id)arrayOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)bu_arrayByInvokingBlock:(CDUnknownBlockType)arg1;
- (id)bu_arrayByRemovingDuplicates;
- (id)bu_arrayByRemovingItemsWithDuplicateValuesForKey:(id)arg1;
- (id)bu_arrayByRemovingNSNulls;
- (id)bu_arrayByRemovingNSNullsInvokingBlockForNulls:(CDUnknownBlockType)arg1;
- (id)bu_arrayByRemovingObjectsInArray:(id)arg1;
- (id)bu_dictionaryUsingPropertyAsKey:(id)arg1;
- (CDUnknownBlockType)bu_sortDescriptorComparator;
- (BOOL)containsLocalizedStringCaseInsensitive:(id)arg1;
- (BOOL)containsStringCaseInsensitive:(id)arg1;
- (id)firstObject;
- (id)imReversedArray;
- (long long)indexOfObjectWithValue:(id)arg1 forKeyPath:(id)arg2;
- (id)objectsMatching:(CDUnknownBlockType)arg1;
@end

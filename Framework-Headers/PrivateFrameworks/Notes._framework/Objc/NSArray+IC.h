//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (IC)
- (id)arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;
- (BOOL)containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)ic_indexIsValid:(long long)arg1;
- (unsigned long long)ic_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long *)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (id)objectAfter:(id)arg1;
- (id)objectAfter:(id)arg1 wrap:(BOOL)arg2;
- (id)objectBefore:(id)arg1;
- (id)objectBefore:(id)arg1 wrap:(BOOL)arg2;
- (id)objectPassingTest:(CDUnknownBlockType)arg1;
- (id)objectsOfClass:(Class)arg1;
- (id)objectsPassingTest:(CDUnknownBlockType)arg1;
@end


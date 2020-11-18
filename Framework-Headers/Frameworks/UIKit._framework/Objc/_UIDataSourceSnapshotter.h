//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIDataSourceSnapshotter : NSObject <NSCopying>
{
    struct _NSRange *_sectionRanges;
    long long _sectionCount;
}

+ (id)snapshotForDataSourceBackedView:(id)arg1;
- (BOOL)_decrementSectionCount:(long long)arg1;
- (BOOL)_decrementSectionCount:(long long)arg1 byCount:(long long)arg2;
- (BOOL)_deleteSection:(long long)arg1;
- (BOOL)_incrementSectionCount:(long long)arg1;
- (BOOL)_incrementSectionCount:(long long)arg1 byCount:(long long)arg2;
- (BOOL)_insertSection:(long long)arg1 withInitialCount:(long long)arg2;
- (void)_recomputeRangeLocations;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (long long)globalIndexForIndexPath:(id)arg1;
- (id)indexPathForAppendingInsertInSection:(long long)arg1;
- (id)indexPathForGlobalIndex:(long long)arg1;
- (BOOL)indexPathIsSectionAppendingInsert:(id)arg1;
- (id)init;
- (id)initWithDataSourceBackedView:(id)arg1;
- (id)initWithSectionCounts:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)numberOfItems;
- (long long)numberOfItemsBeforeSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (struct _NSRange)rangeForSection:(long long)arg1;
- (long long)sectionForGlobalIndex:(long long)arg1;

@end


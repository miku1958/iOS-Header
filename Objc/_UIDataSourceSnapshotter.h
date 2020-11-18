//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UIDataSourceSnapshot-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIDataSourceSnapshotter : NSObject <NSCopying, _UIDataSourceSnapshot>
{
    struct _NSRange *_sectionRanges;
    long long _sectionCount;
}

+ (id)snapshotForDataSourceBackedView:(id)arg1;
+ (id)snapshotWithSectionCountsProvider:(CDUnknownBlockType)arg1;
- (BOOL)_decrementSectionCount:(long long)arg1;
- (BOOL)_decrementSectionCount:(long long)arg1 byCount:(long long)arg2;
- (BOOL)_deleteAllSections;
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
- (id)initWithSectionCountsProvider:(CDUnknownBlockType)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)numberOfItems;
- (long long)numberOfItemsBeforeSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (struct _NSRange)rangeForSection:(long long)arg1;
- (long long)sectionForGlobalIndex:(long long)arg1;
- (id)snapshot;

@end


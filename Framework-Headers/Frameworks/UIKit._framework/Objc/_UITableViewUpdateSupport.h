//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, UITableView, UITableViewRowData;

__attribute__((visibility("hidden")))
@interface _UITableViewUpdateSupport : NSObject
{
    long long oldSection;
    long long newSection;
    long long oldGlobalRow;
    long long newGlobalRow;
    UITableView *tableView;
    struct _NSRange visibleRows;
    NSArray *updateItems;
    UITableViewRowData *oldRowData;
    UITableViewRowData *newRowData;
    struct _NSRange oldRowRange;
    struct _NSRange newRowRange;
    NSMutableIndexSet *rows;
    NSMutableIndexSet *movedRows;
    NSMutableIndexSet *movedSections;
    struct CGRect oldTableViewVisibleBounds;
    struct CGRect newTableViewVisibleBounds;
    struct CGRect tableViewVisibleBoundsUnion;
    double tableViewVisibleBoundsOffset;
    long long oldSectionCount;
    long long newSectionCount;
    long long *oldSectionMap;
    long long *newSectionMap;
    long long oldGlobalRowCount;
    long long newGlobalRowCount;
    long long *oldGlobalRowMap;
    long long *newGlobalRowMap;
    id *animatedCells;
    id *animatedHeaders;
    id *animatedFooters;
    long long globalReorderingRow;
    id _context;
    NSMutableArray *viewAnimations;
    NSMutableArray *deletedSections;
    NSMutableArray *insertedSections;
    NSMutableArray *gaps;
}

- (void).cxx_destruct;
- (void)_addBottomShadowViewViewForViewAnimation:(id)arg1 viewType:(int)arg2;
- (void)_computeAutomaticAnimationTypes;
- (void)_computeGaps;
- (void)_computeRowUpdates;
- (void)_computeSectionUpdates;
- (void)_computeVisibleBounds;
- (void)_faultInRealHeightsOfNeededElements;
- (id)_imageViewForView:(id)arg1;
- (BOOL)_isReloadSectionUpdate;
- (void)_setupAnimationForReorderingRow;
- (void)_setupAnimationForTableFooter;
- (void)_setupAnimationForTableHeader;
- (void)_setupAnimationStructures;
- (void)_setupAnimations;
- (void)_setupAnimationsForDeletedCells;
- (void)_setupAnimationsForDeletedHeadersAndFooters;
- (void)_setupAnimationsForExistingHeadersAndFooters;
- (void)_setupAnimationsForExistingOffscreenCells;
- (void)_setupAnimationsForExistingVisibleCells;
- (void)_setupAnimationsForInsertedHeadersAndFooters;
- (void)_setupAnimationsForNewlyInsertedCells;
- (void)_setupDeleteAnimationForFooterInSection:(long long)arg1 withTargetRect:(struct CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_setupDeleteAnimationForHeaderInSection:(long long)arg1 withTargetRect:(struct CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_setupInsertAnimationForFooterInSection:(long long)arg1 withTargetRect:(struct CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_setupInsertAnimationForHeaderInSection:(long long)arg1 withTargetRect:(struct CGRect)arg2 forUpdateItem:(id)arg3;
- (double)_startOfRowAfterFooterInSection:(long long)arg1 withRowData:(id)arg2;
- (double)_startOfRowAfterHeaderInSection:(long long)arg1 withRowData:(id)arg2;
- (double)_startOfRowAfterRow:(long long)arg1 withRowData:(id)arg2;
- (void)_validateAnimatedCells;
- (struct _NSRange)_visibleRowRangePlusAdjoining;
- (void)dealloc;
- (id)initWithTableView:(id)arg1 updateItems:(id)arg2 oldRowData:(id)arg3 newRowData:(id)arg4 oldRowRange:(struct _NSRange)arg5 newRowRange:(struct _NSRange)arg6 context:(id)arg7;

@end


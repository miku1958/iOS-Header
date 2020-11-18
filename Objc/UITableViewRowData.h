//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSIndexPath, UITableViewHeaderFooterView;
@protocol UITable_RowDataSource;

__attribute__((visibility("hidden")))
@interface UITableViewRowData : NSObject <NSCopying>
{
    id<UITable_RowDataSource> _tableView;
    UITableViewHeaderFooterView *_headerFooterViewUsedForMeasurements;
    double _tableViewWidth;
    long long _numSections;
    BOOL _estimatesHeights;
    long long _sectionRowDataCapacity;
    id *_sectionRowData;
    double _tableHeaderHeight;
    double _tableFooterHeight;
    double _heightForTableHeaderViewHiding;
    struct {
        unsigned int tableHeaderHeightValid:1;
        unsigned int tableFooterHeightValid:1;
        unsigned int tableSidePaddingValid:1;
        unsigned int usesVariableMargins:1;
        unsigned int pinsTableHeaderView:1;
    } _rowDataFlags;
    double _minimumRowHeight;
    double _rowSpacing;
    double _tableTopPadding;
    double _tableBottomPadding;
    double _tableSidePadding;
    NSIndexPath *_gapIndexPath;
    NSIndexPath *_reorderedIndexPath;
    NSIndexPath *_draggedIndexPath;
    double _defaultSectionHeaderHeight;
    double _defaultSectionFooterHeight;
    double _gapRowHeight;
    double _draggedRowHeight;
}

@property (readonly, nonatomic) double defaultSectionFooterHeight; // @synthesize defaultSectionFooterHeight=_defaultSectionFooterHeight;
@property (readonly, nonatomic) double defaultSectionHeaderHeight; // @synthesize defaultSectionHeaderHeight=_defaultSectionHeaderHeight;
@property (strong, nonatomic) NSIndexPath *draggedIndexPath; // @synthesize draggedIndexPath=_draggedIndexPath;
@property (nonatomic) double draggedRowHeight; // @synthesize draggedRowHeight=_draggedRowHeight;
@property (strong, nonatomic) NSIndexPath *gapIndexPath; // @synthesize gapIndexPath=_gapIndexPath;
@property (nonatomic) double gapRowHeight; // @synthesize gapRowHeight=_gapRowHeight;
@property (readonly, nonatomic) double heightForAutohidingTableHeaderView;
@property (readonly, nonatomic) double heightForTableHeaderViewHiding;
@property (nonatomic) double minimumRowHeight; // @synthesize minimumRowHeight=_minimumRowHeight;
@property (nonatomic) BOOL pinsTableHeaderView;
@property (strong, nonatomic) NSIndexPath *reorderedIndexPath; // @synthesize reorderedIndexPath=_reorderedIndexPath;
@property (nonatomic) double rowSpacing; // @synthesize rowSpacing=_rowSpacing;
@property (nonatomic) double tableBottomPadding; // @synthesize tableBottomPadding=_tableBottomPadding;
@property (nonatomic) double tableSidePadding; // @synthesize tableSidePadding=_tableSidePadding;
@property (nonatomic) double tableTopPadding; // @synthesize tableTopPadding=_tableTopPadding;
@property (readonly, nonatomic) NSIndexPath *temporarilyDeletedIndexPathBeingReordered;
@property (nonatomic) BOOL usesVariableMargins;

- (void).cxx_destruct;
- (void)_assertValidIndexPath:(id)arg1 allowEmptySection:(BOOL)arg2;
- (double)_dropTargetGapHeightForIndexPath:(id)arg1;
- (void)_ensureSectionOffsetIsValidForSection:(long long)arg1;
- (id)_indexPathsBelowIndexPath:(id)arg1;
- (id)_nextIndexPathOrSectionHeader:(id)arg1;
- (id)_previousIndexPathOrSectionHeader:(id)arg1;
- (long long)_sectionForPoint:(struct CGPoint)arg1 beginningWithSection:(long long)arg2 numberOfSections:(long long)arg3;
- (long long)_sectionRowForGlobalRow:(long long)arg1 inSection:(long long *)arg2;
- (void)_updateNumSections;
- (void)_updateSectionRowDataArrayForNumSections:(long long)arg1;
- (void)_updateTopAndBottomPadding;
- (void)addDropTargetGapAtIndexPath:(id)arg1;
- (void)addGapAtIndexPath:(id)arg1;
- (void)adjustSectionOffsetsBeginningAtIndex:(long long)arg1 count:(long long)arg2 delta:(double)arg3 rowDelta:(long long)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (long long)dropLocationForPoint:(struct CGPoint)arg1 atIndexPath:(id)arg2 withInsets:(struct UIEdgeInsets)arg3;
- (void)ensureAllSectionsAreValid;
- (BOOL)ensureHeightsFaultedInForScrollToIndexPath:(id)arg1 withScrollPosition:(long long)arg2 boundsHeight:(double)arg3;
- (struct CGRect)floatingRectForFooterInSection:(long long)arg1 visibleRect:(struct CGRect)arg2 heightCanBeGuessed:(BOOL)arg3;
- (struct CGRect)floatingRectForHeaderInSection:(long long)arg1 visibleRect:(struct CGRect)arg2 heightCanBeGuessed:(BOOL)arg3;
- (long long)footerAlignmentForSection:(long long)arg1;
- (long long)globalRowForRowAtIndexPath:(id)arg1;
- (struct _NSRange)globalRowsInRect:(struct CGRect)arg1 canGuess:(BOOL)arg2;
- (BOOL)hasFooterForSection:(long long)arg1;
- (BOOL)hasHeaderForSection:(long long)arg1;
- (long long)headerAlignmentForSection:(long long)arg1;
- (double)heightForFooterInSection:(long long)arg1 canGuess:(BOOL)arg2;
- (double)heightForHeaderInSection:(long long)arg1 canGuess:(BOOL)arg2;
- (double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(BOOL)arg3;
- (double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(BOOL)arg3 adjustForReorderedRow:(BOOL)arg4;
- (double)heightForSection:(long long)arg1;
- (double)heightForTable;
- (double)heightForTableFooterView;
- (double)heightForTableHeaderView;
- (id)indexPathForRowAtGlobalRow:(long long)arg1;
- (id)indexPathsForRowsInRect:(struct CGRect)arg1;
- (id)indexPathsForRowsInRect:(struct CGRect)arg1 extraHitSpaceBetweenRows:(double)arg2;
- (id)initWithTableView:(id)arg1;
- (void)invalidateAllSectionOffsetsAndUpdatePadding;
- (void)invalidateAllSections;
- (void)invalidateSection:(long long)arg1;
- (double)maxFooterTitleWidthForSection:(long long)arg1;
- (double)maxHeaderTitleWidthForSection:(long long)arg1;
- (void)moveDropTargetGapToIndexPath:(id)arg1;
- (void)moveRowAtIndexPathFrom:(id)arg1 toIndexPath:(id)arg2;
- (long long)numberOfRows;
- (long long)numberOfRowsBeforeSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (double)offsetForSection:(id)arg1;
- (struct CGRect)rectForFooterInSection:(long long)arg1 heightCanBeGuessed:(BOOL)arg2;
- (struct CGRect)rectForGap;
- (struct CGRect)rectForGlobalRow:(long long)arg1 heightCanBeGuessed:(BOOL)arg2;
- (struct CGRect)rectForHeaderInSection:(long long)arg1 heightCanBeGuessed:(BOOL)arg2;
- (struct CGRect)rectForRow:(long long)arg1 inSection:(long long)arg2 heightCanBeGuessed:(BOOL)arg3;
- (struct CGRect)rectForSection:(long long)arg1;
- (struct CGRect)rectForTable;
- (struct CGRect)rectForTableFooterView;
- (struct CGRect)rectForTableHeaderView;
- (void)removeDropTargetGap;
- (void)removeGap;
- (double)removeReorderedRowWithHeight:(double)arg1 atIndexPath:(id)arg2;
- (void)restoreReorderedRowWithHeight:(double)arg1 atIndexPath:(id)arg2;
- (long long)sectionForPoint:(struct CGPoint)arg1;
- (long long)sectionForSectionRowData:(id)arg1;
- (int)sectionLocationForReorderedRow:(long long)arg1 inSection:(long long)arg2;
- (int)sectionLocationForRow:(long long)arg1 inSection:(long long)arg2;
- (struct _NSRange)sectionsInRect:(struct CGRect)arg1;
- (void)setHeight:(double)arg1 forFooterInSection:(long long)arg2;
- (void)setHeight:(double)arg1 forHeaderInSection:(long long)arg2;
- (void)setHeight:(double)arg1 forRowAtIndexPath:(id)arg2;
- (void)setHeightForTableHeaderViewHiding:(double)arg1;
- (BOOL)shouldStripHeaderTopPaddingForSection:(long long)arg1;
- (void)tableFooterHeightDidChangeToHeight:(double)arg1;
- (void)tableHeaderHeightDidChangeToHeight:(double)arg1;
- (void)tableViewWidthDidChangeToWidth:(double)arg1;
- (id)targetIndexPathForPoint:(struct CGPoint)arg1 adjustedForGap:(BOOL)arg2;

@end


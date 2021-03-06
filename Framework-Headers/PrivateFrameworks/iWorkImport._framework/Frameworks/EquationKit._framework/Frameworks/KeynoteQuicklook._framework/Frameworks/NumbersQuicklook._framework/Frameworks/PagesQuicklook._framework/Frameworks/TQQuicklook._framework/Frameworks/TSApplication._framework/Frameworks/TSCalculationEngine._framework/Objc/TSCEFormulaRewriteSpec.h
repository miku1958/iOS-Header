//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSCECoordMapper, TSCEFormulaRewriteInfo_RowColumnInfo, TSCEFormulaRewrite_MergeOriginMovedInfo, TSCEFormulaRewrite_RegionMergedInfo, TSCEFormulaRewrite_RegionMovedInfo, TSCEFormulasForUndo, TSCEGroupByChange, TSCERewriteGroupNodeUIDInfo, TSCERewriteTableUIDInfo, TSCETableTransposedInfo, TSKShuffleMapping;

@interface TSCEFormulaRewriteSpec : NSObject
{
    int _type;
    UUIDData_5fbc143e _tableUID;
    UUIDData_5fbc143e _conditionalStyleOwnerUID;
    struct TSUCellRect _tableRange;
    BOOL _isInverse;
    TSCETableTransposedInfo *_transposedInfo;
    TSCEFormulaRewriteInfo_RowColumnInfo *_rowColumnInfo;
    TSCEFormulaRewrite_RegionMovedInfo *_regionMovedInfo;
    TSCEFormulaRewrite_RegionMergedInfo *_mergeInfo;
    TSCEFormulaRewrite_MergeOriginMovedInfo *_mergeOriginMovedInfo;
    TSKShuffleMapping *_shuffleMap;
    TSCERewriteTableUIDInfo *_tableUIDInfo;
    TSCERewriteGroupNodeUIDInfo *_groupNodeUIDInfo;
    TSCEGroupByChange *_groupByChange;
    TSCEFormulasForUndo *_formulasForUndo;
    id _warningSetsForUndo;
    unordered_map_9596ee37 _conditionalStylesForUndo;
    NSMutableArray *_nestedRewrites;
    struct unordered_map<TSCECellRef, TSUCellRect, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<std::__1::pair<const TSCECellRef, TSUCellRect>>> _mergeRangesContainingFormulas;
    struct os_unfair_lock_s _coordMappersLock;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, TSCECoordMapper *, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCECoordMapper *>>> _coordMappersByTableUID;
    BOOL _canBeNested;
    TSCEFormulaRewriteSpec *_rewriteSpecBaseToChrome;
    TSCEFormulaRewriteSpec *_rewriteSpecChromeToBase;
    TSCECoordMapper *_coordMapper;
    TSCECoordMapper *_srcCoordMapper;
    UUIDData_5fbc143e _fromTableUID;
    UUIDData_5fbc143e _groupByUID;
}

@property (nonatomic) BOOL canBeNested; // @synthesize canBeNested=_canBeNested;
@property (nonatomic) UUIDData_5fbc143e conditionalStyleOwnerUID; // @synthesize conditionalStyleOwnerUID=_conditionalStyleOwnerUID;
@property (strong, nonatomic) TSCECoordMapper *coordMapper; // @synthesize coordMapper=_coordMapper;
@property (strong, nonatomic) TSCEFormulasForUndo *formulasForUndo; // @synthesize formulasForUndo=_formulasForUndo;
@property (readonly, nonatomic) UUIDData_5fbc143e fromTableUID; // @synthesize fromTableUID=_fromTableUID;
@property (readonly, strong, nonatomic) TSCEGroupByChange *groupByChange; // @synthesize groupByChange=_groupByChange;
@property (readonly, nonatomic) UUIDData_5fbc143e groupByUID; // @synthesize groupByUID=_groupByUID;
@property (readonly, strong, nonatomic) TSCERewriteGroupNodeUIDInfo *groupNodeUIDInfo; // @synthesize groupNodeUIDInfo=_groupNodeUIDInfo;
@property (nonatomic) UUIDData_5fbc143e insertAtUid;
@property (nonatomic) UUIDData_5fbc143e insertOppositeUid;
@property (nonatomic) BOOL isInverse; // @synthesize isInverse=_isInverse;
@property (readonly, strong, nonatomic) TSCEFormulaRewrite_RegionMergedInfo *mergeInfo; // @synthesize mergeInfo=_mergeInfo;
@property (readonly, strong, nonatomic) TSCEFormulaRewrite_MergeOriginMovedInfo *mergeOriginMovedInfo; // @synthesize mergeOriginMovedInfo=_mergeOriginMovedInfo;
@property (readonly, strong, nonatomic) TSCEFormulaRewrite_RegionMovedInfo *regionMovedInfo; // @synthesize regionMovedInfo=_regionMovedInfo;
@property (strong, nonatomic) TSCEFormulaRewriteSpec *rewriteSpecBaseToChrome; // @synthesize rewriteSpecBaseToChrome=_rewriteSpecBaseToChrome;
@property (strong, nonatomic) TSCEFormulaRewriteSpec *rewriteSpecChromeToBase; // @synthesize rewriteSpecChromeToBase=_rewriteSpecChromeToBase;
@property (readonly, nonatomic) int rewriteType; // @synthesize rewriteType=_type;
@property (readonly, strong, nonatomic) TSCEFormulaRewriteInfo_RowColumnInfo *rowColumnInfo; // @synthesize rowColumnInfo=_rowColumnInfo;
@property (readonly, strong, nonatomic) TSKShuffleMapping *shuffleMap; // @synthesize shuffleMap=_shuffleMap;
@property (strong, nonatomic) TSCECoordMapper *srcCoordMapper; // @synthesize srcCoordMapper=_srcCoordMapper;
@property (readonly, nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;
@property (readonly, strong, nonatomic) TSCERewriteTableUIDInfo *tableUIDInfo; // @synthesize tableUIDInfo=_tableUIDInfo;
@property (readonly, strong, nonatomic) TSCETableTransposedInfo *transposedInfo; // @synthesize transposedInfo=_transposedInfo;
@property (strong, nonatomic) id warningSetsForUndo; // @synthesize warningSetsForUndo=_warningSetsForUndo;

+ (BOOL)rewriteTypeUsesAmendRewriteSpec:(int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCoordMapper:(id)arg1;
- (void)addNestedRewrite:(id)arg1;
- (UUIDData_5fbc143e)affectedConditionalStyleOwnerUID;
- (UUIDData_5fbc143e)affectedOwnerUID;
- (unordered_set_c6a929bd)affectedOwnerUIDs;
- (struct TSCERangeCoordinate)affectedRange;
- (id)amendRewriteWithCalcEngine:(id)arg1;
- (void)clearTableIndexes;
- (unordered_map_9596ee37 *)conditionalStylesForUndo;
- (id)coordMapperForTableUID:(const UUIDData_5fbc143e *)arg1 calcEngine:(id)arg2;
- (id)description;
- (void)didModifySrcTable:(id)arg1 dstTable:(id)arg2;
- (void)didModifyTable:(id)arg1;
- (void)didModifyTable:(id)arg1 calcEngine:(id)arg2;
- (vector_4dc5f307)expandedRowColumnUuids;
- (struct TSCECellRef)flattenedCellRefForCategoryRef:(const struct TSCECategoryRef *)arg1 calcEngine:(id)arg2;
- (id)initForCategorizedTableBaseToChromeRewriterWithSrcTableUID:(const UUIDData_5fbc143e *)arg1 srcTract:(const UUIDRect_cab72d9d *)arg2 dstTableUID:(const UUIDData_5fbc143e *)arg3 destTract:(const UUIDRect_cab72d9d *)arg4 coordMapper:(id)arg5;
- (id)initForCategorizedTableChromeToBaseRewriterWithSrcTableUID:(const UUIDData_5fbc143e *)arg1 srcTract:(const UUIDRect_cab72d9d *)arg2 dstTableUID:(const UUIDData_5fbc143e *)arg3 destTract:(const UUIDRect_cab72d9d *)arg4 coordMapper:(id)arg5 srcCoordMapper:(id)arg6 fromTableUID:(const UUIDData_5fbc143e *)arg7;
- (id)initForGroupBy:(const UUIDData_5fbc143e *)arg1 groupNodeUIDReassignment:(const UUIDMap_b66c2694 *)arg2;
- (id)initForGroupBy:(const UUIDData_5fbc143e *)arg1 withGroupByChange:(id)arg2;
- (id)initForInsertingRowsOrColumnsIntoTable:(const UUIDData_5fbc143e *)arg1 rowColumnUuids:(const vector_4dc5f307 *)arg2 areRows:(BOOL)arg3;
- (id)initForMergeCellsWithTableUID:(const UUIDData_5fbc143e *)arg1 columnUids:(const vector_4dc5f307 *)arg2 rowUids:(const vector_4dc5f307 *)arg3 mergeSource:(struct TSUCellCoord)arg4;
- (id)initForMergeOriginsMovedWithMap:(const unordered_map_ddbde191 *)arg1 reverseMap:(const unordered_map_ddbde191 *)arg2 inTableUID:(const UUIDData_5fbc143e *)arg3;
- (id)initForMovingRegionWithSrcTableUID:(const UUIDData_5fbc143e *)arg1 srcTract:(const UUIDRect_cab72d9d *)arg2 dstTableUID:(const UUIDData_5fbc143e *)arg3 destTract:(const UUIDRect_cab72d9d *)arg4;
- (id)initForMovingRowsOrColumnsInTable:(const UUIDData_5fbc143e *)arg1 rowColumnUuids:(const vector_4dc5f307 *)arg2 shuffleMap:(id)arg3 areRows:(BOOL)arg4 srcTract:(const UUIDRect_cab72d9d *)arg5 destTract:(const UUIDRect_cab72d9d *)arg6;
- (id)initForPastingCellsWithTableUID:(const UUIDData_5fbc143e *)arg1 columnUids:(const vector_4dc5f307 *)arg2 rowUids:(const vector_4dc5f307 *)arg3;
- (id)initForRemoveRowsOrColumnsFromTable:(const UUIDData_5fbc143e *)arg1 rowColumnUuids:(const vector_4dc5f307 *)arg2 areRows:(BOOL)arg3;
- (id)initForReorderRowsWithTableUID:(const UUIDData_5fbc143e *)arg1 rowUids:(const vector_4dc5f307 *)arg2 shuffleMap:(id)arg3;
- (id)initForSortWithTableUID:(const UUIDData_5fbc143e *)arg1 rowUids:(const vector_4dc5f307 *)arg2 shuffleMap:(id)arg3;
- (id)initForTableUIDReassignment:(const UUIDMap_b66c2694 *)arg1;
- (id)initForUndoMergeCellsWithTableUID:(const UUIDData_5fbc143e *)arg1 columnUids:(const vector_4dc5f307 *)arg2 rowUids:(const vector_4dc5f307 *)arg3 mergeSource:(struct TSUCellCoord)arg4;
- (id)initFromMessage:(const struct FormulaRewriteSpecArchive *)arg1;
- (id)initWithOwnerDeletion:(const UUIDData_5fbc143e *)arg1;
- (id)initWithOwnerInsertion:(const UUIDData_5fbc143e *)arg1 fromOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (id)initWithTransposeTable:(const UUIDData_5fbc143e *)arg1 transposedBodyRange:(struct TSCERangeCoordinate)arg2 numberOfFooterRows:(unsigned int)arg3;
- (BOOL)isForTable:(const UUIDData_5fbc143e *)arg1;
- (void)loadMergeRangesContainingFormulasInTable:(id)arg1 calcEngine:(id)arg2;
- (struct TSUCellRect)mergeRangeAtOriginalCellRef:(const struct TSCECellRef *)arg1;
- (id)miniDescription;
- (id)nestedRewrites;
- (struct TSCECellRef)originalCellRefForUpdatedCellRef:(const struct TSCECellRef *)arg1;
- (id)prepareToRewriteWithCalcEngine:(id)arg1;
- (void)saveToMessage:(struct FormulaRewriteSpecArchive *)arg1 archiver:(id)arg2;
- (struct TSUCellRect)tableRangeForTable:(const UUIDData_5fbc143e *)arg1 calcEngine:(id)arg2;
- (struct TSCECellRef)updatedCellRefForOriginalCellRef:(const struct TSCECellRef *)arg1;
- (void)willModifySrcTable:(id)arg1 srcUidResolver:(id)arg2 dstTable:(id)arg3 dstUidResolver:(id)arg4;
- (void)willModifyTable:(id)arg1 uidResolver:(id)arg2 calcEngine:(id)arg3;

@end


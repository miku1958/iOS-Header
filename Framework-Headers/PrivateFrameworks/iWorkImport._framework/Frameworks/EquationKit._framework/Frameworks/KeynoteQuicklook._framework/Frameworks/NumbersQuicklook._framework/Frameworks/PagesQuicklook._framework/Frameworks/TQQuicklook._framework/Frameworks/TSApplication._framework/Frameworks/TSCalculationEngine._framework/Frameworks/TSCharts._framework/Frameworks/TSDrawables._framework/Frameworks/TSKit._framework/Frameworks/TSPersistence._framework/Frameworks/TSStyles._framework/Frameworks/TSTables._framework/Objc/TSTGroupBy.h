//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKSosBase.h>

#import <TSTables/TSCEFormulaOwning-Protocol.h>
#import <TSTables/TSTCompatibilityVersionProviding-Protocol.h>
#import <TSTables/TSTGroupByChangeProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSString, TSKCustomFormatWrapper, TSTCategoryOwner, TSTGroupByChangeDistributor, TSTGroupNode, TSTTableInfo, TSULocale;

@interface TSTGroupBy : TSKSosBase <TSCEFormulaOwning, TSTGroupByChangeProtocol, TSTCompatibilityVersionProviding>
{
    UUIDData_5fbc143e _groupByUid;
    BOOL _isEnabled;
    NSArray *_groupingColumns;
    NSArray *_columnAggregates;
    TSTGroupNode *_groupRoot;
    NSMutableArray *_aggregators;
    TSTCategoryOwner *_categoryOwner;
    struct TSUCellCoord _indirectAggTypeChangeFormulaCoord;
    struct TSUCellCoord _groupingColumnsFormulaCoord;
    struct TSUCellCoord _groupingColumnHeadersFormulaCoord;
    struct TSUCellCoord _allAggsInGroupRootFormulaCoord;
    struct TSUCellCoord _columnOrderChangedCoord;
    struct TSUCellCoord _rowOrderChangedCoord;
    struct TSUCellCoord _rowOrderChangedIgnoringRecalcCoord;
    TSTGroupByChangeDistributor *_groupByChangeDistributor;
    struct TSUCellCoord _nextAggFormulaCoord;
    struct os_unfair_lock_s _aggValuesLock;
    struct unordered_map<TSUCellCoord, TSTAggNode *, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSTAggNode *>>> _aggNodesByFormulaCoord;
    unordered_map_8a2ad1cf _groupNodesByGroupUid;
    unsigned long long _rebuildFormulasDeferredLevel;
    BOOL _needsRebuildOfAggFormulas;
    unsigned long long _deferGroupByChangeNotificationsLevel;
    NSMutableArray *_deferredGroupByChangeNotifications;
    NSMutableArray *_calcEngineGroupByChangeNotifications;
    BOOL _inCalcEngineMode;
    BOOL _groupingColumnHeadersChanged;
    TSKCustomFormatWrapper *_customFormatForBlankGroup;
    TSKCustomFormatWrapper *_customFormatForErrorGroup;
}

@property (readonly, strong, nonatomic) NSMutableArray *aggregators; // @synthesize aggregators=_aggregators;
@property (readonly, nonatomic) struct TSUCellCoord allAggsInGroupRootFormulaCoord; // @synthesize allAggsInGroupRootFormulaCoord=_allAggsInGroupRootFormulaCoord;
@property (readonly, nonatomic) unsigned long long archivingCompatibilityVersion;
@property (readonly, nonatomic) UUIDData_5fbc143e baseTableUID;
@property (weak, nonatomic) TSTCategoryOwner *categoryOwner; // @synthesize categoryOwner=_categoryOwner;
@property (readonly, nonatomic) NSArray *columnAggregates; // @synthesize columnAggregates=_columnAggregates;
@property (readonly, nonatomic) struct TSCECellRef columnOrderChangedPrecedent;
@property (readonly, strong, nonatomic) TSKCustomFormatWrapper *customFormatForBlankGroup; // @synthesize customFormatForBlankGroup=_customFormatForBlankGroup;
@property (readonly, strong, nonatomic) TSKCustomFormatWrapper *customFormatForErrorGroup; // @synthesize customFormatForErrorGroup=_customFormatForErrorGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) TSTGroupByChangeDistributor *groupByChangeDistributor; // @synthesize groupByChangeDistributor=_groupByChangeDistributor;
@property (nonatomic) UUIDData_5fbc143e groupByUid; // @synthesize groupByUid=_groupByUid;
@property (readonly, nonatomic) struct TSUCellCoord groupingColumnHeadersFormulaCoord; // @synthesize groupingColumnHeadersFormulaCoord=_groupingColumnHeadersFormulaCoord;
@property (readonly, strong) NSArray *groupingColumns; // @synthesize groupingColumns=_groupingColumns;
@property (readonly, nonatomic) struct TSUCellCoord groupingColumnsFormulaCoord; // @synthesize groupingColumnsFormulaCoord=_groupingColumnsFormulaCoord;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct TSUCellCoord indirectAggTypeChangeFormulaCoord; // @synthesize indirectAggTypeChangeFormulaCoord=_indirectAggTypeChangeFormulaCoord;
@property (readonly, nonatomic) BOOL isCategorized;
@property (nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property (readonly, nonatomic) TSULocale *locale;
@property (nonatomic) BOOL needsRebuildOfAggFormulas; // @synthesize needsRebuildOfAggFormulas=_needsRebuildOfAggFormulas;
@property (readonly) unsigned char numberOfLevels;
@property (readonly, nonatomic) struct TSCECellRef rowOrderChangedPrecedent;
@property (readonly, nonatomic) struct TSCECellRef rowOrderChangedPrecedentIgnoringRecalc;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) TSTGroupNode *topLevelGroupNode;
@property (readonly, nonatomic) UUIDData_5fbc143e topLevelGroupUid;

+ (unsigned char)aggregateTypeForAggregateLabel:(id)arg1 locale:(id)arg2;
+ (id)groupByForUID:(const UUIDData_5fbc143e *)arg1 withCalcEngine:(id)arg2;
+ (unsigned short)groupingComboForGroupingType:(int)arg1;
+ (BOOL)isRelativeAncestorGroupUid:(const UUIDData_5fbc143e *)arg1;
+ (id)localizedFalseStringForBooleanGroupWithString:(id)arg1 documentLocale:(id)arg2;
+ (id)localizedNameForBlankGroupForDocumentLocale:(id)arg1;
+ (id)localizedNameForErrorGroupForDocumentLocale:(id)arg1;
+ (id)localizedTrueStringForBooleanGroupWithString:(id)arg1 documentLocale:(id)arg2;
+ (id)p_dateBySettingUnit:(unsigned long long)arg1 value:(long long)arg2 ofDate:(id)arg3 inCalendar:(id)arg4;
+ (UUIDData_5fbc143e)relativeAncestorGroupUid:(int)arg1;
+ (int)relativeLevelOfAncestorGroupUid:(const UUIDData_5fbc143e *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addAggregates:(id)arg1 atLevel:(unsigned char)arg2;
- (void)_removeAggregates:(id)arg1;
- (void)addAggregator:(id)arg1;
- (id)aggNodeForAggFormulaCoord:(const struct TSUCellCoord *)arg1;
- (id)aggregateLabelForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (struct TSCERangeRef)aggregateRangeRefForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (struct TSCECategoryRef)aggregateRefOnValue:(id)arg1 forColumnUid:(const UUIDData_5fbc143e *)arg2 forType:(unsigned char)arg3 atLevel:(unsigned char)arg4;
- (unsigned char)aggregateTypeForAggregateLabel:(id)arg1;
- (unsigned char)aggregateTypeForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (unsigned char)aggregateTypeForColumnUID:(const UUIDData_5fbc143e *)arg1 atGroupLevel:(unsigned char)arg2;
- (id)aggregatesOnLevel:(unsigned char)arg1;
- (id)aggregatorForColumn:(const UUIDData_5fbc143e *)arg1;
- (id)aggregatorForColumn:(const UUIDData_5fbc143e *)arg1 createIfMissing:(BOOL)arg2;
- (id)allGroupNodeUids;
- (BOOL)analyze;
- (unsigned char)anyAggregateTypeForColumnUID:(const UUIDData_5fbc143e *)arg1;
- (void)beginDeferringRebuildFormulas;
- (vector_4dc5f307)bodyRowUidsForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2 ordered:(BOOL)arg3;
- (id)calcEngine;
- (vector_2431c21e)captureAnyCategoryRefsForViewRegion:(id)arg1 atLevel:(unsigned char)arg2 asSpanning:(BOOL)arg3;
- (vector_2431c21e)captureCategoryLabelRefsForViewRegion:(id)arg1 atLevel:(unsigned char)arg2 asSpanning:(BOOL)arg3 forRows:(BOOL)arg4;
- (vector_2431c21e)captureCategoryRefsForViewRange:(struct TSUCellRect)arg1 atLevel:(unsigned char)arg2 asSpanning:(BOOL)arg3;
- (vector_2431c21e)captureCategoryRefsForViewRegion:(id)arg1 atLevel:(unsigned char)arg2 asSpanning:(BOOL)arg3;
- (vector_2431c21e)captureCategoryRefsFromIterator:(id)arg1 atLevel:(unsigned char)arg2 asSpanning:(BOOL)arg3;
- (struct TSCECategoryRef)categoryRefForAggregateRangeRef:(const struct TSCERangeRef *)arg1;
- (vector_2431c21e)categoryRefsForSpanningCategoryRef:(const struct TSCECategoryRef *)arg1;
- (id)cellDiffForCell:(id)arg1 applyingGroupCellValue:(id)arg2 groupingType:(int)arg3 toBeInGroup:(id)arg4;
- (vector_4115f7f8)cellRefsForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (vector_4115f7f8)cellRefsForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2 ordered:(BOOL)arg3;
- (BOOL)changeCell:(id)arg1 atCellUID:(const struct TSTCellUID *)arg2 toBeInGroup:(id)arg3;
- (id)changeCellDiffMapToMoveRows:(const vector_4dc5f307 *)arg1 toGroup:(id)arg2 templateRowUID:(const UUIDData_5fbc143e *)arg3;
- (id)changeForMovingBaseRows:(const vector_4dc5f307 *)arg1 toDestGroup:(id)arg2;
- (id)changeForSettingGroupingColumnList:(id)arg1;
- (id)changeForUpdatingGroupValueOnNode:(const UUIDData_5fbc143e *)arg1 toValue:(id)arg2;
- (unordered_map_a2587d2e)changesPerColumnMapToBeInGroup:(id)arg1;
- (void)checkForFormulaCoordUpgrade;
- (id)childGroupUidsForGroupUids:(id)arg1;
- (void)clearAggNode:(id)arg1 forFormulaCoord:(const struct TSUCellCoord *)arg2;
- (void)clearValueForFormulaCoord:(const struct TSUCellCoord *)arg1;
- (id)columnAggregateListCopy;
- (id)columnAggregatesOnColumnUids:(const vector_4dc5f307 *)arg1;
- (id)columnNameForCategoryLevel:(unsigned char)arg1;
- (id)columnNameForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (BOOL)containsRowUid:(const UUIDData_5fbc143e *)arg1;
- (struct TSCECategoryRef)convertCategoryRefToRelativeAncestorUid:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2 inHostTable:(const UUIDData_5fbc143e *)arg3;
- (UUIDData_5fbc143e)convertToRelativeAncestorUid:(const UUIDData_5fbc143e *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (id)createAggregatorOnColumn:(const UUIDData_5fbc143e *)arg1;
- (BOOL)createAggregatorsIfMissingAndAssert:(BOOL)arg1;
- (id)defaultDateForGrouping;
- (void)deferGroupByChangeNotifications;
- (void)didAddGroupNode:(id)arg1;
- (void)didAddRowUID:(const UUIDData_5fbc143e *)arg1 toGroup:(id)arg2;
- (void)didChangeGroupByStructure;
- (void)didCreateGroup:(id)arg1;
- (void)didInitFromSOS;
- (void)didRemoveGroup:(id)arg1;
- (void)didRemoveRowUID:(const UUIDData_5fbc143e *)arg1 fromGroup:(id)arg2;
- (id)distinctValuesAtLevel:(unsigned char)arg1;
- (void)dropAggregator:(id)arg1;
- (void)dropAllAggregators;
- (void)encodeToArchive:(struct CategoryOwnerArchive_GroupByArchive *)arg1 archiver:(id)arg2;
- (void)endDeferringRebuildFormulas;
- (void)endOfGroupingChangesBatch;
- (void)enterCalcEngineMode;
- (void)enumerateAggregates:(CDUnknownBlockType)arg1;
- (void)enumerateAggregatesAtLevel:(unsigned char)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAllGroupsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateGroupingColumnsForColumn:(const UUIDData_5fbc143e *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateGroupsAtLevel:(unsigned char)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRowsUidsAtLevel:(unsigned char)arg1 withBlock:(CDUnknownBlockType)arg2;
- (struct TSCERecalculationState)evaluateFormulaAt:(struct TSUCellCoord)arg1 withCalcEngine:(id)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
- (long long)evaluationMode;
- (void)exitCalcEngineMode;
- (vector_2431c21e)expandSpanningCategoryRef:(struct TSCECategoryRef)arg1;
- (id)findGroupNodeForValue:(id)arg1 atLevel:(unsigned char)arg2 createIfMissing:(BOOL)arg3;
- (struct TSUCellCoord)getNextAggFormulaCoord;
- (unsigned char)groupLevelForGroupUid:(const UUIDData_5fbc143e *)arg1;
- (unsigned char)groupLevelForGroupUid:(const UUIDData_5fbc143e *)arg1 isBlank:(BOOL *)arg2 isError:(BOOL *)arg3;
- (id)groupNodeForGroupUid:(const UUIDData_5fbc143e *)arg1;
- (id)groupNodeForGroupValueHierarchyFromSplitter:(id)arg1 startAtComponent:(unsigned long long)arg2 startAtWord:(unsigned long long)arg3 preserveFlags:(struct TSUPreserveFlags *)arg4;
- (id)groupNodeForRowUid:(const UUIDData_5fbc143e *)arg1 atLevel:(unsigned char)arg2;
- (unordered_map_8a2ad1cf *)groupNodesByGroupUid;
- (struct TSCECategoryRef)groupValueHierarchyRefOnValue:(id)arg1 atLevel:(unsigned char)arg2;
- (id)groupValueHierarchyStringForCategoryRef:(const struct TSCECategoryRef *)arg1 forHostCellRef:(const struct TSCECellRef *)arg2 namingContext:(id)arg3;
- (struct TSCECategoryRef)groupValueRefOnValue:(id)arg1 atLevel:(unsigned char)arg2;
- (id)groupValueTupleForRowUid:(const UUIDData_5fbc143e *)arg1 atLevel:(unsigned char)arg2;
- (id)groupingColumnAtCategoryLevel:(unsigned char)arg1;
- (vector_ae66d7ff)groupingColumnLevelsForColumn:(const UUIDData_5fbc143e *)arg1;
- (id)groupingColumnListCopy;
- (id)groupsAtLevel:(unsigned char)arg1;
- (BOOL)inCalcEngineMode;
- (unsigned long long)indexOfGroupingColumn:(id)arg1;
- (id)indexesOfGroupUidsInUids:(const vector_4dc5f307 *)arg1;
- (id)initWithArchive:(const struct CategoryOwnerArchive_GroupByArchive *)arg1 forCategoryOwner:(id)arg2;
- (id)initWithGroupings:(id)arg1 categoryOwner:(id)arg2;
- (id)initWithGroupings:(id)arg1 categoryOwner:(id)arg2 groupByUid:(const UUIDData_5fbc143e *)arg3;
- (void)insertRowUid:(const UUIDData_5fbc143e *)arg1 forGroupValue:(id)arg2;
- (void)insertRowUids:(id)arg1;
- (void)invalidateForCalcEngine:(id)arg1;
- (BOOL)isBlankGroupUid:(const UUIDData_5fbc143e *)arg1;
- (BOOL)isDeferringGroupByChangeNotifications;
- (BOOL)isErrorGroupUid:(const UUIDData_5fbc143e *)arg1;
- (BOOL)isGroupingColumn:(const UUIDData_5fbc143e *)arg1;
- (BOOL)isRebuildFormulasDeferred;
- (BOOL)isSpanningCategoryRef:(const struct TSCECategoryRef *)arg1;
- (BOOL)isValidCategoryRef:(const struct TSCECategoryRef *)arg1;
- (id)labelForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (id)labelRowUIDSet;
- (id)labelRowUIDSetForCategoryLevel:(unsigned char)arg1 labelRowVisibility:(unsigned long long)arg2;
- (id)labelRowUidsForGroupUids:(id)arg1;
- (id)linkedResolver;
- (void)mapGroupUidsForChange:(id)arg1;
- (void)markAllAggregatesAsDirty;
- (void)markAllDependentsAsDirty;
- (void)markAllGroupNodesDirty;
- (unsigned long long)numberOfGroupsAtLevel:(unsigned char)arg1;
- (unsigned short)ownerKind;
- (UUIDData_5fbc143e)ownerUID;
- (id)p_cellDiffForFinishedCell:(id)arg1;
- (id)p_columnNameForColumnUid:(const UUIDData_5fbc143e *)arg1;
- (vector_2431c21e)p_promoteSpanningReferences:(vector_2431c21e)arg1 withCaptured:(id)arg2 atLevel:(unsigned char)arg3;
- (void)p_setCell:(id)arg1 forDayGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (void)p_setCell:(id)arg1 forDayOfWeekGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (void)p_setCell:(id)arg1 forMonthGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (void)p_setCell:(id)arg1 forUniqueGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (void)p_setCell:(id)arg1 forYearGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (void)p_setCell:(id)arg1 forYearQuarterGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (void)p_setCell:(id)arg1 forYearWeekGroupingTypeWithGroupColumnValue:(id)arg2 toBeInGroup:(id)arg3;
- (BOOL)p_setCell:(id)arg1 groupingCellPlan:(const struct TSTPlanForGroupingCell *)arg2 groupValue:(id)arg3 toGroup:(id)arg4 templateCell:(id)arg5;
- (void)p_setCell:(id)arg1 groupingTypeCombo:(unsigned short)arg2 groupingCellValue:(id)arg3 toBeInGroup:(id)arg4;
- (void)p_setupCustomFormatsWithLocale:(id)arg1;
- (id)prettyStringForCategoryRef:(const struct TSCECategoryRef *)arg1 forHostCellRef:(const struct TSCECellRef *)arg2 namingContext:(id)arg3;
- (vector_2431c21e)promoteSpanningReferences:(vector_2431c21e)arg1;
- (void)rebuildAllAggFormulas;
- (void)remapTableUIDsInFormulasWithMap:(const UUIDMap_71b9b5e2 *)arg1 calcEngine:(id)arg2;
- (void)removeRowUid:(const UUIDData_5fbc143e *)arg1;
- (void)removeRowUid:(const UUIDData_5fbc143e *)arg1 forGroupValue:(id)arg2;
- (void)removeRowUids:(id)arg1;
- (void)resetAllAggsFormula;
- (void)resetGroupBy;
- (void)resetGroupingColumnsFormula;
- (void)resetGroupings;
- (struct TSCECategoryRef)resolveCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2 inHostTable:(const UUIDData_5fbc143e *)arg3;
- (UUIDData_5fbc143e)resolveRelativeAncestorUid:(const UUIDData_5fbc143e *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (void)resumeGroupByChangeNotifications;
- (id)rowUidsForGroupUids:(id)arg1;
- (id)rowUidsForGroupValue:(id)arg1 atLevel:(unsigned char)arg2;
- (id)rowsForGroupValue:(id)arg1 atLevel:(unsigned char)arg2;
- (void)runChange:(id)arg1 withAggregates:(id)arg2;
- (void)sendDeferredNotifictions:(id)arg1;
- (void)setAggNode:(id)arg1 forFormulaCoord:(const struct TSUCellCoord *)arg2;
- (void)setAggregateType:(unsigned char)arg1 forColumnUID:(const UUIDData_5fbc143e *)arg2 atGroupLevel:(unsigned char)arg3;
- (void)setGroupingColumnList:(id)arg1;
- (void)setValue:(id)arg1 forFormulaCoord:(const struct TSUCellCoord *)arg2;
- (id)sortedValuesAtLevel:(unsigned char)arg1;
- (void)startOfGroupingChangesBatch;
- (id)stringForCategoryRef:(const struct TSCECategoryRef *)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2;
- (void)teardown;
- (id)uidRectRefForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (vector_4115f7f8)unorderedCellRefsForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (void)updateAggFormulaCoord:(struct TSUCellCoord)arg1;
- (void)updateWithDocumentRoot:(id)arg1;
- (void)usedAggFormulaCoord:(const struct TSUCellCoord *)arg1;
- (id)valueForFormulaCoord:(const struct TSUCellCoord *)arg1;
- (vector_10088e46)valuesForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (vector_10088e46)valuesForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (id)viewCellTractRefForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (id)viewCellTractRefForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (void)willMakeGroupingChangesInRowUIDs:(id)arg1;
- (void)willRemoveGroup:(id)arg1;
- (void)willRemoveGroupNode:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;

@end


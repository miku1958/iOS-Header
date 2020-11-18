//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSCECalculationEngineRegistration-Protocol.h>
#import <iWorkImport/TSCEColumnRowUIDMapping-Protocol.h>
#import <iWorkImport/TSCEFormulaOwning-Protocol.h>
#import <iWorkImport/TSCEReferenceResolving-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSTCustomStrokeProviding-Protocol.h>
#import <iWorkImport/TSTStyleProviding-Protocol.h>
#import <iWorkImport/TSTTableStrokeProviding-Protocol.h>
#import <iWorkImport/TSTTableTileCreating-Protocol.h>

@class NSArray, NSMapTable, NSString, NSUUID, TSCECalculationEngine, TSCEOwnerUidMapper, TSDStroke, TSTCategoryOwner, TSTCellDictionary, TSTCellStyle, TSTCellWillChangeDistributor, TSTColumnRowUIDMap, TSTConcurrentMutableCellUIDSet, TSTConditionalStyleFormulaOwner, TSTHiddenStateFormulaOwner, TSTHiddenStatesOwner, TSTInfo, TSTMergeOwner, TSTPencilAnnotationOwner, TSTSortRuleReferenceTracker, TSTStrokeSidecar, TSTStructuredTextImportRecord, TSTTableDataStore, TSTTableFilterSet, TSTTableSortOrder, TSTTableStyle, TSTTableStylePreset, TSWPParagraphStyle, TSWPShapeStyle, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSTTableModel : TSPObject <TSCEReferenceResolving, TSCEColumnRowUIDMapping, TSCECalculationEngineRegistration, TSCEFormulaOwning, TSDMixing, TSTCustomStrokeProviding, TSTStyleProviding, TSTTableStrokeProviding, TSTTableTileCreating>
{
    TSTHiddenStateFormulaOwner *_hiddenStateFormulaOwnerForRows;
    TSTHiddenStateFormulaOwner *_hiddenStateFormulaOwnerForColumns;
    TSTStrokeSidecar *_strokeSidecar;
    BOOL _wasCut;
    BOOL _headerRowsFrozen;
    BOOL _headerColumnsFrozen;
    BOOL _tableNameEnabled;
    BOOL _tableNameBorderEnabled;
    BOOL _repeatingHeaderRowsEnabled;
    BOOL _repeatingHeaderColumnsEnabled;
    BOOL _styleApplyClearsAll;
    BOOL _presetNeedsStrongOwnership;
    BOOL _wasUnarchivedFromAProvidedTable;
    struct TSUModelColumnIndex _numberOfHeaderColumns;
    struct TSUModelRowIndex _numberOfHeaderRows;
    struct TSUModelRowIndex _numberOfFooterRows;
    unsigned long long _versionAtUnarchive;
    TSCECalculationEngine *_calcEngine;
    TSTTableDataStore *_dataStore;
    double _defaultRowHeight;
    double _defaultColumnWidth;
    NSString *_tableName;
    double _tableNameHeight;
    unsigned long long _presetIDForUpgrade;
    TSTTableStylePreset *_tableStylePreset;
    TSTTableStyle *_tableStyle;
    TSTInfo *_tableInfo;
    TSTCellStyle *_bodyCellStyle;
    TSTCellStyle *_headerRowCellStyle;
    TSTCellStyle *_headerColumnCellStyle;
    TSTCellStyle *_footerRowCellStyle;
    TSTCellStyle *_categoryLevel1CellStyle;
    TSTCellStyle *_categoryLevel2CellStyle;
    TSTCellStyle *_categoryLevel3CellStyle;
    TSTCellStyle *_categoryLevel4CellStyle;
    TSTCellStyle *_categoryLevel5CellStyle;
    TSTCellStyle *_labelLevel1CellStyle;
    TSTCellStyle *_labelLevel2CellStyle;
    TSTCellStyle *_labelLevel3CellStyle;
    TSTCellStyle *_labelLevel4CellStyle;
    TSTCellStyle *_labelLevel5CellStyle;
    TSWPParagraphStyle *_bodyTextStyle;
    TSWPParagraphStyle *_headerRowTextStyle;
    TSWPParagraphStyle *_headerColumnTextStyle;
    TSWPParagraphStyle *_footerRowTextStyle;
    TSWPParagraphStyle *_categoryLevel1TextStyle;
    TSWPParagraphStyle *_categoryLevel2TextStyle;
    TSWPParagraphStyle *_categoryLevel3TextStyle;
    TSWPParagraphStyle *_categoryLevel4TextStyle;
    TSWPParagraphStyle *_categoryLevel5TextStyle;
    TSWPParagraphStyle *_labelLevel1TextStyle;
    TSWPParagraphStyle *_labelLevel2TextStyle;
    TSWPParagraphStyle *_labelLevel3TextStyle;
    TSWPParagraphStyle *_labelLevel4TextStyle;
    TSWPParagraphStyle *_labelLevel5TextStyle;
    TSWPParagraphStyle *_tableNameStyle;
    TSWPShapeStyle *_tableNameShapeStyle;
    TSTCellDictionary *_cellsPendingWrite;
    TSTConcurrentMutableCellUIDSet *_cellsToInvalidateAfterRecalc;
    TSTConcurrentMutableCellUIDSet *_cellsToInvalidateNonoverflowingAfterRecalc;
    TSTConditionalStyleFormulaOwner *_conditionalStyleFormulaOwner;
    TSTMergeOwner *_mergeOwner;
    TSTCategoryOwner *_categoryOwner;
    TSTHiddenStatesOwner *_hiddenStatesOwner;
    TSTTableSortOrder *_sortOrder;
    TSTSortRuleReferenceTracker *_sortRuleReferenceTracker;
    TSTColumnRowUIDMap *_columnRowUIDMap;
    TSTCellWillChangeDistributor *_cellWillChangeDistributor;
    TSWPStorage *_deprecatedProvider;
    NSMapTable *_commentHostingMap;
    TSTStructuredTextImportRecord *_textImportRecord;
    TSTTableFilterSet *_upgradeFilterSet;
    TSTPencilAnnotationOwner *_pencilAnnotationOwner;
    UUIDData_5fbc143e _tableUID;
    UUIDData_5fbc143e _fromTableUID;
}

@property (strong, nonatomic) TSTCellStyle *bodyCellStyle; // @synthesize bodyCellStyle=_bodyCellStyle;
@property (readonly, nonatomic) TSDStroke *bodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *bodyRowStroke;
@property (readonly, nonatomic) TSDStroke *bodyRowStrokeEvenIfNotVisible;
@property (strong, nonatomic) TSWPParagraphStyle *bodyTextStyle; // @synthesize bodyTextStyle=_bodyTextStyle;
@property (nonatomic) TSCECalculationEngine *calcEngine; // @synthesize calcEngine=_calcEngine;
@property (readonly, nonatomic) TSDStroke *categoryLevel1BottomStroke;
@property (strong, nonatomic) TSTCellStyle *categoryLevel1CellStyle; // @synthesize categoryLevel1CellStyle=_categoryLevel1CellStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel1InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel1LabelSeparatorStroke;
@property (strong, nonatomic) TSWPParagraphStyle *categoryLevel1TextStyle; // @synthesize categoryLevel1TextStyle=_categoryLevel1TextStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel1TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2BottomStroke;
@property (strong, nonatomic) TSTCellStyle *categoryLevel2CellStyle; // @synthesize categoryLevel2CellStyle=_categoryLevel2CellStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel2InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2LabelSeparatorStroke;
@property (strong, nonatomic) TSWPParagraphStyle *categoryLevel2TextStyle; // @synthesize categoryLevel2TextStyle=_categoryLevel2TextStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel2TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3BottomStroke;
@property (strong, nonatomic) TSTCellStyle *categoryLevel3CellStyle; // @synthesize categoryLevel3CellStyle=_categoryLevel3CellStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel3InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3LabelSeparatorStroke;
@property (strong, nonatomic) TSWPParagraphStyle *categoryLevel3TextStyle; // @synthesize categoryLevel3TextStyle=_categoryLevel3TextStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel3TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4BottomStroke;
@property (strong, nonatomic) TSTCellStyle *categoryLevel4CellStyle; // @synthesize categoryLevel4CellStyle=_categoryLevel4CellStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel4InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4LabelSeparatorStroke;
@property (strong, nonatomic) TSWPParagraphStyle *categoryLevel4TextStyle; // @synthesize categoryLevel4TextStyle=_categoryLevel4TextStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel4TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5BottomStroke;
@property (strong, nonatomic) TSTCellStyle *categoryLevel5CellStyle; // @synthesize categoryLevel5CellStyle=_categoryLevel5CellStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel5InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5LabelSeparatorStroke;
@property (strong, nonatomic) TSWPParagraphStyle *categoryLevel5TextStyle; // @synthesize categoryLevel5TextStyle=_categoryLevel5TextStyle;
@property (readonly, nonatomic) TSDStroke *categoryLevel5TopStroke;
@property (readonly, nonatomic) TSTCategoryOwner *categoryOwner; // @synthesize categoryOwner=_categoryOwner;
@property (readonly, nonatomic) TSTCellWillChangeDistributor *cellWillChangeDistributor; // @synthesize cellWillChangeDistributor=_cellWillChangeDistributor;
@property (readonly, nonatomic) TSTCellDictionary *cellsPendingWrite; // @synthesize cellsPendingWrite=_cellsPendingWrite;
@property (readonly, nonatomic) TSTConcurrentMutableCellUIDSet *cellsToInvalidateAfterRecalc; // @synthesize cellsToInvalidateAfterRecalc=_cellsToInvalidateAfterRecalc;
@property (readonly, nonatomic) TSTConcurrentMutableCellUIDSet *cellsToInvalidateNonoverflowingAfterRecalc; // @synthesize cellsToInvalidateNonoverflowingAfterRecalc=_cellsToInvalidateNonoverflowingAfterRecalc;
@property (strong, nonatomic) TSTColumnRowUIDMap *columnRowUIDMap; // @synthesize columnRowUIDMap=_columnRowUIDMap;
@property (readonly, strong, nonatomic) NSArray *columnWidths;
@property (readonly, strong, nonatomic) NSMapTable *commentHostingMap; // @synthesize commentHostingMap=_commentHostingMap;
@property (strong, nonatomic) TSTConditionalStyleFormulaOwner *conditionalStyleFormulaOwner; // @synthesize conditionalStyleFormulaOwner=_conditionalStyleFormulaOwner;
@property (readonly, nonatomic) UUIDData_5fbc143e conditionalStyleFormulaOwnerUID;
@property (strong, nonatomic) TSTTableDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultColumnWidth; // @synthesize defaultColumnWidth=_defaultColumnWidth;
@property (readonly, nonatomic) TSDStroke *defaultHorizontalBorderStroke;
@property (readonly, nonatomic) TSDStroke *defaultHorizontalBorderStrokeEvenIfNotVisible;
@property (nonatomic) double defaultRowHeight; // @synthesize defaultRowHeight=_defaultRowHeight;
@property (readonly, nonatomic) TSDStroke *defaultVerticalBorderStroke;
@property (strong, nonatomic) TSWPStorage *deprecatedProvider; // @synthesize deprecatedProvider=_deprecatedProvider;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSDStroke *footerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBorderStroke;
@property (strong, nonatomic) TSTCellStyle *footerRowCellStyle; // @synthesize footerRowCellStyle=_footerRowCellStyle;
@property (readonly, nonatomic) TSDStroke *footerRowSeparatorStroke;
@property (strong, nonatomic) TSWPParagraphStyle *footerRowTextStyle; // @synthesize footerRowTextStyle=_footerRowTextStyle;
@property (nonatomic) UUIDData_5fbc143e fromTableUID; // @synthesize fromTableUID=_fromTableUID;
@property (readonly, nonatomic) BOOL hasAlternatingRows;
@property (readonly, nonatomic) BOOL hasTableBorder;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TSDStroke *headerColumnBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBorderStroke;
@property (strong, nonatomic) TSTCellStyle *headerColumnCellStyle; // @synthesize headerColumnCellStyle=_headerColumnCellStyle;
@property (readonly, nonatomic) TSDStroke *headerColumnSeparatorStroke;
@property (strong, nonatomic) TSWPParagraphStyle *headerColumnTextStyle; // @synthesize headerColumnTextStyle=_headerColumnTextStyle;
@property (nonatomic) BOOL headerColumnsFrozen; // @synthesize headerColumnsFrozen=_headerColumnsFrozen;
@property (readonly, nonatomic) TSDStroke *headerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBorderStroke;
@property (strong, nonatomic) TSTCellStyle *headerRowCellStyle; // @synthesize headerRowCellStyle=_headerRowCellStyle;
@property (readonly, nonatomic) TSDStroke *headerRowSeparatorStroke;
@property (strong, nonatomic) TSWPParagraphStyle *headerRowTextStyle; // @synthesize headerRowTextStyle=_headerRowTextStyle;
@property (nonatomic) BOOL headerRowsFrozen; // @synthesize headerRowsFrozen=_headerRowsFrozen;
@property (readonly, nonatomic) TSTHiddenStatesOwner *hiddenStatesOwner; // @synthesize hiddenStatesOwner=_hiddenStatesOwner;
@property (readonly, nonatomic) TSCEOwnerUidMapper *identityOwnerUIDMapper;
@property (strong, nonatomic) TSTCellStyle *labelLevel1CellStyle; // @synthesize labelLevel1CellStyle=_labelLevel1CellStyle;
@property (strong, nonatomic) TSWPParagraphStyle *labelLevel1TextStyle; // @synthesize labelLevel1TextStyle=_labelLevel1TextStyle;
@property (strong, nonatomic) TSTCellStyle *labelLevel2CellStyle; // @synthesize labelLevel2CellStyle=_labelLevel2CellStyle;
@property (strong, nonatomic) TSWPParagraphStyle *labelLevel2TextStyle; // @synthesize labelLevel2TextStyle=_labelLevel2TextStyle;
@property (strong, nonatomic) TSTCellStyle *labelLevel3CellStyle; // @synthesize labelLevel3CellStyle=_labelLevel3CellStyle;
@property (strong, nonatomic) TSWPParagraphStyle *labelLevel3TextStyle; // @synthesize labelLevel3TextStyle=_labelLevel3TextStyle;
@property (strong, nonatomic) TSTCellStyle *labelLevel4CellStyle; // @synthesize labelLevel4CellStyle=_labelLevel4CellStyle;
@property (strong, nonatomic) TSWPParagraphStyle *labelLevel4TextStyle; // @synthesize labelLevel4TextStyle=_labelLevel4TextStyle;
@property (strong, nonatomic) TSTCellStyle *labelLevel5CellStyle; // @synthesize labelLevel5CellStyle=_labelLevel5CellStyle;
@property (strong, nonatomic) TSWPParagraphStyle *labelLevel5TextStyle; // @synthesize labelLevel5TextStyle=_labelLevel5TextStyle;
@property (readonly, nonatomic) TSTMergeOwner *mergeOwner; // @synthesize mergeOwner=_mergeOwner;
@property (readonly, nonatomic) NSUUID *nsTableUID;
@property (readonly, nonatomic) struct TSUModelColumnIndex numberOfColumns;
@property (nonatomic) struct TSUModelRowIndex numberOfFooterRows; // @synthesize numberOfFooterRows=_numberOfFooterRows;
@property (nonatomic) struct TSUModelColumnIndex numberOfHeaderColumns; // @synthesize numberOfHeaderColumns=_numberOfHeaderColumns;
@property (nonatomic) struct TSUModelRowIndex numberOfHeaderRows; // @synthesize numberOfHeaderRows=_numberOfHeaderRows;
@property (readonly, nonatomic) struct TSUModelRowIndex numberOfRows;
@property (readonly, nonatomic) TSCEOwnerUidMapper *ownerUIDMapper;
@property (readonly, nonatomic) TSTPencilAnnotationOwner *pencilAnnotationOwner; // @synthesize pencilAnnotationOwner=_pencilAnnotationOwner;
@property (nonatomic) unsigned long long presetIDForUpgrade; // @synthesize presetIDForUpgrade=_presetIDForUpgrade;
@property (nonatomic) BOOL presetNeedsStrongOwnership; // @synthesize presetNeedsStrongOwnership=_presetNeedsStrongOwnership;
@property (nonatomic) BOOL repeatingHeaderColumnsEnabled; // @synthesize repeatingHeaderColumnsEnabled=_repeatingHeaderColumnsEnabled;
@property (nonatomic) BOOL repeatingHeaderRowsEnabled; // @synthesize repeatingHeaderRowsEnabled=_repeatingHeaderRowsEnabled;
@property (readonly, strong, nonatomic) NSArray *rowHeights;
@property (copy, nonatomic) TSTTableSortOrder *sortOrder; // @synthesize sortOrder=_sortOrder;
@property (readonly, nonatomic) TSTSortRuleReferenceTracker *sortRuleReferenceTracker; // @synthesize sortRuleReferenceTracker=_sortRuleReferenceTracker;
@property (strong, nonatomic) TSTStrokeSidecar *strokeSidecar;
@property (nonatomic) BOOL styleApplyClearsAll; // @synthesize styleApplyClearsAll=_styleApplyClearsAll;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) TSTInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
@property (strong, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property (nonatomic) BOOL tableNameBorderEnabled; // @synthesize tableNameBorderEnabled=_tableNameBorderEnabled;
@property (readonly, nonatomic) TSDStroke *tableNameBorderStroke;
@property (nonatomic) BOOL tableNameEnabled; // @synthesize tableNameEnabled=_tableNameEnabled;
@property (nonatomic) double tableNameHeight; // @synthesize tableNameHeight=_tableNameHeight;
@property (strong, nonatomic) TSWPShapeStyle *tableNameShapeStyle; // @synthesize tableNameShapeStyle=_tableNameShapeStyle;
@property (strong, nonatomic) TSWPParagraphStyle *tableNameStyle; // @synthesize tableNameStyle=_tableNameStyle;
@property (strong, nonatomic) TSTTableStyle *tableStyle; // @synthesize tableStyle=_tableStyle;
@property (strong, nonatomic) TSTTableStylePreset *tableStylePreset; // @synthesize tableStylePreset=_tableStylePreset;
@property (nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;
@property (readonly, nonatomic) int tableWritingDirection;
@property (strong, nonatomic) TSTStructuredTextImportRecord *textImportRecord; // @synthesize textImportRecord=_textImportRecord;
@property (strong, nonatomic) TSTTableFilterSet *upgradeFilterSet; // @synthesize upgradeFilterSet=_upgradeFilterSet;
@property (readonly, nonatomic) UUIDData_5fbc143e upgradeHiddenFormulaOwnerForColumnsUID;
@property (readonly, nonatomic) UUIDData_5fbc143e upgradeHiddenFormulaOwnerForRowsUID;
@property (readonly, nonatomic) BOOL upgradeNeedsToUpdateFilterSetForImport;
@property (readonly, nonatomic) unsigned long long versionAtUnarchive; // @synthesize versionAtUnarchive=_versionAtUnarchive;
@property (nonatomic) BOOL wasCut; // @synthesize wasCut=_wasCut;
@property (nonatomic) BOOL wasUnarchivedFromAProvidedTable; // @synthesize wasUnarchivedFromAProvidedTable=_wasUnarchivedFromAProvidedTable;

+ (BOOL)needsObjectUUID;
+ (id)tableModelForTableUID:(const UUIDData_5fbc143e *)arg1 withCalcEngine:(id)arg2;
- (id).cxx_construct;
- (UUIDData_5fbc143e)UIDForIndex:(unsigned int)arg1 isRows:(BOOL)arg2;
- (id)UIDSetForIndexes:(id)arg1 isRows:(BOOL)arg2;
- (id)UIDSetForRange:(struct _NSRange)arg1 isRows:(BOOL)arg2;
- (vector_4dc5f307)UIDsForIndexes:(id)arg1 isRows:(BOOL)arg2;
- (vector_4dc5f307)UIDsForRange:(struct _NSRange)arg1 isRows:(BOOL)arg2;
- (struct TSUModelCellRect)actualHeaderColumnRange;
- (void)addPasteboardCustomFormatFromCell:(id)arg1;
- (void)addPasteboardCustomFormatsToDocumentAndUpdateCells;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)allRichTextStorages;
- (void)assertCollaborationConvergence;
- (BOOL)auditDatalistDuplicationReturningResult:(id *)arg1;
- (BOOL)auditRowInfoCellCountsReturningResult:(id *)arg1;
- (BOOL)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord)arg1 result:(id *)arg2;
- (struct TSUModelCellCoord)baseCellCoordForCellContainingRichTextStorage:(id)arg1;
- (struct TSUModelCellRect)bodyColumnRange;
- (struct TSUModelCellRect)bodyRange;
- (struct TSUModelCellRect)bodyRowRange;
- (struct TSUModelCellRect)bottomCornerRange;
- (id)cellAtBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (id)cellBorderAtCellID:(struct TSUCellCoord)arg1;
- (BOOL)cellExistsAtBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (struct TSUModelCellRect)cellRangeForTableArea:(unsigned long long)arg1;
- (struct TSUCellRect)cellRangeForUIDRange:(const UUIDRect_d701734b *)arg1;
- (BOOL)cellStyle:(id)arg1 isEqualToDefaultCellStyleForBaseCellCoord:(struct TSUModelCellCoord)arg2;
- (id)cellStyleAtBaseCellCoord:(struct TSUModelCellCoord)arg1 isDefault:(out BOOL *)arg2;
- (id)cellStyleForCellWithEmptyStyleAtBaseCellCoord:(struct TSUModelCellCoord)arg1 isDefault:(out BOOL *)arg2;
- (id)cellStyleOfColumnAtIndex:(struct TSUModelColumnIndex)arg1 isDefault:(out BOOL *)arg2;
- (id)cellStyleOfRowAtIndex:(struct TSUModelRowIndex)arg1 isDefault:(out BOOL *)arg2;
- (UUIDRect_d701734b)cellUIDRangeForCellRange:(struct TSUCellRect)arg1;
- (id)cellValueAtBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (id)cellValueFromCell:(id)arg1 atBaseCellCoord:(struct TSUModelCellCoord)arg2;
- (int)cellValueTypeAtBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (struct TSCECellCoordSet)cellsModifiedInCurrentRecalcCycle;
- (void)clearCommentHostingMapForCommentStorage:(id)arg1;
- (void)clearFromTableUID;
- (void)clearPasteboardCustomFormatsListsAndMaps;
- (unsigned short)columnIndexForColumnUID:(const UUIDData_5fbc143e *)arg1;
- (id)columnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (struct _NSRange)columnRangeForUIDs:(const vector_4dc5f307 *)arg1;
- (UUIDData_5fbc143e)columnUIDForColumnIndex:(unsigned short)arg1;
- (vector_4dc5f307)columnUIDs;
- (vector_4dc5f307)columnUIDsForColumnIndexes:(id)arg1;
- (vector_4dc5f307)columnUIDsForColumnRange:(struct _NSRange)arg1;
- (id)commentHostingAtBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (id)commentHostingAtBaseCellCoord:(struct TSUModelCellCoord)arg1 forCommentStorage:(id)arg2;
- (double)computeDefaultFontHeightForTableStyleArea:(unsigned long long)arg1;
- (void)computeDefaultRowHeight;
- (id)conditionalStyleSetAtBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (BOOL)confirmRefCountsReturningResult:(id *)arg1;
- (void)copyPasteboardCustomFormatsFromTableModel:(id)arg1;
- (void)dealloc;
- (id)defaultCellStyleForBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (id)defaultCellStyleForTableStyleArea:(unsigned long long)arg1;
- (id)defaultTextStyleForBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (id)defaultTextStyleForTableStyleArea:(unsigned long long)arg1;
- (id)drawableInfo;
- (void)enumerateDataStoreCellsWithBlock:(CDUnknownBlockType)arg1;
- (id)fillForColumn:(struct TSUModelColumnIndex)arg1;
- (id)fillForRow:(struct TSUModelRowIndex)arg1;
- (id)fontColorAtBaseCellCoord:(struct TSUModelCellCoord)arg1 optionalCell:(id)arg2;
- (struct TSUModelCellRect)footerRowRange;
- (id)formatAtBaseCellCoord:(struct TSUModelCellCoord)arg1 formatIsExplicitOut:(BOOL *)arg2;
- (struct TSCEFormula *)formulaAtBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (UUIDData_5fbc143e)formulaOwnerUID;
- (int)getCell:(id)arg1 atBaseCellCoord:(struct TSUModelCellCoord)arg2;
- (int)getCell:(id)arg1 atBaseCellCoord:(struct TSUModelCellCoord)arg2 suppressCellBorder:(BOOL)arg3;
- (int)getDefaultCell:(out id)arg1 forBaseCellCoord:(struct TSUModelCellCoord)arg2;
- (int)getDefaultCell:(out id)arg1 forTableStyleArea:(unsigned long long)arg2;
- (int)getValue:(out struct TSCEValue *)arg1 atBaseCellCoord:(struct TSUModelCellCoord)arg2 fetchRichTextAttributesIfPlainText:(BOOL)arg3;
- (BOOL)hasCellID:(struct TSUCellCoord)arg1;
- (BOOL)hasCommentAtBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (BOOL)hasCommentStorageAtBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (BOOL)hasControls;
- (BOOL)hasFormulaAtBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (BOOL)hasFormulas;
- (BOOL)hasImportWarnings;
- (BOOL)hasNamesInHeaders;
- (struct TSUModelCellRect)headerColumnRange;
- (unsigned char)headerInfo_hidingActionForColumnAtIndex:(struct TSUModelColumnIndex)arg1;
- (unsigned char)headerInfo_hidingActionForRowAtIndex:(struct TSUModelRowIndex)arg1;
- (struct TSUModelCellRect)headerRowRange;
- (double)heightOfRowAtIndex:(struct TSUModelRowIndex)arg1 isDefault:(out BOOL *)arg2;
- (id)hiddenStateFormulaOwnerForColumns;
- (id)hiddenStateFormulaOwnerForRows;
- (id)initWithContext:(id)arg1 fromSourceModel:(id)arg2 region:(id)arg3 tableInfo:(id)arg4 waitForCalcEngine:(BOOL)arg5;
- (id)initWithContext:(id)arg1 rowUids:(const vector_4dc5f307 *)arg2 columnUids:(const vector_4dc5f307 *)arg3 styles:(id)arg4 stylePreset:(id)arg5 tableInfo:(id)arg6;
- (id)initWithContext:(id)arg1 rows:(unsigned int)arg2 columns:(unsigned int)arg3 styles:(id)arg4 stylePreset:(id)arg5 tableInfo:(id)arg6;
- (id)initWithContext:(id)arg1 tableUID:(UUIDData_5fbc143e)arg2 columnRowUIDMap:(id)arg3 styles:(id)arg4 stylePreset:(id)arg5 tableInfo:(id)arg6;
- (int)insertColumnsAtIndex:(struct TSUModelColumnIndex)arg1 uids:(const vector_4dc5f307 *)arg2 metadatas:(id)arg3 tableArea:(unsigned long long)arg4;
- (int)insertRowsAtIndex:(struct TSUModelRowIndex)arg1 uids:(const vector_4dc5f307 *)arg2 metadatas:(id)arg3 tableArea:(unsigned long long)arg4 unsetFilterHidingAction:(BOOL)arg5;
- (int)insertRowsInBaseRange:(struct _NSRange)arg1 uids:(const vector_4dc5f307 *)arg2 metadata:(id)arg3 unsetFilterHidingAction:(BOOL)arg4;
- (void)invalidateForCalcEngine:(id)arg1;
- (BOOL)isRegisteredWithCalcEngine:(id)arg1;
- (id)linkedResolver;
- (void)loadFromUnarchiver:(id)arg1;
- (void)makePasteboardCustomFormatList;
- (void)mapTableStylesToStylesheet:(id)arg1 withMapper:(id)arg2;
- (int)maxStrokeOrder;
- (struct TSUModelCellRect)mergedRangeForBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (id)metadataForColumnIndex:(struct TSUModelColumnIndex)arg1 hidingAction:(unsigned char)arg2;
- (id)metadataForRowIndex:(struct TSUModelRowIndex)arg1 hidingAction:(unsigned char)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)moveBaseColumnRange:(struct _NSRange)arg1 toColumnIndex:(struct TSUModelColumnIndex)arg2;
- (void)moveBaseRowRange:(struct _NSRange)arg1 toRowIndex:(struct TSUModelRowIndex)arg2;
- (id)mutableColumnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (id)mutableIndexesForUIDSet:(id)arg1 isRows:(BOOL)arg2;
- (id)mutableIndexesForUIDSet:(id)arg1 isRows:(BOOL)arg2 notFoundUIDs:(id)arg3;
- (id)mutableIndexesForUIDs:(const vector_4dc5f307 *)arg1 isRows:(BOOL)arg2;
- (id)mutableRowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (id)newCell;
- (void)notifyTableOfNewResults;
- (unsigned long long)numberOfComments;
- (unsigned long long)numberOfPopulatedCells;
- (id)objectToArchiveInDependencyTracker;
- (int)ownerKind;
- (UUIDData_5fbc143e)ownerUID;
- (BOOL)p_auditTableHealthUpgradingFromVersion:(unsigned long long)arg1;
- (BOOL)p_auditTilesForRowOverlapAndExtensionPastTableBoundsWithVersion:(unsigned long long)arg1;
- (void)p_clearDefaultStyles;
- (void)p_iterateDataStoreCellsInRegion:(id)arg1 searchFlags:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (int)p_preflightApplyBaseCellMap:(id)arg1;
- (int)p_preflightSetCell:(id)arg1 atBaseCellCoord:(struct TSUModelCellCoord)arg2;
- (void)p_rebuildTheTable:(id)arg1;
- (CDStruct_c0454aff)p_tableSize;
- (void)p_upgradeDefaultCellStylesForStrokeSidecar;
- (void)p_upgradeMerges;
- (void)performReadForOneOffFormulaEvaluation:(id)arg1 forCellCoord:(struct TSUCellCoord)arg2;
- (void)postCommentNotificationForStorage:(id)arg1 baseCellCoord:(struct TSUModelCellCoord)arg2 notificationKey:(id)arg3;
- (void)prepareForPasteWithCalculationEngine:(id)arg1 sourceOffset:(CDStruct_1ef3fb1f)arg2;
- (vector_4dc5f307)prunedColumnUIDsFromColumnUIDs:(const vector_4dc5f307 *)arg1;
- (vector_4dc5f307)prunedRowUIDsFromRowUIDs:(const vector_4dc5f307 *)arg1;
- (struct TSUModelCellRect)range;
- (void)reassignPasteboardCustomFormatKeys;
- (CDStruct_2a4d9400)recalculateForCalcEngine:(id)arg1 atFormulaCoord:(struct TSUCellCoord)arg2 recalcOptions:(CDStruct_3d581f42)arg3;
- (id)regionForValueOrCommentCellsInBaseCellRect:(struct TSUModelCellRect)arg1;
- (void)registerAllFormulasWithCalculationEngine:(id)arg1 wasCrossDocumentPaste:(BOOL)arg2 infoIsCategorized:(BOOL)arg3;
- (BOOL)registerLast;
- (int)registerWithCalcEngine:(id)arg1;
- (void)registerWithCalcEngineForDocumentLoad:(id)arg1;
- (void)remapTableUIDsInFormulasWithMap:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2 bakeForBadRefs:(BOOL)arg3;
- (void)removeColumnsAtBaseIndexes:(id)arg1;
- (void)removeColumnsAtIndex:(struct TSUModelColumnIndex)arg1 count:(struct TSUModelColumnIndex)arg2;
- (int)removeCommentStorageAtBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (void)removeRowsAtBaseIndexes:(id)arg1;
- (void)removeRowsAtIndex:(struct TSUModelRowIndex)arg1 count:(struct TSUModelRowIndex)arg2;
- (void)resetDependenciesForCell:(struct TSUCellCoord)arg1;
- (void)resetSortRuleReferenceTrackerForInsert;
- (UUIDData_5fbc143e)resolverUID;
- (unsigned int)rowIndexForRowUID:(const UUIDData_5fbc143e *)arg1;
- (id)rowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (struct _NSRange)rowRangeForUIDs:(const vector_4dc5f307 *)arg1;
- (UUIDData_5fbc143e)rowUIDForRowIndex:(unsigned int)arg1;
- (vector_4dc5f307)rowUIDs;
- (vector_4dc5f307)rowUIDsForRowIndexes:(id)arg1;
- (vector_4dc5f307)rowUIDsForRowRange:(struct _NSRange)arg1;
- (void)saveToArchiver:(id)arg1;
- (int)setCell:(id)arg1 atBaseCellCoord:(struct TSUModelCellCoord)arg2 ignoreFormula:(BOOL)arg3 clearImportWarnings:(BOOL)arg4;
- (int)setCellStyle:(id)arg1 atBaseCellCoord:(struct TSUModelCellCoord)arg2;
- (int)setCellStyle:(id)arg1 ofColumnAtIndex:(struct TSUModelColumnIndex)arg2;
- (int)setCellStyle:(id)arg1 ofRowAtIndex:(struct TSUModelRowIndex)arg2;
- (int)setCellsWithBaseCellMap:(id)arg1 ignoreFormulas:(BOOL)arg2 skipDirtyingNonFormulaCells:(BOOL)arg3;
- (void)setColumnWidths:(id)arg1;
- (int)setCommentStorage:(id)arg1 atBaseCellCoord:(struct TSUModelCellCoord)arg2;
- (void)setFormulaOwnerUIDsWithMap:(id)arg1 shouldStealReferences:(BOOL)arg2;
- (void)setHeight:(double)arg1 ofRow:(struct TSUModelRowIndex)arg2;
- (void)setHeight:(double)arg1 ofRowAtIndex:(struct TSUModelRowIndex)arg2;
- (void)setHidingState:(unsigned char)arg1 atColumnIndex:(const struct TSUModelColumnIndex *)arg2;
- (void)setHidingState:(unsigned char)arg1 atRowIndex:(const struct TSUModelRowIndex *)arg2;
- (void)setNewFormulaOwnerUIDsForDuplicatesWithCalcEngine:(id)arg1;
- (void)setRowHeights:(id)arg1;
- (void)setStorageParentToInfo:(id)arg1;
- (void)setStroke:(id)arg1 forBottomOfRow:(unsigned int)arg2 order:(int)arg3;
- (void)setStroke:(id)arg1 forBottomOfRow:(unsigned int)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange)arg4;
- (void)setStroke:(id)arg1 forLeftOfColumn:(unsigned short)arg2 order:(int)arg3;
- (void)setStroke:(id)arg1 forLeftOfColumn:(unsigned short)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange)arg4;
- (void)setStroke:(id)arg1 forRightOfColumn:(unsigned short)arg2 order:(int)arg3;
- (void)setStroke:(id)arg1 forRightOfColumn:(unsigned short)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange)arg4;
- (void)setStroke:(id)arg1 forTopOfRow:(unsigned int)arg2 order:(int)arg3;
- (void)setStroke:(id)arg1 forTopOfRow:(unsigned int)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange)arg4;
- (void)setStyleNetwork:(id)arg1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (int)setTextStyle:(id)arg1 atBaseCellCoord:(struct TSUModelCellCoord)arg2;
- (int)setTextStyle:(id)arg1 ofColumnAtIndex:(struct TSUModelColumnIndex)arg2;
- (int)setTextStyle:(id)arg1 ofRowAtIndex:(struct TSUModelRowIndex)arg2;
- (void)setWidth:(double)arg1 ofColumn:(struct TSUModelColumnIndex)arg2;
- (void)setWidth:(double)arg1 ofColumnAtIndex:(struct TSUModelColumnIndex)arg2;
- (void)setlabelLevel1CellStyle:(id)arg1;
- (void)setlabelLevel1TextStyle:(id)arg1;
- (void)setlabelLevel2CellStyle:(id)arg1;
- (void)setlabelLevel2TextStyle:(id)arg1;
- (void)setlabelLevel3CellStyle:(id)arg1;
- (void)setlabelLevel3TextStyle:(id)arg1;
- (void)setlabelLevel4CellStyle:(id)arg1;
- (void)setlabelLevel4TextStyle:(id)arg1;
- (void)setlabelLevel5CellStyle:(id)arg1;
- (void)setlabelLevel5TextStyle:(id)arg1;
- (id)sheetName;
- (id)stringAtBaseCellCoord:(struct TSUModelCellCoord)arg1 optionalCell:(id)arg2;
- (id)strokeLayerForBottomOfRow:(unsigned int)arg1;
- (id)strokeLayerForLeftSideOfColumn:(unsigned short)arg1;
- (id)strokeLayerForRightSideOfColumn:(unsigned short)arg1;
- (id)strokeLayerForTopOfRow:(unsigned int)arg1;
- (void)swapRowAtIndex:(struct TSUModelRowIndex)arg1 withRowAtIndex:(struct TSUModelRowIndex)arg2;
- (unsigned long long)tableAreaForBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (unsigned long long)tableAreaForColumn:(struct TSUModelColumnIndex)arg1;
- (unsigned long long)tableAreaForRow:(struct TSUModelRowIndex)arg1;
- (id)tableAreasForBaseCellRect:(struct TSUModelCellRect)arg1;
- (struct TSCERangeCoordinate)tableRangeCoordinate;
- (unsigned long long)tableStyleAreaForBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (unsigned long long)tableStyleAreaForRow:(struct TSUModelRowIndex)arg1;
- (BOOL)textStyle:(id)arg1 isEqualToDefaultTextStyleForBaseCellCoord:(struct TSUModelCellCoord)arg2;
- (id)textStyleAtBaseCellCoord:(struct TSUModelCellCoord)arg1 isDefault:(out BOOL *)arg2;
- (id)textStyleForCellWithEmptyStyleAtBaseCellCoord:(struct TSUModelCellCoord)arg1 isDefault:(out BOOL *)arg2;
- (id)textStyleOfColumnAtIndex:(struct TSUModelColumnIndex)arg1 isDefault:(out BOOL *)arg2;
- (id)textStyleOfRowAtIndex:(struct TSUModelRowIndex)arg1 isDefault:(out BOOL *)arg2;
- (struct TSUModelCellRect)topCornerRange;
- (struct TSCEValue)tsceValueFromCell:(id)arg1 atBaseCellCoord:(struct TSUModelCellCoord)arg2 fetchRichTextAttributesIfPlainText:(BOOL)arg3;
- (id)unnamedTableString;
- (void)unregisterFromCalcEngine:(id)arg1;
- (void)updateCalculationEngineForFormula:(struct TSCEFormula *)arg1 inBaseCellCoord:(struct TSUModelCellCoord)arg2;
- (void)updateTableRowColumnStylesWithBlock:(CDUnknownBlockType)arg1;
- (void)upgradeDuringDocumentUpgradeIfNeeded:(unsigned long long)arg1 tableInfo:(id)arg2;
- (void)upgradeFormatsForCustomFormatListU2_0;
- (void)upgradeFromPreUFF;
- (void)upgradeHiddenStates;
- (void)validate;
- (double)widthOfColumnAtIndex:(struct TSUModelColumnIndex)arg1 isDefault:(out BOOL *)arg2;
- (void)willClose;
- (void)writeResultsForCalcEngine:(id)arg1;

@end


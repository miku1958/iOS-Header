//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPContainedObject.h>

@class NSMutableDictionary, NSObject, TSKCustomFormatList, TSPLazyReference, TSTMergeRegionMap, TSTTableDataList, TSTTableHeaderStorage, TSTTableHeaderStorageBucket, TSTTileIDKeyDict;
@protocol TSDContainerInfo><TSWPStorageParent;

__attribute__((visibility("hidden")))
@interface TSTTableDataStore : TSPContainedObject
{
    _Atomic int _iteratorRunningCount;
    vector_e87daf7b _mergedRects;
    BOOL _upgrading;
    BOOL _cellCountValid;
    unsigned char _storageVersionPreBNC;
    BOOL _missingPostBNCDatalists;
    unsigned short _nextRowStripID;
    unsigned int _cellCount;
    TSKCustomFormatList *_pasteboardCustomFormatList;
    struct TSTTableRBTreeNode_s *_rowTileIndex;
    TSTTileIDKeyDict *_tileStorage;
    TSTTableHeaderStorage *_rowHeaderStorage;
    TSTTableHeaderStorageBucket *_columnHeaderStorage;
    TSPLazyReference *_styleTableReference;
    TSPLazyReference *_conditionalStyleSetTableReference;
    TSPLazyReference *_stringTableReference;
    TSPLazyReference *_formulaTableReference;
    TSPLazyReference *_controlCellSpecTableReference;
    TSPLazyReference *_formulaErrorTableReference;
    TSPLazyReference *_richTextTableReference;
    TSPLazyReference *_formatTableReference;
    TSPLazyReference *_commentStorageTableReference;
    TSPLazyReference *_importWarningSetTableReference;
    TSPLazyReference *_preBNCFormatTableReference;
    TSTTableDataList *_multipleChoiceListFormatDataList;
    NSObject<TSDContainerInfo><TSWPStorageParent> *_richTextParentInfo;
    NSMutableDictionary *_pasteboardCustomFormatMap;
    TSTMergeRegionMap *_mergedCellRanges;
}

@property (nonatomic) unsigned int cellCount; // @synthesize cellCount=_cellCount;
@property (nonatomic) BOOL cellCountValid; // @synthesize cellCountValid=_cellCountValid;
@property (strong, nonatomic) TSTTableHeaderStorageBucket *columnHeaderStorage; // @synthesize columnHeaderStorage=_columnHeaderStorage;
@property (strong, nonatomic) TSPLazyReference *commentStorageTableReference; // @synthesize commentStorageTableReference=_commentStorageTableReference;
@property (strong, nonatomic) TSPLazyReference *conditionalStyleSetTableReference; // @synthesize conditionalStyleSetTableReference=_conditionalStyleSetTableReference;
@property (strong, nonatomic) TSPLazyReference *controlCellSpecTableReference; // @synthesize controlCellSpecTableReference=_controlCellSpecTableReference;
@property (strong, nonatomic) TSPLazyReference *formatTableReference; // @synthesize formatTableReference=_formatTableReference;
@property (strong, nonatomic) TSPLazyReference *formulaErrorTableReference; // @synthesize formulaErrorTableReference=_formulaErrorTableReference;
@property (strong, nonatomic) TSPLazyReference *formulaTableReference; // @synthesize formulaTableReference=_formulaTableReference;
@property (readonly, nonatomic) BOOL hasPasteboardCustomFormats; // @dynamic hasPasteboardCustomFormats;
@property (strong, nonatomic) TSPLazyReference *importWarningSetTableReference; // @synthesize importWarningSetTableReference=_importWarningSetTableReference;
@property (strong, nonatomic) TSTMergeRegionMap *mergedCellRanges; // @synthesize mergedCellRanges=_mergedCellRanges;
@property (nonatomic) BOOL missingPostBNCDatalists; // @synthesize missingPostBNCDatalists=_missingPostBNCDatalists;
@property (readonly, nonatomic) TSTTableDataList *multipleChoiceListFormatDataList; // @synthesize multipleChoiceListFormatDataList=_multipleChoiceListFormatDataList;
@property (nonatomic) unsigned short nextRowStripID; // @synthesize nextRowStripID=_nextRowStripID;
@property (readonly, nonatomic) unsigned long long numberOfComments;
@property (readonly, nonatomic) unsigned int numberOfConditionalStyles;
@property (readonly, nonatomic) unsigned int numberOfPopulatedCells;
@property (strong, nonatomic) TSKCustomFormatList *pasteboardCustomFormatList; // @synthesize pasteboardCustomFormatList=_pasteboardCustomFormatList;
@property (strong, nonatomic) NSMutableDictionary *pasteboardCustomFormatMap; // @synthesize pasteboardCustomFormatMap=_pasteboardCustomFormatMap;
@property (strong, nonatomic) TSPLazyReference *preBNCFormatTableReference; // @synthesize preBNCFormatTableReference=_preBNCFormatTableReference;
@property (weak, nonatomic) NSObject<TSDContainerInfo><TSWPStorageParent> *richTextParentInfo; // @synthesize richTextParentInfo=_richTextParentInfo;
@property (strong, nonatomic) TSPLazyReference *richTextTableReference; // @synthesize richTextTableReference=_richTextTableReference;
@property (strong, nonatomic) TSTTableHeaderStorage *rowHeaderStorage; // @synthesize rowHeaderStorage=_rowHeaderStorage;
@property (nonatomic) struct TSTTableRBTreeNode_s *rowTileIndex; // @synthesize rowTileIndex=_rowTileIndex;
@property (nonatomic) unsigned char storageVersionPreBNC; // @synthesize storageVersionPreBNC=_storageVersionPreBNC;
@property (strong, nonatomic) TSPLazyReference *stringTableReference; // @synthesize stringTableReference=_stringTableReference;
@property (strong, nonatomic) TSPLazyReference *styleTableReference; // @synthesize styleTableReference=_styleTableReference;
@property (strong, nonatomic) TSTTileIDKeyDict *tileStorage; // @synthesize tileStorage=_tileStorage;
@property (nonatomic) BOOL upgrading; // @synthesize upgrading=_upgrading;

- (id).cxx_construct;
- (void).cxx_destruct;
- (multimap_672c207c)_makeCellMapFromTiles;
- (id)addPasteboardCustomFormat:(id)arg1 toDocument:(id)arg2 updatingPasteboardFormat:(BOOL)arg3;
- (id)allRichTextStorages;
- (void)assertIsNotIterating;
- (BOOL)auditDatalistDuplicationReturningResult:(id *)arg1;
- (BOOL)auditRowInfoCellCountsReturningResult:(id *)arg1;
- (BOOL)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord)arg1 result:(id *)arg2;
- (void)beginIteration;
- (BOOL)cellExistsAtCellID:(struct TSUCellCoord)arg1;
- (struct TSTCellStorage *)cellStorageRefAtCellID:(struct TSUCellCoord)arg1;
- (id)cellStyleAtCellID:(struct TSUCellCoord)arg1;
- (void)clearPasteboardCustomFormatMap;
- (id)commentStorageAtCellID:(struct TSUCellCoord)arg1;
- (id)commentStorageDataList;
- (id)conditionalStyleSetAtCellID:(struct TSUCellCoord)arg1;
- (id)conditionalStyleSetDataList;
- (BOOL)confirmRefCountsReturningResult:(id *)arg1;
- (BOOL)containsControlCellSpecs;
- (BOOL)containsFormulas;
- (BOOL)containsImportWarnings;
- (id)controlCellSpecDataList;
- (void)copyPasteboardCustomFormatsFromDataStore:(id)arg1;
- (id)copyWithOwner:(id)arg1;
- (void)dealloc;
- (void)endIteration;
- (void)enumerateCellStoragesInRange:(struct TSUCellRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCellStoragesRowByRowToMaxID:(struct TSUCellCoord)arg1 getPreBNC:(BOOL)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateColumnHeaderInfosWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowHeaderInfosWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateTilesAtNode:(struct TSTTableRBTreeNode_s *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)formatDataList;
- (id)formatForCalcEngineAtCellID:(struct TSUCellCoord)arg1 formatIsExplicitOut:(BOOL *)arg2 refIfAvailable:(struct TSTCellStorage *)arg3;
- (struct TSCEFormula *)formulaAtCellID:(struct TSUCellCoord)arg1;
- (id)formulaDataList;
- (id)formulaErrorDataList;
- (id)formulaSpecAtCellID:(struct TSUCellCoord)arg1;
- (BOOL)getCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (BOOL)hasFormulaAtCellID:(struct TSUCellCoord)arg1;
- (id)headerInfoForColumn:(unsigned short)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3;
- (id)headerInfoForRow:(unsigned int)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3;
- (double)heightOfRowAtIndex:(unsigned int)arg1;
- (id)i_tileAtOrAfterRow:(unsigned int)arg1 startingTileRowIndex:(unsigned int *)arg2;
- (id)i_tileForRow:(unsigned int)arg1 startingTileRowIndex:(unsigned int *)arg2;
- (id)importWarningSetDataList;
- (id)initWithArchive:(const struct DataStore *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithOwner:(id)arg1;
- (void)insertColumns:(struct _NSRange)arg1;
- (void)insertRows:(struct _NSRange)arg1;
- (void)makePasteboardCustomFormatList;
- (vector_e87daf7b)mergedRects;
- (void)moveColumnIndexRange:(struct _NSRange)arg1 toIndex:(unsigned short)arg2;
- (void)moveRowIndexRange:(struct _NSRange)arg1 toIndex:(unsigned int)arg2;
- (BOOL)needToUpgradeCellStorage;
- (id)p_cellMapForUpgradingToBraveNewCell;
- (void)p_clearDataListEntriesForStorageRef:(struct TSTCellStorage *)arg1 cellID:(struct TSUCellCoord)arg2;
- (void)p_clearDataListEntriesInRange:(struct TSUCellRect)arg1;
- (id)p_datalistForLazyReference:(id)arg1;
- (void)p_enumerateTilesConcurrentlyUsingBlock:(CDUnknownBlockType)arg1 andWaitForAsyncBlocks:(BOOL)arg2;
- (id)p_makeALazyDatalistOfType:(int)arg1;
- (id)p_makeALazyDatalistOfType:(int)arg1 isNewForBNC:(BOOL)arg2;
- (id)p_pasteboardCustomFormatList;
- (id)p_pasteboardCustomFormatMap;
- (id)p_populatedMultipleChoiceListFormat:(id)arg1;
- (CDStruct_c8ca99d5)p_preBNCKeysForCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (void)p_updateNumberOfPopulatedCells;
- (id)populatedCustomFormat:(id)arg1 value:(double)arg2;
- (id)preBNCFormatDataList;
- (void)reassignPasteboardCustomFormatKeys;
- (void)removeColumnHeaderAtIndex:(unsigned short)arg1;
- (void)removeColumns:(struct _NSRange)arg1;
- (void)removeRowHeaderAtIndex:(unsigned int)arg1;
- (void)removeRows:(struct _NSRange)arg1;
- (void)replaceConditionalStyleSetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)replaceFormulasUsingBlock:(CDUnknownBlockType)arg1;
- (void)resetAlmostEverything;
- (void)resolveDataListKeysForCell:(id)arg1 suppressTransmutation:(BOOL)arg2 sourceStorageVersion:(unsigned char)arg3;
- (void)resolveDataListKeysForPreBNCCell:(id)arg1 suppressTransmutation:(BOOL)arg2 sourceStorageVersion:(unsigned char)arg3;
- (id)richTextDataList;
- (id)richTextStorageForCalcEngineAtCellID:(struct TSUCellCoord)arg1 refIfAvailable:(struct TSTCellStorage *)arg2;
- (void)saveToArchive:(struct DataStore *)arg1 archiver:(id)arg2 isInTheDocument:(BOOL)arg3;
- (void)setCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 tableUID:(const UUIDData_5fbc143e *)arg3 calculationEngine:(id)arg4 conditionalStyleOwner:(id)arg5 ignoreFormula:(BOOL)arg6 clearImportWarnings:(BOOL)arg7 doRichTextDOLC:(BOOL)arg8;
- (void)setCellMap:(id)arg1 tableUID:(const UUIDData_5fbc143e *)arg2 calculationEngine:(id)arg3 conditionalStyleOwner:(id)arg4 ignoreFormulas:(BOOL)arg5 skipDirtyingNonFormulaCells:(BOOL)arg6 doRichTextDOLC:(BOOL)arg7;
- (void)setHeight:(double)arg1 ofRowAtIndex:(unsigned int)arg2;
- (void)setStorageParentToInfo:(id)arg1;
- (void)setWidth:(double)arg1 ofColumnAtIndex:(unsigned short)arg2;
- (id)setupEmptyPasteboardCustomFormatList;
- (id)stringAtCellID:(struct TSUCellCoord)arg1;
- (id)stringDataList;
- (id)stringForCalcEngineAtCellID:(struct TSUCellCoord)arg1 refIfAvailable:(struct TSTCellStorage *)arg2;
- (id)styleDataList;
- (void)swapRowAtIndex:(unsigned int)arg1 withRowAtIndex:(unsigned int)arg2;
- (id)textStyleAtCellID:(struct TSUCellCoord)arg1;
- (void)upgradeCellFormatsU2_0;
- (void)upgradeConditionalStylesToLinkedRefWithTableUID:(const UUIDData_5fbc143e *)arg1;
- (void)upgradeDataStoreCellStorageIfNeededWithTableUID:(const UUIDData_5fbc143e *)arg1 conditionalStyleOwner:(id)arg2;
- (int)valueTypeAtCellID:(struct TSUCellCoord)arg1;
- (double)widthOfColumnAtIndex:(unsigned short)arg1;

@end


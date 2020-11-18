//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSKChangeSourceObserver-Protocol.h>

@class NSIndexSet, NSLock, NSMutableArray, NSMutableSet, NSRecursiveLock, NSString, TSDFill, TSDInfoGeometry, TSDLayoutGeometry, TSKChangeNotifier, TSTCellRegion, TSTDupContentCache, TSTHiddenRowsColumnsCache, TSTLayout, TSTLayoutDynamicResizeInfo, TSTLayoutTask, TSTMergeRangeSortedSet, TSTTableInfo, TSTTableModel, TSTWPColumnCache, TSTWidthHeightCache, TSUColor, TSUReadWriteQueue, TSURetainedPointerKeyDictionary, TSWPEditingController;
@protocol OS_dispatch_group, OS_dispatch_semaphore, TSTLayoutDynamicColumnSwapProtocol, TSTLayoutDynamicContentProtocol, TSTLayoutDynamicRowSwapProtocol;

@interface TSTMasterLayout : NSObject <TSKChangeSourceObserver>
{
    TSKChangeNotifier *mChangeNotifier;
    int mReferenceCount;
    TSTTableInfo *mTableInfo;
    TSTWPColumnCache *mCellIDToWPColumnCache;
    TSTDupContentCache *mDupContentCache;
    TSTWPColumnCache *mTempWPColumnCache;
    TSTWidthHeightCache *mWidthHeightCache;
    TSUReadWriteQueue *mWHCacheQueue;
    TSTHiddenRowsColumnsCache *mHiddenRowsColumnsCache;
    NSMutableArray *mChangeDescriptors;
    NSObject<OS_dispatch_group> *mLayoutInFlight;
    TSTLayoutTask *mCurrentLayoutTask;
    NSObject<OS_dispatch_semaphore> *mLayoutSemaphore;
    unsigned int mMaxConcurrentTasks;
    unsigned int mNumCellsPerTask;
    BOOL mHeaderColumnsFrozen;
    BOOL mHeaderRowsFrozen;
    BOOL mHeaderColumnsRepeat;
    BOOL mHeaderRowsRepeat;
    BOOL mTableNameEnabled;
    struct CGRect mTableNameBounds;
    double mCachedTableNameHeight;
    unsigned short mCachedNumberOfHeaderColumns;
    unsigned long long mCachedMaxNumberOfColumns;
    unsigned short mCachedNumberOfHeaderRows;
    unsigned short mCachedNumberOfFooterRows;
    unsigned long long mCachedMaxNumberOfRows;
    struct TSTTableStrokeDefaults *mDefaultStrokes;
    NSMutableArray *mTopRowStrokes;
    NSMutableArray *mBottomRowStrokes;
    NSMutableArray *mLeftColumnStrokes;
    NSMutableArray *mRightColumnStrokes;
    NSRecursiveLock *mStrokesLock;
    TSURetainedPointerKeyDictionary *mParaStyleToHeightCache;
    NSLock *mLock;
    BOOL mBandedFillIsValid;
    BOOL mUseBandedFill;
    TSDFill *mBandedFillObject;
    int mTableEnvironment;
    int mTableRowsBehavior;
    BOOL mTableDefaultFontHeightsAreValid;
    double mTableDefaultFontHeightForArea[4];
    BOOL mInDynamicLayoutMode;
    NSMutableSet *mDynamicLayouts;
    double mDynamicAddOrRemoveColumnElementSize;
    double mDynamicAddOrRemoveRowElementSize;
    BOOL mDynamicBandedFill;
    BOOL mDynamicBandedFillSetting;
    int mDynamicColumnAdjustment;
    id<TSTLayoutDynamicColumnSwapProtocol> mDynamicColumnSwapDelegate;
    double mDynamicColumnTabSize;
    id<TSTLayoutDynamicContentProtocol> mDynamicContentDelegate;
    TSUColor *mDynamicFontColor;
    CDStruct_5f1f7aa9 mDynamicFontColorCellRange;
    CDStruct_5f1f7aa9 mDynamicHidingRowsCols;
    int mDynamicHidingRowsColsDirection;
    CDStruct_5f1f7aa9 mDynamicHidingContent;
    CDStruct_5f1f7aa9 mDynamicHidingText;
    TSDInfoGeometry *mDynamicInfoGeometry;
    BOOL mDynamicRepResize;
    BOOL mDynamicRepressFrozenHeader;
    BOOL mDynamicResizingColumns;
    CDStruct_5f1f7aa9 mDynamicResizingColumnRange;
    double mDynamicResizingColumnAdjustment;
    BOOL mDynamicResizingRows;
    CDStruct_5f1f7aa9 mDynamicResizingRowRange;
    double mDynamicResizingRowAdjustment;
    CDStruct_5f1f7aa9 mDynamicRevealingRowsCols;
    int mDynamicRevealingRowsColsDirection;
    int mDynamicRowAdjustment;
    id<TSTLayoutDynamicRowSwapProtocol> mDynamicRowSwapDelegate;
    double mDynamicRowTabSize;
    TSDLayoutGeometry *mDynamicSavedLayoutGeometry;
    TSTCellRegion *mDynamicSelectionRegion;
    double mDynamicWidthResize;
    double mDynamicHeightResize;
    double mDynamicTableNameResize;
    TSTLayoutDynamicResizeInfo *mDynamicResizeInfo;
    CDStruct_0441cfb5 mDynamicSuppressingConditionalStylesCellID;
    TSWPEditingController *mContainedTextEditor;
    TSTMergeRangeSortedSet *mMergeRanges;
    BOOL mProcessHiddenRowsForExport;
    BOOL mEmptyFilteredTable;
    struct CGSize mMaximumPartitionSize;
}

@property (readonly, nonatomic) TSDFill *bandedFillObject; // @synthesize bandedFillObject=mBandedFillObject;
@property (readonly, nonatomic) TSTWPColumnCache *cellIDToWPColumnCache; // @synthesize cellIDToWPColumnCache=mCellIDToWPColumnCache;
@property (readonly, nonatomic) NSMutableArray *changeDescriptors; // @synthesize changeDescriptors=mChangeDescriptors;
@property (strong, nonatomic) TSKChangeNotifier *changeNotifier; // @synthesize changeNotifier=mChangeNotifier;
@property (nonatomic) TSWPEditingController *containedTextEditor; // @synthesize containedTextEditor=mContainedTextEditor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSTDupContentCache *dupContentCache; // @synthesize dupContentCache=mDupContentCache;
@property (readonly, nonatomic) double dynamicAddOrRemoveColumnElementSize; // @synthesize dynamicAddOrRemoveColumnElementSize=mDynamicAddOrRemoveColumnElementSize;
@property (readonly, nonatomic) double dynamicAddOrRemoveRowElementSize; // @synthesize dynamicAddOrRemoveRowElementSize=mDynamicAddOrRemoveRowElementSize;
@property (readonly, nonatomic) BOOL dynamicBandedFill; // @synthesize dynamicBandedFill=mDynamicBandedFill;
@property (readonly, nonatomic) BOOL dynamicBandedFillSetting; // @synthesize dynamicBandedFillSetting=mDynamicBandedFillSetting;
@property (readonly, nonatomic) int dynamicColumnAdjustment; // @synthesize dynamicColumnAdjustment=mDynamicColumnAdjustment;
@property (readonly, nonatomic) id<TSTLayoutDynamicColumnSwapProtocol> dynamicColumnSwapDelegate; // @synthesize dynamicColumnSwapDelegate=mDynamicColumnSwapDelegate;
@property (readonly, nonatomic) double dynamicColumnTabSize; // @synthesize dynamicColumnTabSize=mDynamicColumnTabSize;
@property (readonly, nonatomic) id<TSTLayoutDynamicContentProtocol> dynamicContentDelegate; // @synthesize dynamicContentDelegate=mDynamicContentDelegate;
@property (readonly, nonatomic) TSUColor *dynamicFontColor; // @synthesize dynamicFontColor=mDynamicFontColor;
@property (readonly, nonatomic) CDStruct_5f1f7aa9 dynamicFontColorCellRange; // @synthesize dynamicFontColorCellRange=mDynamicFontColorCellRange;
@property (nonatomic) double dynamicHeightResize; // @synthesize dynamicHeightResize=mDynamicHeightResize;
@property (readonly, nonatomic) TSDInfoGeometry *dynamicInfoGeometry; // @synthesize dynamicInfoGeometry=mDynamicInfoGeometry;
@property (readonly, nonatomic) TSTLayout *dynamicLayout;
@property (readonly, nonatomic) NSMutableSet *dynamicLayouts; // @synthesize dynamicLayouts=mDynamicLayouts;
@property (nonatomic) BOOL dynamicRepResize; // @synthesize dynamicRepResize=mDynamicRepResize;
@property (readonly, nonatomic) double dynamicResizingColumnAdjustment; // @synthesize dynamicResizingColumnAdjustment=mDynamicResizingColumnAdjustment;
@property (readonly, nonatomic) CDStruct_5f1f7aa9 dynamicResizingColumnRange; // @synthesize dynamicResizingColumnRange=mDynamicResizingColumnRange;
@property (readonly, nonatomic) BOOL dynamicResizingColumns; // @synthesize dynamicResizingColumns=mDynamicResizingColumns;
@property (readonly, nonatomic) double dynamicResizingRowAdjustment; // @synthesize dynamicResizingRowAdjustment=mDynamicResizingRowAdjustment;
@property (readonly, nonatomic) CDStruct_5f1f7aa9 dynamicResizingRowRange; // @synthesize dynamicResizingRowRange=mDynamicResizingRowRange;
@property (readonly, nonatomic) BOOL dynamicResizingRows; // @synthesize dynamicResizingRows=mDynamicResizingRows;
@property (readonly, nonatomic) int dynamicRowAdjustment; // @synthesize dynamicRowAdjustment=mDynamicRowAdjustment;
@property (readonly, nonatomic) id<TSTLayoutDynamicRowSwapProtocol> dynamicRowSwapDelegate; // @synthesize dynamicRowSwapDelegate=mDynamicRowSwapDelegate;
@property (readonly, nonatomic) double dynamicRowTabSize; // @synthesize dynamicRowTabSize=mDynamicRowTabSize;
@property (copy, nonatomic) TSDLayoutGeometry *dynamicSavedLayoutGeometry; // @synthesize dynamicSavedLayoutGeometry=mDynamicSavedLayoutGeometry;
@property (readonly, nonatomic) TSTCellRegion *dynamicSelectionRegion; // @synthesize dynamicSelectionRegion=mDynamicSelectionRegion;
@property (readonly, nonatomic) CDStruct_0441cfb5 dynamicSuppressingConditionalStylesCellID; // @synthesize dynamicSuppressingConditionalStylesCellID=mDynamicSuppressingConditionalStylesCellID;
@property (readonly, nonatomic) double dynamicTableNameResize; // @synthesize dynamicTableNameResize=mDynamicTableNameResize;
@property (nonatomic) double dynamicWidthResize; // @synthesize dynamicWidthResize=mDynamicWidthResize;
@property (readonly, nonatomic) BOOL emptyFilteredTable; // @synthesize emptyFilteredTable=mEmptyFilteredTable;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TSTHiddenRowsColumnsCache *hiddenRowsColumnsCache; // @synthesize hiddenRowsColumnsCache=mHiddenRowsColumnsCache;
@property (readonly, nonatomic) BOOL inDynamicLayoutMode; // @synthesize inDynamicLayoutMode=mInDynamicLayoutMode;
@property (readonly, nonatomic) BOOL isGrouped;
@property (nonatomic) unsigned int maxConcurrentTasks; // @synthesize maxConcurrentTasks=mMaxConcurrentTasks;
@property (nonatomic) struct CGSize maximumPartitionSize; // @synthesize maximumPartitionSize=mMaximumPartitionSize;
@property (strong, nonatomic) TSTMergeRangeSortedSet *mergeRanges; // @synthesize mergeRanges=mMergeRanges;
@property (nonatomic) unsigned int numCellsPerTask; // @synthesize numCellsPerTask=mNumCellsPerTask;
@property (nonatomic) BOOL processHiddenRowsForExport; // @synthesize processHiddenRowsForExport=mProcessHiddenRowsForExport;
@property (readonly) Class superclass;
@property (nonatomic) int tableEnvironment; // @synthesize tableEnvironment=mTableEnvironment;
@property (nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=mTableInfo;
@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) int tableRowsBehavior; // @synthesize tableRowsBehavior=mTableRowsBehavior;
@property (readonly, nonatomic) TSTWPColumnCache *tempWPColumnCache; // @synthesize tempWPColumnCache=mTempWPColumnCache;
@property (readonly, nonatomic) BOOL useBandedFill;
@property (readonly, nonatomic) NSIndexSet *visibleColumnIndices;
@property (readonly, nonatomic) NSIndexSet *visibleRowIndices;
@property (readonly, nonatomic) TSUReadWriteQueue *whCacheQueue; // @synthesize whCacheQueue=mWHCacheQueue;
@property (readonly, nonatomic) TSTWidthHeightCache *widthHeightCache; // @synthesize widthHeightCache=mWidthHeightCache;

+ (double)effectiveTableNameHeightForModel:(id)arg1;
+ (id)tableNameTextEngine:(id)arg1;
+ (struct CGSize)tableNameTextSize:(id)arg1;
- (id)accountingParagraphStylePropertyMapForCell:(id)arg1 atCellID:(CDStruct_0441cfb5)arg2;
- (void)addChangeDescriptor:(id)arg1;
- (void)addChangeDescriptorWithType:(int)arg1 andCellRange:(CDStruct_5f1f7aa9)arg2;
- (void)addChangeDescriptorWithType:(int)arg1 andCellRange:(CDStruct_5f1f7aa9)arg2 andStrokeRange:(CDStruct_5f1f7aa9)arg3;
- (void)addDynamicLayoutBeginIfNecessary:(id)arg1;
- (void)beginDynamicMode:(id)arg1;
- (void)calculateRawTableSize:(struct CGSize *)arg1 andStrokeDelta:(struct CGSize *)arg2;
- (double)calculatedTableNameHeight;
- (double)calculatedTableNameHeightIncludingDynamicResize:(BOOL)arg1;
- (void)cancelDynamicModeChanges;
- (void)captureDynamicResizeInfo;
- (BOOL)cell:(id *)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (void)clearModelHeightWidthCacheForCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)dealloc;
- (struct UIEdgeInsets)defaultPaddingForCellID:(CDStruct_0441cfb5)arg1;
- (struct UIEdgeInsets)edgeInsetsFromPadding:(id)arg1;
- (void)endDynamicMode;
- (double)fontHeightOfParagraphStyle:(id)arg1;
- (BOOL)hintIsValid:(id)arg1;
- (id)initWithInfo:(id)arg1;
- (void)invalidateBandedFill;
- (void)invalidateDefaultFontHeights;
- (void)invalidateDynamicResizeInfo;
- (void)invalidateTableNameHeight;
- (BOOL)isDynamicallyChangingColumnCount;
- (BOOL)isDynamicallyChangingContent;
- (BOOL)isDynamicallyChangingFontColorOfCellID:(CDStruct_0441cfb5)arg1;
- (BOOL)isDynamicallyChangingInfoGeometry;
- (BOOL)isDynamicallyChangingRowCount;
- (BOOL)isDynamicallyChangingRowOrColumnCount;
- (BOOL)isDynamicallyChangingSelection;
- (BOOL)isDynamicallyColumnTabResizing;
- (BOOL)isDynamicallyHidingContentOfCellID:(CDStruct_0441cfb5)arg1;
- (BOOL)isDynamicallyHidingRowsCols;
- (BOOL)isDynamicallyHidingRowsCols:(int)arg1 rowColIndex:(unsigned short)arg2;
- (BOOL)isDynamicallyHidingRowsColsCellID:(CDStruct_0441cfb5)arg1;
- (BOOL)isDynamicallyHidingTextOfCellID:(CDStruct_0441cfb5)arg1;
- (BOOL)isDynamicallyRepressingFrozenHeaders;
- (BOOL)isDynamicallyResizing:(int)arg1;
- (BOOL)isDynamicallyResizing:(int)arg1 rowColIndex:(unsigned short)arg2;
- (BOOL)isDynamicallyResizingCellID:(CDStruct_0441cfb5)arg1;
- (BOOL)isDynamicallyResizingTableName;
- (BOOL)isDynamicallyRevealingRowsCols;
- (BOOL)isDynamicallyRevealingRowsCols:(int)arg1 rowColIndex:(unsigned short)arg2;
- (BOOL)isDynamicallyRowTabResizing;
- (BOOL)isDynamicallySettingBandedFill;
- (BOOL)isDynamicallySwappingColumns;
- (BOOL)isDynamicallySwappingRows;
- (CDStruct_0441cfb5)layoutCellIDForModelCellID:(CDStruct_0441cfb5)arg1;
- (void)measureTextForLayoutState:(id)arg1;
- (CDStruct_0441cfb5)modelCellIDForLayoutCellID:(CDStruct_0441cfb5)arg1;
- (CDStruct_0441cfb5)modelCellIDForStrokesOfLayoutCellID:(CDStruct_0441cfb5)arg1;
- (id)newLayoutHint;
- (id)newTextEngineForCell:(id)arg1 atCellID:(CDStruct_0441cfb5)arg2;
- (void)p_cancelDynamicRowColCountChanges;
- (void)p_processChange:(id)arg1 forChangeSource:(id)arg2;
- (void)p_validateFittingInfoForCellID:(CDStruct_0441cfb5)arg1 inMergeRange:(CDStruct_5f1f7aa9)arg2;
- (CDStruct_0441cfb5)p_validateFittingInfoForEmptyCellsBetween:(CDStruct_0441cfb5)arg1 andCellID:(CDStruct_0441cfb5)arg2 inRange:(CDStruct_5f1f7aa9)arg3;
- (void)p_validateFittingInfoForEmptyCellsOnSingleRowBetween:(CDStruct_0441cfb5)arg1 andEndCellID:(CDStruct_0441cfb5)arg2;
- (struct UIEdgeInsets)paddingForCellID:(CDStruct_0441cfb5)arg1;
- (void)processLayoutTask:(id)arg1;
- (void)queueCellForValidation:(CDStruct_5f1f7aa9)arg1 cell:(id)arg2 mergeRange:(CDStruct_5f1f7aa9)arg3 wrap:(BOOL)arg4 verticalAlignment:(unsigned int)arg5 padding:(id)arg6 prop:(BOOL)arg7 layoutCacheFlags:(int)arg8;
- (id)regionForStrokeValidationFromChangeDescriptors:(id)arg1;
- (void)removeDynamicLayoutEndIfNecessary:(id)arg1;
- (void)resetModelHeightWidthCache;
- (BOOL)shouldRowUseBandedFill:(unsigned short)arg1;
- (void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (unsigned int)tableAreaForCellID:(CDStruct_0441cfb5)arg1;
- (double)tableNameHeight;
- (id)tableNameTextEngine;
- (struct CGSize)tableNameTextSize;
- (void)updateDynamicBandedFill:(BOOL)arg1 setting:(BOOL)arg2;
- (BOOL)updateDynamicChangeRowOrColumnCount:(int)arg1 count:(int)arg2 newlyAddedElementSize:(double)arg3;
- (void)updateDynamicColumnSwapDelegate:(id)arg1;
- (void)updateDynamicColumnTabSize:(double)arg1;
- (void)updateDynamicContentDelegate:(id)arg1;
- (void)updateDynamicFontColor:(id)arg1 andRange:(CDStruct_5f1f7aa9)arg2;
- (void)updateDynamicHidingContent:(CDStruct_5f1f7aa9)arg1;
- (void)updateDynamicHidingRowsCols:(int)arg1 hidingCellRange:(CDStruct_5f1f7aa9)arg2;
- (void)updateDynamicHidingText:(CDStruct_5f1f7aa9)arg1;
- (void)updateDynamicInfoGeometry:(id)arg1;
- (void)updateDynamicRepressFrozenHeader:(BOOL)arg1;
- (void)updateDynamicResize:(int)arg1 resizingRange:(CDStruct_5f1f7aa9)arg2 resizeAdjustment:(double)arg3;
- (void)updateDynamicResizeInfo:(id)arg1;
- (void)updateDynamicRevealingRowsCols:(int)arg1 revealingCellRange:(CDStruct_5f1f7aa9)arg2;
- (void)updateDynamicRowSwapDelegate:(id)arg1;
- (void)updateDynamicRowTabSize:(double)arg1;
- (void)updateDynamicSelectionRegion:(id)arg1;
- (void)updateDynamicSuppressingConditionalStylesCellID:(CDStruct_0441cfb5)arg1;
- (void)updateDynamicTableNameSize:(double)arg1;
- (void)updateWHCForMergeRanges;
- (void)validate;
- (void)validateBandedFill;
- (id)validateCellForDrawing:(CDStruct_0441cfb5)arg1 cell:(id)arg2 contents:(id)arg3 wrap:(BOOL)arg4 verticalAlignment:(unsigned int)arg5 padding:(id)arg6 layoutCacheFlags:(int)arg7 pageNumber:(unsigned long long)arg8 pageCount:(unsigned long long)arg9;
- (void)validateChangeDescriptorQueue;
- (void)validateDefaultFontHeights;
- (void)validateDynamicResizeInfo;
- (void)validateFittingInfoForCell:(id)arg1 cellID:(CDStruct_0441cfb5)arg2 mergeRange:(CDStruct_5f1f7aa9)arg3 setFitting:(BOOL)arg4;
- (id)validateFittingInfoForChangeDescriptors:(id)arg1 rowsNeedingFittingInfo:(id)arg2;
- (void)validateFittingInfoWithCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)validateFittingWidthsForRegion:(id)arg1;
- (void)validateLayoutHint:(id)arg1;
- (void)validateMasterLayoutForChangeDescriptors:(id)arg1;
- (void)validateRowVisibility:(id)arg1;
- (void)validateStrokesForRegion:(id)arg1 regionAlreadyValidated:(id)arg2;
- (void)validateTableRowsBehavior;
- (void)waitForLayoutToComplete;
- (void)wasRemovedFromDocumentRoot;
- (void)willBeAddedToDocumentRoot:(id)arg1;

@end


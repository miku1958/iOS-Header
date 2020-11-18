//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartMediator.h>

#import <iWorkImport/TSCECalculationEngineRegistration-Protocol.h>
#import <iWorkImport/TSCEFormulaOwning-Protocol.h>

@class NSCondition, NSDictionary, NSString, TNChartFormulaStorage, TNMutableChartFormulaStorage, TSCECalculationEngine, TSUIntToIntDictionary;

__attribute__((visibility("hidden")))
@interface TNChartMediator : TSCHChartMediator <TSCECalculationEngineRegistration, TSCEFormulaOwning>
{
    UUIDData_5fbc143e mEntityUID;
    TNChartFormulaStorage *mFormulaStorage;
    TNChartFormulaStorage *mCleanFormulaStorage;
    unordered_set_cb28a53b _formulasToRecalculate;
    int mScatterFormat;
    BOOL mIsRegisteredWithCalcEngine;
    BOOL mIsEditing;
    BOOL mEditingHasIsPhantomOverride;
    BOOL mEditingIsPhantomOverride;
    TNChartFormulaStorage *mEditingStorageOverride;
    TNMutableChartFormulaStorage *mEditingAccumulatedFormulas;
    TNMutableChartFormulaStorage *mEditingActiveFormulas;
    NSCondition *mImportUpgradeCondition;
    BOOL mHasBlittedSinceConditionVarSet;
    BOOL mShouldFixAreaFormula;
    TSUIntToIntDictionary *mFormulaIndexToGridIndex;
    NSDictionary *mTableUidToHeaderRowRangesInPrecedents;
    BOOL mShouldResetFormulas;
}

@property (readonly, nonatomic) TSCECalculationEngine *calculationEngine;
@property (readonly, nonatomic) BOOL categoryLabelFormulasAreAllStatic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) UUIDData_5fbc143e entityUID; // @synthesize entityUID=mEntityUID;
@property (readonly, nonatomic) TNChartFormulaStorage *formulaStorage;
@property (readonly, nonatomic) BOOL hasBlittedSinceConditionVarSet; // @synthesize hasBlittedSinceConditionVarSet=mHasBlittedSinceConditionVarSet;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isEditing; // @synthesize isEditing=mIsEditing;
@property (readonly, nonatomic) BOOL labelFormulasAreAllStatic;
@property (strong) TNChartFormulaStorage *rawFormulaStorage; // @synthesize rawFormulaStorage=mFormulaStorage;
@property (readonly, nonatomic) int scatterFormat;
@property (readonly, nonatomic) BOOL seriesLabelFormulasAreAllStatic;
@property (readonly) Class superclass;

+ (id)defaultErrorBarFormulaWrapper;
+ (id)propertiesThatInvalidateMediator;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)amendRewriteSpec:(id)arg1 withPostCellRefs:(const struct TSCEReferenceSet *)arg2 calcEngine:(id)arg3;
- (id)categoryLabelFormulas;
- (void)clearEditingIsPhantomOverride;
- (void)clearFormulasToRecalculate;
- (id)columnFormulas;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned long long)arg2;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (id)commandToChangeCategoryLabelFormulas:(id)arg1;
- (id)commandToChangeLabelFormulas:(id)arg1 forType:(unsigned long long)arg2 modelUpdateDataType:(int)arg3;
- (id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2;
- (id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned long long)arg2 dataType:(int)arg3;
- (id)commandToSetNewSeriesIndex:(unsigned long long)arg1 forSeriesIndex:(unsigned long long)arg2;
- (id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2;
- (id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (void)copyValuesIntoChartModelOutOfBandUsingCalcEngine:(id)arg1 formulaMap:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)customNegFormulas;
- (id)customNegScatterXFormulas;
- (id)customPosFormulas;
- (id)customPosScatterXFormulas;
- (id)dataFormatterForAxis:(id)arg1 documentRoot:(id)arg2;
- (id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 axisType:(int)arg3 documentRoot:(id)arg4;
- (id)dataFormatterFromFormatStruct:(CDStruct_b1066b25)arg1 in:(id)arg2;
- (id)dataFormulas;
- (id)errorBarCustomFormulaForSeriesIndex:(unsigned long long)arg1 dataType:(int)arg2;
- (vector_5a16d233)expandSingleRangeForLabels:(const struct TSCERangeRef *)arg1 formulaType:(unsigned long long)arg2;
- (vector_5a16d233)expandSingleRangeForProposedCategoryLabels:(const struct TSCERangeRef *)arg1;
- (unsigned long long)formulaIndexForSeriesDimension:(id)arg1;
- (id)formulaOwner;
- (UUIDData_5fbc143e)formulaOwnerUID;
- (id)formulaStorageFromCatTable:(id)arg1 selection:(id)arg2 direction:(int)arg3;
- (id)formulaStorageFromTable:(id)arg1 selection:(id)arg2 direction:(int)arg3;
- (unsigned long long)formulaTypeFromDataType:(int)arg1;
- (int)formulasDirection;
- (BOOL)hasCategoryReferences;
- (BOOL)hasTractReference;
- (id)hubFormulaPrecedentsWithCalcEngine:(id)arg1 hostOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (id)initFromArchive:(const struct ChartMediatorArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithChartInfo:(id)arg1;
- (id)initWithChartInfo:(id)arg1 withTable:(id)arg2 direction:(int)arg3;
- (id)initWithChartInfo:(id)arg1 withTable:(id)arg2 selection:(id)arg3 direction:(int)arg4;
- (BOOL)interestedInRewrite:(id)arg1;
- (void)invalidateAndSynchronizeMediator;
- (void)invalidateForCalcEngine:(id)arg1;
- (BOOL)isPhantom;
- (BOOL)labelFormulasAreAllStaticInFormulaStorage:(id)arg1;
- (id)labelFormulasForType:(unsigned long long)arg1;
- (unsigned long long)labelIndexForSeriesNameSeriesIndex:(unsigned long long)arg1;
- (id)linkedResolver;
- (void)localizeFormulaLiteralsWithLocale:(id)arg1;
- (id)nonDefaultDataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 axisType:(int)arg3 documentRoot:(id)arg4;
- (id)objectToArchiveInDependencyTracker;
- (unsigned short)ownerKind;
- (UUIDData_5fbc143e)ownerUID;
- (id)ownerUIDMapper;
- (id)p_chartFormulaStorageForEditingOverride;
- (id)p_commandToSetSeriesNameFormulaWrapper:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (void)p_copyValuesIntoToChartModel:(id)arg1 formulaMap:(id)arg2;
- (void)p_detectAndRepairInsertedCategoryConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 rewriteSpec:(id)arg3;
- (void)p_detectAndRepairInsertedSeriesConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 rewriteSpec:(id)arg3;
- (BOOL)p_didHeaderRowRangesChangeForCalcEngine:(id)arg1;
- (void)p_disconnectLabelsInMap:(id)arg1 ofType:(unsigned long long)arg2;
- (vector_5a16d233)p_expandSingleRangeForLabels:(const struct TSCERangeRef *)arg1 iterateOverRowsNotColumns:(BOOL)arg2;
- (unsigned long long)p_formulaComponents:(id)arg1;
- (unsigned long long)p_formulaComponentsInMap:(id)arg1 ofType:(unsigned long long)arg2;
- (id)p_formulaWrapperFromTSTFormula:(id)arg1;
- (void)p_hackSetCalcEngineLegacyGlobalID;
- (struct TSCERangeRef)p_headerRowRangeRefForTableInfo:(id)arg1;
- (BOOL)p_isScatterOrBubble;
- (BOOL)p_labelsAreStaticInMap:(id)arg1 ofType:(unsigned long long)arg2;
- (id)p_newStaticNameForCategoryAvoidingExistingNames:(id)arg1 runningCount:(unsigned long long *)arg2;
- (unsigned long long)p_numberOfLabelsFromExpandedGeometricRangeRefsWithFormulas:(id)arg1 formulaType:(unsigned long long)arg2;
- (void)p_promoteSpanningCategorizedCategoryLabelsInMap:(id)arg1;
- (void)p_registerAreaFormulaForMap:(id)arg1 withCalcEngine:(id)arg2;
- (void)p_registerFormulaeWithCalcEngine:(id)arg1;
- (void)p_registerHubFormulaWithCalcEngine:(id)arg1;
- (void)p_removeDeletedFormulas:(id)arg1;
- (void)p_repairCategorizedCategoryLabelsInMap:(id)arg1;
- (void)p_repairMissingCategoryLabelsInMap:(id)arg1;
- (void)p_repairMissingStaticCategoryLabelsInMap:(id)arg1;
- (void)p_repairMissingTabularCategoryLabelsIrregularInMap:(id)arg1;
- (void)p_repairMissingTabularCategoryLabelsRegularInMap:(id)arg1;
- (void)p_reregister:(BOOL)arg1 withCalculationEngine:(id)arg2;
- (void)p_signalImportUpgradeCondition;
- (BOOL)p_tableHasBaseCell:(struct TSCECellRef)arg1 withCalcEngine:(id)arg2;
- (BOOL)p_tableHasBaseRange:(struct TSCERangeRef)arg1 withCalcEngine:(id)arg2;
- (BOOL)p_tabularCategoryLabelsAppearRegularInMap:(id)arg1;
- (void)p_transposeSeriesAndCategoryLabelsInMap:(id)arg1;
- (id)p_tstFormulaFromForumulaWrapper:(id)arg1;
- (void)p_unregisterAllFormulaeFromCalcEngine:(id)arg1;
- (id)p_untitledLabelWithIndex:(unsigned long long)arg1;
- (void)pauseCalculationEngine;
- (void)prepareRewriteSpec:(id)arg1 withPreCellRefs:(const struct TSCEReferenceSet *)arg2 calcEngine:(id)arg3;
- (CDStruct_2a4d9400)recalculateForCalcEngine:(id)arg1 atFormulaCoord:(struct TSUCellCoord)arg2 recalcOptions:(CDStruct_3d581f42)arg3;
- (id)referencedEntities;
- (id)referencedEntitiesInMap:(id)arg1;
- (BOOL)registerLast;
- (void)registerWithCalcEngineForDocumentLoad:(id)arg1;
- (void)repairBadRefsInFormulas:(id)arg1;
- (void)repairMissingCategoryLabelsInMap:(id)arg1;
- (void)repairMissingCategoryLabelsInMap:(id)arg1 ignoringNonVisibleLabels:(BOOL)arg2;
- (void)repairMissingSeriesLabelsInMap:(id)arg1;
- (void)resetFormulasForCellRefs:(const struct TSCEReferenceSet *)arg1 calcEngine:(id)arg2;
- (void)resumeCalculationEngine;
- (id)rowFormulas;
- (void)saveToArchive:(struct ChartMediatorArchive *)arg1 archiver:(id)arg2;
- (id)seriesDataFormulaForSeriesDimension:(id)arg1;
- (id)seriesDimensionForFormulaIndex:(unsigned long long)arg1;
- (id)seriesNameFormulaForSeriesIndex:(unsigned long long)arg1;
- (void)setEditingIsPhantomOverride:(BOOL)arg1;
- (void)setEditingStorageOverride:(id)arg1;
- (void)setFormulaOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (void)setFormulaStorage:(id)arg1;
- (void)setFormulaStorage:(id)arg1 doRegistration:(BOOL)arg2;
- (void)setImportUpgradeCondition:(id)arg1;
- (void)synchronizeModelFromFormulaStorage;
- (void)synchronizeModelFromFormulaStorage:(id)arg1;
- (void)unregisterFromCalcEngine:(id)arg1;
- (id)untitledLabelOfType:(unsigned long long)arg1 formulaMap:(id)arg2 existingLabels:(id)arg3 runningIndex:(unsigned long long *)arg4;
- (void)updateForTableIDHistoryWithCalcEngine:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;

@end

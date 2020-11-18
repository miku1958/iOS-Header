//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSDate, NSString, NSTimeZone, TSCEGroupByNodeMap, TSCENamedReferenceManager, TSCERemoteDataStore, TSCERewriteTableUIDInfo, TSCETablesByName, TSCETransaction, TSCEUUidReferenceMap, TSKAccessController, TSKChangeNotifier;
@protocol TSCERefNamingProtocol, TSCERefParsingProtocol, TSKMultiTableRemapping;

__attribute__((visibility("hidden")))
@interface TSCECalculationEngine : TSPObject
{
    struct TSCECalcEngine *_cppCalcEngine;
    BOOL _isUnarchiving;
}

@property int XLImportDateMode;
@property (weak, nonatomic) TSKAccessController *accessController;
@property (weak, nonatomic) TSKChangeNotifier *changeNotifier;
@property (nonatomic) struct TSCECalcEngine *cppCalcEngine; // @synthesize cppCalcEngine=_cppCalcEngine;
@property (strong) NSDate *currentDate;
@property (strong) id<TSKMultiTableRemapping> currentTableIdRemapper;
@property (strong) NSTimeZone *currentTimeZone;
@property (readonly) TSCETransaction *currentTransaction;
@property unsigned long long documentRandomSeed;
@property (nonatomic) BOOL duringRollback;
@property (readonly) TSCEGroupByNodeMap *groupNodeReferenceMap;
@property (nonatomic) unsigned long long loadFromFileVersion;
@property (readonly, nonatomic) TSCENamedReferenceManager *namedReferenceManager;
@property (readonly, strong, nonatomic) id<TSCERefNamingProtocol> namer;
@property (readonly) NSString *previousLocaleIdentifier;
@property (readonly, strong, nonatomic) id<TSCERefParsingProtocol> refParser;
@property (readonly) TSCERemoteDataStore *remoteDataStore;
@property (readonly) BOOL shouldAbortRecalculation;
@property (readonly, nonatomic) BOOL shouldSendSetNowCommand;
@property (readonly) TSCERewriteTableUIDInfo *tableUIDHistory;
@property (readonly) TSCETablesByName *tablesByName;
@property (readonly) TSCEUUidReferenceMap *uuidReferenceMap;

+ (void)confirmTermination;
+ (unsigned long long)generateRandomSeed;
+ (BOOL)isPotentiallyTerminating;
+ (BOOL)localVariablesEnabled;
+ (void)pauseEvaluationForPotentialTermination;
+ (unsigned long long)randomSeedFromRandomLo:(int)arg1 hi:(int)arg2;
+ (void)resumeEvaluationIfNotTerminated;
+ (void)splitRandomSeed:(unsigned long long)arg1 intoLo:(int *)arg2 hi:(int *)arg3;
- (void)addAllFormulasCleanObserver:(id)arg1;
- (void)addCalculationStateObserver:(id)arg1;
- (unsigned char)aggregateTypeForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (id)allCellDependenciesAsString;
- (BOOL)allCellsAreClean;
- (struct TSCECellCoordSet)allFormulaCoordsInOwner:(const UUIDData_5fbc143e *)arg1;
- (id)allFormulaOwnersAsString;
- (BOOL)allOwnersRegistered;
- (id)allRangeDependenciesAsString;
- (vector_4dc5f307)allRefResolverOwnerUIDs;
- (id)allSpanningDependenciesAsString;
- (id)allWholeOwnerDependenciesAsString;
- (id)anyResolver;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)assertDirtyPrecedentsCountConsistency;
- (void)beginBatchingGroupCellDirtying;
- (void)beginSuppressingWillModifyCalls;
- (void)blockUntilRecalcIsCompleteWithTimeout:(double)arg1;
- (vector_2431c21e)categoryRefsForSpanningCategoryRef:(const struct TSCECategoryRef *)arg1;
- (BOOL)cellContainsAFormula:(const struct TSCEInternalCellReference *)arg1;
- (struct TSCECellCoordSet)cellCoordinatesNeedingExcelImportForTable:(const UUIDData_5fbc143e *)arg1;
- (unsigned long long)cellDependMemoryUseEstimate;
- (BOOL)cellIsInACycle:(const struct TSCECellRef *)arg1;
- (vector_4115f7f8)cellRefsForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (BOOL)cellWillBeModifiedInCurrentRecalcCycle:(const struct TSCECellRef *)arg1;
- (BOOL)clearCellIsDirtyAfterRecalc:(const struct TSCECellRef *)arg1;
- (void)clearErrorForCell:(const struct TSCECellRef *)arg1;
- (void)clearErrorForCells:(const struct TSCECellRefSet *)arg1;
- (void)clearLegacyGlobalIDs;
- (void)clearPreviousLocaleIdentifier;
- (void)clearRecalculationTimer;
- (void)closeTransaction:(id)arg1;
- (struct TSCEInternalCellRefSet)corruptCellRefs;
- (id)currentTimeZoneCalendar;
- (void)dealloc;
- (unsigned int)delayedArchivingPriority;
- (struct TSCEDependencyTracker *)dependencyTracker;
- (id)description;
- (void)detectAndRepairConsistencyViolations;
- (void)detectAndRepairDirtyCellsAreOnLeafQueue;
- (unsigned long long)dirtyCellCount;
- (unsigned long long)dirtyCellCountInOwner:(const UUIDData_5fbc143e *)arg1;
- (void)dirtyCellsForColumnRange:(struct _NSRange)arg1 fromTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3;
- (void)dirtyCellsForInsertionOfColumns:(struct _NSRange)arg1 forTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3 headerRange:(struct TSCERangeCoordinate)arg4;
- (void)dirtyCellsForInsertionOfRows:(struct _NSRange)arg1 forTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3 headerRange:(struct TSCERangeCoordinate)arg4;
- (void)dirtyCellsForMergingRange:(struct TSCERangeCoordinate)arg1 forTable:(const UUIDData_5fbc143e *)arg2 headerRowRange:(struct TSCERangeCoordinate)arg3 headerColumnRange:(struct TSCERangeCoordinate)arg4;
- (void)dirtyCellsForRemovalOfColumns:(struct _NSRange)arg1 fromTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3;
- (void)dirtyCellsForRemovalOfRows:(struct _NSRange)arg1 fromTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3;
- (void)dirtyCellsForRowRange:(struct _NSRange)arg1 fromTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3;
- (void)dirtyCellsForUpgrade;
- (void)documentDidLoad;
- (id)documentLocale;
- (id)documentRoot;
- (struct TSCEReferenceSet)emptyReferenceSet;
- (id)emptyReferenceSetWrapper;
- (void)endBatchingGroupCellDirtying;
- (void)endSuppressingWillModifyCalls;
- (void)enumerateFormulaOwnersUsingBlock:(CDUnknownBlockType)arg1;
- (struct TSCEValue)evaluateSynchedWithCalcEngineWithFormula:(struct TSCEFormula *)arg1 evalContext:(struct TSCEEvaluationContext *)arg2;
- (void)executeBlockWhileCalculationEngineIsNotWriting:(CDUnknownBlockType)arg1;
- (id)extendTableUIDHistoryWithRewrite:(id)arg1;
- (vector_38b190b0)formulaCoordsInRange:(const struct TSCERangeCoordinate *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (vector_38b190b0)formulaCoordsInRange:(const struct TSCERangeCoordinate *)arg1 inPlane:(const struct TSCESubFormulaOwnerID *)arg2;
- (vector_38b190b0)formulaCoordsReferringToRange:(const struct TSCERangeRef *)arg1 fromOwner:(const UUIDData_5fbc143e *)arg2;
- (vector_38b190b0)formulaCoordsReferringToRange:(const struct TSCERangeRef *)arg1 fromPlane:(const struct TSCESubFormulaOwnerID *)arg2;
- (UUIDData_5fbc143e)formulaOwnerUIDForInternalFormulaOwnerID:(unsigned short)arg1;
- (UUIDData_5fbc143e)formulaOwnerUIDForSubOwnerID:(const struct TSCESubFormulaOwnerID *)arg1;
- (int)forwardRegisterOwnerWithOwnerUID:(const UUIDData_5fbc143e *)arg1 legacyGlobalID:(id)arg2;
- (BOOL)hasFormulaAt:(const struct TSCECellRef *)arg1;
- (BOOL)hasFormulaCellsUsingVolatileTypes:(unsigned int)arg1;
- (BOOL)hasMaxNumFormulas;
- (BOOL)hasRemoteDataFunctions;
- (BOOL)hasRunRecalculationALongTime;
- (BOOL)hasTimeVolatileFunctions;
- (void)headerStateOfTableChanged:(const UUIDData_5fbc143e *)arg1;
- (void)headerStateOfTableChanged:(const UUIDData_5fbc143e *)arg1 changedRows:(BOOL)arg2;
- (id)initWithContext:(id)arg1;
- (unsigned short)internalFormulaOwnerIDForFormulaOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (BOOL)isCellReferenceDirty:(const struct TSCECellRef *)arg1;
- (BOOL)isInCollaborationMode;
- (BOOL)isRecalculationStarted;
- (id)legacyGlobalIDStringToOwnerUIDMap;
- (void)loadFromUnarchiver:(id)arg1;
- (UUIDData_5fbc143e)mapOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (void)markAllExternalGroupByRefsDirty:(const UUIDData_5fbc143e *)arg1;
- (void)markAllFunctionsAsDirty;
- (void)markAllVolatileFunctionsAsDirty;
- (void)markCellRefAsDirty:(const struct TSCECellRef *)arg1;
- (void)markCellRefsAsDirty:(id)arg1;
- (void)markCompassVolatileFunctionsAsDirty;
- (void)markGeometryVolatileFunctionsAsDirtyInOwner:(const UUIDData_5fbc143e *)arg1;
- (void)markIndirectCallsAsDirty;
- (void)markLocaleVolatileFunctionsAsDirty;
- (void)markLocationVolatileFunctionsAsDirty;
- (void)markOnlyDependentsDirty:(const struct TSCECellRef *)arg1;
- (void)markOwnerAsDirty:(const UUIDData_5fbc143e *)arg1;
- (void)markRandomVolatileFunctionsAsDirty;
- (void)markRangeRefAsDirty:(const struct TSCERangeRef *)arg1;
- (void)markRemoteDataVolatileFunctionsAsDirty;
- (void)markRemoteDataVolatileFunctionsAsDirtyForKeys:(id)arg1;
- (void)markTimeVolatileFunctionsAsDirty;
- (void)markTimeVolatileFunctionsAsDirtyForCurrentDateTime;
- (unsigned long long)numFormulaCellsInOwner:(const UUIDData_5fbc143e *)arg1;
- (unsigned long long)numberOfCellsWithFormulas;
- (id)openTransaction;
- (id)ownerForOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (BOOL)ownerIsRegistered:(const UUIDData_5fbc143e *)arg1;
- (unsigned short)ownerKindForOwnerID:(unsigned short)arg1;
- (unsigned short)ownerKindForOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)ownerUIDForLegacyGlobalID:(id)arg1 registeringIfNeeded:(BOOL)arg2;
- (void)p_addApplicationNotification;
- (void)p_blockUntilRecalcIsCompleteOnNewThreadWithTimeout:(id)arg1;
- (void)p_removeApplicationNotification;
- (id)packageLocator;
- (void)pauseRecalculation;
- (void)pauseRecalculationForBlock:(CDUnknownBlockType)arg1;
- (void)pauseRecalculationSometimeSoon;
- (void)popRewriteSpec:(id)arg1;
- (struct TSCEReferenceSet)precedentsOfCell:(const struct TSCECellRef *)arg1;
- (void)pushRewriteSpec:(id)arg1;
- (BOOL)rangeIsWithinTable:(const struct TSCERangeRef *)arg1;
- (double)recalcTimeInSecs;
- (void)recalculateWithTimeout:(double)arg1;
- (BOOL)recalculationIsPaused;
- (BOOL)referenceIsValid:(const struct TSCERangeRef *)arg1;
- (BOOL)referenceWasGuaranteedCleanAtRecalcCycleStart:(const struct TSCEAnyRef *)arg1;
- (int)registerOwnerWithOwnerUID:(const UUIDData_5fbc143e *)arg1 owner:(id)arg2 referenceResolver:(id)arg3 baseOwnerUID:(const UUIDData_5fbc143e *)arg4 ownerKind:(unsigned short)arg5;
- (void)removeAllFormulasCleanObserver:(id)arg1;
- (void)removeAllFormulasFromOwner:(const UUIDData_5fbc143e *)arg1;
- (void)removeAllFormulasFromPlane:(const struct TSCESubFormulaOwnerID *)arg1;
- (void)removeCalculationStateObserver:(id)arg1;
- (void)removeFormulaAt:(const struct TSUCellCoord *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (void)removeFormulaAt:(const struct TSUCellCoord *)arg1 onPlane:(const struct TSCESubFormulaOwnerID *)arg2;
- (void)removeFormulasAtCellRefs:(id)arg1;
- (void)removeFormulasFromRange:(const struct TSCERangeRef *)arg1;
- (void)replaceFormula:(id)arg1 atCellCoord:(const struct TSUCellCoord *)arg2 inOwner:(const UUIDData_5fbc143e *)arg3;
- (void)replaceFormula:(id)arg1 atCellCoord:(const struct TSUCellCoord *)arg2 inOwner:(const UUIDData_5fbc143e *)arg3 replaceOptions:(struct TSCEReplaceFormulaOptions)arg4;
- (void)replaceFormula:(id)arg1 atCellCoord:(const struct TSUCellCoord *)arg2 onPlane:(const struct TSCESubFormulaOwnerID *)arg3;
- (void)replaceFormula:(id)arg1 atCellCoord:(const struct TSUCellCoord *)arg2 onPlane:(const struct TSCESubFormulaOwnerID *)arg3 replaceOptions:(struct TSCEReplaceFormulaOptions)arg4;
- (void)replaceFormulaAt:(const struct TSUCellCoord *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 precedents:(id)arg3 replaceOptions:(const struct TSCEReplaceFormulaOptions *)arg4;
- (void)replaceFormulaAt:(const struct TSUCellCoord *)arg1 onPlane:(const struct TSCESubFormulaOwnerID *)arg2 precedents:(id)arg3 replaceOptions:(const struct TSCEReplaceFormulaOptions *)arg4;
- (void)replaceFormulaIfPrecedentsDifferAt:(const struct TSUCellCoord *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 precedents:(id)arg3 replaceOptions:(const struct TSCEReplaceFormulaOptions *)arg4;
- (void)replaceFormulaIfPrecedentsDifferAt:(const struct TSUCellCoord *)arg1 onPlane:(const struct TSCESubFormulaOwnerID *)arg2 precedents:(id)arg3 replaceOptions:(const struct TSCEReplaceFormulaOptions *)arg4;
- (void)replaceRemoteDataKeysInterestedIn:(id)arg1 forCell:(const struct TSCECellRef *)arg2;
- (void)resetCorruptCellRefs:(const struct TSCEInternalCellRefSet *)arg1;
- (void)resetExternalReferencesToGroupNode:(const UUIDData_5fbc143e *)arg1 inGroupBy:(const UUIDData_5fbc143e *)arg2;
- (void)resetNRM;
- (id)resolverContainerMatchingName:(id)arg1;
- (id)resolverForCellRef:(id)arg1;
- (id)resolverForTableID:(unsigned short)arg1;
- (id)resolverForTableUID:(const UUIDData_5fbc143e *)arg1;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolverMatchingNameWithContextContainer:(id)arg1 contextContainerName:(id)arg2;
- (void)resumeRecalculation;
- (id)rewriteSpecStack;
- (void)rollbackTableUIDHistoryWithRewriteInfo:(id)arg1;
- (struct TSCECellRef)rootCauseForErrorInCell:(const struct TSCECellRef *)arg1 atRootCell:(BOOL *)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setError:(id)arg1 forCell:(const struct TSCECellRef *)arg2;
- (void)setOwnerUIDForLegacyGlobalID:(id)arg1 ownerUID:(const UUIDData_5fbc143e *)arg2;
- (void)setRemoteDataStore:(id)arg1;
- (BOOL)shouldDelayArchiving;
- (BOOL)shouldForceRegisterAllTables;
- (void)startRecalcTaskIfNecessary;
- (void)startRecalculation;
- (struct TSCESubFormulaOwnerID)subOwnerIDForFormulaOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (void)superWillModify;
- (struct TSCETableResolver *)tableOrLinkedResolverForTableUID:(const UUIDData_5fbc143e *)arg1;
- (struct TSCETableResolver *)tableResolverForRefResolver:(id)arg1;
- (struct TSCETableResolver *)tableResolverForTableID:(unsigned short)arg1;
- (struct TSCETableResolver *)tableResolverForTableUID:(const UUIDData_5fbc143e *)arg1;
- (vector_4115f7f8)unorderedCellRefsForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (void)unregisterOwner:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)uuidForTableUID:(const UUIDData_5fbc143e *)arg1 andIndex:(unsigned int)arg2 direction:(BOOL)arg3;
- (vector_a1208d01)valuesForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2 error:(id *)arg3;
- (void)willClose;
- (void)willModify;
- (void)wroteCells:(const vector_38b190b0 *)arg1 inOwnerUID:(const UUIDData_5fbc143e *)arg2;

@end

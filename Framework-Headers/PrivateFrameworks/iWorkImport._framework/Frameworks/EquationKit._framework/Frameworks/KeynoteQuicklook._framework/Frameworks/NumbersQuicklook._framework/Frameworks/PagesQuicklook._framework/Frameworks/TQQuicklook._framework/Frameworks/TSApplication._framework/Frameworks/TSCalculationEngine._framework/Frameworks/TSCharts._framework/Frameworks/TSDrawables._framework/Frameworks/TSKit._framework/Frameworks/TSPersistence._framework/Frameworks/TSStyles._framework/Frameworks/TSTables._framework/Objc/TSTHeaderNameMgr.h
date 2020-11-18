//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <TSTables/TSCEFormulaOwning-Protocol.h>
#import <TSTables/TSCEHeaderNameProtocol-Protocol.h>
#import <TSTables/TSTCellWillChangeProtocol-Protocol.h>

@class NSCharacterSet, NSMutableSet, NSObject, NSString, TSCECalculationEngine, TSCENameTrie;
@protocol OS_dispatch_queue;

@interface TSTHeaderNameMgr : TSPObject <TSCEHeaderNameProtocol, TSTCellWillChangeProtocol, TSCEFormulaOwning>
{
    TSCECalculationEngine *_calcEngine;
    TSCECalculationEngine *_weakCalcEngine;
    NSObject<OS_dispatch_queue> *_headerNameMgrQueue;
    UUIDData_5fbc143e _ownerUID;
    struct TSUCellCoord _nextPrecedentCoord;
    struct TSUCellCoord _allHeaderPerTablesPrecedent;
    struct TSUCellCoord _needsTileSplittingPrecedent;
    struct vector<TSTHeaderNameMgrTile *, std::__1::allocator<TSTHeaderNameMgrTile *>> _nameFragmentTiles;
    struct unordered_map<TSUCellCoord, TSTHeaderNameMgrEntry *, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSTHeaderNameMgrEntry *>>> _fragPrecedentToEntry;
    struct unordered_map<TSCEUidCellRef, TSCECellCoordSet, std::__1::hash<TSCEUidCellRef>, std::__1::equal_to<TSCEUidCellRef>, std::__1::allocator<std::__1::pair<const TSCEUidCellRef, TSCECellCoordSet>>> _fragPrecedentsUsedByCellRef;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, TSTHeaderPerTable *, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSTHeaderPerTable *>>> _perTableInfo;
    struct unordered_map<TSUCellCoord, TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSU::UUIDData<TSP::UUIDData>>>> _headerPerTablePrecedentToTableUID;
    TSCENameTrie *_namePrefixIndex;
    NSMutableSet *_tilesToConsiderSplitting;
    BOOL _isClosing;
    UUIDData_5fbc143e _nrm_ownerUID;
    NSCharacterSet *_whitespaceToBreakAt;
}

@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isClosing;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (UUIDData_5fbc143e)NRM_formulaOwnerUID;
- (void)addChangedTile:(id)arg1;
- (struct TSCECellRefSet)allHeaderCellRefsLimitedToTable:(const UUIDData_5fbc143e *)arg1;
- (id)anyRefForRangeForHeaderCell:(const struct TSCECellRef *)arg1 usePreserveFlags:(BOOL)arg2;
- (struct TSCERangeRef)baseHeaderColumnsForCell:(const struct TSCECellRef *)arg1;
- (struct TSCERangeRef)baseHeaderRowsForCell:(const struct TSCECellRef *)arg1;
- (void)beginTrackingNamesInTable:(const UUIDData_5fbc143e *)arg1;
- (void)clearTextAtCellCoord:(const UUIDCoord_697ad09a *)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (void)dealloc;
- (void)endTrackingNamesInTable:(const UUIDData_5fbc143e *)arg1;
- (struct TSCERecalculationState)evaluateFormulaAt:(struct TSUCellCoord)arg1 withCalcEngine:(id)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
- (long long)evaluationMode;
- (id)findTileForString:(id)arg1 findClosest:(BOOL)arg2;
- (id)findTileForString:(id)arg1 findClosest:(BOOL)arg2 foundAtOffset:(unsigned long long *)arg3;
- (UUIDData_5fbc143e)formulaOwnerUID;
- (struct TSTHeaderNameMgrEntry *)fragmentEntryForNameFragmentPrecedent:(const struct TSUCellCoord *)arg1;
- (struct TSTHeaderNameMgrEntry *)fragmentEntryForString:(id)arg1 createIfMissing:(BOOL)arg2;
- (struct TSUCellCoord)getNextPrecedentCoord:(BOOL)arg1;
- (void)handleFullTile:(id)arg1;
- (struct TSCECellRefSet)headerCellsMatching:(id)arg1 limitToTable:(const UUIDData_5fbc143e *)arg2 includePrefixes:(BOOL)arg3;
- (id)headerNameMgrQueue;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 calcEngine:(id)arg2;
- (void)invalidateForCalcEngine:(id)arg1;
- (id)linkedResolver;
- (void)loadFromUnarchiver:(id)arg1;
- (struct TSCECellRefSet)nameFragmentPrecedentsForReferenceString:(id)arg1;
- (id)namePrefixIndex;
- (unsigned long long)numberOfTiles;
- (unsigned short)ownerKind;
- (UUIDData_5fbc143e)ownerUID;
- (void)p_processWorkForTable:(const UUIDData_5fbc143e *)arg1;
- (void)p_updateText:(id)arg1 atCellCoord:(const UUIDCoord_697ad09a *)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
- (void)p_updateWithWordFragments:(const vector_0c920a62 *)arg1 atCellCoord:(const UUIDCoord_697ad09a *)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
- (void)p_willApplyCell:(id)arg1 baseCellCoord:(struct TSUModelCellCoord)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
- (struct TSTHeaderPerTable *)perTableEntryForTable:(const UUIDData_5fbc143e *)arg1 createIfMissing:(BOOL)arg2;
- (BOOL)referenceNameIsUnique:(id)arg1 forReference:(const RefTypeHolder_8c6da553 *)arg2 contextTable:(const UUIDData_5fbc143e *)arg3;
- (int)registerWithCalcEngine:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setCalcEngine:(id)arg1;
- (void)setEntry:(struct TSTHeaderNameMgrEntry *)arg1 forPrecedentCoord:(const struct TSUCellCoord *)arg2;
- (void)setNRM_formulaOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (void)setup;
- (struct TSCERangeRef)spanningRangeForHeaderCell:(const struct TSCECellRef *)arg1;
- (id)stringInHeaderCell:(const struct TSCECellRef *)arg1;
- (id)subsetForReferenceName:(id)arg1 limitToTable:(const UUIDData_5fbc143e *)arg2 includePrefixes:(BOOL)arg3;
- (id)tileForEntry:(struct TSTHeaderNameMgrEntry *)arg1;
- (void)unpackEntryAfterUnarchive:(struct TSTHeaderNameMgrEntry *)arg1;
- (void)unregisterFromCalcEngine;
- (void)updateTableUIDFrom:(const UUIDData_5fbc143e *)arg1 toTableUID:(const UUIDData_5fbc143e *)arg2;
- (void)updateText:(id)arg1 atCellCoord:(const UUIDCoord_697ad09a *)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
- (void)updateTrackedHeaders:(const UUIDData_5fbc143e *)arg1;
- (void)updateTrackedHeaders:(const UUIDData_5fbc143e *)arg1 checkForEmptyHeaders:(BOOL)arg2;
- (void)updateTrackedHeadersForDocumentLocaleChange:(const UUIDData_5fbc143e *)arg1;
- (void)updateWithIndexingChunks:(id)arg1;
- (void)usedPrecedentCoord:(const struct TSUCellCoord *)arg1;
- (void)waitForQueueToDrain;
- (void)willApplyBaseCellMap:(id)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (void)willApplyCell:(id)arg1 baseCellCoord:(struct TSUModelCellCoord)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
- (void)willApplyConcurrentCellMap:(id)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (void)willClose;
- (void)willRemoveRows:(const vector_4dc5f307 *)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (vector_0c920a62)wordFragmentsFromString:(id)arg1 savePreserveFlags:(BOOL)arg2;
- (void)writeResultsForCalcEngine:(id)arg1;

@end

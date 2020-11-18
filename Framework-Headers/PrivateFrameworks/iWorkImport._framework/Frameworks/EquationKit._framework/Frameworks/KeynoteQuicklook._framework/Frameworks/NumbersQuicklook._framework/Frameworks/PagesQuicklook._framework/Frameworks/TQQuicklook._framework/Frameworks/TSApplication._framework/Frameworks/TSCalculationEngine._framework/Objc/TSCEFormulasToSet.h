//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCECalculationEngine;
@protocol OS_dispatch_group, OS_dispatch_queue, TSCEFormulaReplacing;

@interface TSCEFormulasToSet : NSObject
{
    struct os_unfair_lock_s _removeReplaceMutex;
    TSCECalculationEngine *_calcEngine;
    id<TSCEFormulaReplacing> _minion;
    unsigned char _options;
    struct TSCECellRefSet _formulasToRemove;
    struct TSCECellRefSet _formulasToReset;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_map<TSUCellCoord, TSCEFormulaToReplace, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSCEFormulaToReplace>>>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_map<TSUCellCoord, TSCEFormulaToReplace, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSCEFormulaToReplace>>>>>> _formulasToReplace;
    NSObject<OS_dispatch_queue> *_precedentLoadingQueue;
    NSObject<OS_dispatch_group> *_precedentLoadingGroup;
    BOOL _flushAllInProgress;
    BOOL _runningInBackground;
    NSObject<OS_dispatch_queue> *_backgroundProcessingQueue;
}

@property (readonly, nonatomic) TSCECalculationEngine *calcEngine; // @synthesize calcEngine=_calcEngine;
@property (readonly, nonatomic) BOOL isEmpty;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_flushFormulasToRemoveWithDepTracker:(struct TSCEDependencyTracker *)arg1 startTime:(id)arg2 timeout:(double)arg3;
- (void)_flushFormulasToReplaceWithDepTracker:(struct TSCEDependencyTracker *)arg1 startTime:(id)arg2 timeout:(double)arg3;
- (void)_flushFormulasToResetWithDepTracker:(struct TSCEDependencyTracker *)arg1 startTime:(id)arg2 timeout:(double)arg3;
- (void)commonInit;
- (void)dealloc;
- (void)flushAllFormulaChanges;
- (BOOL)flushFormulaChangesForSeconds:(double)arg1;
- (void)flushRemoveFormulas;
- (void)flushReplaceFormulas;
- (void)flushResetFormulas;
- (id)initWithCalcEngine:(id)arg1 forMinion:(id)arg2 options:(unsigned char)arg3;
- (void)processInBackgroundIfNecessary;
- (void)removeAllFormulasFromOwner:(const UUIDData_5fbc143e *)arg1;
- (void)removeFormulaAt:(const struct TSUCellCoord *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (void)removeFormulasAt:(const struct TSCECellRefSet *)arg1;
- (void)removeFormulasAt:(const struct TSCECellCoordSet *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 removeOutstandingReplaces:(BOOL)arg3;
- (void)removeFormulasFromRange:(const struct TSCERangeRef *)arg1;
- (void)replaceFormula:(id)arg1 atCellCoord:(const struct TSUCellCoord *)arg2 inOwner:(const UUIDData_5fbc143e *)arg3;
- (void)replaceFormula:(id)arg1 atCellCoord:(const struct TSUCellCoord *)arg2 inOwner:(const UUIDData_5fbc143e *)arg3 replaceOptions:(struct TSCEReplaceFormulaOptions)arg4;
- (void)replaceFormulaAt:(const struct TSUCellCoord *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 precedents:(id)arg3 replaceOptions:(const struct TSCEReplaceFormulaOptions *)arg4;
- (void)resetFormulaAt:(const struct TSCECellRef *)arg1;
- (void)waitForAllPrecedentsToLoad;
- (void)willClose;

@end

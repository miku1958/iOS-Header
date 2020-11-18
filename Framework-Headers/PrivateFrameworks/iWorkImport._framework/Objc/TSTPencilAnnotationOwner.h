//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCEFormulaOwning-Protocol.h>

@class NSString, TSCECalculationEngine, TSTFormulaStore, TSTTableModel, TSUSparseArray;

__attribute__((visibility("hidden")))
@interface TSTPencilAnnotationOwner : NSObject <TSCEFormulaOwning>
{
    TSCECalculationEngine *_calculationEngine;
    TSTTableModel *_tableModel;
    TSTFormulaStore *_formulaStore;
    TSUSparseArray *_annotations;
    UUIDData_5fbc143e _ownerUID;
}

@property (strong, nonatomic) TSUSparseArray *annotations; // @synthesize annotations=_annotations;
@property (readonly, weak, nonatomic) TSCECalculationEngine *calculationEngine; // @synthesize calculationEngine=_calculationEngine;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSTFormulaStore *formulaStore; // @synthesize formulaStore=_formulaStore;
@property (readonly) unsigned long long hash;
@property (nonatomic) UUIDData_5fbc143e ownerUID; // @synthesize ownerUID=_ownerUID;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_annotationsForIndexes:(id)arg1;
- (id)_annotationsInRows:(id)arg1;
- (id)_annotationsIntersectingButNotContainingBaseCellRegion:(id)arg1;
- (void)_enumerateAnnotationsAndFormulasWithIndexes:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_enumerateIndexesIntersectingRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_indexesContainedByRegion:(id)arg1;
- (id)_indexesForRange:(struct TSUModelCellRect)arg1 startingOnly:(BOOL)arg2;
- (id)_indexesForRows:(id)arg1;
- (id)_indexesIntersectingButNotContainingBaseCellRegion:(id)arg1;
- (unsigned long long)addAnnotation:(id)arg1 withAnchorRange:(struct TSUCellRect)arg2;
- (void)addAnnotation:(id)arg1 withFormula:(struct TSCEFormula)arg2 atIndex:(unsigned long long)arg3;
- (id)annotationsContainedByRegion:(id)arg1;
- (id)annotationsStartingInRange:(struct TSUModelCellRect)arg1;
- (struct TSUCellRect)cellRangeForAnnotation:(id)arg1;
- (BOOL)containsAnnotation:(id)arg1;
- (void)enumerateAnnotationsAndFormulasContainedInRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAnnotationsAndFormulasInRange:(struct TSUModelCellRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAnnotationsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfAnnotation:(id)arg1;
- (id)initWithArchive:(const struct PencilAnnotationOwnerArchive *)arg1 unarchiver:(id)arg2 forTableModel:(id)arg3;
- (id)initWithTableModel:(id)arg1;
- (id)initWithTableModel:(id)arg1 ownerUID:(UUIDData_5fbc143e)arg2 annotations:(id)arg3 formulaStore:(id)arg4;
- (void)invalidateForCalcEngine:(id)arg1;
- (id)linkedResolver;
- (unsigned long long)markForRollback;
- (unsigned short)ownerKind;
- (CDStruct_2a4d9400)recalculateForCalcEngine:(id)arg1 atFormulaCoord:(struct TSUCellCoord)arg2 recalcOptions:(CDStruct_3d581f42)arg3;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (void)remapTableUIDsInFormulasWithMap:(const UUIDMap_b66c2694 *)arg1;
- (void)removeAllAnnotations;
- (const struct TSCEFormula *)removeAnnotation:(id)arg1;
- (const struct TSCEFormula *)removeAnnotationAtIndex:(unsigned long long)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)rollbackToMark:(unsigned long long)arg1;
- (void)saveToArchive:(struct PencilAnnotationOwnerArchive *)arg1 archiver:(id)arg2;
- (void)unregisterFromCalcEngine;
- (void)writeResultsForCalcEngine:(id)arg1;

@end


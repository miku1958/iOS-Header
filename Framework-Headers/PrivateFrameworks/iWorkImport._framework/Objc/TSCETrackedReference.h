//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCETrackedReference : NSObject <NSCopying>
{
    struct TSCEASTNodeArray *_AST;
    struct TSUCellCoord _formulaCoord;
}

@property (nonatomic) struct TSUCellCoord formulaCoord; // @synthesize formulaCoord=_formulaCoord;

- (struct TSCEASTNodeArray *)ast;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)displayStringWithCalculationEngine:(id)arg1;
- (void)encodeToArchive:(struct TrackedReferenceArchive *)arg1 archiver:(id)arg2;
- (void)encodeToExpandedArchive:(struct ExpandedTrackedReferenceArchive *)arg1 archiver:(id)arg2;
- (id)getPrecedentsWithCalcEngine:(id)arg1 hostOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (id)initByCopyingASTNodeArray:(struct TSCEASTNodeArray *)arg1 atFormulaCoord:(const struct TSUCellCoord *)arg2;
- (id)initFromArchive:(const struct TrackedReferenceArchive *)arg1;
- (id)initFromExpandedArchive:(const struct ExpandedTrackedReferenceArchive *)arg1;
- (id)initWithCellRef:(const struct TSCECellRef *)arg1;
- (id)initWithRangeRef:(const struct TSCERangeRef *)arg1;
- (id)initWithSpanningRangeRef:(const struct TSCESpanningRangeRef *)arg1;
- (id)initWithTrackedReferenceTSPObjectDeprecated:(id)arg1;
- (BOOL)isValidWithReferenceTracker:(id)arg1;
- (id)precedentsWithCalcEngine:(id)arg1 hostOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (id)referencesForCalcEngine:(id)arg1 referenceTrackerUID:(const UUIDData_5fbc143e *)arg2;
- (struct TSCECellRef)refersToCellRefForCalculationEngine:(id)arg1 referenceTrackerUID:(const UUIDData_5fbc143e *)arg2;
- (void)registerWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (void)replaceContentsWithContentsOfTrackedReference:(id)arg1;

@end

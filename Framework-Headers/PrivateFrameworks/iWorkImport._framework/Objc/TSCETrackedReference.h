//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCETrackedReference : NSObject <NSCopying>
{
    struct TSCEASTNodeArray *_AST;
    CDStruct_ed6d627d _formulaID;
}

@property (nonatomic) CDStruct_ed6d627d formulaID; // @synthesize formulaID=_formulaID;

- (struct TSCEASTNodeArray *)ast;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)displayStringWithCalculationEngine:(id)arg1;
- (void)encodeToArchive:(struct TrackedReferenceArchive *)arg1 archiver:(id)arg2;
- (id)initByCopyingASTNodeArray:(struct TSCEASTNodeArray *)arg1 formulaID:(CDStruct_ed6d627d)arg2;
- (id)initFromArchive:(const struct TrackedReferenceArchive *)arg1;
- (id)initWithCellRef:(const struct TSCECellRef *)arg1 formulaID:(CDStruct_ed6d627d)arg2;
- (id)initWithRangeRef:(const struct TSCERangeRef *)arg1 formulaID:(CDStruct_ed6d627d)arg2;
- (id)initWithSpanningRangeRef:(const struct TSCESpanningRangeRef *)arg1 formulaID:(CDStruct_ed6d627d)arg2;
- (id)initWithTrackedReferenceTSPObjectDeprecated:(id)arg1;
- (BOOL)isValidWithReferenceTracker:(id)arg1;
- (id)referenceEnumeratorWithCalculationEngine:(id)arg1 referenceTrackerUID:(const UUIDData_5fbc143e *)arg2;
- (struct TSCECellRef)refersToCellRefForCalculationEngine:(id)arg1 referenceTrackerUID:(const UUIDData_5fbc143e *)arg2;
- (void)registerWithCalculationEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (void)replaceContentsWithContentsOfTrackedReference:(id)arg1;

@end

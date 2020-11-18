//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSTCellStyle, TSTFormulaPredicate, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTConditionalStyleRule : NSObject <NSCopying>
{
    TSTFormulaPredicate *_predicate;
    TSWPParagraphStyle *_textStyle;
    TSTCellStyle *_cellStyle;
    int mPredicateType;
}

@property (readonly, copy, nonatomic) TSTCellStyle *cellStyle;
@property (readonly, nonatomic) struct TSCEFormula *formula;
@property (readonly, copy, nonatomic) TSTFormulaPredicate *predicate;
@property (readonly, nonatomic) int predicateType; // @synthesize predicateType=mPredicateType;
@property (readonly, copy, nonatomic) TSWPParagraphStyle *textStyle;

+ (id)conditionalStyleRuleWithRule:(id)arg1;
- (void).cxx_destruct;
- (BOOL)containsUidReferences;
- (id)copyByClearingUids:(id)arg1 containingTableUID:(const UUIDData_5fbc143e *)arg2;
- (id)copyByOffsettingRelativeReferencesWithOffset:(CDStruct_1ef3fb1f)arg1;
- (id)copyByRemappingHostCellAgnosticOwnerUIDsWithMap:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2 ownerUID:(const UUIDData_5fbc143e *)arg3 error:(BOOL *)arg4;
- (id)copyByRemappingOwnerUIDsWithMap:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2 error:(BOOL *)arg3;
- (id)copyByRepairingBadReferences:(id)arg1;
- (id)copyByRewritingWithContext:(id)arg1 rewriteBlock:(CDUnknownBlockType)arg2;
- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct TSUCellCoord)arg3;
- (id)copyByUpdatingHostCellRef:(const struct TSCECellRef *)arg1;
- (id)copyByUpgradingToLinkedRefAtHostCellRef:(const struct TSCECellRef *)arg1;
- (id)copyToGeometricFormWithRewriteContext:(id)arg1;
- (id)copyToUidFormForTableInfo:(id)arg1 inCellCoordinate:(struct TSUCellCoord)arg2 preserveHostCell:(BOOL)arg3;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)evaluateFormulaAtCellID:(struct TSUCellCoord)arg1 withCalcEngine:(id)arg2 withFormulaTableUID:(const UUIDData_5fbc143e *)arg3;
- (void)getPrecedents:(struct TSCEReferenceSet *)arg1 calcEngine:(id)arg2 hostOwnerUID:(const UUIDData_5fbc143e *)arg3 hostCellID:(const struct TSUCellCoord *)arg4;
- (BOOL)hasBadRefWithUidInfo;
- (unsigned long long)hash;
- (id)initWithPredicate:(id)arg1 cellStyle:(id)arg2 textStyle:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualForInspector:(id)arg1;
- (void)iterateFormulasWithContext:(id)arg1 shouldStop:(BOOL *)arg2 block:(CDUnknownBlockType)arg3;
- (void)setHostCell:(const UUIDData_5fbc143e *)arg1 hostColumnUID:(const UUIDData_5fbc143e *)arg2 hostRowUID:(const UUIDData_5fbc143e *)arg3;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSTMergeAction : NSObject <NSCopying>
{
    int _type;
    vector_d660334b _uidRanges;
    vector_eeb872f1 _mergeFormulas;
    vector_06e666a8 _mergeFormulaIndexes;
}

@property (readonly, nonatomic) BOOL hasMergeFormulas;
@property (nonatomic) const vector_06e666a8 *mergeFormulaIndexes; // @synthesize mergeFormulaIndexes=_mergeFormulaIndexes;
@property (nonatomic) const vector_eeb872f1 *mergeFormulas; // @synthesize mergeFormulas=_mergeFormulas;
@property (nonatomic) int type; // @synthesize type=_type;
@property (nonatomic) const vector_d660334b *uidRanges; // @synthesize uidRanges=_uidRanges;

+ (struct TSTCellUIDRange)cellUIDRangeFromMergeFormula:(const struct TSCEFormula *)arg1;
+ (id)mergeActionForGrowingRange:(const struct TSTCellUIDRange *)arg1 coveringRange:(const struct TSTCellUIDRange *)arg2 inTable:(id)arg3;
+ (id)mergeActionForInsertingRange:(const struct TSTCellUIDRange *)arg1 inTable:(id)arg2;
+ (id)mergeActionForRemovingRanges:(const vector_d660334b *)arg1 inTable:(id)arg2;
+ (struct TSCEFormula)p_createFormulaForUIDRange:(struct TSTCellUIDRange)arg1 inTable:(id)arg2;
+ (id)stringForMergeType:(int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)actionByExpandingWithAction:(id)arg1;
- (void)addFormula:(const struct TSCEFormula *)arg1;
- (void)addFormulaIndex:(unsigned long long)arg1;
- (id)changeDescriptorForTable:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateMergeFormulasUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithArchive:(const struct MergeOperationArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 uidRange:(const struct TSTCellUIDRange *)arg2;
- (id)initWithType:(int)arg1 uidRanges:(const vector_d660334b *)arg2;
- (id)remapUIDsByColumnMap:(const UUIDMap_b66c2694 *)arg1 rowMap:(const UUIDMap_b66c2694 *)arg2 ownerMap:(const UUIDMap_b66c2694 *)arg3;
- (void)saveToArchive:(struct MergeOperationArchive *)arg1 archiver:(id)arg2;
- (id)shrinkAction;
- (void)verify;

@end


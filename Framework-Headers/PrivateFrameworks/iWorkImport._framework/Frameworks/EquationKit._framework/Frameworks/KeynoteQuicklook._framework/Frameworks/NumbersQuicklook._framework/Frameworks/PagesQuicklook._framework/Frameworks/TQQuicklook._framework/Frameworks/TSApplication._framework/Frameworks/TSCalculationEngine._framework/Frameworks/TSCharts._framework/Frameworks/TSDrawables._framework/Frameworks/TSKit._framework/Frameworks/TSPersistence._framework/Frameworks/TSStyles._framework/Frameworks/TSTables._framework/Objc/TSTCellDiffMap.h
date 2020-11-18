//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <TSTables/NSCopying-Protocol.h>

@class TSTCellDiffArray, TSTCellUIDList;

@interface TSTCellDiffMap : TSPObject <NSCopying>
{
    vector_38b190b0 _cellIDs;
    BOOL _uidBased;
    BOOL _containsCellBorderChanges;
    BOOL _containsSuppressCustomFormatHandlingProperty;
    TSTCellDiffArray *_cellDiffArray;
    TSTCellUIDList *_cellUIDList;
}

@property (strong, nonatomic) TSTCellDiffArray *cellDiffArray; // @synthesize cellDiffArray=_cellDiffArray;
@property (strong, nonatomic) TSTCellUIDList *cellUIDList; // @synthesize cellUIDList=_cellUIDList;
@property (nonatomic) BOOL containsCellBorderChanges; // @synthesize containsCellBorderChanges=_containsCellBorderChanges;
@property (nonatomic) BOOL containsSuppressCustomFormatHandlingProperty; // @synthesize containsSuppressCustomFormatHandlingProperty=_containsSuppressCustomFormatHandlingProperty;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic, getter=isUIDBased) BOOL uidBased; // @synthesize uidBased=_uidBased;

+ (id)cellDiffMapWithContext:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCellDiff:(id)arg1 andCellID:(struct TSUCellCoord)arg2;
- (id)addCellDiff:(id)arg1 andCellID:(struct TSUCellCoord)arg2 avoidCopy:(BOOL)arg3;
- (void)addCellDiff:(id)arg1 andCellUID:(struct TSTCellUID)arg2;
- (id)addCellDiff:(id)arg1 andCellUID:(struct TSTCellUID)arg2 avoidCopy:(BOOL)arg3;
- (void)addCellDiffMap:(id)arg1;
- (void)addCellDiffs:(id)arg1 atCellUIDs:(id)arg2;
- (void)appendCellDiffMap:(id)arg1;
- (id)cellDiffMapByIntersectingUIDs:(const vector_4dc5f307 *)arg1 inRows:(BOOL)arg2;
- (id)cellDiffMapByRemovingColumns:(const vector_4dc5f307 *)arg1;
- (id)cellDiffMapByRemovingRows:(const vector_4dc5f307 *)arg1;
- (const vector_38b190b0 *)cellIDs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateCellIDElementsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateElementsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 cellDiff:(id)arg2 cellUIDList:(id)arg3;
- (id)initWithContext:(id)arg1 cellDiffArray:(id)arg2 cellUIDList:(id)arg3 uidBased:(BOOL)arg4;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_resolveCellIDsToUUIDsByTableInfo:(id)arg1;
- (BOOL)p_scanCellDiffArrayForCellBorderChanges:(id)arg1;
- (BOOL)p_scanCellDiffArrayForSuppressCustomFormatHandlingProperty:(id)arg1;
- (BOOL)p_scanNSArrayOfDiffsForCellBorderChanges:(id)arg1;
- (BOOL)p_scanNSArrayOfDiffsForSuppressCustomFormatHandlingProperty:(id)arg1;
- (id)pruneCellDiffMapAgainstTable:(id)arg1 behavior:(unsigned long long)arg2;
- (id)pruneCellDiffMapAgainstTable:(id)arg1 behavior:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)saveToArchiver:(id)arg1;
- (id)uuidBasedCellDiffMapByTableInfo:(id)arg1;

@end

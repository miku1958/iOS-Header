//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTWidthHeightCache : NSObject
{
    struct vector<TSTWidthHeightCache_Private::WHCCol, std::__1::allocator<TSTWidthHeightCache_Private::WHCCol>> mFittingColumnWidth;
    struct vector<TSTWidthHeightCache_Private::WHCRow, std::__1::allocator<TSTWidthHeightCache_Private::WHCRow>> mFittingRowHeight;
    vector_b67dfe3a mModelColumnWidth;
    vector_b67dfe3a mModelRowHeight;
    struct _opaque_pthread_rwlock_t mLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_increaseColCapacity:(unsigned int)arg1;
- (void)_increaseRowCapacity:(unsigned int)arg1;
- (void)dealloc;
- (BOOL)deleteColsStartingWith:(unsigned char)arg1 upToColumn:(unsigned char)arg2;
- (BOOL)deleteRowsStartingWith:(unsigned short)arg1 upToRow:(unsigned short)arg2;
- (double)getFitHeightForRow:(unsigned short)arg1;
- (double)getFitWidthForCol:(unsigned char)arg1;
- (double)getModelHeightForRow:(unsigned short)arg1;
- (double)getModelWidthForColumn:(unsigned char)arg1;
- (id)init;
- (id)initWithNumRows:(unsigned short)arg1 andNumCols:(unsigned short)arg2;
- (BOOL)insertCols:(unsigned short)arg1 atColumn:(unsigned char)arg2;
- (BOOL)insertRows:(unsigned short)arg1 atRow:(unsigned short)arg2;
- (void)logInternalState;
- (BOOL)moveColsFrom:(struct TSUCellRect)arg1 toCol:(unsigned char)arg2;
- (BOOL)moveRowsFrom:(struct TSUCellRect)arg1 toRow:(unsigned short)arg2;
- (void)p_resetFittingWidthsHeightsForRange:(struct TSUCellRect)arg1;
- (void)resetAllCol;
- (void)resetAllRow;
- (void)resetColWidthsStartingWith:(unsigned char)arg1 upToColumn:(unsigned char)arg2;
- (void)resetFittingHeightsFromCollection:(id)arg1;
- (BOOL)resetModelCache;
- (BOOL)resetModelCacheRange:(struct TSUCellRect)arg1;
- (void)resetRowHeightsStartingWith:(unsigned short)arg1 upToRow:(unsigned short)arg2;
- (BOOL)setFitDims:(struct CGSize)arg1 forCellID:(struct TSUCellCoord)arg2;
- (BOOL)setFitHeight:(double)arg1 forCellID:(struct TSUCellCoord)arg2;
- (BOOL)setFitWidth:(double)arg1 forCellID:(struct TSUCellCoord)arg2;
- (void)setFittingHeightsFromCollection:(id)arg1;
- (BOOL)setModelHeight:(double)arg1 forRow:(unsigned short)arg2;
- (BOOL)setModelWidth:(double)arg1 forColumn:(unsigned char)arg2;
- (id)validateChangeDescriptors:(id)arg1;
- (BOOL)verifyDims:(struct CGSize)arg1 forCellID:(struct TSUCellCoord)arg2;

@end

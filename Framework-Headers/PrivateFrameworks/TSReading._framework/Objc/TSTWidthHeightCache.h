//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSTWidthHeightCache : NSObject
{
    struct vector<TSTWidthHeightCache_Private::WHCCol, std::__1::allocator<TSTWidthHeightCache_Private::WHCCol>> mFittingColumnWidth;
    struct vector<TSTWidthHeightCache_Private::WHCRow, std::__1::allocator<TSTWidthHeightCache_Private::WHCRow>> mFittingRowHeight;
    vector_3f7ffb82 mModelColumnWidth;
    vector_3f7ffb82 mModelRowHeight;
    unsigned short mMaxRow;
    unsigned char mMaxCol;
    struct _opaque_pthread_rwlock_t mLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_increaseColCapacity:(unsigned int)arg1;
- (void)_increaseRowCapacity:(unsigned int)arg1;
- (void)dealloc;
- (BOOL)deleteColsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2;
- (BOOL)deleteRowsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2;
- (id)description;
- (double)getFitHeightForRow:(unsigned short)arg1;
- (double)getFitWidthForCol:(unsigned char)arg1;
- (id)getListOfInvalidColsInRow:(unsigned short)arg1;
- (double)getModelHeightForRow:(unsigned short)arg1;
- (double)getModelWidthForColumn:(unsigned char)arg1;
- (id)init;
- (id)initWithNumRows:(unsigned short)arg1 andNumCols:(unsigned short)arg2;
- (BOOL)insertCols:(unsigned short)arg1 atColumn:(unsigned char)arg2;
- (BOOL)insertRows:(unsigned short)arg1 atRow:(unsigned short)arg2;
- (void)logInternalState;
- (BOOL)moveColsFrom:(CDStruct_5f1f7aa9)arg1 toCol:(unsigned char)arg2;
- (BOOL)moveRowsFrom:(CDStruct_5f1f7aa9)arg1 toRow:(unsigned short)arg2;
- (unsigned long long)numModelColumnWidths;
- (unsigned long long)numModelRowHeights;
- (void)resetAllCol;
- (unsigned long long)resetAllInvalidColsInRow:(unsigned short)arg1;
- (void)resetAllRow;
- (void)resetColWidthsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2;
- (void)resetFitHeightForCellID:(CDStruct_0441cfb5)arg1;
- (BOOL)resetModelCache;
- (BOOL)resetModelCacheRange:(CDStruct_5f1f7aa9)arg1;
- (void)resetRowHeightForCell:(CDStruct_0441cfb5)arg1;
- (void)resetRowHeightsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2;
- (void)resetWidthsHeightsForRange:(CDStruct_5f1f7aa9)arg1;
- (BOOL)setFitDims:(struct CGSize)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (BOOL)setFitHeight:(double)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (BOOL)setFitWidth:(double)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (BOOL)setModelHeight:(double)arg1 forRow:(unsigned short)arg2;
- (BOOL)setModelWidth:(double)arg1 forColumn:(unsigned char)arg2;
- (void)setNumsRows:(unsigned short)arg1 andNumCols:(unsigned char)arg2;
- (id)validateChangeDescriptors:(id)arg1 tableModel:(id)arg2;
- (BOOL)verifyDims:(struct CGSize)arg1 forCellID:(CDStruct_0441cfb5)arg2;

@end


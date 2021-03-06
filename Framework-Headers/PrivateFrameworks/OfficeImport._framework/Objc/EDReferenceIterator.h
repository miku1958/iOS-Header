//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDCollection, EDReference, EDRowBlock, EDRowBlocks, EDWorkbook, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EDReferenceIterator : NSObject
{
    EDWorkbook *mWorkbook;
    EDWorksheet *mCurrentSheet;
    EDCollection *mReferences;
    EDReference *mReference;
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mRowBlock;
    unsigned long long mRowBlockIndex;
    struct EDRowInfo *mRowInfo;
    unsigned int mRowInfoIndex;
    unsigned int mCellIndex;
    unsigned int mNextArrayIndex;
    int mCurrentCellIndex;
    unsigned int mPreviousColumnNumber;
}

+ (id)referenceIteratorWithReference:(id)arg1 workbook:(id)arg2;
+ (id)referenceIteratorWithReferenceArray:(id)arg1 workbook:(id)arg2;
- (void).cxx_destruct;
- (unsigned int)currentCellIndex;
- (void)dealloc;
- (id)initWithReference:(id)arg1 workbook:(id)arg2;
- (id)initWithReferenceArray:(id)arg1 reference:(id)arg2 workbook:(id)arg3;
- (id)initWithReferenceArray:(id)arg1 workbook:(id)arg2;
- (struct EDCellHeader *)nextCell;
- (BOOL)nextReference;
- (BOOL)nextRow;
- (void)setCurrentSheet:(id)arg1;
- (void)setReference:(id)arg1;

@end


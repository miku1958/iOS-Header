//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDPartitioner-Protocol.h>

@class NSMutableDictionary, TSDInfoGeometry, TSTLayout, TSTTableInfo, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSTTablePartitioner : NSObject <TSDPartitioner>
{
    TSTTableInfo *mTableInfo;
    TSDInfoGeometry *mInfoGeometry;
    BOOL mTableIsLTR;
    BOOL mLayoutIsLTR;
    double mFirstPartitionWidth;
    struct CGSize mScaleToFit;
    TSTLayout *mScaledLayout;
    TSUPointerKeyDictionary *mHintMatricesByCanvas;
    NSMutableDictionary *mPartitioningPassCache;
}

@property (copy, nonatomic) TSDInfoGeometry *infoGeometry; // @synthesize infoGeometry=mInfoGeometry;
@property (readonly, nonatomic) double inlineTableWidth; // @synthesize inlineTableWidth=mFirstPartitionWidth;
@property (readonly, nonatomic) BOOL scaleIsValid;
@property (nonatomic) struct CGSize scaleToFit; // @synthesize scaleToFit=mScaleToFit;
@property (readonly, nonatomic) TSTLayout *scaledLayout;
@property (readonly, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=mTableInfo;

- (void)dealloc;
- (BOOL)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(BOOL)arg3 delta:(int)arg4;
- (id)hintCacheKeyForHint:(id)arg1;
- (id)hintCacheKeyForPartitioningPass:(id)arg1 andHintID:(struct TSUCellCoord)arg2;
- (id)hintForLayout:(id)arg1;
- (id)initWithInfo:(id)arg1;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (struct TSUCellRect)measureCellRangeForNextPartitionOfSize:(struct CGSize)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3;
- (id)nextHintForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL *)arg5;
- (id)nextLayoutForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL *)arg5;
- (BOOL)p_didFinishPartitioningHint:(id)arg1 horizontally:(BOOL)arg2;
- (void)p_flushCacheAfterPartitioningFinished:(id)arg1 lastHint:(id)arg2 horizontally:(BOOL)arg3;
- (id)partitioningPassForFirstPartitionSize:(struct CGSize)arg1;
- (id)partitioningPassForHint:(id)arg1 withPreviousHint:(id)arg2;
- (void)setLayoutPartititionsRightToLeft:(BOOL)arg1 contentPartitionsRightToLeft:(BOOL)arg2;
- (BOOL)shouldReuseLayout:(id)arg1 forSize:(struct CGSize)arg2 parentLayout:(id)arg3 hint:(id)arg4;
- (void)validateScaledLayout;

@end


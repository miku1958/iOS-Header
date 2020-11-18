//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPShapeLayout.h>

@class TSWPTOCLayoutHint;

__attribute__((visibility("hidden")))
@interface TSWPTOCLayout : TSWPShapeLayout
{
    TSWPTOCLayoutHint *_hint;
    unsigned long long _initialCharIndex;
    unsigned long long _storageChangeCount;
    struct CGSize _maxSize;
}

@property (readonly, nonatomic) TSWPTOCLayoutHint *hint;
@property (readonly, nonatomic) unsigned long long initialCharIndex;
@property (readonly, nonatomic, getter=isLastLayoutInTOC) BOOL lastLayoutInTOC;
@property (nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;

- (void).cxx_destruct;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (BOOL)alwaysStartsNewTarget;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)boundsForStandardKnobs;
- (unsigned long long)columnCount;
- (id)commandToClampModelToLayoutSize;
- (id)computeLayoutGeometry;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (id)initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1 initialCharIndex:(unsigned long long)arg2 maxSize:(struct CGSize)arg3;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (BOOL)isDraggable;
- (id)layoutMargins;
- (double)maxAutoGrowHeightForTextLayout:(id)arg1;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (Class)repClassForTextLayout:(id)arg1;
- (BOOL)shrinkTextToFit;
- (BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)arg1;
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(struct CGAffineTransform)arg2 assertIfInDocument:(BOOL)arg3;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutRow : NSObject
{
    BOOL _vertical;
    int _layoutAxis;
    NSMutableArray *_frames;
    NSMutableArray *_insets;
    double _layoutDimension;
    long long _expectedItemCount;
    double _minimumInterItemSpacing;
    struct CGSize _aggregateFrameSizes;
    struct UIEdgeInsets _edgeInsets;
    struct CGRect _contentFrame;
}

@property (nonatomic) struct CGSize aggregateFrameSizes; // @synthesize aggregateFrameSizes=_aggregateFrameSizes;
@property (nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property (nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (nonatomic) long long expectedItemCount; // @synthesize expectedItemCount=_expectedItemCount;
@property (strong, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property (strong, nonatomic) NSMutableArray *insets; // @synthesize insets=_insets;
@property (nonatomic) int layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property (nonatomic) double layoutDimension; // @synthesize layoutDimension=_layoutDimension;
@property (nonatomic) double minimumInterItemSpacing; // @synthesize minimumInterItemSpacing=_minimumInterItemSpacing;
@property (nonatomic) BOOL vertical; // @synthesize vertical=_vertical;

- (void).cxx_destruct;
- (void)_addFrame:(struct CGRect)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (void)_alignFramesForOrthogonalAxisCenteredWithDimension:(double)arg1;
- (void)_alignFramesForOrthogonalAxisFromBottomWithDimension:(double)arg1;
- (void)_alignFramesForOrthogonalAxisFromTrailingEdgeWithDimension:(double)arg1;
- (void)_alignFramesFromBottomWithDimension:(double)arg1;
- (void)_alignFramesFromTrailingEdgeWithDimension:(double)arg1;
- (void)_alignFramesJustifiedWithDimension:(double)arg1;
- (BOOL)_edgeSpaceIncludesVariableSpacing:(double)arg1;
- (double)_effectiveEdgeSpaceForValue:(double)arg1;
- (struct UIEdgeInsets)_effectiveInsetsForInsets:(struct UIEdgeInsets)arg1;
- (double)_fixedSpacingForEdgeSpaces:(id)arg1;
- (id)_frameEdgeSpacingsForInsetsForAxis:(int)arg1;
- (double)_layoutDimensionForFrame:(struct CGRect)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (struct CGPoint)_nextFrameOffsetForInsets:(struct UIEdgeInsets)arg1;
- (long long)_numberOfVariableSpacedEdgesForEdgeSpaces:(id)arg1;
- (void)_spaceFramesEvenlyWithDimension:(double)arg1;
- (void)_spaceFramesOrthogonallyEvenlyWithDimension:(double)arg1;
- (double)_spaceUsedForLayoutDimension;
- (struct CGRect)addFrameOfSize:(struct CGSize)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (void)alignFramesForOrthogonalAxisWithAlignmentOption:(long long)arg1 dimension:(double)arg2;
- (void)alignFramesWithAlignmentOption:(long long)arg1 dimension:(double)arg2;
- (struct CGRect)contentFrameWithOffset:(struct CGSize)arg1;
- (long long)currentFrameCount;
- (id)framesWithOffset:(struct CGSize)arg1;
- (id)initWithAxis:(int)arg1 itemCount:(long long)arg2 containerDimensions:(struct CGSize)arg3 insets:(struct UIEdgeInsets)arg4 minimumInterItemSpacing:(double)arg5;
- (BOOL)isRowFull;
- (BOOL)isSpaceAvailableForFrameOfSize:(struct CGSize)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (void)spaceFramesEvenlyForLayoutAxis:(int)arg1 withDimension:(double)arg2;

@end

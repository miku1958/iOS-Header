//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCHChartDrawableLayoutLegendResizer : NSObject
{
    int mAnchoringStates[2];
    double mAnchoringPosition[2];
    BOOL mShouldUpdateConfinedPushableAnchoring;
    NSArray *mLegendConfinementBounds;
}

@property (copy, nonatomic) NSArray *p_legendConfinementBounds; // @synthesize p_legendConfinementBounds=mLegendConfinementBounds;
@property (nonatomic) BOOL p_shouldUpdateConfinedPushableAnchoring; // @synthesize p_shouldUpdateConfinedPushableAnchoring=mShouldUpdateConfinedPushableAnchoring;

+ (struct CGRect)innerAnchoringFrameFromChartAreaFrame:(struct CGRect)arg1;
+ (id)legendResizerWithInitialFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1;
+ (struct CGRect)outerAnchoringFrameFromChartAreaFrame:(struct CGRect)arg1;
+ (double)p_sideIntersectionLengthForChartAreaFrame:(struct CGRect)arg1;
+ (double)p_sideIntersectionLengthForChartAreaRange:(struct TSCHLegendAnchorRange)arg1;
+ (struct CGRect)snappedLegendFrame:(struct CGRect)arg1 forChartAreaFrame:(struct CGRect)arg2;
- (void).cxx_destruct;
- (id)initWithInitialFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1;
- (int)p_anchoringStateForLegendFrame:(struct CGRect)arg1 chartAreaFrame:(struct CGRect)arg2 dimension:(long long)arg3 returningAnchoringPosition:(double *)arg4;
- (BOOL)p_hasConfinedLocationWithinConfinementBoundsForLocation:(double)arg1 dimension:(long long)arg2 returningConfinedLocation:(double *)arg3;
- (void)p_initializeAnchoringStateForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1;
- (BOOL)p_isConfinedPushableAnchoring;
- (BOOL)p_isInFrontOfLine:(struct TSCHLegendAnchorLine)arg1 forRect:(struct CGRect)arg2;
- (BOOL)p_isLegendAnchoredForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1 dimension:(long long)arg2 returningLegendLocation:(double *)arg3;
- (struct TSCHLegendAnchorRange)p_pushedLegendForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1 dimension:(long long)arg2 returningIsConfined:(BOOL *)arg3;
- (struct TSCHLegendAnchorRange)p_resizedLegendForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1 dimension:(long long)arg2;
- (void)p_updateLegendConfinementBoundsForChartAreaFrame:(struct CGRect)arg1 legendFrame:(struct CGRect)arg2;
- (void)p_updateLegendConfinementBoundsForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames)arg1;
- (void)p_updateStateForIsIndirectResizing:(BOOL)arg1;
- (id)resizedLegendGeometry:(id)arg1 forLastChartAreaFrame:(struct CGRect)arg2 newChartAreaFrame:(struct CGRect)arg3 isIndirectResizing:(BOOL)arg4;

@end


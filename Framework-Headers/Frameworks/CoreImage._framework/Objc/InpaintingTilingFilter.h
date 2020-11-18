//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface InpaintingTilingFilter : NSObject
{
}

+ (double)computeDistanceMultiplierForMask:(id)arg1 andTileSize:(int)arg2;
+ (id)computeTileCentersForNarrowDiagonalMask:(id)arg1 tileSize:(int)arg2 maxBaseDistanceBetweenPoints:(int)arg3 maxRelativeMaskAreaSize:(float)arg4;
+ (void)computeTileSize:(int *)arg1 andMaxDistanceBetweenTiles:(double *)arg2 forExpandedMaskBBox:(struct CGRect)arg3;
+ (BOOL)initializeBoundaryPreservingTile;
+ (BOOL)isMaskNarrowDiagonal:(id)arg1 maskBoundingBox:(struct CGRect)arg2 expandedMaskBoundingBox:(struct CGRect)arg3 maxDiagonalMaskEdgeSize:(int)arg4 maxRelativeMaskAreaSize:(float)arg5;
+ (BOOL)isMaskRelativeAreaTooLargeForTiling:(id)arg1 maskBoundingBox:(struct CGRect)arg2 expandedMaskBoundingBox:(struct CGRect)arg3 andMaxRelativeAreaSize:(double)arg4;
+ (BOOL)isMaskSmallOrElongated:(id)arg1 maskBoundingBox:(struct CGRect)arg2 expandedMaskBoundingBox:(struct CGRect)arg3 maxElogatedMaskEdgeSize:(int)arg4;
+ (id)performInpaintingTilingPipelineOnImage:(id)arg1 usingMask:(id)arg2 boundingBox:(struct CGRect)arg3 additionalParameters:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6;

@end

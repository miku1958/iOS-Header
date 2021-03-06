//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDStyledRep.h>

#import <TSDrawables/TSDMagicMoveMatching-Protocol.h>

@class NSMutableDictionary, TSDShapeInfo, TSDShapeLayout;

@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching>
{
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    BOOL mFrameInUnscaledCanvasIsValid;
    BOOL mDirectlyManagesLayerContentCacheValid;
    BOOL mDirectlyManagesLayerContent;
    struct CGRect mOriginalAliasedAlignmentFrameInLayerFrame;
    BOOL mShadowOnChildrenDisabled;
    struct CGContext *mCommittedPathContext;
    struct CGImage *mCommittedPathImage;
    struct CGRect mCommittedPathImageUnscaledRect;
    struct _NSRange mCommittedPointRange;
    struct _NSRange mAvailableToCommitPointRange;
    unsigned int mOverrideState:2;
    double mOverriddenValue;
    struct CGRect mLastDynamicInvalidRect;
    BOOL mFillChanged;
    BOOL mShouldForceRenderableGeometryUpdate;
    BOOL mIsInvisibleCacheValid;
    BOOL mIsInvisibleCache;
    BOOL mNeedsDisplay;
    NSMutableDictionary *mHitTestCache;
}

@property (readonly, nonatomic) BOOL isMoreOptimalToDrawWithOtherShapeRepsIfPossible;
@property (readonly, nonatomic) BOOL isPartiallyAnimated;
@property (readonly, nonatomic) TSDShapeInfo *shapeInfo;
@property (readonly, nonatomic) TSDShapeLayout *shapeLayout;
@property (readonly, nonatomic) double strokeEnd;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
- (void).cxx_destruct;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1;
- (BOOL)canDrawWithOtherShapeRep:(id)arg1;
- (struct CGRect)clipRect;
- (id)colorBehindLayer:(id)arg1;
- (void)dealloc;
- (void)drawInContext:(struct CGContext *)arg1 usingPathOverride:(id)arg2 patternOffsetsBySubpathOverride:(id)arg3 transparencyLayersBySubpath:(id)arg4;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 keepingChildrenPassingTest:(CDUnknownBlockType)arg7;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)dynamicOverrideDidChange;
- (struct CGRect)frameInUnscaledCanvas;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)isInvisible;
- (double)opacity;
- (BOOL)p_beginApplyOpacity:(struct CGContext *)arg1 forDrawingInOneStep:(BOOL)arg2;
- (unsigned long long)p_bitmapContextOptionsForDrawingStroke:(id)arg1;
- (id)p_brushStrokeFromStroke:(id)arg1;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(BOOL)arg4;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(BOOL)arg4 usingPathOverride:(id)arg5 patternOffsetsBySubpathOverride:(id)arg6 transparencyLayersBySubpath:(id)arg7;
- (void)p_drawLineEndForHead:(BOOL)arg1 withDelta:(struct CGPoint)arg2 andStroke:(id)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(BOOL)arg5;
- (id)p_drawingPlaybackSession;
- (BOOL)p_drawsSelfInOneStep;
- (void)p_endApplyOpacity:(struct CGContext *)arg1 apply:(BOOL)arg2;
- (BOOL)p_hasFreehandDrawingBrushStroke;
- (BOOL)p_isInsidePlayingFreehandDrawing;
- (BOOL)p_isNormalShapeInsideFreehandDrawing;
- (BOOL)p_shouldDrawStrokeWide:(id)arg1;
- (BOOL)p_shouldUpgradeStrokeForPlayback:(id)arg1;
- (id)p_strokeForRenderingIncludingPlaybackFromStroke:(id)arg1;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;
- (void)setTextureAttributes:(id)arg1 textureBounds:(struct CGRect)arg2;
- (struct CGRect)strokeBoundsWithOptions:(unsigned long long)arg1 fallbackBounds:(struct CGRect)arg2;

@end


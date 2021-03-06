//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDStyledLayout.h>

@class TSDBezierPath, TSDEditableBezierPathSource, TSDFill, TSDInfoGeometry, TSDMutableStroke, TSDPathSource;

@interface TSDShapeLayout : TSDStyledLayout
{
    struct {
        unsigned int path:1;
        unsigned int pathBounds:1;
        unsigned int pathBoundsWithoutStroke:1;
        unsigned int pathIsOpen:1;
        unsigned int pathIsLineSegment:1;
        unsigned int alignmentFrame:1;
        unsigned int headAndTail:1;
        unsigned int headLineEnd:1;
        unsigned int tailLineEnd:1;
        unsigned int clippedPath:1;
    } mShapeInvalidFlags;
    TSDBezierPath *mCachedPath;
    struct CGRect mCachedPathBounds;
    struct CGRect mCachedPathBoundsWithoutStroke;
    BOOL mCachedPathIsOpen;
    BOOL mCachedPathIsLineSegment;
    struct CGRect mCachedAlignmentFrame;
    struct CGPoint mHeadPoint;
    struct CGPoint mTailPoint;
    struct CGPoint mHeadLineEndPoint;
    struct CGPoint mTailLineEndPoint;
    double mHeadLineEndAngle;
    double mTailLineEndAngle;
    long long mHeadCutSegment;
    long long mTailCutSegment;
    double mHeadCutT;
    double mTailCutT;
    TSDBezierPath *mCachedClippedPath;
    TSDPathSource *mShrunkenPathSource;
    TSDEditableBezierPathSource *mCachedEditableBezierPathSource;
    TSDPathSource *mCachedPathSource;
    TSDPathSource *mResizePathSource;
    TSDInfoGeometry *mResizeInfoGeometry;
    TSDInfoGeometry *mInitialInfoGeometry;
    TSDPathSource *mProvidedPathSource;
    TSDMutableStroke *mDynamicStroke;
    TSDFill *mDynamicFill;
}

@property (strong, nonatomic) TSDFill *dynamicFill; // @synthesize dynamicFill=mDynamicFill;
@property (readonly, nonatomic) TSDFill *fill;

- (void)aliasPathForScale:(double)arg1 adjustedStroke:(id *)arg2 adjustedPath:(id *)arg3 startDelta:(struct CGPoint *)arg4 endDelta:(struct CGPoint *)arg5;
- (void)aliasPathForScale:(double)arg1 originalStroke:(id)arg2 adjustedStroke:(id *)arg3 adjustedPath:(id *)arg4 startDelta:(struct CGPoint *)arg5 endDelta:(struct CGPoint *)arg6;
- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;
- (struct CGRect)alignmentFrame;
- (struct CGRect)alignmentFrameInRoot;
- (void)beginDynamicOperation;
- (struct CGRect)boundsForStandardKnobs;
- (BOOL)canBeIntersected;
- (BOOL)canResetTextAndObjectHandles;
- (struct CGPoint)centerForConnecting;
- (id)clippedPathForLineEnds;
- (id)computeLayoutGeometry;
- (struct CGAffineTransform)computeLayoutTransform;
- (void)dealloc;
- (void)dynamicStrokeWidthChangeDidBegin;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (id)editablePathSource;
- (void)endDynamicOperation;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (double)headLineEndAngle;
- (struct CGPoint)headLineEndPoint;
- (struct CGPoint)headPoint;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(BOOL)arg1;
- (id)initWithInfo:(id)arg1;
- (id)initialInfoGeometry;
- (void)invalidateFrame;
- (void)invalidatePath;
- (void)invalidatePathBounds;
- (BOOL)isBeingManipulated;
- (BOOL)isInvisible;
- (BOOL)isInvisibleAutosizingShape;
- (BOOL)isStrokeBeingManipulated;
- (BOOL)isTailEndOnLeft;
- (id)layoutGeometryFromInfo;
- (id)layoutInfoGeometry;
- (double)lineEndScale;
- (struct CGSize)minimumSize;
- (unsigned long long)numberOfControlKnobs;
- (struct CGRect)p_boundsOfLineEndForHead:(BOOL)arg1 transform:(struct CGAffineTransform)arg2;
- (id)p_cachedPath;
- (struct CGRect)p_cachedPathBounds;
- (struct CGRect)p_cachedPathBoundsWithoutStroke;
- (BOOL)p_cachedPathIsLineSegment;
- (BOOL)p_cachedPathIsOpen;
- (void)p_computeAngle:(double *)arg1 point:(struct CGPoint *)arg2 cutSegment:(long long *)arg3 cutT:(double *)arg4 forLineEndAtHead:(BOOL)arg5;
- (id)p_createClippedPath;
- (void)p_invalidateClippedPath;
- (void)p_invalidateHead;
- (void)p_invalidateTail;
- (id)p_unitePath:(id)arg1 withLineEndForHead:(BOOL)arg2 stroke:(id)arg3;
- (void)p_updateResizeInfoGeometryFromResizePathSource;
- (void)p_validateHeadAndTail;
- (void)p_validateHeadLineEnd;
- (void)p_validateTailLineEnd;
- (id)path;
- (struct CGRect)pathBounds;
- (struct CGRect)pathBoundsWithoutStroke;
- (BOOL)pathIsLineSegment;
- (BOOL)pathIsOpen;
- (id)pathSource;
- (void)processChangedProperty:(int)arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (void)setGeometry:(id)arg1;
- (struct CGRect)shapeFrameWithTransform:(struct CGAffineTransform)arg1;
- (id)shapeInfo;
- (BOOL)shouldBeDisplayedInShowMode;
- (id)smartPathSource;
- (id)stroke;
- (id)strokeHeadLineEnd;
- (id)strokeTailLineEnd;
- (BOOL)supportsResize;
- (BOOL)supportsRotation;
- (double)tailLineEndAngle;
- (struct CGPoint)tailLineEndPoint;
- (struct CGPoint)tailPoint;
- (struct CGPoint)unclippedHeadPoint;
- (struct CGPoint)unclippedTailPoint;

@end


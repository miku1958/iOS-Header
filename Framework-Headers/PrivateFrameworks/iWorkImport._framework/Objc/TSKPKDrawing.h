//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class CHRecognizer, NSArray, NSCache, PKDrawing;

__attribute__((visibility("hidden")))
@interface TSKPKDrawing : NSObject <NSCopying>
{
    PKDrawing *_pencilKitDrawing;
    double _pencilAnnotationDrawingScale;
    NSArray *_cachedStrokes;
    CHRecognizer *_textRecognizer;
    CHRecognizer *_lineRecognizer;
    NSCache *_subDrawingCache;
    struct CGPoint _cachedAverageUnscaledPoint;
    struct CGRect _cachedRenderedFrame;
    struct CGRect _cachedStrokePointsFrame;
}

@property (nonatomic) struct CGPoint cachedAverageUnscaledPoint; // @synthesize cachedAverageUnscaledPoint=_cachedAverageUnscaledPoint;
@property (nonatomic) struct CGRect cachedRenderedFrame; // @synthesize cachedRenderedFrame=_cachedRenderedFrame;
@property (nonatomic) struct CGRect cachedStrokePointsFrame; // @synthesize cachedStrokePointsFrame=_cachedStrokePointsFrame;
@property (strong, nonatomic) NSArray *cachedStrokes; // @synthesize cachedStrokes=_cachedStrokes;
@property (readonly, nonatomic) struct CGSize estimatedExcessPaddingOnIncorrectUnscaledFastFrame;
@property (readonly, nonatomic) struct CGRect incorrectUnscaledFastFrame;
@property (strong, nonatomic) CHRecognizer *lineRecognizer; // @synthesize lineRecognizer=_lineRecognizer;
@property (readonly, nonatomic) double pencilAnnotationDrawingScale; // @synthesize pencilAnnotationDrawingScale=_pencilAnnotationDrawingScale;
@property (strong, nonatomic) PKDrawing *pencilKitDrawing; // @synthesize pencilKitDrawing=_pencilKitDrawing;
@property (readonly, nonatomic) struct CGRect renderedFrame;
@property (readonly, nonatomic) struct CGRect strokePointsFrame;
@property (readonly, nonatomic) NSArray *strokes;
@property (strong, nonatomic) NSCache *subDrawingCache; // @synthesize subDrawingCache=_subDrawingCache;
@property (strong, nonatomic) CHRecognizer *textRecognizer; // @synthesize textRecognizer=_textRecognizer;
@property (readonly, nonatomic) struct CGRect unscaledRenderedFrame;
@property (readonly, nonatomic) struct CGRect unscaledStrokePointsFrame;

+ (id)copyAndAddStroke:(id)arg1 transform:(struct CGAffineTransform)arg2 intoDrawing:(id)arg3;
+ (id)copyPKDrawing:(id)arg1;
+ (id)copyPKDrawing:(id)arg1 withTransform:(struct CGAffineTransform)arg2;
+ (void)initialize;
+ (id)p_strokesForPencilKitDrawing:(id)arg1;
+ (struct UIEdgeInsets)transparencyInsetsForCGImage:(struct CGImage *)arg1;
- (void).cxx_destruct;
- (id)CHDrawing;
- (void)addSubStrokeFromStroke:(id)arg1 fromStartIndex:(unsigned long long)arg2 toEndIndex:(unsigned long long)arg3 andAdjustStart:(BOOL)arg4 andAdjustEnd:(BOOL)arg5 toEdgesOfRect:(struct CGRect)arg6;
- (id)anchorBaseColor;
- (struct CGPoint)averageUnscaledPoint;
- (struct CGRect)convertStrokeToUnscaledCanvasRect:(struct CGRect)arg1;
- (struct CGRect)convertUnscaledCanvasToStrokeRect:(struct CGRect)arg1;
- (id)copyAndAddStroke:(id)arg1;
- (id)copyAndAddStroke:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (void)copyAndAddStrokes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)drawingByCroppingToClipRect:(struct CGRect)arg1;
- (id)drawingByFilteringStrokesWithFilter:(CDUnknownBlockType)arg1;
- (id)drawingByScaling:(struct CGSize)arg1;
- (id)drawingByScaling:(struct CGSize)arg1 andMovingByDelta:(struct CGPoint)arg2;
- (id)drawingByScaling:(struct CGSize)arg1 andMovingByDelta:(struct CGPoint)arg2 andCroppingToClipRect:(struct CGRect)arg3;
- (id)drawingContainingStrokesMatchingBlock:(CDUnknownBlockType)arg1;
- (id)drawingTransformedWith:(struct CGAffineTransform)arg1;
- (id)firstStrokeByTime;
- (BOOL)hasLargeBracketAnchorStroke;
- (BOOL)hasLargeVerticalLineAnchorStroke;
- (id)initWithData:(id)arg1 cachedRenderedFrame:(struct CGRect)arg2 cachedStrokePointsFrame:(struct CGRect)arg3 pencilAnnotationDrawingScale:(double)arg4;
- (id)initWithData:(id)arg1 pencilAnnotationDrawingScale:(double)arg2;
- (id)initWithPKDrawing:(id)arg1 cachedRenderedFrame:(struct CGRect)arg2 cachedStrokePointsFrame:(struct CGRect)arg3 pencilAnnotationDrawingScale:(double)arg4;
- (id)initWithPKDrawing:(id)arg1 pencilAnnotationDrawingScale:(double)arg2;
- (id)initWithPencilAnnotationDrawingScale:(double)arg1;
- (id)initWithStrokes:(id)arg1;
- (BOOL)isCircle;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHorizontalLine;
- (BOOL)isLine;
- (BOOL)isLinePerpendicularToTextWithVerticalTextLayout:(BOOL)arg1;
- (BOOL)isMarginBracket;
- (BOOL)isRectangle;
- (BOOL)isText:(id)arg1;
- (BOOL)isVerticalLine;
- (BOOL)isXMark;
- (void)p_clearSubDrawingCache;
- (id)p_drawingByCroppingToClipRect:(struct CGRect)arg1;
- (id)p_drawingByTransformingByDeltaPosition:(struct CGPoint)arg1;
- (struct CGRect)p_incorrectPencilCoordinatesFastFrame;
- (id)p_paragraphAnnotationAnchorComponentsPassingFilterBlock:(CDUnknownBlockType)arg1;
- (void)p_saveSubDrawingToCache:(id)arg1 atScale:(struct CGSize)arg2 movedToDelta:(struct CGPoint)arg3 cropRect:(struct CGRect)arg4;
- (id)p_subDrawingCacheKeyForScale:(struct CGSize)arg1 movedToDelta:(struct CGPoint)arg2 cropRect:(struct CGRect)arg3;
- (id)p_subDrawingFromCacheAtScale:(struct CGSize)arg1 movedToDelta:(struct CGPoint)arg2 cropRect:(struct CGRect)arg3;
- (id)renderImageWithContentsScale:(double)arg1;
- (id)renderImageWithContentsScale:(double)arg1 drawingScale:(double)arg2;
- (id)renderImageWithContentsScale:(double)arg1 drawingScale:(double)arg2 drawingFrame:(struct CGRect)arg3;
- (struct CGSize)scaleForPointsBasedOnRenderingScale:(struct CGSize)arg1;
- (id)strokesOrderedByCoordinateComparator:(CDUnknownBlockType)arg1;
- (long long)toolTypeForFirstStroke;

@end

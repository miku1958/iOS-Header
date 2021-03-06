//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/NSMutableCopying-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSDPathPainter-Protocol.h>

@class NSString, TSDStrokePattern, TSUColor;

@interface TSDStroke : NSObject <TSDPathPainter, TSDMixing, NSCopying, NSMutableCopying>
{
    int _cap;
    int _join;
    TSUColor *_color;
    double _width;
    double _miterLimit;
    TSDStrokePattern *_pattern;
    double _actualWidth;
}

@property (readonly, nonatomic) double actualWidth;
@property (readonly, nonatomic) BOOL canApplyDirectlyToRepRenderable;
@property (readonly, nonatomic) BOOL canApplyToShapeRenderable;
@property (readonly, nonatomic) int cap;
@property (readonly, copy, nonatomic) TSUColor *color;
@property (readonly, nonatomic) double dashSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontClearBackground;
@property (readonly, nonatomic) BOOL drawsInOneStep;
@property (readonly, nonatomic) BOOL drawsOutsideStrokeBounds;
@property (readonly, nonatomic) BOOL empty;
@property (readonly) unsigned long long hash;
@property (nonatomic) double i_actualWidth; // @synthesize i_actualWidth=_actualWidth;
@property (nonatomic, setter=i_setCap:) int i_cap; // @synthesize i_cap=_cap;
@property (copy, nonatomic) TSUColor *i_color; // @synthesize i_color=_color;
@property (nonatomic) int i_join; // @synthesize i_join=_join;
@property (nonatomic) double i_miterLimit; // @synthesize i_miterLimit=_miterLimit;
@property (copy, nonatomic, setter=i_setPattern:) TSDStrokePattern *i_pattern; // @synthesize i_pattern=_pattern;
@property (nonatomic) double i_width; // @synthesize i_width=_width;
@property (readonly, nonatomic) BOOL isDash;
@property (readonly, nonatomic) BOOL isFrame;
@property (readonly, nonatomic) BOOL isNearlyWhite;
@property (readonly, nonatomic) BOOL isNullStroke;
@property (readonly, nonatomic) BOOL isRoundDash;
@property (readonly, nonatomic) int join;
@property (readonly, nonatomic) double miterLimit;
@property (readonly, nonatomic) BOOL needsToExtendJoinsForBoundsCalculation;
@property (readonly, nonatomic) struct _TSDStrokeOutsets outsets;
@property (readonly, copy, nonatomic) TSDStrokePattern *pattern;
@property (readonly, nonatomic) BOOL prefersToApplyToShapeRenderableDuringManipulation;
@property (readonly, nonatomic) double renderedWidth;
@property (readonly, nonatomic) BOOL shouldAntialiasDefeat;
@property (readonly, nonatomic) BOOL shouldRender;
@property (readonly, nonatomic) BOOL solid;
@property (readonly, nonatomic) double suggestedMinimumLineWidth;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsColor;
@property (readonly, nonatomic) BOOL supportsLineOptions;
@property (readonly, nonatomic) BOOL supportsPattern;
@property (readonly, nonatomic) BOOL supportsWidth;
@property (readonly, nonatomic) double width;

+ (BOOL)canMixWithNilObjects;
+ (id)editedStrokeFromModelStroke:(id)arg1 selectedStroke:(id)arg2;
+ (id)emptyStroke;
+ (id)i_newEmptyStroke;
+ (id)i_newStroke;
+ (long long)indexOfStroke:(id)arg1 strokeArray:(id)arg2;
+ (Class)mutableClass;
+ (id)stroke;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
- (void).cxx_destruct;
- (void)applyInteriorWrapPropertiesToContext:(struct CGContext *)arg1 insideStroke:(BOOL)arg2;
- (void)applyToContext:(struct CGContext *)arg1;
- (void)applyToContext:(struct CGContext *)arg1 insideStroke:(BOOL)arg2;
- (void)applyToRepRenderable:(id)arg1 withScale:(double)arg2;
- (void)applyToShapeRenderable:(id)arg1 insideStroke:(BOOL)arg2 withScale:(double)arg3;
- (void)applyToShapeRenderable:(id)arg1 withScale:(double)arg2;
- (struct CGRect)boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(struct CGAffineTransform)arg5;
- (struct CGRect)boundsForPath:(id)arg1;
- (BOOL)canDrawWithOtherStroke:(id)arg1;
- (id)colorForCGContext:(struct CGContext *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (double)horizontalMarginForSwatch;
- (void)i_setPatternPropertiesFromStroke:(id)arg1;
- (void)i_setPropertiesFromStroke:(id)arg1;
- (id)init;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToStroke:(id)arg1;
- (double)lineEndInsetAdjustment;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)p_strokePathChunk:(const struct CGPath *)arg1 inContext:(struct CGContext *)arg2 wantsInteriorStroke:(BOOL)arg3;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(BOOL)arg6;
- (void)paintPath:(const struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(const struct CGPath *)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext *)arg3;
- (void)paintPath:(const struct CGPath *)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(BOOL)arg4 parameterized:(BOOL)arg5 shouldReverseDrawOrder:(BOOL)arg6;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext *)arg3;
- (id)pathForLineEnd:(id)arg1 wrapPath:(BOOL)arg2 atPoint:(struct CGPoint)arg3 atAngle:(double)arg4 withScale:(double)arg5;
- (const struct CGPath *)pathToStrokeFromCGPath:(const struct CGPath *)arg1;
- (id)pathToStrokeFromTSDBezierPath:(id)arg1;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform)arg1;
- (id)strokeLineEnd:(id)arg1;

@end


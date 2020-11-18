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
#import <TSReading/TSSThemeAsset-Protocol.h>

@class NSString, TSDStrokePattern, TSUColor;

@interface TSDStroke : NSObject <TSSThemeAsset, TSDPathPainter, TSDMixing, NSCopying, NSMutableCopying>
{
    TSUColor *mColor;
    double mWidth;
    double mActualWidth;
    int mCap;
    int mJoin;
    TSDStrokePattern *mPattern;
    double mMiterLimit;
}

@property (nonatomic) double actualWidth; // @synthesize actualWidth=mActualWidth;
@property (nonatomic) int cap; // @synthesize cap=mCap;
@property (strong, nonatomic) TSUColor *color; // @synthesize color=mColor;
@property (readonly, nonatomic) double dashSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontClearBackground;
@property (readonly, nonatomic) BOOL drawsOutsideStrokeBounds;
@property (readonly, nonatomic) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isDash;
@property (readonly, nonatomic) BOOL isFrame;
@property (readonly, nonatomic) BOOL isNearlyWhite;
@property (readonly, nonatomic) BOOL isNullStroke;
@property (readonly, nonatomic) BOOL isRoundDash;
@property (nonatomic) int join; // @synthesize join=mJoin;
@property (nonatomic) double miterLimit; // @synthesize miterLimit=mMiterLimit;
@property (readonly, nonatomic) struct _TSDStrokeOutsets outsets;
@property (strong, nonatomic) TSDStrokePattern *pattern; // @synthesize pattern=mPattern;
@property (readonly, nonatomic) BOOL shouldRender;
@property (readonly, nonatomic) BOOL solid;
@property (readonly, nonatomic) double suggestedMinimumLineWidth;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsColor;
@property (readonly, nonatomic) BOOL supportsLineOptions;
@property (readonly, nonatomic) BOOL supportsPattern;
@property (readonly, nonatomic) BOOL supportsWidth;
@property (nonatomic) double width; // @synthesize width=mWidth;

+ (BOOL)canMixWithNilObjects;
+ (id)emptyStroke;
+ (Class)mutableClass;
+ (id)p_newEmptyStroke;
+ (id)p_newStroke;
+ (id)stroke;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2 pattern:(id)arg3;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2 pattern:(id)arg3 miterLimit:(double)arg4;
- (void)applyInteriorWrapPropertiesToContext:(struct CGContext *)arg1 insideStroke:(BOOL)arg2;
- (void)applyToCAShapeLayer:(id)arg1 insideStroke:(BOOL)arg2 withScale:(double)arg3;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2;
- (void)applyToContext:(struct CGContext *)arg1;
- (void)applyToContext:(struct CGContext *)arg1 insideStroke:(BOOL)arg2;
- (void)applyToRepCALayer:(id)arg1 withScale:(double)arg2;
- (struct CGRect)boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(struct CGAffineTransform)arg5;
- (struct CGRect)boundsForPath:(id)arg1;
- (BOOL)canApplyDirectlyToRepCALayer;
- (BOOL)canApplyToCAShapeLayer;
- (id)colorForCGContext:(struct CGContext *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)drawsInOneStep;
- (id)init;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToStroke:(id)arg1;
- (BOOL)isThemeEquivalent:(id)arg1;
- (double)lineEndInsetAdjustment;
- (SEL)mapThemeAssetSelector;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)needsToExtendJoinsForBoundsCalculation;
- (void)p_setPatternPropertiesFromStroke:(id)arg1;
- (void)p_setPropertiesFromStroke:(id)arg1;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(BOOL)arg6;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext *)arg3;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(BOOL)arg4;
- (void)paintPathWithNormalClip:(struct CGPath *)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext *)arg3;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext *)arg3;
- (id)pathForLineEnd:(id)arg1 wrapPath:(BOOL)arg2 atPoint:(struct CGPoint)arg3 atAngle:(double)arg4 withScale:(double)arg5;
- (BOOL)prefersToApplyToCAShapeLayerDuringManipulation;
- (BOOL)shouldAntialiasDefeat;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform)arg1;
- (id)strokeLineEnd:(id)arg1;

@end

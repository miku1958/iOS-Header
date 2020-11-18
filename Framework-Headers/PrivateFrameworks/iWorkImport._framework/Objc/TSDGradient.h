//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDFill.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSSPresetSource-Protocol.h>

@class NSArray, NSMutableArray, TSUColor;

__attribute__((visibility("hidden")))
@interface TSDGradient : TSDFill <TSSPresetSource, TSDMixing, NSCopying, NSMutableCopying>
{
    NSMutableArray *mStops;
    unsigned long long mType;
    double mOpacity;
    struct CGShading *mShadingRef;
    BOOL mIsAdvancedGradient;
}

@property (readonly, nonatomic) TSUColor *firstColor;
@property (readonly, strong, nonatomic) NSArray *gradientStops;
@property (readonly, nonatomic) unsigned long long gradientType; // @synthesize gradientType=mType;
@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly, nonatomic) BOOL isAdvancedGradient; // @synthesize isAdvancedGradient=mIsAdvancedGradient;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) TSUColor *lastColor;
@property (readonly, nonatomic) double opacity; // @synthesize opacity=mOpacity;
@property (readonly, nonatomic) struct CGShading *shadingRef;

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (void)disableInflections;
+ (void)enableInflections;
+ (id)instanceWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
+ (id)linearGradientWithGradientStops:(id)arg1;
+ (id)linearGradientWithStartColor:(id)arg1 endColor:(id)arg2;
+ (id)presetKinds;
+ (id)radialGradientWithGradientStops:(id)arg1;
+ (id)radialGradientWithStartColor:(id)arg1 endColor:(id)arg2;
+ (void)sortStopsArray:(id)arg1;
+ (BOOL)useInflections;
+ (BOOL)useQuartzShadings;
- (struct CGAffineTransform)centeredRadialTransformInRect:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (struct CGPoint)endPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (int)fillType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 opacity:(double)arg3;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3;
- (BOOL)isAdvancedGradientIgnoringFlag;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringTransform:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)newColorAtFraction:(double)arg1;
- (struct CGContext *)p_beginBitmapWrapperContextInContext:(struct CGContext *)arg1 returningIntegralBounds:(struct CGRect *)arg2;
- (void)p_endBitmapWrapperContext:(struct CGContext *)arg1 inContext:(struct CGContext *)arg2 withIntegralBounds:(struct CGRect)arg3;
- (void)p_evenlyDistributeStops;
- (void)p_insertGradientStop:(id)arg1;
- (id)p_insertStopAtFraction:(double)arg1;
- (id)p_insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (void)p_moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)p_removeStop:(id)arg1;
- (id)p_removeStopAtIndex:(unsigned long long)arg1;
- (void)p_reverseStopOrder;
- (void)p_setAlpha:(struct CGContext *)arg1;
- (void)p_setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)p_setGradientStops:(id)arg1;
- (void)p_setGradientType:(unsigned long long)arg1;
- (void)p_setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)p_setIsAdvancedGradient:(BOOL)arg1;
- (void)p_setOpacity:(double)arg1;
- (void)p_swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 atAngle:(double)arg3;
- (id)presetKind;
- (id)referenceColor;
- (void)releaseShadingRef;
- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;
- (struct CGPoint)startPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (id)stopAfterFraction:(double)arg1;
- (id)stopAtIndex:(unsigned long long)arg1;
- (id)stopBeforeFraction:(double)arg1;

@end


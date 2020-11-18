//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDGradient.h>

#import <TSReading/TSDMixing-Protocol.h>

@interface TSDTransformGradient : TSDGradient <TSDMixing>
{
    struct CGPoint mStart;
    struct CGPoint mEnd;
    struct CGSize mBaseNaturalSize;
    struct CGAffineTransform mTransformBeforeUpgrade;
}

@property (nonatomic) struct CGSize baseNaturalSize; // @synthesize baseNaturalSize=mBaseNaturalSize;
@property (nonatomic) struct CGPoint endPoint; // @synthesize endPoint=mEnd;
@property (nonatomic) struct CGPoint startPoint; // @synthesize startPoint=mStart;

- (struct CGSize)baseNaturalSizeForBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)description;
- (struct CGPoint)endPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (double)gradientAngleInDegrees;
- (unsigned long long)hash;
- (id)initWithGradient:(id)arg1 inPath:(id)arg2 andBounds:(struct CGRect)arg3;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3;
- (BOOL)isAdvancedGradientIgnoringFlag;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringTransform:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (struct CGPoint)normalizedPointForSize:(struct CGSize)arg1 endPoint:(BOOL)arg2;
- (void)p_drawQuartzShadingInContext:(struct CGContext *)arg1 withGradientNaturalSize:(struct CGSize)arg2 baseNaturalSize:(struct CGSize)arg3 start:(struct CGPoint)arg4 end:(struct CGPoint)arg5;
- (struct CGPoint)p_scalePoint:(struct CGPoint)arg1 fromShapeWithNaturalSize:(struct CGSize)arg2;
- (struct CGPoint)p_scalePoint:(struct CGPoint)arg1 toShapeWithNaturalSize:(struct CGSize)arg2;
- (void)p_setDefaultValues;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(BOOL)arg4;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 atAngle:(double)arg3;
- (struct CGPoint)startPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (struct CGAffineTransform)transformForSize:(struct CGSize)arg1;

@end

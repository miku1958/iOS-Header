//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDSmartStroke.h>

@interface TSDCalligraphyStroke : TSDSmartStroke
{
}

@property (readonly, nonatomic) double angle;
@property (readonly, nonatomic) BOOL chisel;
@property (readonly, nonatomic) double scale;

+ (Class)mutableClass;
- (void)applyToContext:(struct CGContext *)arg1 insideStroke:(BOOL)arg2;
- (struct CGRect)boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(struct CGAffineTransform)arg5;
- (struct CGRect)boundsForPath:(id)arg1;
- (BOOL)canApplyToShapeRenderable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)drawsInOneStep;
- (BOOL)drawsOutsideStrokeBounds;
- (double)horizontalMarginForSwatch;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)p_superBoundsForPath:(id)arg1;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(BOOL)arg6;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(BOOL)arg4 parameterized:(BOOL)arg5 shouldReverseDrawOrder:(BOOL)arg6;
- (BOOL)prefersToApplyToShapeRenderableDuringManipulation;
- (struct CGAffineTransform)transformInContext:(struct CGContext *)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@interface UIBezierPath : NSObject <NSCopying, NSSecureCoding>
{
    struct CGPath *_path;
    double *_lineDashPattern;
    unsigned long long _lineDashPatternCount;
    double _lineWidth;
    double _miterLimit;
    double _flatness;
    double _lineDashPhase;
    int _lineCapStyle;
    int _lineJoinStyle;
    BOOL _usesEvenOddFillRule;
    struct CGPath *_immutablePath;
    BOOL _immutablePathIsValid;
}

@property (nonatomic) const struct CGPath *CGPath;
@property (readonly, nonatomic) struct CGRect bounds;
@property (readonly, nonatomic) struct CGPoint currentPoint;
@property (readonly, getter=isEmpty) BOOL empty;
@property (nonatomic) double flatness; // @synthesize flatness=_flatness;
@property (nonatomic) int lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property (nonatomic) int lineJoinStyle; // @synthesize lineJoinStyle=_lineJoinStyle;
@property (nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property (nonatomic) double miterLimit; // @synthesize miterLimit=_miterLimit;
@property (nonatomic) BOOL usesEvenOddFillRule; // @synthesize usesEvenOddFillRule=_usesEvenOddFillRule;

+ (id)_bezierPathWithArcRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)_bezierPathWithPillRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)_bezierPathWithRoundedRect:(struct CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadius:(double)arg3;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadii:(id)arg3 segments:(int)arg4 smoothPillShapes:(BOOL)arg5;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(struct CGSize)arg3 segments:(int)arg4;
+ (id)_roundedRectBezierPath:(struct CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 segments:(int)arg4;
+ (id)_roundedRectBezierPath:(struct CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 segments:(int)arg4 legacyCorners:(BOOL)arg5;
+ (id)bezierPath;
+ (id)bezierPathWithArcCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5;
+ (id)bezierPathWithCGPath:(struct CGPath *)arg1;
+ (id)bezierPathWithOvalInRect:(struct CGRect)arg1;
+ (id)bezierPathWithRect:(struct CGRect)arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadii:(struct CGSize)arg3;
+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)roundedRectBezierPath:(struct CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 withCornerRadii:(id)arg3;
+ (id)roundedRectBezierPath:(struct CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 withCornerRadius:(double)arg3;
+ (id)roundedRectBezierPath:(struct CGRect)arg1 withRoundedEdges:(unsigned long long)arg2;
+ (id)roundedRectBezierPath:(struct CGRect)arg1 withTopCornerRadius:(double)arg2 withBottomCornerRadius:(double)arg3;
+ (id)shadowBezierPath:(struct CGRect)arg1 withRoundedEdges:(unsigned long long)arg2;
+ (BOOL)supportsSecureCoding;
- (void)_addRoundedCornerWithTrueCorner:(struct CGPoint)arg1 radius:(struct CGSize)arg2 corner:(unsigned long long)arg3 clockwise:(BOOL)arg4;
- (void)_addRoundedCornerWithTrueCorner:(struct CGPoint)arg1 radius:(struct CGSize)arg2 corner:(unsigned long long)arg3 clockwise:(BOOL)arg4 leadInIsContinuous:(BOOL)arg5 leadOutIsContinuous:(BOOL)arg6;
- (struct CGPath *)_createMutablePathByDecodingData:(id)arg1;
- (id)_initWithCGMutablePath:(struct CGPath *)arg1;
- (struct CGPath *)_mutablePath;
- (struct CGPath *)_pathRef;
- (void)addArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5;
- (void)addClip;
- (void)addCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)addLineToPoint:(struct CGPoint)arg1;
- (void)addQuadCurveToPoint:(struct CGPoint)arg1 controlPoint:(struct CGPoint)arg2;
- (void)appendBezierPath:(id)arg1;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5;
- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg1;
- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg1 transform:(struct CGAffineTransform)arg2;
- (void)appendBezierPathWithRect:(struct CGRect)arg1;
- (void)appendPath:(id)arg1;
- (void)applyTransform:(struct CGAffineTransform)arg1;
- (id)bezierPathByReversingPath;
- (void)clip;
- (void)closePath;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)fill;
- (void)fillWithBlendMode:(int)arg1 alpha:(double)arg2;
- (void)getLineDash:(double *)arg1 count:(long long *)arg2 phase:(double *)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)lineToPoint:(struct CGPoint)arg1;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)removeAllPoints;
- (void)setLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;
- (void)stroke;
- (void)strokeWithBlendMode:(int)arg1 alpha:(double)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>

@interface TSUBezierPath : NSObject <NSCopying>
{
    long long sfr_elementCount;
    long long sfr_elementMax;
    struct PATHSEGMENT *sfr_head;
    double *sfr_elementLength;
    double sfr_totalLength;
    long long sfr_lastSubpathIndex;
    void *sfr_extraSegments;
    double sfr_lineWidth;
    struct CGRect sfr_bounds;
    struct CGRect sfr_controlPointBounds;
    double sfr_miterLimit;
    double sfr_flatness;
    double *sfr_dashedLinePattern;
    unsigned long long sfr_dashedLineCount;
    double sfr_dashedLinePhase;
    struct CGPath *sfr_path;
    long long sfr_extraSegmentCount;
    long long sfr_extraSegmentMax;
    struct {
        unsigned int sfr_flags:8;
        unsigned int sfr_pathState:2;
        unsigned int sfr_calculatedLengths:1;
        unsigned int sfr_unused:21;
    } sfr_bpFlags;
}

@property (readonly, nonatomic) struct CGRect bounds;
@property (readonly, nonatomic) BOOL containsClosePathElement;
@property (nonatomic) double flatness;

+ (id)bezierPath;
+ (id)bezierPathWithCGPath:(struct CGPath *)arg1;
+ (id)bezierPathWithContinuousCornerRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)bezierPathWithDefaultsForErrorCases;
+ (id)bezierPathWithLegacyRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)bezierPathWithOvalInRect:(struct CGRect)arg1;
+ (id)bezierPathWithRect:(struct CGRect)arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 upperRightRadius:(double)arg2 lowerRightRadius:(double)arg3 lowerLeftRadius:(double)arg4 upperLeftRadius:(double)arg5 useLegacyCorners:(BOOL)arg6 keepNoOpElements:(BOOL)arg7;
+ (id)bezierPathWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
+ (void)clipRect:(struct CGRect)arg1;
+ (double)defaultFlatness;
+ (unsigned long long)defaultLineCapStyle;
+ (unsigned long long)defaultLineJoinStyle;
+ (double)defaultLineWidth;
+ (double)defaultMiterLimit;
+ (unsigned long long)defaultWindingRule;
+ (void)fillRect:(struct CGRect)arg1;
+ (double)flatness;
+ (void)initialize;
+ (unsigned long long)lineCapStyle;
+ (unsigned long long)lineJoinStyle;
+ (double)lineWidth;
+ (double)minimumLengthForSideToHaveFullContinuityWithCornerRadius1:(double)arg1 cornerRadius2:(double)arg2;
+ (double)miterLimit;
+ (void)setDefaultFlatness:(double)arg1;
+ (void)setDefaultLineCapStyle:(unsigned long long)arg1;
+ (void)setDefaultLineJoinStyle:(unsigned long long)arg1;
+ (void)setDefaultLineWidth:(double)arg1;
+ (void)setDefaultMiterLimit:(double)arg1;
+ (void)setDefaultWindingRule:(unsigned long long)arg1;
+ (void)setFlatness:(double)arg1;
+ (void)setLineCapStyle:(unsigned long long)arg1;
+ (void)setLineJoinStyle:(unsigned long long)arg1;
+ (void)setLineWidth:(double)arg1;
+ (void)setMiterLimit:(double)arg1;
+ (void)setWindingRule:(unsigned long long)arg1;
+ (void)strokeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (void)strokeRect:(struct CGRect)arg1;
+ (unsigned long long)windingRule;
- (struct CGPath *)CGPath;
- (void)_addPathSegment:(long long)arg1 point:(struct CGPoint)arg2;
- (void)_appendArcSegmentWithCenter:(struct CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;
- (void)_appendToPath:(id)arg1 skippingInitialMoveIfPossible:(BOOL)arg2;
- (struct CGPoint)_checkPointForValidity:(struct CGPoint)arg1;
- (id)_copyFlattenedPath;
- (void)_deviceClosePath;
- (void)_deviceCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)_deviceLineToPoint:(struct CGPoint)arg1;
- (void)_deviceMoveToPoint:(struct CGPoint)arg1;
- (void)_doPath;
- (BOOL)_isValid:(double)arg1;
- (void)addClip;
- (void)appendBezierPath:(id)arg1;
- (void)appendBezierPath:(id)arg1 skippingInitialMoveIfPossible:(BOOL)arg2;
- (void)appendBezierPathWithArcFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 radius:(double)arg3;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5;
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect)arg1 startAngle:(double)arg2 swingAngle:(double)arg3 angleType:(int)arg4 startNewPath:(BOOL)arg5;
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect)arg1 startRadialVector:(struct CGPoint)arg2 endRadialVector:(struct CGPoint)arg3 angleSign:(int)arg4 startNewPath:(BOOL)arg5;
- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg1;
- (void)appendBezierPathWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;
- (void)appendBezierPathWithRect:(struct CGRect)arg1;
- (id)bezierPathByFlatteningPath;
- (id)bezierPathByFlatteningPathWithFlatness:(double)arg1;
- (id)bezierPathByRemovingRedundantElements;
- (id)bezierPathByRemovingSmallSubpathsForInteriorWrapsForInset:(double)arg1;
- (id)bezierPathByReversingPath;
- (const char *)cString;
- (double)calculateLengthOfElement:(long long)arg1;
- (void)calculateLengths;
- (void)closePath;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (struct CGRect)controlPointBounds;
- (void)convertCloseElementsToLineElements;
- (void)copyPathAttributesTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGPoint)currentPoint;
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)description;
- (long long)elementAtIndex:(long long)arg1;
- (long long)elementAtIndex:(long long)arg1 allPoints:(struct CGPoint *)arg2;
- (long long)elementAtIndex:(long long)arg1 associatedPoints:(struct CGPoint *)arg2;
- (long long)elementCount;
- (void)fill;
- (void)flattenIntoPath:(id)arg1;
- (void)flattenIntoPath:(id)arg1 flatness:(double)arg2;
- (void)getLineDash:(double *)arg1 count:(long long *)arg2 phase:(double *)arg3;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCString:(const char *)arg1;
- (BOOL)isCircular;
- (BOOL)isClockwise;
- (BOOL)isDiamond;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFlat;
- (BOOL)isRectangular;
- (BOOL)isTriangular;
- (double)length;
- (double)lengthOfElement:(long long)arg1;
- (double)lengthToElement:(long long)arg1;
- (unsigned long long)lineCapStyle;
- (unsigned long long)lineJoinStyle;
- (void)lineToPoint:(struct CGPoint)arg1;
- (double)lineWidth;
- (double)miterLimit;
- (void)moveToPoint:(struct CGPoint)arg1;
- (id)p_bezierPathByRemovingRedundantElementAndSubregionsSmallerThanThreshold:(double)arg1;
- (void)relativeCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)relativeCurveToPoint:(struct CGPoint)arg1 controlPoint:(struct CGPoint)arg2;
- (void)relativeLineToPoint:(struct CGPoint)arg1;
- (void)relativeMoveToPoint:(struct CGPoint)arg1;
- (void)removeAllPoints;
- (void)setAssociatedPoints:(struct CGPoint *)arg1 atIndex:(long long)arg2;
- (void)setLineCapStyle:(unsigned long long)arg1;
- (void)setLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;
- (void)setLineJoinStyle:(unsigned long long)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setWindingRule:(unsigned long long)arg1;
- (void)stroke;
- (void)subdivideBezierWithFlatness:(double)arg1 startPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4 endPoint:(struct CGPoint)arg5;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (unsigned long long)windingRule;

@end


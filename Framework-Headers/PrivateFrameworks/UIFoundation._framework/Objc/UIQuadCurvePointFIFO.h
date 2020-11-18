//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/UIPointFIFO.h>

@class MISSING_TYPE, UIView, _UIPointVector;

@interface UIQuadCurvePointFIFO : UIPointFIFO
{
    float _unitScale;
    BOOL _emitInterpolatedPoints;
    struct CGPath *_path;
    double _lineWidth;
    CDUnknownBlockType _emissionHandler;
    _UIPointVector *_prevPoints;
    _UIPointVector *_points;
    _UIPointVector *_controlPoints;
    MISSING_TYPE *_lastPoint;
    UIView *_view;
}

@property (nonatomic) _UIPointVector *controlPoints; // @synthesize controlPoints=_controlPoints;
@property (copy) CDUnknownBlockType emissionHandler; // @synthesize emissionHandler=_emissionHandler;
@property (nonatomic) BOOL emitInterpolatedPoints; // @synthesize emitInterpolatedPoints=_emitInterpolatedPoints;
@property (nonatomic) MISSING_TYPE *lastPoint; // @synthesize lastPoint=_lastPoint;
@property (nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property (nonatomic) struct CGPath *path; // @synthesize path=_path;
@property (nonatomic) _UIPointVector *points; // @synthesize points=_points;
@property (nonatomic) _UIPointVector *prevPoints; // @synthesize prevPoints=_prevPoints;
@property (nonatomic) float unitScale; // @synthesize unitScale=_unitScale;
@property (strong, nonatomic) UIView *view; // @synthesize view=_view;

+ (MISSING_TYPE *)interpolateFromPoint:(float)arg1 toPoint:controlPoint:time: /* Error: Ran out of types for this method. */;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (void)clear;
- (void)dealloc;
- (void)enumerateInterpolationFromPoint:(CDUnknownBlockType)arg1 toPoint:controlPoint:usingBlock: /* Error: Ran out of types for this method. */;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (id)initWithFIFO:(id)arg1 strokeView:(id)arg2;
- (void)setUnitScaleForViewSize:(struct CGSize)arg1 normalizedSize:(struct CGSize)arg2 contentScaleFactor:(double)arg3;

@end


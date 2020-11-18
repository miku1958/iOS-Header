//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch, _UIGestureRecognizerTransformAnalyzer;

@interface UIPinchGestureRecognizer : UIGestureRecognizer
{
    double _initialTouchDistance;
    double _initialScale;
    double _lastEventTime;
    double _velocity;
    double _previousVelocity;
    double _lastNonZeroTimestampDelta;
    double _scaleThreshold;
    struct CGAffineTransform _transform;
    struct CGPoint _anchorSceneReferencePoint;
    UITouch *_touches[2];
    double _hysteresis;
    _UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;
    unsigned int _loggedPinchStatistic:1;
    unsigned int _loggedZoomStatistic:1;
    unsigned int _endsOnSingleTouch:1;
    BOOL __enableNestedHysteresis;
}

@property (nonatomic) BOOL _enableNestedHysteresis; // @synthesize _enableNestedHysteresis=__enableNestedHysteresis;
@property (readonly, nonatomic) struct CGPoint anchorPoint;
@property (nonatomic, getter=_hysteresis, setter=_setHysteresis:) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property (nonatomic) double scale;
@property (nonatomic) double scaleThreshold; // @synthesize scaleThreshold=_scaleThreshold;
@property (nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property (readonly, nonatomic) double velocity;

+ (BOOL)_shouldDefaultToTouches;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_applyScale:(double)arg1 atLocation:(struct CGPoint)arg2 touchDistance:(double)arg3 withEvent:(id)arg4;
- (void)_cancelOrFail;
- (void)_endOrFail;
- (BOOL)_endsOnSingleTouch;
- (double)_hysteresisForTouches:(id)arg1;
- (void)_logStatisticsForScale:(double)arg1;
- (void)_resetGestureRecognizer;
- (void)_setEndsOnSingleTouch:(BOOL)arg1;
- (void)_transformChangedWithEvent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

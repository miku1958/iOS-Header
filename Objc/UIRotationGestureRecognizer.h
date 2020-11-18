//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch;

@interface UIRotationGestureRecognizer : UIGestureRecognizer
{
    double _initialTouchDistance;
    double _initialTouchAngle;
    double _currentTouchAngle;
    long long _currentRotationCount;
    double _lastTouchTime;
    double _velocity;
    double _previousVelocity;
    struct CGPoint _anchorSceneReferencePoint;
    id _transformAnalyzer;
    UITouch *_touches[2];
    float _preRecognitionWeight;
    float _postRecognitionWeight;
}

@property (nonatomic) double rotation;
@property (readonly, nonatomic) double velocity;

+ (BOOL)_shouldDefaultToTouches;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_cancelOrFail;
- (void)_endOrFail;
- (double)_postRecognitionWeight;
- (double)_preRecognitionWeight;
- (void)_resetGestureRecognizer;
- (void)_setPostRecognitionWeight:(double)arg1;
- (void)_setPreRecognitionWeight:(double)arg1;
- (BOOL)_shouldReceiveTransformEvent:(id)arg1;
- (void)_transformChangedWithEvent:(id)arg1;
- (void)_updateTransformAnalyzerWeights;
- (struct CGPoint)anchorPoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@interface _MKZoomingPanGestureRecognizer : UIPanGestureRecognizer
{
    double _zoomDraggingResistance;
    double _translation;
    double _scale;
    double _velocity;
    double _previousVelocity;
    BOOL _didStartUpdate;
    double _lastUpdateTimestamp;
}

@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) double velocity;
@property (nonatomic) double zoomDraggingResistance; // @synthesize zoomDraggingResistance=_zoomDraggingResistance;

- (void)_updateScaleAndVelocityIfNeeded:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

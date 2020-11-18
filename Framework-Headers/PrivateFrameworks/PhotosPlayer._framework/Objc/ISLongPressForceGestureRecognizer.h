//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>

@class NSMutableSet;

@interface ISLongPressForceGestureRecognizer : UILongPressGestureRecognizer
{
    NSMutableSet *_trackingTouches;
    BOOL _longPressDidBeginForCurrentTouch;
    double _minimumPressure;
    double _maximumPressure;
    double _is_force;
}

@property (readonly, nonatomic) double is_force; // @synthesize is_force=_is_force;
@property (nonatomic) double maximumPressure; // @synthesize maximumPressure=_maximumPressure;
@property (nonatomic) double minimumPressure; // @synthesize minimumPressure=_minimumPressure;

- (void).cxx_destruct;
- (void)_updateForce;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setState:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

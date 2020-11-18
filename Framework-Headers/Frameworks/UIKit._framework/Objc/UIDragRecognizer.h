//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class UIDelayedAction, UITouch;

__attribute__((visibility("hidden")))
@interface UIDragRecognizer : UIGestureRecognizer
{
    double _maximumDeviation;
    double _minimumDistance;
    struct CGPoint _startPosition;
    BOOL _restrictsToAngle;
    double _angle;
    UITouch *_touch;
    UIDelayedAction *_tooSlow;
    double _startAngle;
    double _quietPeriod;
    BOOL _canBeginDrag;
    SEL _checkCanBeginDrag;
    UIDelayedAction *ignoreTouch;
}

@property (nonatomic) double angle; // @synthesize angle=_angle;
@property (nonatomic) BOOL canBeginDrag; // @synthesize canBeginDrag=_canBeginDrag;
@property (nonatomic) SEL checkCanBeginDrag; // @synthesize checkCanBeginDrag=_checkCanBeginDrag;
@property (strong, nonatomic) UIDelayedAction *ignoreTouch; // @synthesize ignoreTouch;
@property (nonatomic) double maximumDeviation; // @synthesize maximumDeviation=_maximumDeviation;
@property (nonatomic) double minimumDistance; // @synthesize minimumDistance=_minimumDistance;
@property (nonatomic) double quietPeriod; // @synthesize quietPeriod=_quietPeriod;
@property (nonatomic) BOOL restrictsToAngle; // @synthesize restrictsToAngle=_restrictsToAngle;
@property (nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property (nonatomic) struct CGPoint startPosition; // @synthesize startPosition=_startPosition;
@property (strong, nonatomic) UITouch *touch; // @synthesize touch=_touch;

+ (BOOL)_shouldDefaultToTouches;
- (void).cxx_destruct;
- (void)_resetGestureRecognizer;
- (void)clearIgnoreTouch;
- (void)clearTimer;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)tooSlow:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

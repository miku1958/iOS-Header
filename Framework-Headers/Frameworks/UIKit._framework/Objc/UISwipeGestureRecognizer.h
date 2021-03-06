//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableArray;

@interface UISwipeGestureRecognizer : UIGestureRecognizer
{
    double _maximumDuration;
    double _minimumPrimaryMovement;
    double _maximumPrimaryMovement;
    double _minimumSecondaryMovement;
    double _maximumSecondaryMovement;
    double _rateOfMinimumMovementDecay;
    double _rateOfMaximumMovementDecay;
    unsigned long long _numberOfTouchesRequired;
    NSMutableArray *_touches;
    unsigned long long _direction;
    struct CGPoint _startLocation;
    struct CGPoint *_startLocations;
    double _startTime;
    BOOL _failed;
}

@property (nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property (nonatomic) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property (nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;

+ (BOOL)_shouldDefaultToTouches;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_appendSubclassDescription:(id)arg1;
- (BOOL)_isGestureType:(long long)arg1;
- (void)_resetGestureRecognizer;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (unsigned long long)numberOfTouches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end


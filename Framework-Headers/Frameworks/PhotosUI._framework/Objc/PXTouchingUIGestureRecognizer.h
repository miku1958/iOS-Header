//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface PXTouchingUIGestureRecognizer : UIGestureRecognizer
{
    double _minimumTouchDuration;
    double _maximumTouchMovement;
    unsigned long long __touchCount;
    unsigned long long __beginRequestID;
    struct CGPoint __initialPointInView;
}

@property (nonatomic, setter=_setBeginRequestID:) unsigned long long _beginRequestID; // @synthesize _beginRequestID=__beginRequestID;
@property (nonatomic, setter=_setInitialPointInView:) struct CGPoint _initialPointInView; // @synthesize _initialPointInView=__initialPointInView;
@property (nonatomic, setter=_setTouchCount:) unsigned long long _touchCount; // @synthesize _touchCount=__touchCount;
@property (nonatomic) double maximumTouchMovement; // @synthesize maximumTouchMovement=_maximumTouchMovement;
@property (nonatomic) double minimumTouchDuration; // @synthesize minimumTouchDuration=_minimumTouchDuration;

- (void)_beginWithRequestID:(unsigned long long)arg1;
- (void)_decrementTouchesBy:(unsigned long long)arg1;
- (void)_incrementTouchesBy:(unsigned long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setEnabled:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

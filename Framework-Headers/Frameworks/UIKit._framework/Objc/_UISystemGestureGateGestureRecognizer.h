//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer
{
    unsigned char _systemGestureGateType;
    unsigned int _systemGesturesRecognitionPossible:1;
    unsigned int _waitingForSystemGestureStateNotification:1;
    double _lastTouchTime;
    NSTimer *_delayTimeoutTimer;
}

+ (BOOL)_shouldDefaultToTouches;
- (id)_gateGestureTypeString;
- (void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_systemGestureStateChanged:(id)arg1;
- (void)_timeOut;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithWindow:(id)arg1 type:(unsigned char)arg2;
- (void)setDelaysTouchesBegan:(BOOL)arg1;
- (void)setDelaysTouchesEnded:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

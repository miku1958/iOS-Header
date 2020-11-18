//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UIEvent : NSObject
{
    struct __GSEvent *_gsEvent;
    struct __IOHIDEvent *_hidEvent;
    double _timestamp;
}

@property (readonly, nonatomic) long long subtype;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long type;

- (id)_allPhysicalButtons;
- (struct CGPoint)_digitizerLocation;
- (unsigned long long)_focusHeading;
- (struct __GSEvent *)_gsEvent;
- (struct __IOHIDEvent *)_hidEvent;
- (id)_init;
- (id)_initWithEvent:(struct __GSEvent *)arg1 touches:(id)arg2;
- (BOOL)_isKeyDown;
- (id)_modifiedInput;
- (long long)_modifierFlags;
- (long long)_moveDirection;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1;
- (id)_screen;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setGSEvent:(struct __GSEvent *)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_setTimestamp:(double)arg1;
- (int)_shakeState;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (id)_triggeringPhysicalButton;
- (id)_unmodifiedInput;
- (double)_wheelVelocity;
- (id)_windows;
- (id)allTouches;
- (id)coalescedTouchesForTouch:(id)arg1;
- (void)dealloc;
- (BOOL)isKeyDown;
- (id)predictedTouchesForTouch:(id)arg1;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;

@end


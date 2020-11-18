//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCControllerDirectionPad.h>

@class NSString, _GCControllerAxisInput;

@interface _GCControllerDirectionPad : GCControllerDirectionPad
{
    CDUnknownBlockType _valueChangedHandler;
    _GCControllerAxisInput *_xAxis;
    _GCControllerAxisInput *_yAxis;
    NSString *_descriptionName;
}

- (void).cxx_destruct;
- (void)_fireValueChanged;
- (void)_fireValueChangedWithQueue:(id)arg1;
- (id)description;
- (id)down;
- (id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2;
- (id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2 descriptionName:(id)arg3;
- (id)left;
- (id)right;
- (BOOL)setHIDValue:(struct __IOHIDValue *)arg1;
- (BOOL)setHIDValue:(struct __IOHIDValue *)arg1 queue:(id)arg2;
- (void)setValueChangedHandler:(CDUnknownBlockType)arg1;
- (id)up;
- (CDUnknownBlockType)valueChangedHandler;
- (id)xAxis;
- (id)yAxis;

@end


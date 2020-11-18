//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GCController, GCControllerButtonInput, GCControllerDirectionPad, GCMotion;

@interface GCGamepad : NSObject
{
    BOOL _dpadFlippedY;
    GCMotion *_motion;
    GCControllerButtonInput *_button0;
    GCControllerButtonInput *_button1;
    GCControllerButtonInput *_button2;
    GCControllerButtonInput *_button3;
    GCController *_controller;
    CDUnknownBlockType _valueChangedHandler;
    GCControllerDirectionPad *_dpad;
    GCControllerButtonInput *_leftShoulder;
    GCControllerButtonInput *_rightShoulder;
    GCControllerButtonInput *_buttonMenu;
}

@property (strong, nonatomic) GCControllerButtonInput *buttonA; // @synthesize buttonA=_button0;
@property (strong, nonatomic) GCControllerButtonInput *buttonB; // @synthesize buttonB=_button1;
@property (strong, nonatomic) GCControllerButtonInput *buttonMenu; // @synthesize buttonMenu=_buttonMenu;
@property (strong, nonatomic) GCControllerButtonInput *buttonX; // @synthesize buttonX=_button2;
@property (strong, nonatomic) GCControllerButtonInput *buttonY; // @synthesize buttonY=_button3;
@property (weak, nonatomic) GCController *controller; // @synthesize controller=_controller;
@property (strong, nonatomic) GCControllerDirectionPad *dpad; // @synthesize dpad=_dpad;
@property (strong, nonatomic) GCControllerButtonInput *leftShoulder; // @synthesize leftShoulder=_leftShoulder;
@property (strong, nonatomic) GCControllerButtonInput *rightShoulder; // @synthesize rightShoulder=_rightShoulder;
@property (copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_motion;
- (BOOL)allowsRotation;
- (id)button0;
- (id)button1;
- (id)button2;
- (id)button3;
- (void)encodeWithCoder:(id)arg1;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(BOOL)arg2;
- (BOOL)isBluetoothAndUSBMirrored;
- (id)name;
- (id)productCategory;
- (BOOL)reportsAbsoluteDpadValues;
- (id)saveSnapshot;
- (void)setAllowsRotation:(BOOL)arg1;
- (void)setButton:(id)arg1 pressed:(BOOL)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setControllerForElements;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setPlayerIndex:(long long)arg1;
- (void)setReportsAbsoluteDpadValues:(BOOL)arg1;
- (void)set_motion:(id)arg1;

@end

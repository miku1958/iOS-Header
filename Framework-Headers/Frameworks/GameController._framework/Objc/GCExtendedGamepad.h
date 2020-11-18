//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GCController, GCControllerButtonInput, GCControllerDirectionPad;

@interface GCExtendedGamepad : NSObject
{
}

@property (readonly, nonatomic) GCControllerButtonInput *buttonA;
@property (readonly, nonatomic) GCControllerButtonInput *buttonB;
@property (readonly, nonatomic) GCControllerButtonInput *buttonX;
@property (readonly, nonatomic) GCControllerButtonInput *buttonY;
@property (readonly, weak, nonatomic) GCController *controller;
@property (readonly, nonatomic) GCControllerDirectionPad *dpad;
@property (readonly, nonatomic) GCControllerButtonInput *leftShoulder;
@property (readonly, nonatomic) GCControllerDirectionPad *leftThumbstick;
@property (readonly, nonatomic) GCControllerButtonInput *leftTrigger;
@property (readonly, nonatomic) GCControllerButtonInput *rightShoulder;
@property (readonly, nonatomic) GCControllerDirectionPad *rightThumbstick;
@property (readonly, nonatomic) GCControllerButtonInput *rightTrigger;
@property (copy, nonatomic) CDUnknownBlockType valueChangedHandler;

+ (BOOL)supportsUSBInterfaceProtocol:(unsigned char)arg1;
- (BOOL)allowsRotation;
- (id)button0;
- (id)button1;
- (id)button2;
- (id)button3;
- (id)initWithController:(id)arg1;
- (id)inputForElement:(struct __IOHIDElement *)arg1;
- (BOOL)reportsAbsoluteDpadValues;
- (id)saveSnapshot;
- (void)setAllowsRotation:(BOOL)arg1;
- (void)setButton:(id)arg1 pressed:(BOOL)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setReportsAbsoluteDpadValues:(BOOL)arg1;

@end


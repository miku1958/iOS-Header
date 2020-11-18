//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCGamepad.h>

#import <GameController/GCNamedProfile-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, NSString, _GCControllerButtonInput, _GCControllerDirectionPad;

@interface _GCGamepad : GCGamepad <GCNamedProfile, NSSecureCoding>
{
    GCController *_controller;
    CDUnknownBlockType _valueChangedHandler;
    _GCControllerDirectionPad *_dpad;
    _GCControllerButtonInput *_button0;
    _GCControllerButtonInput *_button1;
    _GCControllerButtonInput *_button2;
    _GCControllerButtonInput *_button3;
    _GCControllerButtonInput *_leftShoulder;
    _GCControllerButtonInput *_rightShoulder;
    BOOL _dpadFlippedY;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)buttonA;
- (id)buttonB;
- (id)buttonX;
- (id)buttonY;
- (id)controller;
- (id)dpad;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(BOOL)arg2;
- (id)leftShoulder;
- (id)rightShoulder;
- (void)setController:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)setValueChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)valueChangedHandler;

@end


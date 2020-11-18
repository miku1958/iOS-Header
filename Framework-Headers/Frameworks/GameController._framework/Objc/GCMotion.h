//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, GCController;

@interface GCMotion : NSObject
{
    CDStruct_31142d93 _gravity;
    CDStruct_31142d93 _prevGravity;
    CDStruct_31142d93 _userAcceleration;
    struct GCQuaternion _attitude;
    CDStruct_31142d93 _rotationRate;
    float _tip;
    float _tilt;
    CMMotionManager *_motionMgr;
    BOOL _motionLite;
    CDUnknownBlockType _valueChangedHandler;
    CDUnknownBlockType _internalValueChangedHandler;
    BOOL _emulatedMotionEnabled;
    BOOL _motionUpdatedEnabled;
    GCController *_controller;
}

@property (readonly, nonatomic) struct GCQuaternion attitude; // @synthesize attitude=_attitude;
@property (readonly, weak, nonatomic) GCController *controller; // @synthesize controller=_controller;
@property (readonly, nonatomic) CDStruct_31142d93 gravity; // @synthesize gravity=_gravity;
@property (readonly, nonatomic) CDStruct_31142d93 rotationRate; // @synthesize rotationRate=_rotationRate;
@property (readonly, nonatomic) CDStruct_31142d93 userAcceleration; // @synthesize userAcceleration=_userAcceleration;
@property (copy, nonatomic) CDUnknownBlockType valueChangedHandler;

- (void).cxx_destruct;
- (BOOL)_isUpdatingDeviceMotion;
- (void)_pauseMotionUpdates:(BOOL)arg1;
- (void)_setAttitude:(struct GCQuaternion)arg1;
- (void)_setGravity:(CDStruct_31142d93)arg1;
- (void)_setMotionLite:(BOOL)arg1;
- (void)_setRotationRate:(CDStruct_31142d93)arg1;
- (void)_setUserAcceleration:(CDStruct_31142d93)arg1;
- (void)_startDeviceMotionUpdates;
- (void)_stopDeviceMotionUpdates;
- (float)_tilt;
- (float)_tip;
- (id)initWithController:(id)arg1;
- (CDUnknownBlockType)internalValueChangedHandler;
- (BOOL)isEmulatedMicroGamepad;
- (void)setInternalValueChangedHandler:(CDUnknownBlockType)arg1;

@end


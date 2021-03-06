//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>
#import <GameController/_GCMotionEventSink-Protocol.h>

@class GCController, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface GCMotion : NSObject <_GCMotionEventSink, NSSecureCoding>
{
    id _motionEventObservation;
    CDStruct_31142d93 _gravity;
    CDStruct_31142d93 _userAcceleration;
    CDStruct_31142d93 _acceleration;
    struct GCQuaternion _attitude;
    struct GCQuaternion _prevAttitude;
    CDStruct_27cd59c8 _eulerAngles;
    CDStruct_27cd59c8 _prevEulerAngles;
    CDStruct_31142d93 _rotationRate;
    float _tip;
    float _tilt;
    BOOL _motionLite;
    BOOL _compassEnabled;
    BOOL _hasAttitude;
    BOOL _hasRotationRate;
    CDUnknownBlockType _valueChangedHandler;
    BOOL _sensorsActive;
    GCController *_controller;
    id<NSObject><NSCopying><NSSecureCoding> _identifier;
}

@property (readonly, nonatomic) CDStruct_39925896 acceleration;
@property (readonly, nonatomic) struct GCQuaternion attitude; // @synthesize attitude=_attitude;
@property (readonly, weak, nonatomic) GCController *controller; // @synthesize controller=_controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CDStruct_39925896 gravity; // @synthesize gravity=_gravity;
@property (readonly, nonatomic) BOOL hasAttitude;
@property (readonly, nonatomic) BOOL hasAttitudeAndRotationRate;
@property (readonly, nonatomic) BOOL hasGravityAndUserAcceleration;
@property (readonly, nonatomic) BOOL hasRotationRate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CDStruct_39925896 rotationRate; // @synthesize rotationRate=_rotationRate;
@property (nonatomic) BOOL sensorsActive; // @synthesize sensorsActive=_sensorsActive;
@property (readonly, nonatomic) BOOL sensorsRequireManualActivation;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CDStruct_39925896 userAcceleration; // @synthesize userAcceleration=_userAcceleration;
@property (copy, nonatomic) CDUnknownBlockType valueChangedHandler;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_isUpdatingDeviceMotion;
- (void)_pauseMotionUpdates:(BOOL)arg1;
- (void)_setAcceleration:(CDStruct_39925896)arg1;
- (void)_setAttitude:(struct GCQuaternion)arg1;
- (void)_setCompassEnabled:(BOOL)arg1;
- (void)_setGravity:(CDStruct_39925896)arg1;
- (void)_setHasAttitude:(BOOL)arg1;
- (void)_setHasRotationRate:(BOOL)arg1;
- (void)_setMotionLite:(BOOL)arg1;
- (void)_setRotationRate:(CDStruct_39925896)arg1;
- (void)_setUserAcceleration:(CDStruct_39925896)arg1;
- (void)_startDeviceMotionUpdates;
- (void)_stopDeviceMotionUpdates;
- (float)_tilt;
- (float)_tip;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEmulatedMicroGamepad;
- (void)setAcceleration:(CDStruct_39925896)arg1;
- (void)setAttitude:(struct GCQuaternion)arg1;
- (void)setController:(id)arg1;
- (void)setGravity:(CDStruct_39925896)arg1;
- (void)setMotionEventSource:(id)arg1;
- (void)setRotationRate:(CDStruct_39925896)arg1;
- (void)setStateFromMotion:(id)arg1;
- (void)setUserAcceleration:(CDStruct_39925896)arg1;

@end


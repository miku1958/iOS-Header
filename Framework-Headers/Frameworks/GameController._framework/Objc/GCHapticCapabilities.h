//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/GCDeviceHapticCapabilityInfo-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, GCDeviceHaptics, GCHapticCapabilityGraph, NSArray, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface GCHapticCapabilities : NSObject <NSSecureCoding, GCDeviceHapticCapabilityInfo>
{
    NSArray *_hapticEnginesInfo;
    GCController *_controller;
    BOOL _initialized;
    id<NSObject><NSCopying><NSSecureCoding> _identifier;
    GCHapticCapabilityGraph *_capabilityGraph;
    GCDeviceHaptics *_deviceHaptics;
    NSArray *_hapticEngines;
}

@property (readonly) GCHapticCapabilityGraph *capabilityGraph; // @synthesize capabilityGraph=_capabilityGraph;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) GCDeviceHaptics *deviceHaptics; // @synthesize deviceHaptics=_deviceHaptics;
@property (copy) NSArray *hapticEngines; // @synthesize hapticEngines=_hapticEngines;
@property (readonly) unsigned long long hash;
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL initialized; // @synthesize initialized=_initialized;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 hapticEnginesInfo:(id)arg2 hapticCapabilityGraph:(id)arg3;
- (void)initializeHapticEngines;
- (void)removeHapticEngines;
- (void)setController:(id)arg1;

@end

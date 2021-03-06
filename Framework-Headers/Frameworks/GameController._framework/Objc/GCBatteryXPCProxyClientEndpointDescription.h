//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/_GCControllerComponentDescription-Protocol.h>

@class GCBatteryXPCProxyClientEndpoint, GCDeviceBattery, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCBatteryXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription>
{
    GCDeviceBattery *_initialBattery;
    GCBatteryXPCProxyClientEndpoint *_materializedObject;
    id<NSObject><NSCopying><NSSecureCoding> _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 initialBattery:(id)arg2;
- (id)materializeWithContext:(id)arg1;

@end


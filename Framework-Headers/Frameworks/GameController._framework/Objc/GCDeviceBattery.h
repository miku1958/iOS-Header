//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

@interface GCDeviceBattery : NSObject <NSSecureCoding>
{
    float _batteryLevel;
    long long _batteryState;
}

@property (nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property (nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;

+ (BOOL)supportsSecureCoding;
- (void)_setBatteryLevel:(float)arg1;
- (void)_setBatteryState:(long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLevel:(float)arg1 batteryState:(long long)arg2;
- (id)initWithLevel:(unsigned char)arg1 isCharging:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface NWAWDNWDeviceReport : PBCodable <NSCopying>
{
    unsigned int _batteryAbsoluteCapacity;
    unsigned int _batteryCurrentCapacity;
    unsigned int _batteryDesignCapacity;
    unsigned int _batteryMaximumCapacity;
    unsigned int _batteryPercentage;
    unsigned int _batteryTimeRemaining;
    unsigned int _batteryVoltage;
    int _thermalPressure;
    BOOL _batteryAtCriticalLevel;
    BOOL _batteryAtWarnLevel;
    BOOL _batteryExternalPowerIsConnected;
    BOOL _batteryFullyCharged;
    BOOL _batteryIsCharging;
    BOOL _devicePluggedIn;
    BOOL _deviceScreenOn;
    struct {
        unsigned int batteryAbsoluteCapacity:1;
        unsigned int batteryCurrentCapacity:1;
        unsigned int batteryDesignCapacity:1;
        unsigned int batteryMaximumCapacity:1;
        unsigned int batteryPercentage:1;
        unsigned int batteryTimeRemaining:1;
        unsigned int batteryVoltage:1;
        unsigned int thermalPressure:1;
        unsigned int batteryAtCriticalLevel:1;
        unsigned int batteryAtWarnLevel:1;
        unsigned int batteryExternalPowerIsConnected:1;
        unsigned int batteryFullyCharged:1;
        unsigned int batteryIsCharging:1;
        unsigned int devicePluggedIn:1;
        unsigned int deviceScreenOn:1;
    } _has;
}

@property (nonatomic) unsigned int batteryAbsoluteCapacity; // @synthesize batteryAbsoluteCapacity=_batteryAbsoluteCapacity;
@property (nonatomic) BOOL batteryAtCriticalLevel; // @synthesize batteryAtCriticalLevel=_batteryAtCriticalLevel;
@property (nonatomic) BOOL batteryAtWarnLevel; // @synthesize batteryAtWarnLevel=_batteryAtWarnLevel;
@property (nonatomic) unsigned int batteryCurrentCapacity; // @synthesize batteryCurrentCapacity=_batteryCurrentCapacity;
@property (nonatomic) unsigned int batteryDesignCapacity; // @synthesize batteryDesignCapacity=_batteryDesignCapacity;
@property (nonatomic) BOOL batteryExternalPowerIsConnected; // @synthesize batteryExternalPowerIsConnected=_batteryExternalPowerIsConnected;
@property (nonatomic) BOOL batteryFullyCharged; // @synthesize batteryFullyCharged=_batteryFullyCharged;
@property (nonatomic) BOOL batteryIsCharging; // @synthesize batteryIsCharging=_batteryIsCharging;
@property (nonatomic) unsigned int batteryMaximumCapacity; // @synthesize batteryMaximumCapacity=_batteryMaximumCapacity;
@property (nonatomic) unsigned int batteryPercentage; // @synthesize batteryPercentage=_batteryPercentage;
@property (nonatomic) unsigned int batteryTimeRemaining; // @synthesize batteryTimeRemaining=_batteryTimeRemaining;
@property (nonatomic) unsigned int batteryVoltage; // @synthesize batteryVoltage=_batteryVoltage;
@property (nonatomic) BOOL devicePluggedIn; // @synthesize devicePluggedIn=_devicePluggedIn;
@property (nonatomic) BOOL deviceScreenOn; // @synthesize deviceScreenOn=_deviceScreenOn;
@property (nonatomic) BOOL hasBatteryAbsoluteCapacity;
@property (nonatomic) BOOL hasBatteryAtCriticalLevel;
@property (nonatomic) BOOL hasBatteryAtWarnLevel;
@property (nonatomic) BOOL hasBatteryCurrentCapacity;
@property (nonatomic) BOOL hasBatteryDesignCapacity;
@property (nonatomic) BOOL hasBatteryExternalPowerIsConnected;
@property (nonatomic) BOOL hasBatteryFullyCharged;
@property (nonatomic) BOOL hasBatteryIsCharging;
@property (nonatomic) BOOL hasBatteryMaximumCapacity;
@property (nonatomic) BOOL hasBatteryPercentage;
@property (nonatomic) BOOL hasBatteryTimeRemaining;
@property (nonatomic) BOOL hasBatteryVoltage;
@property (nonatomic) BOOL hasDevicePluggedIn;
@property (nonatomic) BOOL hasDeviceScreenOn;
@property (nonatomic) BOOL hasThermalPressure;
@property (nonatomic) int thermalPressure; // @synthesize thermalPressure=_thermalPressure;

- (int)StringAsThermalPressure:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)thermalPressureAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDSleepAlarmAWDSleepAlarmNightEvent : PBCodable <NSCopying>
{
    long long _bedtimeHour;
    long long _bedtimeMinute;
    long long _bedtimeToCorrectedBedtimeMinutes;
    long long _bedtimeToFirstSleepInterruptionMinutes;
    long long _bedtimeToStartOfLongestSleepIntervalMinutes;
    long long _correctedBedtimeToThirdPartySleepOnsetMinutes;
    long long _percentOfDesiredSleep;
    unsigned long long _timestamp;
    long long _wakeupTimeToThirdPartyWakeupTimeMinutes;
    NSString *_thirdPartyBundleIdentifier;
    NSString *_thirdPartyDeviceManufacturer;
    NSString *_thirdPartyDeviceModel;
    BOOL _wakeupIsOnWeekday;
    struct {
        unsigned int bedtimeHour:1;
        unsigned int bedtimeMinute:1;
        unsigned int bedtimeToCorrectedBedtimeMinutes:1;
        unsigned int bedtimeToFirstSleepInterruptionMinutes:1;
        unsigned int bedtimeToStartOfLongestSleepIntervalMinutes:1;
        unsigned int correctedBedtimeToThirdPartySleepOnsetMinutes:1;
        unsigned int percentOfDesiredSleep:1;
        unsigned int timestamp:1;
        unsigned int wakeupTimeToThirdPartyWakeupTimeMinutes:1;
        unsigned int wakeupIsOnWeekday:1;
    } _has;
}

@property (nonatomic) long long bedtimeHour; // @synthesize bedtimeHour=_bedtimeHour;
@property (nonatomic) long long bedtimeMinute; // @synthesize bedtimeMinute=_bedtimeMinute;
@property (nonatomic) long long bedtimeToCorrectedBedtimeMinutes; // @synthesize bedtimeToCorrectedBedtimeMinutes=_bedtimeToCorrectedBedtimeMinutes;
@property (nonatomic) long long bedtimeToFirstSleepInterruptionMinutes; // @synthesize bedtimeToFirstSleepInterruptionMinutes=_bedtimeToFirstSleepInterruptionMinutes;
@property (nonatomic) long long bedtimeToStartOfLongestSleepIntervalMinutes; // @synthesize bedtimeToStartOfLongestSleepIntervalMinutes=_bedtimeToStartOfLongestSleepIntervalMinutes;
@property (nonatomic) long long correctedBedtimeToThirdPartySleepOnsetMinutes; // @synthesize correctedBedtimeToThirdPartySleepOnsetMinutes=_correctedBedtimeToThirdPartySleepOnsetMinutes;
@property (nonatomic) BOOL hasBedtimeHour;
@property (nonatomic) BOOL hasBedtimeMinute;
@property (nonatomic) BOOL hasBedtimeToCorrectedBedtimeMinutes;
@property (nonatomic) BOOL hasBedtimeToFirstSleepInterruptionMinutes;
@property (nonatomic) BOOL hasBedtimeToStartOfLongestSleepIntervalMinutes;
@property (nonatomic) BOOL hasCorrectedBedtimeToThirdPartySleepOnsetMinutes;
@property (nonatomic) BOOL hasPercentOfDesiredSleep;
@property (readonly, nonatomic) BOOL hasThirdPartyBundleIdentifier;
@property (readonly, nonatomic) BOOL hasThirdPartyDeviceManufacturer;
@property (readonly, nonatomic) BOOL hasThirdPartyDeviceModel;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWakeupIsOnWeekday;
@property (nonatomic) BOOL hasWakeupTimeToThirdPartyWakeupTimeMinutes;
@property (nonatomic) long long percentOfDesiredSleep; // @synthesize percentOfDesiredSleep=_percentOfDesiredSleep;
@property (strong, nonatomic) NSString *thirdPartyBundleIdentifier; // @synthesize thirdPartyBundleIdentifier=_thirdPartyBundleIdentifier;
@property (strong, nonatomic) NSString *thirdPartyDeviceManufacturer; // @synthesize thirdPartyDeviceManufacturer=_thirdPartyDeviceManufacturer;
@property (strong, nonatomic) NSString *thirdPartyDeviceModel; // @synthesize thirdPartyDeviceModel=_thirdPartyDeviceModel;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) BOOL wakeupIsOnWeekday; // @synthesize wakeupIsOnWeekday=_wakeupIsOnWeekday;
@property (nonatomic) long long wakeupTimeToThirdPartyWakeupTimeMinutes; // @synthesize wakeupTimeToThirdPartyWakeupTimeMinutes=_wakeupTimeToThirdPartyWakeupTimeMinutes;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBDateTime, _INPBSleepAlarmAttribute;

@protocol _INPBAlarm <NSObject>

@property (readonly, nonatomic) int *alarmRepeatScheduleOptions;
@property (readonly, nonatomic) unsigned long long alarmRepeatScheduleOptionsCount;
@property (strong, nonatomic) _INPBDateTime *dateTime;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL firing;
@property (readonly, nonatomic) BOOL hasDateTime;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL hasFiring;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasSleepAlarmAttribute;
@property (copy, nonatomic) NSString *identifier;
@property (strong, nonatomic) _INPBDataString *label;
@property (strong, nonatomic) _INPBSleepAlarmAttribute *sleepAlarmAttribute;

- (int)StringAsAlarmRepeatScheduleOptions:(NSString *)arg1;
- (void)addAlarmRepeatScheduleOptions:(int)arg1;
- (NSString *)alarmRepeatScheduleOptionsAsString:(int)arg1;
- (int)alarmRepeatScheduleOptionsAtIndex:(unsigned long long)arg1;
- (void)clearAlarmRepeatScheduleOptions;
- (void)setAlarmRepeatScheduleOptions:(int *)arg1 count:(unsigned long long)arg2;
@end


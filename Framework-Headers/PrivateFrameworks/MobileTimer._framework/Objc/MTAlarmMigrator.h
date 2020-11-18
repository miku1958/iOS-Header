//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class Alarm, MTAlarm, NSArray, NSMutableArray;

@interface MTAlarmMigrator : NSObject
{
    NSMutableArray *_alarms;
    MTAlarm *_sleepAlarm;
    NSArray *_oldAlarms;
    Alarm *_oldSleepAlarm;
}

@property (strong, nonatomic) NSMutableArray *alarms; // @synthesize alarms=_alarms;
@property (strong, nonatomic) NSArray *oldAlarms; // @synthesize oldAlarms=_oldAlarms;
@property (strong, nonatomic) Alarm *oldSleepAlarm; // @synthesize oldSleepAlarm=_oldSleepAlarm;
@property (strong, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;

+ (id)_numberFromString:(id)arg1;
+ (id)alarmFromOldAlarm:(id)arg1;
+ (unsigned long long)repeatScheduleFromOldAlarm:(id)arg1;
+ (id)soundFromOldAlarm:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_hasSleepAlarmBeenConfigured;
- (void)cleanUpOldNotifications;
- (void)migrateFromOldStorage;
- (void)removeFromOldStorage;

@end


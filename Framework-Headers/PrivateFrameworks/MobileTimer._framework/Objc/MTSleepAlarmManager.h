//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTSleepAlarm, NSDateComponentsFormatter, NSDateFormatter, NSMutableArray;

@interface MTSleepAlarmManager : NSObject
{
    MTSleepAlarm *_sleepAlarm;
    NSMutableArray *_bedtimeNotifications;
    NSDateComponentsFormatter *_dateComponentsFormatter;
    NSDateFormatter *_bedtimeFormatter;
}

@property (strong, nonatomic) NSDateFormatter *bedtimeFormatter; // @synthesize bedtimeFormatter=_bedtimeFormatter;
@property (strong, nonatomic) NSMutableArray *bedtimeNotifications; // @synthesize bedtimeNotifications=_bedtimeNotifications;
@property (strong, nonatomic) NSDateComponentsFormatter *dateComponentsFormatter; // @synthesize dateComponentsFormatter=_dateComponentsFormatter;
@property (readonly, copy, nonatomic) MTSleepAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;

+ (BOOL)isSleepAlarmBedtimeNotification:(id)arg1;
+ (id)sharedSleepAlarmManager;
- (void).cxx_destruct;
- (id)_newBaseDateComponentsForDay:(long long)arg1;
- (void)addNotification:(id)arg1;
- (id)bedtimeNotificationMessageWithCalendar:(id)arg1;
- (id)init;
- (void)prepareBedtimeNotifications;
- (void)removeAllNotifications;
- (id)timeZoneForOffsetCalculation;
- (void)updateSleepAlarm:(id)arg1;

@end

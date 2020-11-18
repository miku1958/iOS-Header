//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTAlarmCache, MTAlarmManagerExportedObject, MTMetrics, MTXPCConnectionProvider, NSNotificationCenter;

@interface MTAlarmManager : NSObject
{
    MTAlarmManagerExportedObject *_exportedObject;
    struct MTXPCConnectionProvider *_connectionProvider;
    MTMetrics *_metrics;
    MTAlarmCache *_cache;
    NSNotificationCenter *_notificationCenter;
}

@property (strong, nonatomic) MTAlarmCache *cache; // @synthesize cache=_cache;
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
@property (strong, nonatomic) MTAlarmManagerExportedObject *exportedObject; // @synthesize exportedObject=_exportedObject;
@property (strong, nonatomic) MTMetrics *metrics; // @synthesize metrics=_metrics;
@property (strong, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;

+ (id)_filteredAlarms:(id)arg1 afterDate:(id)arg2 maxCount:(unsigned long long)arg3 filter:(CDUnknownBlockType)arg4;
+ (id)assistantSyncNotificationName;
+ (id)daySettingToString:(unsigned long long)arg1 longVersion:(BOOL)arg2 everyWeekdayVersion:(BOOL)arg3 showNever:(BOOL)arg4;
+ (void)warmUp;
- (void).cxx_destruct;
- (void)_getCachedAlarmsWithFuture:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)_sortedNextAlarmsAfterDate:(id)arg1 includeSleepAlarm:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3;
- (id)addAlarm:(id)arg1;
- (id)alarmAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmCount;
- (unsigned long long)alarmCountIncludingSleepAlarm:(BOOL)arg1;
- (id)alarmWithIDString:(id)arg1;
- (id)alarms;
- (id)alarmsIncludingSleepAlarm:(BOOL)arg1;
- (id)alarmsSync;
- (id)alarmsSyncIncludingSleepAlarm:(BOOL)arg1;
- (void)checkIn;
- (void)dealloc;
- (id)dismissAlarmWithIdentifier:(id)arg1;
- (id)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2;
- (unsigned long long)firingAlarmCount;
- (unsigned long long)indexForAlarm:(id)arg1;
- (id)init;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithMetrics:(id)arg1;
- (id)nextAlarm;
- (id)nextAlarmSync;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeBedtimeNotification:(BOOL)arg3;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeBedtimeNotification:(BOOL)arg3;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4;
- (id)nextAlarmsInRange:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3;
- (id)nextAlarmsInRange:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4;
- (id)nextAlarmsInRangeSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3;
- (id)nextAlarmsInRangeSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(BOOL)arg3 includeBedtimeNotification:(BOOL)arg4;
- (void)reconnect;
- (id)removeAlarm:(id)arg1;
- (id)sleepAlarm;
- (id)sleepAlarmSync;
- (id)snoozeAlarmWithIdentifier:(id)arg1;
- (id)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2;
- (id)updateAlarm:(id)arg1;

@end


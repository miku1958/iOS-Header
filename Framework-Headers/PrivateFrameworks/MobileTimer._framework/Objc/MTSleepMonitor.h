//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTAgentNotificationListener-Protocol.h>
#import <MobileTimer/MTAlarmObserver-Protocol.h>

@class CMSleepData, CMSleepTracker, MTAlarmScheduler, MTAlarmStorage, MTSleepMetrics, NSString;
@protocol NAScheduler;

@interface MTSleepMonitor : NSObject <MTAlarmObserver, MTAgentNotificationListener, MTAgentDiagnosticDelegate>
{
    BOOL _monitoring;
    id<NAScheduler> _serializer;
    MTSleepMetrics *_sleepMetrics;
    MTAlarmStorage *_alarmStorage;
    MTAlarmScheduler *_alarmScheduler;
    CMSleepTracker *_sleepTracker;
    CMSleepData *_lastRecord;
    CDUnknownBlockType _currentDateProvider;
}

@property (strong, nonatomic) MTAlarmScheduler *alarmScheduler; // @synthesize alarmScheduler=_alarmScheduler;
@property (strong, nonatomic) MTAlarmStorage *alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property (copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CMSleepData *lastRecord; // @synthesize lastRecord=_lastRecord;
@property (nonatomic) BOOL monitoring; // @synthesize monitoring=_monitoring;
@property (strong, nonatomic) id<NAScheduler> serializer; // @synthesize serializer=_serializer;
@property (strong, nonatomic) MTSleepMetrics *sleepMetrics; // @synthesize sleepMetrics=_sleepMetrics;
@property (strong, nonatomic) CMSleepTracker *sleepTracker; // @synthesize sleepTracker=_sleepTracker;
@property (readonly) Class superclass;

+ (long long)_sleepMonitorWindowInMinutes;
- (void).cxx_destruct;
- (void)_beginMonitoring;
- (void)_checkMonitoring;
- (id)_lookupCurrentSleepMonitorWindow;
- (id)_lookupSleepMonitorWindowForDate:(id)arg1;
- (id)_nextScheduledWakeUpAlarmForDate:(id)arg1;
- (void)_queue_checkForOutOfBedEventInData:(id)arg1;
- (void)_queue_handleEarlyWakeUp;
- (void)_queue_handleSleepTrackingEvent;
- (void)_queue_handleTestWakeup;
- (void)_scheduleWakeUpForMonitorOnDate:(id)arg1;
- (void)_stopMonitoring;
- (void)beginMonitoring;
- (void)checkMonitoring;
- (void)handleNotification:(id)arg1;
- (BOOL)handlesNotification:(id)arg1;
- (id)initWithAlarmStorage:(id)arg1 alarmScheduler:(id)arg2 sleepMetrics:(id)arg3;
- (id)initWithAlarmStorage:(id)arg1 alarmScheduler:(id)arg2 sleepMetrics:(id)arg3 sleepTracker:(id)arg4 currentDateProvider:(CDUnknownBlockType)arg5;
- (void)printDiagnostics;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)stopMonitoring;
- (void)userWentToSleep:(id)arg1;
- (void)userWokeUp:(id)arg1;
- (void)userWokeUpEarly:(id)arg1;

@end


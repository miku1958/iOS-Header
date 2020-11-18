//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, EKTimedEventStorePurger, NSDate, NSDateFormatter, NSMutableDictionary, NSString, NSTimer, RTRoutineManager;
@protocol OS_dispatch_queue;

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate>
{
    int _lastDBSequence;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_nextFireDate;
    NSDate *_lastCheckpoint;
    BOOL _populating;
    NSDate *_populateStart;
    NSTimer *_syncTimer;
    BOOL _pendingChanges;
    BOOL _needsAlarmTablePopulation;
    BOOL _fencesNeedAdjusted;
    NSDateFormatter *_dateFormatter;
    CLLocationManager *_locationManager;
    RTRoutineManager *_routineManager;
    NSDate *_tomorrow;
    BOOL _includeRefiringAlarmsForInitialReschedule;
    BOOL _refirePastAlarmsForInitialUpdate;
    NSMutableDictionary *_monitoredRegions;
    BOOL _shouldUpdateWithForceForAlarmTable;
    BOOL _shouldUpdateWithForceForFences;
    BOOL _shouldUpdateWithForceForVehicleTriggers;
    BOOL _monitoringForConnections;
    BOOL _monitoringForDisconnections;
    long long _vehicleConnectionState;
    EKTimedEventStorePurger *_timedEventStorePurger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_publisherBulletinIDForReminder:(id)arg1;
+ (id)_publisherBulletinIDForTask:(void *)arg1;
+ (id)_publisherBulletinIDForTaskUniqueIdentifier:(id)arg1;
+ (id)requestedDarwinNotifications;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_adjustFences:(id)arg1;
- (void)_adjustVehicleTriggersWithEventStore:(id)arg1;
- (id)_alertInfoAlarmIDFromEKAlarm:(id)arg1;
- (id)_alertInfoAlarmIDFromSideAlarm:(id)arg1;
- (BOOL)_allowConservativeEntry;
- (BOOL)_allowVehicleTrigger;
- (void)_calendarNotificationSettingChanged;
- (void)_databaseChanged;
- (id)_dateFormatter;
- (id)_debugStringForVehicleConnectionState:(long long)arg1;
- (id)_eventStore;
- (BOOL)_haveAlarmsChanged:(id)arg1;
- (id)_insertSideAlarmObjectForVehicleTriggerAlarm:(id)arg1 forReminder:(id)arg2 withDelay:(double)arg3 eventStore:(id)arg4 context:(id)arg5;
- (BOOL)_isAlarmAcknowledgedWithAcknowledgedDate:(id)arg1 fireDate:(id)arg2;
- (BOOL)_isDataProtected;
- (void)_killSyncTimer;
- (void)_killTimer;
- (void)_locationDaemonDidLaunch;
- (void)_motionUpdatedWithConnectionState:(long long)arg1 activity:(id)arg2;
- (void)_notifyAlarmsFired:(id)arg1;
- (BOOL)_populateAlarmTable:(id)arg1;
- (void)_populateFinished;
- (void)_protectedDataDidBecomeAvailable;
- (void)_proximityAlertTriggered:(id)arg1 entered:(BOOL)arg2;
- (void)_removeAllFences;
- (void)_removeAllFencesSynch;
- (void)_removeStaleRefiringAlarmsWithEventStore:(id)arg1;
- (void)_rescheduleTimer;
- (void)_resetSyncTimer;
- (void)_setupLocationManager;
- (BOOL)_shouldAdjustFencesWithStatus:(int)arg1;
- (BOOL)_shouldRefireAlarms;
- (BOOL)_shouldUseCoreRoutine;
- (void)_simulatedOffsetChanged:(id)arg1;
- (void)_storeAlarms:(id)arg1 nextScheduleLimit:(id)arg2 eventStore:(id)arg3;
- (id)_stringForAuthorizationStatus:(int)arg1;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_timeDidChangeSignificantly;
- (void)_timeZoneChanged:(id)arg1;
- (void)_timerFired;
- (void)_updateRegionMonitoringForRegion:(id)arg1 withLocationOfInterest:(id)arg2 forLocation:(struct CLLocationCoordinate2D)arg3;
- (void)_updateWithForceForAlarmTable:(BOOL)arg1 forFences:(BOOL)arg2 forVehicleTriggers:(BOOL)arg3;
- (void)_vehicleTriggerFired:(BOOL)arg1;
- (void)dealloc;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)handleDarwinNotification:(id)arg1;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)start;

@end


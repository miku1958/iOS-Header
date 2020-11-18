//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAlarmScheduleDelegate-Protocol.h>
#import <MobileTimer/MTAlarmStorage-Protocol.h>

@class MTAlarm, MTAlarmMigrator, MTAlarmScheduler, NSArray, NSDate, NSHashTable, NSMutableArray, NSString;
@protocol MTPersistence, NAScheduler;

@interface MTAlarmStorage : NSObject <MTAlarmScheduleDelegate, MTAlarmStorage>
{
    MTAlarmScheduler *_scheduler;
    NSMutableArray *_orderedAlarms;
    MTAlarm *_sleepAlarm;
    NSDate *_lastModifiedDate;
    id<NAScheduler> _serializer;
    NSHashTable *_observers;
    MTAlarmMigrator *_migrator;
    id<MTPersistence> _persistence;
    CDUnknownBlockType _currentDateProvider;
}

@property (readonly, nonatomic) NSArray *alarms;
@property (readonly, nonatomic) NSArray *allAlarms;
@property (readonly, copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property (strong, nonatomic) MTAlarmMigrator *migrator; // @synthesize migrator=_migrator;
@property (readonly, nonatomic) MTAlarm *nextAlarm;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (strong, nonatomic) NSMutableArray *orderedAlarms; // @synthesize orderedAlarms=_orderedAlarms;
@property (strong, nonatomic) id<MTPersistence> persistence; // @synthesize persistence=_persistence;
@property (weak, nonatomic) MTAlarmScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property (strong, nonatomic) id<NAScheduler> serializer; // @synthesize serializer=_serializer;
@property (strong, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property (readonly) Class superclass;

+ (id)_alarmsByMergingAlarms:(id)arg1 withAlarms:(id)arg2 addedAlarms:(id)arg3 updatedAlarms:(id)arg4;
+ (id)_diagnosticDictionaryForAlarm:(id)arg1;
+ (id)alarmsByMergingAlarms:(id)arg1 withAlarms:(id)arg2;
- (void).cxx_destruct;
- (id)_applyNecessaryChangesFromOldAlarm:(id)arg1 currentAlarm:(id)arg2;
- (id)_cleanUpForInternalBuild:(id)arg1;
- (id)_cleanUpSleepAlarmRepeat:(id)arg1;
- (id)_cleanUpSnoozeFireDate:(id)arg1;
- (id)_diagnosticAlarmDictionary;
- (void)_loadAlarmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_notifyObserversForAlarmAdd:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmChange:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmDismiss:(id)arg1 dismissAction:(unsigned long long)arg2 source:(id)arg3;
- (void)_notifyObserversForAlarmFire:(id)arg1 triggerType:(unsigned long long)arg2 source:(id)arg3;
- (void)_notifyObserversForAlarmRemoval:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmSnooze:(id)arg1 snoozeAction:(unsigned long long)arg2 source:(id)arg3;
- (void)_notifyObserversForNextAlarmChange:(id)arg1 source:(id)arg2;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)_queuePersistAlarm:(id)arg1 replacingAlarm:(id)arg2;
- (void)_queue_actuallyRemoveAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_addAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (id)_queue_alarmMatchingAlarm:(id)arg1;
- (id)_queue_alarmMatchingAlarmIdentifier:(id)arg1;
- (id)_queue_allAlarms;
- (void)_queue_dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4 source:(id)arg5;
- (BOOL)_queue_hasMatchingAlarm:(id)arg1;
- (void)_queue_mergeAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (void)_queue_persistAlarms;
- (void)_queue_removeAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_removeAlarmWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_removeAllAlarmsForSource:(id)arg1;
- (void)_queue_resetAlarmsTo:(id)arg1 sleepAlarm:(id)arg2;
- (void)_queue_setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (void)_queue_setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3 persist:(BOOL)arg4 notify:(BOOL)arg5;
- (void)_queue_snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4 source:(id)arg5;
- (void)_queue_sortAlarms;
- (id)_queue_updateAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)addAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3 source:(id)arg4;
- (void)dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4 source:(id)arg5;
- (id)gatherDiagnostics;
- (void)getAlarmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleF5Reset;
- (id)init;
- (id)initWithPersistence:(id)arg1;
- (id)initWithPersistence:(id)arg1 migrator:(id)arg2 scheduler:(id)arg3 currentDateProvider:(CDUnknownBlockType)arg4;
- (void)loadAlarms;
- (void)loadAlarmsSync;
- (void)mergeAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (void)printDiagnostics;
- (void)registerObserver:(id)arg1;
- (void)removeAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)removeAlarmWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)removeAllAlarmsForSource:(id)arg1;
- (void)scheduler:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)scheduler:(id)arg1 didFireAlarm:(id)arg2;
- (void)setAllAlarms:(id)arg1 sleepAlarm:(id)arg2 source:(id)arg3;
- (void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3 source:(id)arg4;
- (void)snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4 source:(id)arg5;
- (void)updateAlarm:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (id)updateBedTimeDNDForAlarm:(id)arg1;

@end


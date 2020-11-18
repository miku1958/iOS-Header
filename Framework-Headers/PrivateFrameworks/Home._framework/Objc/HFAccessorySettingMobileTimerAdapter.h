//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAccessorySettingAdapter.h>

@class HMAccessoryCollectionSetting, NAFuture, NSHashTable, NSMutableSet, NSSet;

@interface HFAccessorySettingMobileTimerAdapter : HFAccessorySettingAdapter
{
    NAFuture *_alarmManagerForSynchronizationFuture;
    NSHashTable *_observers;
    NAFuture *_setupAccessoryAdapterModeFuture;
    NSMutableSet *_internalAlarmsBeingAdded;
    NSMutableSet *_internalAlarmsBeingRemoved;
    NSMutableSet *_internalAlarmsBeingUpdated;
}

@property (readonly, nonatomic) HMAccessoryCollectionSetting *alarmCollectionSetting;
@property (strong, nonatomic) NAFuture *alarmManagerForSynchronizationFuture; // @synthesize alarmManagerForSynchronizationFuture=_alarmManagerForSynchronizationFuture;
@property (readonly, copy, nonatomic) NSSet *alarmsWithPendingEdits;
@property (readonly, copy, nonatomic) NSMutableSet *internalAlarmsBeingAdded; // @synthesize internalAlarmsBeingAdded=_internalAlarmsBeingAdded;
@property (readonly, copy, nonatomic) NSMutableSet *internalAlarmsBeingRemoved; // @synthesize internalAlarmsBeingRemoved=_internalAlarmsBeingRemoved;
@property (readonly, copy, nonatomic) NSMutableSet *internalAlarmsBeingUpdated; // @synthesize internalAlarmsBeingUpdated=_internalAlarmsBeingUpdated;
@property (readonly, nonatomic) BOOL isAdapterReady;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (readonly, nonatomic) NAFuture *setupAccessoryAdapterModeFuture; // @synthesize setupAccessoryAdapterModeFuture=_setupAccessoryAdapterModeFuture;

- (void).cxx_destruct;
- (void)_alarmWasAdded:(id)arg1;
- (void)_alarmWasDeleted:(id)arg1;
- (void)_alarmWasUpdated:(id)arg1;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (void)_notifyObserversOfUpdates;
- (void)_respondToAlarmManagerUpdate;
- (void)_setupDebugHandler;
- (id)_synchronizeHomeKitToMobileTimer;
- (id)_synchronizeMobileTimerToHomeKitWithChangeType:(unsigned long long)arg1;
- (void)accessorySettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)addAlarm:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)alarmCollectionSettingFuture;
- (id)alarmManagerAlarms;
- (id)alarmSettingsCurrentItemsFuture;
- (id)allAlarms;
- (id)allAlarmsFuture;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(CDUnknownBlockType)arg4;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (id)initWithMediaProfileContainer:(id)arg1 mode:(unsigned long long)arg2;
- (id)removeAlarm:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)updateAlarm:(id)arg1;

@end

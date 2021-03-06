//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPNotificationObserver-Protocol.h>
#import <SleepDaemon/HDSPSource-Protocol.h>

@class HDSPEnvironment, HKSPObserverSet, NPSManager, NSString;
@protocol HDSPSource, HKSPUserDefaults;

@interface HDSPSleepStorage : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware, HDSPSource>
{
    HDSPEnvironment *_environment;
    HKSPObserverSet *_observers;
    id<HKSPUserDefaults> _userDefaults;
    CDUnknownBlockType _perGizmoDefaultsProvider;
    id<HKSPUserDefaults> _perGizmoDefaults;
    NPSManager *_npsManager;
}

@property (readonly, nonatomic) unsigned long long dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL needsMigration;
@property (readonly, nonatomic) NPSManager *npsManager; // @synthesize npsManager=_npsManager;
@property (readonly, nonatomic) HKSPObserverSet *observers; // @synthesize observers=_observers;
@property (readonly, nonatomic) id<HKSPUserDefaults> perGizmoDefaults; // @synthesize perGizmoDefaults=_perGizmoDefaults;
@property (readonly, copy, nonatomic) CDUnknownBlockType perGizmoDefaultsProvider; // @synthesize perGizmoDefaultsProvider=_perGizmoDefaultsProvider;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<HDSPSource> targetSource;
@property (readonly, nonatomic) id<HKSPUserDefaults> userDefaults; // @synthesize userDefaults=_userDefaults;

+ (CDUnknownBlockType)perGizmoDefaultsProvider;
- (void).cxx_destruct;
- (id)_loadObjectOfClass:(Class)arg1 propertiesToLoad:(id)arg2 error:(id *)arg3;
- (id)_loadObjectOfClass:(Class)arg1 propertiesToLoad:(id)arg2 perGizmoProperties:(id)arg3 perGizmoDefaultValues:(id)arg4 error:(id *)arg5;
- (BOOL)_removeObjectProperties:(id)arg1 propertiesToSync:(id)arg2 error:(id *)arg3;
- (BOOL)_removeObjectProperties:(id)arg1 propertiesToSync:(id)arg2 perGizmoProperties:(id)arg3 error:(id *)arg4;
- (BOOL)_saveObject:(id)arg1 propertiesToSave:(id)arg2 propertiesToSync:(id)arg3 error:(id *)arg4;
- (BOOL)_saveObject:(id)arg1 propertiesToSave:(id)arg2 propertiesToSync:(id)arg3 perGizmoProperties:(id)arg4 error:(id *)arg5;
- (BOOL)_saveObjectChanges:(id)arg1 propertiesToSave:(id)arg2 propertiesToSync:(id)arg3 perGizmoProperties:(id)arg4 versionKey:(id)arg5 currentVersion:(unsigned long long)arg6 error:(id *)arg7;
- (BOOL)_saveObjectChanges:(id)arg1 propertiesToSave:(id)arg2 propertiesToSync:(id)arg3 versionKey:(id)arg4 currentVersion:(unsigned long long)arg5 error:(id *)arg6;
- (void)_synchronizeDefaults;
- (void)_synchronizeDefaultsForKeys:(id)arg1 perGizmoKeys:(id)arg2;
- (void)_updateDefaultsAndKeysToSync:(id)arg1 perGizmoKeysToSync:(id)arg2 propertiesToSync:(id)arg3 perGizmoProperties:(id)arg4 object:(id)arg5 key:(id)arg6;
- (void)addObserver:(id)arg1;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)handleActivePairedDeviceDidChange;
- (id)handleExternalSync;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 perGizmoDefaultsProvider:(CDUnknownBlockType)arg2 npsManager:(id)arg3;
- (id)loadSleepEventRecord:(id *)arg1;
- (id)loadSleepSchedule:(id *)arg1;
- (id)loadSleepScheduleModel:(id *)arg1;
- (id)loadSleepSettings:(id *)arg1;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (void)removeObserver:(id)arg1;
- (BOOL)removeSleepEventRecordWithError:(id *)arg1;
- (BOOL)removeSleepScheduleWithError:(id *)arg1;
- (BOOL)removeSleepSettingsWithError:(id *)arg1;
- (BOOL)saveSleepEventRecord:(id)arg1 error:(id *)arg2;
- (BOOL)saveSleepEventRecordChanges:(id)arg1 error:(id *)arg2;
- (BOOL)saveSleepSchedule:(id)arg1 error:(id *)arg2;
- (BOOL)saveSleepScheduleChanges:(id)arg1 error:(id *)arg2;
- (BOOL)saveSleepScheduleModel:(id)arg1 error:(id *)arg2;
- (BOOL)saveSleepSettings:(id)arg1 error:(id *)arg2;
- (BOOL)saveSleepSettingsChanges:(id)arg1 error:(id *)arg2;

@end


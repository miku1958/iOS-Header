//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKSPSleepEventRecord, HKSPSleepSchedule, HKSPSleepSettings;

__attribute__((visibility("hidden")))
@interface HKSPSleepStoreCache : NSObject
{
    BOOL _sleepScheduleNeedsUpdate;
    BOOL _sleepSettingsNeedsUpdate;
    BOOL _sleepEventRecordNeedsUpdate;
    BOOL _sleepScheduleStateNeedsUpdate;
    BOOL _sleepModeNeedsUpdate;
    struct os_unfair_lock_s _cacheLock;
    HKSPSleepSchedule *_sleepSchedule;
    HKSPSleepSettings *_sleepSettings;
    HKSPSleepEventRecord *_sleepEventRecord;
    unsigned long long _sleepScheduleState;
    long long _sleepMode;
}

@property (readonly, nonatomic) struct os_unfair_lock_s cacheLock; // @synthesize cacheLock=_cacheLock;
@property (readonly, copy, nonatomic) HKSPSleepEventRecord *sleepEventRecord; // @synthesize sleepEventRecord=_sleepEventRecord;
@property (readonly, nonatomic) BOOL sleepEventRecordNeedsUpdate; // @synthesize sleepEventRecordNeedsUpdate=_sleepEventRecordNeedsUpdate;
@property (readonly, nonatomic) long long sleepMode; // @synthesize sleepMode=_sleepMode;
@property (readonly, nonatomic) BOOL sleepModeNeedsUpdate; // @synthesize sleepModeNeedsUpdate=_sleepModeNeedsUpdate;
@property (readonly, copy, nonatomic) HKSPSleepSchedule *sleepSchedule; // @synthesize sleepSchedule=_sleepSchedule;
@property (readonly, nonatomic) BOOL sleepScheduleNeedsUpdate; // @synthesize sleepScheduleNeedsUpdate=_sleepScheduleNeedsUpdate;
@property (readonly, nonatomic) unsigned long long sleepScheduleState; // @synthesize sleepScheduleState=_sleepScheduleState;
@property (readonly, nonatomic) BOOL sleepScheduleStateNeedsUpdate; // @synthesize sleepScheduleStateNeedsUpdate=_sleepScheduleStateNeedsUpdate;
@property (readonly, copy, nonatomic) HKSPSleepSettings *sleepSettings; // @synthesize sleepSettings=_sleepSettings;
@property (readonly, nonatomic) BOOL sleepSettingsNeedsUpdate; // @synthesize sleepSettingsNeedsUpdate=_sleepSettingsNeedsUpdate;

- (void).cxx_destruct;
- (void)_locked_purgeCachedSleepEventRecord;
- (void)_locked_purgeCachedSleepMode;
- (void)_locked_purgeCachedSleepSchedule;
- (void)_locked_purgeCachedSleepScheduleState;
- (void)_locked_purgeCachedSleepSettings;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)cachedSleepEventRecordWithMissHandler:(CDUnknownBlockType)arg1;
- (id)cachedSleepModeWithMissHandler:(CDUnknownBlockType)arg1;
- (id)cachedSleepScheduleStateWithMissHandler:(CDUnknownBlockType)arg1;
- (id)cachedSleepScheduleWithMissHandler:(CDUnknownBlockType)arg1;
- (id)cachedSleepSettingsWithMissHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)purgeCache;
- (void)purgeCachedSleepEventRecord;
- (void)purgeCachedSleepMode;
- (void)purgeCachedSleepSchedule;
- (void)purgeCachedSleepScheduleState;
- (void)purgeCachedSleepSettings;
- (void)updateCachedSleepEventRecord:(id)arg1;
- (void)updateCachedSleepMode:(long long)arg1;
- (void)updateCachedSleepSchedule:(id)arg1;
- (void)updateCachedSleepScheduleState:(unsigned long long)arg1;
- (void)updateCachedSleepSettings:(id)arg1;

@end


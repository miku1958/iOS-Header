//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDPersistentStore, HMFUnfairLock, NSDate, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDEventCountersManager : HMFObject
{
    HMFUnfairLock *_lock;
    BOOL _saving;
    NSMutableDictionary *_eventCounters;
    NSDate *_lastSaveTime;
    unsigned long long _saveCount;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDPersistentStore *_persistentStore;
    unsigned long long _savePeriod;
}

@property (strong, nonatomic) NSMutableDictionary *eventCounters; // @synthesize eventCounters=_eventCounters;
@property (strong, nonatomic) NSDate *lastSaveTime; // @synthesize lastSaveTime=_lastSaveTime;
@property (readonly) HMDPersistentStore *persistentStore; // @synthesize persistentStore=_persistentStore;
@property (nonatomic) unsigned long long saveCount; // @synthesize saveCount=_saveCount;
@property (nonatomic) unsigned long long savePeriod; // @synthesize savePeriod=_savePeriod;
@property (nonatomic, getter=isSaving) BOOL saving; // @synthesize saving=_saving;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)sharedEventCountersManager;
- (void).cxx_destruct;
- (id)_fetchAllEventCounters;
- (unsigned long long)_fetchEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;
- (id)_fetchEventCountersForRequestGroup:(id)arg1;
- (void)_incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 withValue:(long long)arg3;
- (void)_performOnUpdate;
- (void)_resetEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;
- (void)_save;
- (void)archiveEventCountersWithEventCountersSnapshot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dumpState;
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)arg1;
- (id)fetchAllEventCounters;
- (unsigned long long)fetchEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;
- (id)fetchEventCountersForRequestGroup:(id)arg1;
- (void)forceSave;
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 withValue:(unsigned long long)arg3;
- (id)init;
- (id)initWithPersistentStore:(id)arg1;
- (void)logDiskWriteState;
- (void)resetEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;
- (void)resetEventCountersForRequestGroup:(id)arg1;
- (id)unarchivedEventCounters;

@end


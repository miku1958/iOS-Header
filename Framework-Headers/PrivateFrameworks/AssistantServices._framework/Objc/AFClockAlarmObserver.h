//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClockItemStorageDelegate-Protocol.h>
#import <AssistantServices/AFInvalidating-Protocol.h>

@class AFClockAlarmSnapshot, AFClockItemStorage, NSHashTable, NSMutableOrderedSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface AFClockAlarmObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_listeners;
    AFClockAlarmSnapshot *_alarmSnapshot;
    AFClockItemStorage *_alarmStorage;
    NSMutableOrderedSet *_notifiedFiringAlarmIDs;
    NSUUID *_alarmsChangedToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (id)_alarmSnapshot;
- (void)_enumerateListenersUsingBlock:(CDUnknownBlockType)arg1;
- (void)_fetchAlarmsForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleFetchAlarmsForReason:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setUp;
- (void)_tearDown;
- (void)addListener:(id)arg1;
- (void)alarmFired:(id)arg1;
- (void)alarmsAdded:(id)arg1;
- (void)alarmsChanged:(id)arg1;
- (void)alarmsRemoved:(id)arg1;
- (void)alarmsUpdated:(id)arg1;
- (void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4;
- (void)dealloc;
- (void)firingAlarmChanged:(id)arg1;
- (void)firingAlarmDismissed:(id)arg1;
- (void)getAlarmSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)getFiringAlarmIDsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)invalidate;
- (void)removeListener:(id)arg1;
- (void)stateReset:(id)arg1;

@end

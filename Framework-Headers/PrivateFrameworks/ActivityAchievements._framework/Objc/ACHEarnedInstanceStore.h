//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/ACHEarnedInstanceEntitySyncedEarnedInstancesObserver-Protocol.h>

@class ACHEarnedInstanceDuplicateUtility, ACHEarnedInstanceEntityWrapper, HDProfile, NSArray, NSHashTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface ACHEarnedInstanceStore : NSObject <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver>
{
    BOOL _initialEarnedInstanceFetchComplete;
    unsigned char _device;
    HDProfile *_profile;
    ACHEarnedInstanceEntityWrapper *_entityWrapper;
    ACHEarnedInstanceDuplicateUtility *_duplicateUtility;
    NSObject<OS_dispatch_queue> *_earnedInstanceQueue;
    NSMutableArray *_allEarnedInstances;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
}

@property (strong, nonatomic) NSMutableArray *allEarnedInstances; // @synthesize allEarnedInstances=_allEarnedInstances;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char device; // @synthesize device=_device;
@property (strong, nonatomic) ACHEarnedInstanceDuplicateUtility *duplicateUtility; // @synthesize duplicateUtility=_duplicateUtility;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *earnedInstanceQueue; // @synthesize earnedInstanceQueue=_earnedInstanceQueue;
@property (readonly, nonatomic) NSArray *earnedInstances;
@property (strong, nonatomic) ACHEarnedInstanceEntityWrapper *entityWrapper; // @synthesize entityWrapper=_entityWrapper;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL initialEarnedInstanceFetchComplete; // @synthesize initialEarnedInstanceFetchComplete=_initialEarnedInstanceFetchComplete;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyInitialFetchComplete;
- (void)_notifyObserversOfAddedEarnedInstances:(id)arg1;
- (void)_notifyObserversOfRemovedEarnedInstances:(id)arg1;
- (BOOL)_queue_addEarnedInstances:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 triggerSync:(BOOL)arg4 error:(id *)arg5;
- (id)_queue_addEarnedInstancesWithSingleTemplate:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id *)arg4;
- (void)_queue_appendOrInsertEarnedInstanceToInMemoryStore:(id)arg1;
- (id)_queue_earnedInstancesArray;
- (BOOL)_queue_removeEarnedInstances:(id)arg1 error:(id *)arg2;
- (BOOL)addEarnedInstances:(id)arg1 databaseContext:(id)arg2 error:(id *)arg3;
- (BOOL)addEarnedInstances:(id)arg1 error:(id *)arg2;
- (void)addObserver:(id)arg1;
- (BOOL)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)arg1 provenance:(long long)arg2;
- (id)earnedInstancesForTemplateUniqueName:(id)arg1;
- (id)initWithProfile:(id)arg1 earnedInstanceEntityWrapper:(id)arg2 earnedInstanceDuplicateUtility:(id)arg3 device:(unsigned char)arg4;
- (void)loadAllEarnedInstancesFromDatabaseIfNecessary;
- (BOOL)removeAllEarnedInstancesWithError:(id *)arg1;
- (BOOL)removeEarnedInstances:(id)arg1 error:(id *)arg2;
- (void)removeObserver:(id)arg1;

@end


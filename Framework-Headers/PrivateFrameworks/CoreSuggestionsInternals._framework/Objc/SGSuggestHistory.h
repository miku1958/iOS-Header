//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUbiquitousKeyValueStore, SGNoCloudNSUbiquitousKeyValueStore;

@interface SGSuggestHistory : NSObject
{
    struct SGHistorySharedData *_privateShared;
    struct SGMutexSynchronizedObject<SGHistorySharedData> *_shared;
    NSUbiquitousKeyValueStore *_backingKVStore;
    SGNoCloudNSUbiquitousKeyValueStore *_noCloudFakeBackingKVStore;
}

@property (readonly, nonatomic) NSUbiquitousKeyValueStore *kvs;

+ (id)newTestingInstanceWithSharedKVS:(id)arg1;
+ (void)reset;
+ (void)resetNoFlush;
+ (id)sharedSuggestHistory;
- (void).cxx_destruct;
- (BOOL)_anyHash:(id)arg1 inSet:(id)arg2;
- (id)_hashesForConfirmedField:(id)arg1 value:(id)arg2 storageEvent:(id)arg3;
- (void)_setHashes:(id)arg1 forKey:(id)arg2;
- (void)_tellObserversHashesDidChange;
- (void)addObserver:(id)arg1;
- (void)confirmContact:(id)arg1;
- (void)confirmEvent:(id)arg1;
- (void)confirmEventFromExternalDevice:(id)arg1;
- (void)confirmFieldValues:(id)arg1 forStorageEvent:(id)arg2;
- (id)confirmHashesForOpaqueKey:(id)arg1 withCreationTime:(struct SGUnixTimestamp_)arg2;
- (void)confirmOrRejectCuratedDetail:(id)arg1 forContact:(id)arg2;
- (void)confirmOrRejectDetail:(id)arg1 forContact:(id)arg2;
- (void)confirmOrRejectDetailHashes:(id)arg1;
- (void)confirmOrRejectRecordForContact:(id)arg1;
- (void)confirmStorageEvent:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)handleSyncedDataChanged:(id)arg1;
- (BOOL)hasConfirmedField:(id)arg1 value:(id)arg2 forStorageEvent:(id)arg3;
- (BOOL)hasContact:(id)arg1;
- (BOOL)hasContactDetail:(id)arg1 forContact:(id)arg2;
- (BOOL)hasStorageContact:(id)arg1;
- (id)hashesForContact:(id)arg1;
- (id)hashesForContactDetail:(id)arg1 fromContact:(id)arg2;
- (id)hashesForCuratedContactDetail:(id)arg1 fromContact:(id)arg2;
- (id)hashesForOpaqueKey:(id)arg1;
- (id)hashesForPseudoEventByKey:(id)arg1;
- (id)hashesForStorageContact:(id)arg1;
- (id)identityBasedHashesForPseudoEvent:(id)arg1 withCreationTime:(struct SGUnixTimestamp_)arg2;
- (id)identitySalt;
- (id)init;
- (id)initWithKVS:(id)arg1;
- (BOOL)isConfirmedEvent:(id)arg1;
- (BOOL)isConfirmedEvent:(id)arg1 withScopeLock:(const SGMutexSynchronizedPtr_22985514 *)arg2;
- (BOOL)isRejectedEvent:(id)arg1;
- (BOOL)isRejectedEvent:(id)arg1 withScopeLock:(const SGMutexSynchronizedPtr_22985514 *)arg2;
- (BOOL)isUpdatableContact:(id)arg1;
- (BOOL)isValidNewEvent:(id)arg1;
- (BOOL)isValidSuggestion:(id)arg1;
- (id)keysForContact:(id)arg1;
- (id)keysForContactDetail:(id)arg1 ofContact:(id)arg2;
- (id)keysForCuratedContactDetail:(id)arg1 ofContact:(id)arg2;
- (id)keysForStorageContact:(id)arg1;
- (id)loadResetInfo;
- (id)mutableSetForKey:(id)arg1;
- (void)pushAll:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)pushConfirmedEventFields:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)pushConfirmedEvents:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)pushContacts:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)pushDontUpdate:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)pushEmptyHashesForTestingKey:(id)arg1;
- (void)pushRejectedEvents:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)pushResetInfo:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)pushStorageDetails:(const SGMutexSynchronizedPtr_22985514 *)arg1;
- (void)rejectContact:(id)arg1;
- (void)rejectEvent:(id)arg1;
- (void)rejectEventFromExternalDevice:(id)arg1;
- (id)rejectHashesForOpaqueKey:(id)arg1;
- (void)rejectStorageEvent:(id)arg1;
- (void)reset;
- (void)resetNoFlush;
- (id)setForKey:(id)arg1;
- (void)setInternalStateAccordingToKVS;
- (void)writeAndPushConfirmedEventHashes:(id)arg1;
- (void)writeAndPushRejectedEventHashes:(id)arg1;

@end


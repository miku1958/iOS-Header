//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKZonePruningAssistant-Protocol.h>
#import <NewsCore/FCCKZoneRestorationSource-Protocol.h>
#import <NewsCore/FCCommandQueueDelegate-Protocol.h>
#import <NewsCore/FCJSONEncodableObjectProviding-Protocol.h>
#import <NewsCore/FCPrivateRecordSyncManagerDelegate-Protocol.h>
#import <NewsCore/FCPrivateZoneSyncManagerDelegate-Protocol.h>

@class FCAsyncSerialQueue, FCCloudContext, FCCommandQueue, FCKeyValueStore, FCPushNotificationCenter, NSArray, NSHashTable, NSString;

@interface FCPrivateDataController : NSObject <FCJSONEncodableObjectProviding, FCPrivateZoneSyncManagerDelegate, FCPrivateRecordSyncManagerDelegate, FCCommandQueueDelegate, FCCKZoneRestorationSource, FCCKZonePruningAssistant>
{
    BOOL _waitingForFirstSync;
    BOOL _preparedForUse;
    BOOL _syncingEnabled;
    FCPushNotificationCenter *_pushNotificationCenter;
    NSString *_storeDirectory;
    FCCommandQueue *_commandQueue;
    NSArray *_syncManagers;
    unsigned long long _changeCount;
    FCAsyncSerialQueue *_syncQueue;
    NSHashTable *_stateObservers;
    FCCloudContext *_context;
    NSHashTable *_observers;
    FCKeyValueStore *_localStore;
}

@property (nonatomic) unsigned long long changeCount; // @synthesize changeCount=_changeCount;
@property (strong, nonatomic) FCCommandQueue *commandQueue; // @synthesize commandQueue=_commandQueue;
@property (readonly, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property (readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (nonatomic, getter=hasBeenPreparedForUse) BOOL preparedForUse; // @synthesize preparedForUse=_preparedForUse;
@property (strong, nonatomic) FCPushNotificationCenter *pushNotificationCenter; // @synthesize pushNotificationCenter=_pushNotificationCenter;
@property (strong, nonatomic) NSHashTable *stateObservers; // @synthesize stateObservers=_stateObservers;
@property (copy, nonatomic) NSString *storeDirectory; // @synthesize storeDirectory=_storeDirectory;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *syncManagers; // @synthesize syncManagers=_syncManagers;
@property (strong, nonatomic) FCAsyncSerialQueue *syncQueue; // @synthesize syncQueue=_syncQueue;
@property (readonly, nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled;
@property (nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled; // @synthesize syncingEnabled=_syncingEnabled;
@property (getter=isWaitingForFirstSync) BOOL waitingForFirstSync; // @synthesize waitingForFirstSync=_waitingForFirstSync;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;
+ (id)desiredKeys;
+ (id)internalLocalStoreKeys;
+ (BOOL)isLocalStoreKeyInternal:(id)arg1;
+ (id)localStoreFilename;
+ (id)localStoreMigrator;
+ (unsigned long long)localStoreVersion;
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresPushNotificationSupport;
- (void).cxx_destruct;
- (id)_allKnownRecordIDsForSyncManager:(id)arg1;
- (void)_handleSyncDidResetLocalDataForSyncManager:(id)arg1;
- (void)_markAsDirtyAndNotifyObservers:(BOOL)arg1;
- (id)_newSyncState;
- (void)_notifyObservers;
- (void)_possiblySimulateCrashWithMessage:(id)arg1;
- (long long)_qualityOfServiceForFirstSync:(BOOL)arg1;
- (long long)_qualityOfServiceForNextSync;
- (void)_serialSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)_syncWithCondition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addCommandToCommandQueue:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addStateObserver:(id)arg1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (void)assertReadyForUse;
- (BOOL)canHelpPruneZoneName:(id)arg1;
- (BOOL)canHelpRestoreZoneName:(id)arg1;
- (void)createLocalStore;
- (void)dealloc;
- (void)disableSyncing;
- (void)enableSyncing;
- (void)forceSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleResetWithReplacementRecords:(id)arg1;
- (void)handleSyncCompletion;
- (void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)init;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (BOOL)isBackedByAnyRecordZoneIDsInSet:(id)arg1;
- (id)jsonEncodableObject;
- (void)loadLocalCachesFromStore;
- (void)markAsDirty;
- (void)mergeLocalStoreWithCloud;
- (void)performFirstSyncWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performFirstSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForUse;
- (id)pruneRecords:(id)arg1 forZoneName:(id)arg2;
- (long long)qualityOfServiceForNextCommandInCommandQueue:(id)arg1;
- (void)recordSyncManager:(id)arg1 stateDidChange:(id)arg2;
- (void)recordSyncManagerNotifyObservers:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeStateObserver:(id)arg1;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
- (double)softMaxRecordAgeWhenMigratingZoneName:(id)arg1;
- (unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)arg1;
- (void)syncWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)zoneSyncManager:(id)arg1 stateDidChange:(id)arg2;
- (void)zoneSyncManagerNotifyObservers:(id)arg1;

@end

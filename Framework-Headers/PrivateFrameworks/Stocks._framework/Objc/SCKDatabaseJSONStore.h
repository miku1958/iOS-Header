//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/NSFilePresenter-Protocol.h>
#import <Stocks/SCKDatabaseStore-Protocol.h>
#import <Stocks/SCKDatabaseStoreCoordinator-Protocol.h>
#import <Stocks/SCKOperationThrottlerDelegate-Protocol.h>

@class CKServerChangeToken, NSDate, NSFileCoordinator, NSHashTable, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source, SCKDatabaseStore, SCKOperationThrottler;

@interface SCKDatabaseJSONStore : NSObject <SCKOperationThrottlerDelegate, NSFilePresenter, SCKDatabaseStoreCoordinator, SCKDatabaseStore>
{
    BOOL _cloudBackupEnabled;
    BOOL _loadedFromDisk;
    BOOL _havePendingChanges;
    unsigned int _lastKnownStoreChangeTag;
    NSDate *_lastSyncDate;
    NSDate *_lastDirtyDate;
    CKServerChangeToken *_serverChangeToken;
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    NSFileCoordinator *_fileCoordinator;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_observers;
    NSMutableDictionary *_zoneStoresByName;
    NSMutableDictionary *_foreignZoneDictsByName;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<SCKOperationThrottler> _saveThrottler;
    NSObject<OS_dispatch_source> *_changeListenerSource;
    NSSet *_allowedCommandClasses;
    NSURL *_storeURL;
    unsigned long long _diskReadCount;
    unsigned long long _diskWriteCount;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (strong, nonatomic) NSSet *allowedCommandClasses; // @synthesize allowedCommandClasses=_allowedCommandClasses;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *changeListenerSource; // @synthesize changeListenerSource=_changeListenerSource;
@property (nonatomic, getter=isCloudBackupEnabled) BOOL cloudBackupEnabled; // @synthesize cloudBackupEnabled=_cloudBackupEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long diskReadCount; // @synthesize diskReadCount=_diskReadCount;
@property (readonly, nonatomic) unsigned long long diskWriteCount; // @synthesize diskWriteCount=_diskWriteCount;
@property (strong, nonatomic) NSFileCoordinator *fileCoordinator; // @synthesize fileCoordinator=_fileCoordinator;
@property (strong, nonatomic) NSMutableDictionary *foreignZoneDictsByName; // @synthesize foreignZoneDictsByName=_foreignZoneDictsByName;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL havePendingChanges; // @synthesize havePendingChanges=_havePendingChanges;
@property (copy, nonatomic) NSDate *lastDirtyDate; // @synthesize lastDirtyDate=_lastDirtyDate;
@property (nonatomic) unsigned int lastKnownStoreChangeTag; // @synthesize lastKnownStoreChangeTag=_lastKnownStoreChangeTag;
@property (copy, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property (nonatomic) BOOL loadedFromDisk; // @synthesize loadedFromDisk=_loadedFromDisk;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (readonly, strong) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (strong, nonatomic) id<SCKOperationThrottler> saveThrottler; // @synthesize saveThrottler=_saveThrottler;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property (readonly, copy, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SCKDatabaseStore> underlyingStore;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property (strong, nonatomic) NSMutableDictionary *zoneStoresByName; // @synthesize zoneStoresByName=_zoneStoresByName;

+ (id)preferredFileURLForSchema:(id)arg1 parentDirectoryURL:(id)arg2;
- (void).cxx_destruct;
- (void)_applyCloudBackupEnabledPropertyToStoreURL;
- (id)_decodeCodableObjectOfClass:(Class)arg1 from:(id)arg2 error:(id *)arg3;
- (id)_decodeCodableObjectOfClasses:(id)arg1 from:(id)arg2 error:(id *)arg3;
- (id)_decodeDate:(id)arg1;
- (id)_encodeCodableObject:(id)arg1;
- (id)_encodeDate:(id)arg1;
- (void)_listenForChangesToFileURL:(id)arg1;
- (void)_loadFromFileURL:(id)arg1;
- (void)_reloadIfNeededFromFileURL:(id)arg1;
- (void)_saveIfNeededToFileURL:(id)arg1;
- (void)_saveToFileURL:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)flushToDiskWithTimeout:(double)arg1;
- (id)initWithSchema:(id)arg1 fileURL:(id)arg2;
- (id)initWithSchema:(id)arg1 fileURL:(id)arg2 allowedCommands:(id)arg3;
- (id)initWithSchema:(id)arg1 parentDirectoryURL:(id)arg2;
- (id)initWithSchema:(id)arg1 parentDirectoryURL:(id)arg2 allowedCommands:(id)arg3;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (void)readZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (void)reloadWithAccessor:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)writeWithAccessor:(CDUnknownBlockType)arg1;
- (void)writeZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (id)zoneStoreForSchema:(id)arg1;

@end

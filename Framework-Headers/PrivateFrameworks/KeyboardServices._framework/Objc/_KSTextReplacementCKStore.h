//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardServices/_KSTextReplacementStoreProtocol-Protocol.h>

@class NSString, _KSCloudKitManager, _KSTextReplacementCoreDataStore;
@protocol OS_dispatch_queue;

@interface _KSTextReplacementCKStore : NSObject <_KSTextReplacementStoreProtocol>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    BOOL _ckMigrationStatusOnCloud;
    BOOL _didRequestFirstPullForAccount;
    _KSTextReplacementCoreDataStore *_coreDataStore;
    _KSCloudKitManager *_cloudKitManager;
}

@property (nonatomic) BOOL ckMigrationStatusOnCloud; // @synthesize ckMigrationStatusOnCloud=_ckMigrationStatusOnCloud;
@property (strong, nonatomic) _KSCloudKitManager *cloudKitManager; // @synthesize cloudKitManager=_cloudKitManager;
@property (strong, nonatomic) _KSTextReplacementCoreDataStore *coreDataStore; // @synthesize coreDataStore=_coreDataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRequestFirstPullForAccount; // @synthesize didRequestFirstPullForAccount=_didRequestFirstPullForAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)isMigrationCompleted;
- (void).cxx_destruct;
- (void)accountDidChange:(id)arg1;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)cloudEntriesFromLocalEntries:(id)arg1;
- (id)cloudRecordIDsForLocalEntries:(id)arg1;
- (void)dealloc;
- (void)importSampleShortcutsIfNecessary;
- (id)initWithDirectoryPath:(id)arg1;
- (BOOL)isAccountAvailable;
- (id)localEntriesFromCloudEntries:(id)arg1;
- (void)pullRemoteDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pushAllLocalData;
- (void)pushLocalChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pushMigrationStatusToCloud:(BOOL)arg1;
- (void)queryCloudIfFirstPullOrAccountChanged;
- (id)queryDeletedEntries;
- (void)queryMigrationStatusOnCloudWithCallback:(CDUnknownBlockType)arg1;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)queryUpdatedLocalEntries;
- (void)recordSyncStatus;
- (void)removeAllEntries;
- (void)removeAllEntriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)textReplacementEntries;
- (id)userIdentity;

@end


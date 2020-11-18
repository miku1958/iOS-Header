//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCLowDiskDelegate-Protocol.h>

@class BRCAccountSession, NSString, br_pacer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCDiskSpaceReclaimer : NSObject <BRCLowDiskDelegate>
{
    BRCAccountSession *_session;
    BOOL _isClosed;
    br_pacer *_purgePacer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

+ (double)accessTimeDeltaForUrgency:(int)arg1;
+ (double)onDiskAccessTimeDeltaForUrgency:(int)arg1;
+ (int)urgencyForCacheDeleteUrgency:(int)arg1;
- (void).cxx_destruct;
- (void)_asyncAutovacuumIfNeeds:(id)arg1;
- (long long)_dbAutovacuumableSpaceInBytes:(id)arg1;
- (long long)_dbSizeInBytes:(id)arg1;
- (long long)_doFullVacuum:(id)arg1;
- (long long)_doIncrementalVacuum:(id)arg1 amount:(long long)arg2;
- (void)_enumerateItemsForEvictSyncWithBlock:(CDUnknownBlockType)arg1 withTimeDelta:(double)arg2 onDiskAccessTimeDelta:(double)arg3;
- (void)_enumerateItemsForEvictSyncWithBlock:(CDUnknownBlockType)arg1 withUrgency:(int)arg2;
- (long long)_evictableTimestampForDocument:(id)arg1 accessTime:(unsigned long long)arg2 modifyAccessTime:(unsigned long long *)arg3;
- (long long)_fullVacuumIfPossible:(id)arg1;
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;
- (void)_requestPurgeSpace;
- (long long)_vacuumDB:(id)arg1 amount:(long long)arg2 withUrgency:(int)arg3;
- (id)accessTimestampForDocument:(id)arg1;
- (void)close;
- (long long)computePurgableSpaceWithUrgency:(int)arg1;
- (id)computePurgeableSpaceForAllUrgencies;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (void)didAccessDocument:(id)arg1;
- (void)didUpdateMtimeOnDocument:(id)arg1;
- (void)document:(id)arg1 updatedIndexability:(BOOL)arg2;
- (BOOL)documentUpdateEvictability:(id)arg1;
- (BOOL)documentWasAccessedRecently:(id)arg1;
- (BOOL)documentWasCreated:(id)arg1;
- (BOOL)documentWasDeleted:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(BOOL)arg2;
- (BOOL)overwriteDocumentAccessTime:(id)arg1 atime:(unsigned long long)arg2;
- (BOOL)performOptimizeStorageWithTimeDelta:(double)arg1 onDiskAccessTimeDelta:(double)arg2 error:(id *)arg3;
- (long long)periodicReclaimSpace;
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;
- (void)recentDocumentsListUpdated;
- (BOOL)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;
- (BOOL)renameAndUnlinkInBackgroundItemAtRelpath:(id)arg1;
- (void)requestPurgeSpace;

@end


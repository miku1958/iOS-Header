//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCDeadlineScheduler, BRCDeadlineSource, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSString, br_pacer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCFSUploader : BRCFSSchedulerBase <BRCModule>
{
    NSMutableDictionary *_thumbnailsOperations;
    NSMutableSet *_boostedDocIDs;
    NSMutableDictionary *_stampForDocID;
    BRCDeadlineSource *_retryQueueSource;
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    br_pacer *_quotaPacer;
    br_pacer *_globalQuotaStateUpdatePacer;
    BOOL _prepareReachedMax;
    BOOL _initialKickDone;
    BOOL _isDefaultOwnerOutOfQuota;
    BRCDeadlineScheduler *_uploadsDeadlineScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isDefaultOwnerOutOfQuota; // @synthesize isDefaultOwnerOutOfQuota=_isDefaultOwnerOutOfQuota;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *thumbnailsOperationsByID; // @synthesize thumbnailsOperationsByID=_thumbnailsOperations;
@property (readonly, nonatomic) BRCDeadlineScheduler *uploadsDeadlineScheduler; // @synthesize uploadsDeadlineScheduler=_uploadsDeadlineScheduler;

- (void).cxx_destruct;
- (id)_buildItemTooLargeErrorIfNeeded:(id)arg1 syncContext:(id)arg2;
- (void)_bumpThrottleID:(long long)arg1 zone:(id)arg2 throttle:(id)arg3;
- (void)_cancelThrottleID:(long long)arg1;
- (void)_cancelThrottles:(id)arg1 state:(int)arg2;
- (void)_computeRecordForThrottleID:(long long)arg1 item:(id)arg2;
- (void)_deleteThrottleID:(long long)arg1;
- (id)_documentItemForThrottleID:(long long)arg1 operationID:(id)arg2;
- (id)_documentItemForThrottleID:(long long)arg1 stageID:(id)arg2;
- (void)_doneFetchingThumbnailForThrottleID:(id)arg1;
- (id)_duplicatePackage:(id)arg1 stageID:(id)arg2 stageName:(id)arg3 error:(id *)arg4;
- (BOOL)_finishPackageUploadWithRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id *)arg4;
- (void)_finishedUploadingItem:(id)arg1 record:(id)arg2 throttleID:(long long)arg3 stageID:(id)arg4 error:(id)arg5;
- (void)_globalQuotaStateUpdateForDefaultOwner;
- (void)_handleFileModifiedError:(id)arg1 forItem:(id)arg2;
- (unsigned long long)_minBatchSize;
- (void)_rescheduleThrottlesOutOfQuotaForDefaultOwnerWithAvailableSize:(long long)arg1;
- (void)_resumeGlobalProgressForZones:(id)arg1 queue:(id)arg2;
- (void)_scheduleQuotaFetchForDefaultOwner;
- (void)_scheduleRetries;
- (void)_setQuotaAvailableForDefaultOwner:(unsigned long long)arg1;
- (void)_startFetchThumbnail:(id)arg1 throttleID:(id)arg2;
- (id)_thumbnailOperationForThrottleID:(id)arg1;
- (unsigned long long)_thumbnailOperationsMax;
- (void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4;
- (BOOL)_updatePackageRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id *)arg4;
- (void)_updateRecord:(id)arg1 item:(id)arg2 thumbnailOperation:(id)arg3 stageID:(id)arg4;
- (void)_updateRecord:(id)arg1 throttleID:(long long)arg2 thumbnailOperation:(id)arg3 stageID:(id)arg4;
- (void)_updateThrottleID:(long long)arg1 setStageID:(id)arg2 operationID:(id)arg3;
- (void)_willTryThrottleID:(long long)arg1 zone:(id)arg2 throttle:(id)arg3 operationID:(id)arg4;
- (void)addAliasItem:(id)arg1 toUploadingItem:(id)arg2;
- (void)boostDocID:(id)arg1 item:(id)arg2;
- (void)cancel;
- (void)cancelAndCleanupItemUpload:(id)arg1;
- (void)close;
- (void)deleteThrottlesForZone:(id)arg1;
- (id)descriptionForThrottleID:(long long)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4;
- (void)finishedSyncingUpItem:(id)arg1 withOutOfQuotaError:(id)arg2;
- (BOOL)hasItemsOverQuotaForOwner:(id)arg1;
- (BOOL)hasItemsOverQuotaInZone:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (BOOL)isUploadingItem:(id)arg1;
- (void)ownerDidReceiveOutOfQuotaError:(id)arg1;
- (id)quotaAvailableForOwner:(id)arg1;
- (void)removeBoostedDocID:(id)arg1;
- (void)rescheduleThrottlesPendingInitialSyncInZone:(id)arg1;
- (void)resume;
- (void)schedule;
- (void)scheduleQuotaFetchIfNeededForOwner:(id)arg1;
- (void)scheduleQuotaStateUpdateForOwner:(id)arg1;
- (void)suspend;
- (void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;
- (void)uploadItem:(id)arg1;

@end


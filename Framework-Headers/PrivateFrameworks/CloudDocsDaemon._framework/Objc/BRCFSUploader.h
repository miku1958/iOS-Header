//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCDeadlineScheduler, BRCDeadlineToken, NSDictionary, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCFSUploader : BRCFSSchedulerBase <BRCModule>
{
    NSMutableDictionary *_thumbnailsOperations;
    BRCDeadlineToken *_retryQueueToken;
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    struct br_pacer_t *_quotaPacer;
    BOOL _prepareReachedMax;
    BOOL _initialKickDone;
    BOOL _isDefaultOwnerOutOfQuota;
    BRCDeadlineScheduler *_uploadsDeadlineScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isDefaultOwnerOutOfQuota; // @synthesize isDefaultOwnerOutOfQuota=_isDefaultOwnerOutOfQuota;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *thumbnailsOperationsByID; // @synthesize thumbnailsOperationsByID=_thumbnailsOperations;
@property (readonly, nonatomic) BRCDeadlineScheduler *uploadsDeadlineScheduler; // @synthesize uploadsDeadlineScheduler=_uploadsDeadlineScheduler;

- (void).cxx_destruct;
- (id)_buildItemTooLargeErrorIfNeeded:(id)arg1 syncContext:(id)arg2;
- (void)_cancelThrottleID:(long long)arg1;
- (void)_cancelThrottles:(id)arg1 state:(int)arg2;
- (void)_close;
- (void)_computeRecordForThrottleID:(long long)arg1 item:(id)arg2;
- (void)_deleteThrottleID:(long long)arg1 zone:(id)arg2;
- (id)_documentItemForThrottleID:(long long)arg1 operationID:(id)arg2;
- (id)_documentItemForThrottleID:(long long)arg1 stageID:(id)arg2;
- (void)_doneFetchingThumbnailForThrottleID:(id)arg1;
- (BOOL)_finishPackageUploadWithRecord:(id)arg1 item:(id)arg2 error:(id *)arg3;
- (void)_finishedUploadingItem:(id)arg1 record:(id)arg2 throttleID:(long long)arg3 error:(id)arg4;
- (void)_rescheduleThrottlesOutOfQuotaForDefaultOwnerWithAvailableSize:(long long)arg1;
- (void)_retriedThrottleID:(long long)arg1 zone:(id)arg2 throttle:(id)arg3 operationID:(id)arg4;
- (void)_schedule;
- (void)_scheduleQuotaFetchForDefaultOwner;
- (void)_scheduleRetries;
- (void)_setQuotaAvailableForDefaultOwner:(unsigned long long)arg1;
- (void)_startFetchThumbnail:(id)arg1 throttleID:(id)arg2;
- (unsigned long long)_thumbnailOperationsMax;
- (void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3;
- (BOOL)_updatePackageRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id *)arg4;
- (void)_updateRecord:(id)arg1 item:(id)arg2 thumbnailOperation:(id)arg3 stageID:(id)arg4;
- (void)_updateRecord:(id)arg1 throttleID:(long long)arg2 thumbnailOperation:(id)arg3 stageID:(id)arg4;
- (void)_updateThrottleID:(long long)arg1 setStageID:(id)arg2 operationID:(id)arg3;
- (void)addAliasItem:(id)arg1 toUploadingItem:(id)arg2;
- (void)cancelAndCleanupItemUpload:(id)arg1;
- (void)deleteThrottlesForZone:(id)arg1;
- (id)descriptionForThrottleID:(long long)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4;
- (void)finishedSyncingUpItem:(id)arg1 withOutOfQuotaError:(id)arg2;
- (BOOL)hasItemsOverQuotaForOwner:(id)arg1;
- (BOOL)hasItemsOverQuotaInZone:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (BOOL)isUploadingItem:(id)arg1;
- (void)ownerDidReceiveOutOfQuotaError:(id)arg1;
- (id)quotaAvailableForOwner:(id)arg1;
- (void)rescheduleThrottlesPendingInitialSyncInZone:(id)arg1;
- (void)resume;
- (void)scheduleQuotaFetchIfNeededForOwner:(id)arg1;
- (void)suspend;
- (void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;
- (void)uploadItem:(id)arg1;

@end

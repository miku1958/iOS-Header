//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLActiveDownloadQueue, CPLPlatformObject, NSDate, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CPLEngineResourceDownloadQueue : CPLEngineStorage <CPLAbstractObject>
{
    NSObject<OS_dispatch_queue> *_downloadLock;
    CPLActiveDownloadQueue *_highPriorityQueue;
    CPLActiveDownloadQueue *_thumbnailHighPriorityQueue;
    CPLActiveDownloadQueue *_lowPriorityQueue;
    unsigned long long _inflightTransferTasksCount;
    unsigned long long _transferTasksBurstCount;
    unsigned long long _lastTransferTasksBurstCount;
    NSDate *_lastTransferTaskBurstDate;
    BOOL _shouldRequestABackgroundDownloadSyncPhase;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

+ (BOOL)shouldRetryDownloadOnError:(id)arg1;
- (void).cxx_destruct;
- (id)_activeQueueForTransferTask:(id)arg1;
- (BOOL)_canScheduleBackgroundDownloads;
- (void)_dequeueTransferTaskInActiveQueue:(id)arg1;
- (void)_dispatchTransportTasksIfNecessary;
- (id)_downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_enqueueTransferTaskInActiveQueue:(id)arg1;
- (id)_failedTaskWithCompletionHandler:(CDUnknownBlockType)arg1 error:(id)arg2 resource:(id)arg3 highPriority:(BOOL)arg4;
- (BOOL)_launchTransportTaskForQueue:(id)arg1 highPriority:(BOOL)arg2;
- (id)_queuesStatus;
- (id)_realDownloadTaskForLocalResource:(id)arg1 cloudResource:(id)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_requestBackgroundDownloads;
- (id)_resourceStorageCopyTaskForResource:(id)arg1 cloudResource:(id)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_scheduleBackgroundDownloadsIfNecessary;
- (BOOL)_shouldTryLowPriorityDownloadWithError:(id *)arg1;
- (unsigned long long)_transportTaskCount;
- (void)_unscheduleBackgroundDownloads;
- (id)cloudResourceForLocalResource:(id *)arg1 shouldNotTrustCaches:(BOOL *)arg2 error:(id *)arg3;
- (unsigned long long)countOfQueuedDownloadTasks;
- (id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;
- (id)downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (BOOL)enqueueBackgroundDownloadTaskForResource:(id)arg1 downloading:(BOOL)arg2 error:(id *)arg3;
- (id)enumeratorForDownloadedResources;
- (BOOL)hasActiveOrQueuedBackgroundDownloadOperations;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (BOOL)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 error:(id *)arg2;
- (BOOL)reenqueueBackgroundDownloadTaskForResource:(id)arg1 bumpRetryCount:(BOOL)arg2 didDiscard:(BOOL *)arg3 error:(id *)arg4;
- (BOOL)removeAllBackgroundDownloadTasksForItemWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)removeBackgroundDownloadTaskForResource:(id)arg1 error:(id *)arg2;
- (BOOL)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;
- (BOOL)resetWithError:(id *)arg1;
- (id)status;

@end

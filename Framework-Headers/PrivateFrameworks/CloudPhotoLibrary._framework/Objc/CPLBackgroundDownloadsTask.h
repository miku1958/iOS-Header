//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableArray *_downloadTaskGroups;
    BOOL _shouldStop;
    NSError *_badError;
    BOOL _hasResetQueue;
    unsigned long long _successfullyDownloadedResourcesCount;
    unsigned long long _failedDownloadedResourcesCount;
    unsigned long long _total;
    unsigned long long _activeDownloadTaskCount;
    unsigned long long _downloadTaskGroupsCount;
}

- (void).cxx_destruct;
- (void)_downloadTask:(id)arg1 didFinishWithError:(id)arg2;
- (id)_downloadTasksSortedForBatching:(id)arg1;
- (void)_enqueueTasksLocked;
- (void)_finishTaskLocked;
- (void)_launchNecessaryDownloadTasksWithTransaction:(id)arg1;
- (void)_updateActiveDownloadTaskCount;
- (void)cancel;
- (id)description;
- (id)initWithEngineLibrary:(id)arg1;
- (void)launch;
- (void)pause;
- (void)resume;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end


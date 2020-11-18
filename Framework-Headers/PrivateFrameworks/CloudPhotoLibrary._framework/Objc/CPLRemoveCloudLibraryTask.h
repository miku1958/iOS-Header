//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncEmergencyTask.h>

@protocol CPLEngineTransportRemoveLibraryTask;

@interface CPLRemoveCloudLibraryTask : CPLEngineSyncEmergencyTask
{
    id<CPLEngineTransportRemoveLibraryTask> _removeLibraryTask;
}

+ (BOOL)shouldCoalesceTasks;
+ (id)taskIdentifier;
- (void).cxx_destruct;
- (void)cancel;
- (void)launch;
- (unsigned long long)priority;
- (BOOL)shouldStopSyncSession;

@end


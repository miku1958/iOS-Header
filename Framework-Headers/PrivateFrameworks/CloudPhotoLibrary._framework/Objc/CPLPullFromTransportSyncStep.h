//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLSyncStep.h>

@class CPLMinglePulledChangesTask, CPLPullFromTransportTask;

@interface CPLPullFromTransportSyncStep : CPLSyncStep
{
    CPLPullFromTransportTask *_pullTask;
    CPLMinglePulledChangesTask *_mingleTask;
}

- (void).cxx_destruct;
- (void)_releasePowerAssertionForMingleTaskIfNecessary;
- (void)_retainPowerAssertionForMingleTaskIfNecessary;
- (void)cancelAllTasks:(BOOL)arg1;
- (id)descriptionForTasks;
- (BOOL)didFinishTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL *)arg3;
- (BOOL)launchNecessaryTasks;
- (void)moveTasksToBackground;

@end


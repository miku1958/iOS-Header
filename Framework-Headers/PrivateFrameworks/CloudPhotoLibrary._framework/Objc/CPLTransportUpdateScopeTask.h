//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;

@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask
{
    id<CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
    id<CPLEngineTransportUpdateTransportScopeTask> _updateTask;
}

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)checkScopeIsValidInTransaction:(id)arg1;
- (void)launch;
- (id)taskIdentifier;

@end


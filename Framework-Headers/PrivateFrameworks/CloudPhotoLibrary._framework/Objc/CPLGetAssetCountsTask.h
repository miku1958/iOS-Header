//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol CPLEngineTransportGetLibraryInfoTask;

@interface CPLGetAssetCountsTask : CPLEngineSyncTask
{
    id<CPLEngineTransportGetLibraryInfoTask> _transportTask;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)launch;
- (void)pause;
- (void)resume;
- (id)taskIdentifier;

@end

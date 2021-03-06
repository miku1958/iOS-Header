//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker
{
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
    NSProgress *_progressForCurrentAsset;
}

+ (id)workerWithLibrary:(id)arg1;
- (void).cxx_destruct;
- (id)_predicateToFetchDeferredAdjustmentNeededAssets;
- (void)dealloc;
- (BOOL)hasPendingJobs;
- (BOOL)isInterruptible;
- (id)managedObjectIDsNeedingProcessing;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopWorkingOnManagedObjectID:(id)arg1;

@end


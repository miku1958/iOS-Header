//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLCloudPhotoLibraryManager, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePruneManager : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cplManager;
    BOOL _stopped;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (id)_colorAwareResourceTypes;
- (long long)_fetchResourcesForPruningWithBudget:(long long)arg1 urgency:(long long)arg2 batchHandler:(CDUnknownBlockType)arg3;
- (id)_identifierForResource:(id)arg1;
- (long long)_localResourcesSize;
- (id)_predicateForCPLResourceTypes:(id)arg1 withUrgency:(long long)arg2;
- (id)_predicateForPruneWithUrgency:(long long)arg1;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_updateLocalSRGBFileForPrunedResources:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)_updateLocalStateForPrunedResources:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)dealloc;
- (long long)diskSpaceToPrune;
- (id)init;
- (id)initWithCPLManager:(id)arg1;
- (long long)pruneResources:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)pruneStatusForDebug:(BOOL)arg1;
- (void)startAutomaticPruneWithBudget:(long long)arg1 urgency:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stop;
- (void)updateCacheDeletePurgeableAmount;

@end


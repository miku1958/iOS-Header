//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PLCloudPhotoLibraryManager, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePruneManager : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cplManager;
    BOOL _stopped;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)_nonOriginalResourceTypes;
+ (id)_orderedPruneConditionStringsOnAssets;
+ (id)_originalResourceTypes;
- (id)_colorAwareResourceTypes;
- (long long)_fetchResourcesForPruningWithBatchHandler:(CDUnknownBlockType)arg1 budget:(long long)arg2;
- (id)_identifierForResource:(id)arg1;
- (long long)_localResourcesSize;
- (id)_notOnDemandDownloadPredicate;
- (id)_onDemandDownloadPredicate;
- (id)_predicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3;
- (id)_predicatesForPrune;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_updateLocalSRGBFileForPrunedResource:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)_updateLocalStateForPrunedResource:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)dealloc;
- (long long)diskSpaceToPrune;
- (id)init;
- (id)initWithCPLManager:(id)arg1;
- (long long)pruneResources:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)pruneStatusForDebug:(BOOL)arg1;
- (long long)startAutomaticPruneWithBudget:(long long)arg1;
- (void)stop;

@end

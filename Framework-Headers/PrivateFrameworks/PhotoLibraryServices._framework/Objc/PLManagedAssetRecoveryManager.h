//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLManagedAssetRecoveryManager : NSObject
{
    int _assetsDownloadsCount;
    PLPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_resourceDownloadIsolationQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    long long _state;
}

@property (nonatomic) int assetsDownloadsCount; // @synthesize assetsDownloadsCount=_assetsDownloadsCount;
@property (strong, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *resourceDownloadIsolationQueue; // @synthesize resourceDownloadIsolationQueue=_resourceDownloadIsolationQueue;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_assetKindsAllowedForDownloading;
- (void)_downloadResources:(id)arg1 forAsset:(id)arg2 usingCloudPhotoLibraryManager:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fixAdjustedAssetWithMissingDerivatives:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_fixDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_fixIrisWithZeroVideoComplementDuration:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)_fixIrisWithZeroVideoComplementDuration:(id)arg1 usingExistingVideoComplementAtPath:(id)arg2 error:(id *)arg3;
- (void)_fixOriginalAssetDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)_fixRawUTIForAsset:(id)arg1 error:(id *)arg2;
- (void)_performAssetRecoveryTaskForInconsistentState:(id)arg1 state:(long long)arg2 usingCloudPhotoLibraryManager:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_recoverAsset:(id)arg1 usingCloudPhotoLibraryManager:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_setCloudRecoveryState:(long long)arg1 forAssetsWithFetchRequestPredicate:(id)arg2 resultsFilterPredicate:(id)arg3;
- (void)identifyAssetsInInconsistentCloudState;
- (id)init;
- (void)startRecoveryOfAssetsInInconsistentCloudStateUsingCloudPhotoLibraryManager:(id)arg1;

@end


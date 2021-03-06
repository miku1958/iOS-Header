//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSError, NSObject, NSString, PUAssetReference, PUAssetsDataSource, PUCompositeVideoGenerator, PUMergedLivePhotosVideo;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUMergedLivePhotosVideoRequest : PXObservable <PXChangeObserver>
{
    unsigned long long _requestLogID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    PUCompositeVideoGenerator *_workQueue_generator;
    long long _stateQueue_state;
    PUMergedLivePhotosVideo *_stateQueue_mergedVideo;
    NSError *_stateQueue_error;
    PUAssetReference *_assetReference;
    PUAssetsDataSource *_assetsDataSource;
}

@property (readonly, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property (readonly, nonatomic) PUAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PUMergedLivePhotosVideo *mergedVideo;
@property (readonly, nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_stateQueue_signalStateChange;
- (id)_workQueue_fetchMergeableAssets;
- (void)_workQueue_finishWithMergedVideo:(id)arg1 error:(id)arg2;
- (void)_workQueue_generateVideoUsingAssets:(id)arg1;
- (void)_workQueue_handleGeneratorDidChangeState;
- (void)_workQueue_start;
- (void)cancel;
- (id)init;
- (id)initWithAssetReference:(id)arg1 dataSource:(id)arg2;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)start;

@end


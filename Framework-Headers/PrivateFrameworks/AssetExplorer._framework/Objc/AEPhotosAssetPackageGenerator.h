//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetExplorer/AEAssetPackageGenerator.h>

#import <AssetExplorer/NSProgressReporting-Protocol.h>
#import <AssetExplorer/PUReviewAssetProviderRequest-Protocol.h>

@class AEAssetPackage, NSError, NSObject, NSProgress, NSString, PHAsset, PHResourceDownloadRequest, PXAssetReference;
@protocol OS_dispatch_group, OS_dispatch_queue, PUDisplayAsset;

@interface AEPhotosAssetPackageGenerator : AEAssetPackageGenerator <NSProgressReporting, PUReviewAssetProviderRequest>
{
    PXAssetReference *_sourceAssetReference;
    NSObject<OS_dispatch_queue> *__packagerIvarIsolationQueue;
    NSObject<OS_dispatch_group> *__packagerWorkGroup;
    PHResourceDownloadRequest *__downloadRequest;
    AEAssetPackage *__ivarQueue_currentPackage;
    NSError *__ivarQueue_lastError;
    PHAsset *__asset;
}

@property (strong, nonatomic) PHAsset *_asset; // @synthesize _asset=__asset;
@property (readonly, nonatomic) PHResourceDownloadRequest *_downloadRequest; // @synthesize _downloadRequest=__downloadRequest;
@property (strong, nonatomic, setter=_setIvarQueueCurrentPackage:) AEAssetPackage *_ivarQueue_currentPackage; // @synthesize _ivarQueue_currentPackage=__ivarQueue_currentPackage;
@property (strong, nonatomic, setter=_setIvarQueueLastError:) NSError *_ivarQueue_lastError; // @synthesize _ivarQueue_lastError=__ivarQueue_lastError;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_packagerIvarIsolationQueue; // @synthesize _packagerIvarIsolationQueue=__packagerIvarIsolationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *_packagerWorkGroup; // @synthesize _packagerWorkGroup=__packagerWorkGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly, nonatomic) id<PUDisplayAsset> sourceAsset;
@property (readonly, copy, nonatomic) PXAssetReference *sourceAssetReference; // @synthesize sourceAssetReference=_sourceAssetReference;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginGeneratingWithResourceInfo:(id)arg1 error:(id)arg2 finalizer:(id)arg3;
- (void)_callCompletionWithResult:(CDUnknownBlockType)arg1;
- (void)_commonAEPhotosAssetPackageGeneratorInitWithAsset:(id)arg1 assetReference:(id)arg2;
- (void)_downloadBeforeBeforeGeneratingWithFinalizer:(id)arg1;
- (void)_downloadIfNeededBeforeGeneratingWithFinalizer:(id)arg1;
- (void)beginGeneratingWithFinalizer:(id)arg1;
- (void)cancelReviewAssetRequest;
- (id)initWithAsset:(id)arg1;
- (id)initWithAssetReference:(id)arg1;
- (void)requestReviewAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)retrieveGeneratedPackageWithCompletion:(CDUnknownBlockType)arg1;

@end

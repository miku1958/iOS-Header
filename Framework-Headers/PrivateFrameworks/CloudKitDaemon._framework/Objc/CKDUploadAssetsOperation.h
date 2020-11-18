//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDAssetRequestPlanner, CKDCancelTokenGroup, NSArray, NSMapTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDUploadAssetsOperation : CKDDatabaseOperation
{
    BOOL _atomic;
    CDUnknownBlockType _uploadPreparationBlock;
    CDUnknownBlockType _uploadProgressBlock;
    CDUnknownBlockType _uploadCompletionBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_assetsToUpload;
    NSMapTable *_uploadTasksByPackages;
    NSMutableArray *_packageManifests;
    NSMutableArray *_openedPackages;
    CKDCancelTokenGroup *_cancelTokens;
    unsigned long long _maxPackageUploadsPerBatch;
    CKDAssetRequestPlanner *_assetRequestPlanner;
}

@property (strong, nonatomic) CKDAssetRequestPlanner *assetRequestPlanner; // @synthesize assetRequestPlanner=_assetRequestPlanner;
@property (strong, nonatomic) NSArray *assetsToUpload; // @synthesize assetsToUpload=_assetsToUpload;
@property (nonatomic) BOOL atomic; // @synthesize atomic=_atomic;
@property (strong, nonatomic) CKDCancelTokenGroup *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
@property (nonatomic) unsigned long long maxPackageUploadsPerBatch; // @synthesize maxPackageUploadsPerBatch=_maxPackageUploadsPerBatch;
@property (strong, nonatomic) NSMutableArray *openedPackages; // @synthesize openedPackages=_openedPackages;
@property (strong, nonatomic) NSMutableArray *packageManifests; // @synthesize packageManifests=_packageManifests;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (copy, nonatomic) CDUnknownBlockType uploadCompletionBlock; // @synthesize uploadCompletionBlock=_uploadCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType uploadPreparationBlock; // @synthesize uploadPreparationBlock=_uploadPreparationBlock;
@property (copy, nonatomic) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property (strong, nonatomic) NSMapTable *uploadTasksByPackages; // @synthesize uploadTasksByPackages=_uploadTasksByPackages;

- (void).cxx_destruct;
- (id)CKStatusReportLogGroups;
- (void)_closeAllPackages;
- (void)_closePackage:(id)arg1;
- (void)_collectMetricsFromCompletedItemGroup:(id)arg1;
- (void)_collectMetricsFromCompletedItemGroupSet:(id)arg1;
- (void)_collectMetricsFromMMCSOperationMetrics:(id)arg1;
- (void)_didFetchUploadTokensForAssetTokenRequest:(id)arg1 error:(id)arg2;
- (void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2;
- (void)_didMakeProgressForMMCSItem:(id)arg1;
- (void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2;
- (void)_didPrepareAsset:(id)arg1;
- (void)_didPrepareAssetBatch:(id)arg1 error:(id)arg2;
- (void)_didUploadAsset:(id)arg1 error:(id)arg2;
- (void)_didUploadMMCSItem:(id)arg1 error:(id)arg2;
- (void)_didUploadMMCSItems:(id)arg1 error:(id)arg2;
- (void)_didUploadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didUploadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didUploadPackageWithTask:(id)arg1;
- (void)_failAllItemsInAssetBatch:(id)arg1 error:(id)arg2;
- (BOOL)_fetchUploadTokens;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_openPackage:(id)arg1;
- (BOOL)_planSectionsForPackage:(id)arg1 error:(id *)arg2;
- (BOOL)_prepareForUpload;
- (void)_removePackageManifests;
- (BOOL)_upload;
- (void)_uploadPackageSection:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_uploadPackageSectionsWithEnumerator:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_uploadPackageSectionsWithPendingTasks:(id)arg1 uploadingTasks:(id)arg2 completedTasks:(id)arg3;
- (void)_uploadPackageSectionsWithTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)finishWithError:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 assetsToUpload:(id)arg3;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;

@end


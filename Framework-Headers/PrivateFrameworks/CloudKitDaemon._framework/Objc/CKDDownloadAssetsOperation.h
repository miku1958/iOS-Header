//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDCancelTokenGroup, NSArray, NSMapTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDDownloadAssetsOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _downloadPreparationBlock;
    CDUnknownBlockType _downloadProgressBlock;
    CDUnknownBlockType _downloadCompletionBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_assetsToDownload;
    NSArray *_packageIndexSets;
    NSMutableArray *_MMCSItemsToDownload;
    NSMapTable *_downloadTasksByPackages;
    CKDCancelTokenGroup *_cancelTokens;
    unsigned long long _maxPackageDownloadsPerBatch;
}

@property (strong, nonatomic) NSMutableArray *MMCSItemsToDownload; // @synthesize MMCSItemsToDownload=_MMCSItemsToDownload;
@property (strong, nonatomic) NSArray *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property (strong, nonatomic) CKDCancelTokenGroup *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
@property (copy, nonatomic) CDUnknownBlockType downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType downloadPreparationBlock; // @synthesize downloadPreparationBlock=_downloadPreparationBlock;
@property (copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property (strong, nonatomic) NSMapTable *downloadTasksByPackages; // @synthesize downloadTasksByPackages=_downloadTasksByPackages;
@property (nonatomic) unsigned long long maxPackageDownloadsPerBatch; // @synthesize maxPackageDownloadsPerBatch=_maxPackageDownloadsPerBatch;
@property (strong, nonatomic) NSArray *packageIndexSets; // @synthesize packageIndexSets=_packageIndexSets;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)_collectMetricsFromCompletedItemGroup:(id)arg1;
- (void)_collectMetricsFromCompletedItemGroupSet:(id)arg1;
- (void)_collectMetricsFromMMCSOperationMetrics:(id)arg1;
- (void)_didDownloadAsset:(id)arg1 error:(id)arg2;
- (void)_didDownloadMMCSItem:(id)arg1 error:(id)arg2;
- (void)_didDownloadMMCSItems:(id)arg1 error:(id)arg2;
- (void)_didDownloadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didDownloadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2;
- (void)_didMakeProgressForMMCSItem:(id)arg1;
- (void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2;
- (void)_didPrepareAsset:(id)arg1;
- (BOOL)_download;
- (void)_downloadPackageSectionAtIndex:(long long)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_downloadPackageSectionsWithPendingTasks:(id)arg1 downloadingTasks:(id)arg2 completedTasks:(id)arg3;
- (void)_downloadPackageSectionsWithSectionEnumerator:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_downloadPackageSectionsWithTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (BOOL)_prepareForDownload;
- (void)_removeUntrackedMMCSItems:(id)arg1;
- (unsigned long long)activityStart;
- (void)cancel;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 assetsToDownload:(id)arg3 packageIndexSets:(id)arg4;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;

@end


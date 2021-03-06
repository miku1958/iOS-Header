//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSProgress, PUActivityProgressController;

__attribute__((visibility("hidden")))
@interface PUDuplicateActionController : NSObject
{
    long long _itemCount;
    NSMutableArray *_resourceLocalAvailabilityRequests;
    BOOL __canDuplicate;
    BOOL __canExtractStill;
    BOOL __didCheckDuplicateCapabilities;
    NSDictionary *__assetsByAssetCollection;
    NSProgress *__overallProgress;
    NSProgress *__downloadingProgress;
    NSProgress *__duplicatingProgress;
    PUActivityProgressController *__progressController;
    CDUnknownBlockType __onFinishDownloadCompletionHandler;
}

@property (readonly, copy, nonatomic) NSDictionary *_assetsByAssetCollection; // @synthesize _assetsByAssetCollection=__assetsByAssetCollection;
@property (readonly, nonatomic) BOOL _canDuplicate; // @synthesize _canDuplicate=__canDuplicate;
@property (readonly, nonatomic) BOOL _canExtractStill; // @synthesize _canExtractStill=__canExtractStill;
@property (nonatomic, setter=_setDidCheckDuplicateCapabilities:) BOOL _didCheckDuplicateCapabilities; // @synthesize _didCheckDuplicateCapabilities=__didCheckDuplicateCapabilities;
@property (strong, nonatomic, setter=_setDownloadingProgress:) NSProgress *_downloadingProgress; // @synthesize _downloadingProgress=__downloadingProgress;
@property (strong, nonatomic, setter=_setDuplicatingProgress:) NSProgress *_duplicatingProgress; // @synthesize _duplicatingProgress=__duplicatingProgress;
@property (copy, nonatomic, setter=_setOnFinishDownloadCompletionHandler:) CDUnknownBlockType _onFinishDownloadCompletionHandler; // @synthesize _onFinishDownloadCompletionHandler=__onFinishDownloadCompletionHandler;
@property (strong, nonatomic, setter=_setOverallProgress:) NSProgress *_overallProgress; // @synthesize _overallProgress=__overallProgress;
@property (strong, nonatomic, setter=_setProgressController:) PUActivityProgressController *_progressController; // @synthesize _progressController=__progressController;
@property (readonly, nonatomic) BOOL shouldUseAlertController;

+ (void)_presentDuplicationWasInterruptedWithItemCount:(long long)arg1 hasPhotos:(BOOL)arg2 hasVideos:(BOOL)arg3;
+ (BOOL)canPerformDuplicateActionOnAssets:(id)arg1 orAssetsByAssetCollection:(id)arg2;
- (void).cxx_destruct;
- (void)_checkDuplicateCapabilities;
- (void)_checkHasPhotos:(BOOL *)arg1 hasVideos:(BOOL *)arg2;
- (void)_downloadResourcesForDuplicateAction:(long long)arg1 newStillImageTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_finishedDownloadWithSuccess:(BOOL)arg1;
- (void)_finishedDuplicationWithSuccess:(BOOL)arg1;
- (void)_handleOperationCompletionWithError:(id)arg1;
- (void)_handlePhotoLibraryDuplicationCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleProgressUserCancellation;
- (void)_overallProgressFractionCompletedDidChange;
- (void)_overallProgressIsCancelledDidChange;
- (void)_performPhotoLibraryChangeForAction:(long long)arg1 newStillImageTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_validateOriginalAssetResourcesForDuplicateAction:(long long)arg1;
- (id)alertControllerForDuplicateActionWithPreview:(BOOL)arg1 newStillImageTime:(CDStruct_1b6d18a9)arg2 userConfirmationHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithAssetsByAssetCollection:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)performDuplicateAction:(long long)arg1 newStillImageTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, PUPhotosGridDownloadUpdateHandler;

@interface PUPhotosGridDownloadHelper : NSObject
{
    NSMutableDictionary *_downloadContexts;
    NSObject<OS_dispatch_queue> *_downloadContextsIsolationQueue;
    BOOL _shouldTreatLivePhotosAsStills;
    id<PUPhotosGridDownloadUpdateHandler> _updateHandler;
    long long _mode;
}

@property (nonatomic) long long mode; // @synthesize mode=_mode;
@property (nonatomic) BOOL shouldTreatLivePhotosAsStills; // @synthesize shouldTreatLivePhotosAsStills=_shouldTreatLivePhotosAsStills;
@property (readonly, weak, nonatomic) id<PUPhotosGridDownloadUpdateHandler> updateHandler; // @synthesize updateHandler=_updateHandler;

+ (id)createAlertControllerForDownloadError:(id)arg1 withAsset:(id)arg2;
- (void).cxx_destruct;
- (void)_cancelPreviousDownloadsForAsset:(id)arg1;
- (void)_checkIfRetrievalIsRequiredForResourceRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_defaultOptions;
- (id)_downloadContextForIdentifier:(id)arg1;
- (void)_downloadForRequest:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 canceled:(BOOL)arg3 error:(id)arg4;
- (void)_removeDownloadRequestForIdentifier:(id)arg1;
- (void)_setDownloadContext:(id)arg1 forIdentifier:(id)arg2;
- (void)_startRetrievingRequiredResourcesForRequest:(id)arg1 options:(id)arg2 inCollection:(id)arg3;
- (void)_updateDownloadProgressForAsset:(id)arg1;
- (void)cancelAllDownloads;
- (void)cancelDownloadForIdentifier:(id)arg1;
- (void)handleDownloadOfAssetIfNeeded:(id)arg1 inCollection:(id)arg2 withSuccessHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithGridViewController:(id)arg1;
- (id)initWithUpdateHandler:(id)arg1;
- (BOOL)isAnyPickerAssetDownloading:(id)arg1;

@end

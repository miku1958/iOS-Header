//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXVideoContentProvider.h>

#import <PhotosUICore/PXDisplayAssetVideoContentProviderRequestDelegate-Protocol.h>

@class NSMutableDictionary, NSObject, NSString, PXMediaProvider;
@protocol OS_dispatch_queue, PXDisplayAsset;

@interface PXDisplayAssetVideoContentProvider : PXVideoContentProvider <PXDisplayAssetVideoContentProviderRequestDelegate>
{
    long long _videoRequestID;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    NSObject<OS_dispatch_queue> *_postprocessingQueue;
    NSMutableDictionary *_loadingQueue_requestsByPriority;
    long long _loadingQueue_lastRequestedPriority;
    id<PXDisplayAsset> _loadingQueue_asset;
    double _videoAspectRatio;
    NSString *_contentIdentifier;
    PXMediaProvider *_mediaProvider;
}

@property (strong, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (readonly, nonatomic) BOOL needsPostprocessing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePostprocessedPlayerItem:(id)arg1 priority:(long long)arg2 description:(id)arg3;
- (void)_loadingQueueBeginLoadingWithPriority:(long long)arg1;
- (void)_loadingQueue_beginRequestForPriorityIfNeeded:(long long)arg1;
- (void)_loadingQueue_cancelAllRequests;
- (BOOL)_loadingQueue_needsNewRequestForPriority:(long long)arg1;
- (void)_loadingQueue_reloadContent;
- (void)_loadingQueue_setAsset:(id)arg1;
- (void)_postprocessingQueue_performPostprocessingOfItem:(id)arg1 info:(id)arg2 priority:(long long)arg3;
- (id)analyticsPayload;
- (void)beginLoadingWithPriority:(long long)arg1;
- (void)cancelLoading;
- (id)contentIdentifier;
- (id)init;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)postprocessPlayerItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadContent;
- (void)request:(id)arg1 didFinishWithPlayerItem:(id)arg2 info:(id)arg3;
- (void)requestLoadingProgressDidChange:(id)arg1;
- (id)videoAspectRatio;

@end

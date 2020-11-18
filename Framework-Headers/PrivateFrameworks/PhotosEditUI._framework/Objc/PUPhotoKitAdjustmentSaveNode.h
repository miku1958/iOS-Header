//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

@class PUImageDataRenderNode, PUPhotoEditIrisModel, PUPhotoKitImageDataNode;
@protocol PUVideoURLNode;

__attribute__((visibility("hidden")))
@interface PUPhotoKitAdjustmentSaveNode : PXRunNode
{
    BOOL _useRawIfAvailable;
    BOOL _success;
    PUPhotoKitImageDataNode *_imageDataNode;
    PUImageDataRenderNode *_imageRenderNode;
    id<PUVideoURLNode> _videoNode;
    PUPhotoEditIrisModel *_livePhotoModel;
}

@property (readonly, nonatomic) PUPhotoKitImageDataNode *imageDataNode; // @synthesize imageDataNode=_imageDataNode;
@property (readonly, nonatomic) PUImageDataRenderNode *imageRenderNode; // @synthesize imageRenderNode=_imageRenderNode;
@property (readonly, copy, nonatomic) PUPhotoEditIrisModel *livePhotoModel; // @synthesize livePhotoModel=_livePhotoModel;
@property (readonly, nonatomic) BOOL success; // @synthesize success=_success;
@property (readonly, nonatomic) BOOL useRawIfAvailable; // @synthesize useRawIfAvailable=_useRawIfAvailable;
@property (readonly, nonatomic) id<PUVideoURLNode> videoNode; // @synthesize videoNode=_videoNode;

- (void).cxx_destruct;
- (long long)_adjustmentBaseVersion;
- (double)_baseDuration;
- (long long)_baseExifOrientation;
- (id)_exportProperties;
- (void)_handleDidCompleteChangeWithSuccess:(BOOL)arg1 error:(id)arg2;
- (id)initWithImageDataNode:(id)arg1 imageRenderNode:(id)arg2 videoNode:(id)arg3 livePhotoModel:(id)arg4 useRawIfAvailable:(BOOL)arg5;
- (void)run;

@end


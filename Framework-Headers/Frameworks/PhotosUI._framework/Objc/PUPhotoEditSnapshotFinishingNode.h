//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

@class PUEditableMediaProviderAdjustmentDataNode, PUEditableMediaProviderImageDataNode, PUEditableMediaProviderVideoAssetNode, PUPhotoEditBaseMediaNode;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSnapshotFinishingNode : PXRunNode
{
    PUEditableMediaProviderAdjustmentDataNode *_adjustmentNode;
    PUPhotoEditBaseMediaNode *_baseMediaNode;
    PUEditableMediaProviderImageDataNode *_currentImageNode;
    PUEditableMediaProviderVideoAssetNode *_currentVideoNode;
    CDUnknownBlockType _completionHandler;
}

@property (readonly, nonatomic) PUEditableMediaProviderAdjustmentDataNode *adjustmentNode; // @synthesize adjustmentNode=_adjustmentNode;
@property (readonly, nonatomic) PUPhotoEditBaseMediaNode *baseMediaNode; // @synthesize baseMediaNode=_baseMediaNode;
@property (readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic) PUEditableMediaProviderImageDataNode *currentImageNode; // @synthesize currentImageNode=_currentImageNode;
@property (readonly, nonatomic) PUEditableMediaProviderVideoAssetNode *currentVideoNode; // @synthesize currentVideoNode=_currentVideoNode;

- (void).cxx_destruct;
- (id)initWithAdjustmentNode:(id)arg1 baseMediaNode:(id)arg2 currentImageNode:(id)arg3 currentVideoNode:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)run;

@end


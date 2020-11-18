//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

#import <PhotosEditUI/PUImageDataRenderNode-Protocol.h>

@class NSArray, NSData, NSString, PLPhotoEditModel;
@protocol PUImageInfoNode, PUVideoURLNode, PXRunNodeDelegate;

@interface PUImageDataRenderNode : PXRunNode <PUImageDataRenderNode>
{
    NSData *_imageData;
    id<PUImageInfoNode> _imageDataNode;
    id<PUVideoURLNode> _videoURLNode;
    PLPhotoEditModel *_photoEditModel;
    double _jpegCompression;
    NSString *_livePhotoPairingIdentifier;
    struct CGSize _baseImageSize;
    struct CGSize _renderedImageSize;
}

@property (readonly, nonatomic) struct CGSize baseImageSize; // @synthesize baseImageSize=_baseImageSize;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXRunNodeDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property (readonly, nonatomic) id<PUImageInfoNode> imageDataNode; // @synthesize imageDataNode=_imageDataNode;
@property (readonly, nonatomic) double jpegCompression; // @synthesize jpegCompression=_jpegCompression;
@property (readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier; // @synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier;
@property (readonly, copy, nonatomic) PLPhotoEditModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property (readonly, nonatomic) struct CGSize renderedImageSize; // @synthesize renderedImageSize=_renderedImageSize;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<PUVideoURLNode> videoURLNode; // @synthesize videoURLNode=_videoURLNode;
@property (readonly, getter=isWaiting) BOOL waiting;

- (void).cxx_destruct;
- (id)_editSource;
- (void)_handleRenderCompletedWithJpegData:(id)arg1 baseSize:(struct CGSize)arg2 editedSize:(struct CGSize)arg3;
- (BOOL)_isInputValid;
- (id)initWithImageInfoNode:(id)arg1 videoURLNode:(id)arg2 photoEditModel:(id)arg3 livePhotoPairingIdentifier:(id)arg4 jpegCompression:(double)arg5;
- (void)run;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

#import <PhotosUI/PUImageDataNode-Protocol.h>
#import <PhotosUI/PUImageInfoNode-Protocol.h>

@class NSArray, NSData, NSString, NSURL, PUEditableMediaProvider;
@protocol PUEditableAsset, PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUEditableMediaProviderImageDataNode : PXRunNode <PUImageDataNode, PUImageInfoNode>
{
    int _requestID;
    BOOL _useEmbeddedPreview;
    NSData *_imageData;
    NSURL *_imageDataURL;
    NSString *_imageDataUTI;
    long long _imageExifOrientation;
    long long _version;
    id<PUEditableAsset> _asset;
    PUEditableMediaProvider *_mediaProvider;
}

@property (readonly, nonatomic) id<PUEditableAsset> asset; // @synthesize asset=_asset;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXRunNodeDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property (readonly, nonatomic) NSURL *imageDataURL; // @synthesize imageDataURL=_imageDataURL;
@property (readonly, nonatomic) NSString *imageDataUTI; // @synthesize imageDataUTI=_imageDataUTI;
@property (readonly, nonatomic) long long imageExifOrientation; // @synthesize imageExifOrientation=_imageExifOrientation;
@property (readonly, nonatomic) PUEditableMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useEmbeddedPreview; // @synthesize useEmbeddedPreview=_useEmbeddedPreview;
@property (readonly, nonatomic) long long version; // @synthesize version=_version;
@property (readonly, getter=isWaiting) BOOL waiting;

- (void).cxx_destruct;
- (void)_handleLoadedImageData:(id)arg1 imageUTI:(id)arg2 imageOrientation:(long long)arg3 info:(id)arg4;
- (void)didCancel;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 version:(long long)arg3;
- (void)run;

@end


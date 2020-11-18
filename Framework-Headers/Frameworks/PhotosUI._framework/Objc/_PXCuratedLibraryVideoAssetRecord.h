//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGridInlinePlaybackRecord.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGDisplayAssetPixelBufferSource-Protocol.h>

@class NSString, PXGSpriteReference, PXVideoSession;

@interface _PXCuratedLibraryVideoAssetRecord : PXGridInlinePlaybackRecord <PXChangeObserver, PXGDisplayAssetPixelBufferSource>
{
    double _videoTranformScale;
    PXVideoSession *_videoSession;
    NSString *_bufferRequestIdentifier;
    long long _desiredPlayState;
    CDUnknownBlockType _pixelBufferDidChangeHandler;
}

@property (readonly, nonatomic) struct __CVBuffer *currentPixelBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXGSpriteReference *geometryReference; // @dynamic geometryReference;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType pixelBufferDidChangeHandler; // @synthesize pixelBufferDidChangeHandler=_pixelBufferDidChangeHandler;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGAffineTransform videoRotationTransform;

+ (id)_videoSessionQueue;
- (void).cxx_destruct;
- (void)_configureVideoSession:(id)arg1;
- (void)_createVideoSessionIfNeeded;
- (void)_ensureVideoSession;
- (void)_relinquishVideoSession;
- (void)dealloc;
- (long long)desiredPlayState;
- (id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3;
- (BOOL)isPlaying;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)prepareForInvisible;
- (void)prepareForVisible;
- (void)setDesiredPlayState:(long long)arg1;

@end

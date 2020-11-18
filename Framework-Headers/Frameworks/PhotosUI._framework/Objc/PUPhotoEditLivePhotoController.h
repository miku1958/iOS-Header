//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUViewModelChangeObserver-Protocol.h>

@class NSString, NSURL, PHLivePhoto, PLPhotoEditModel, PLPhotoEditRenderer, PUVideoEditRenderer;
@protocol OS_dispatch_queue, PUPhotoEditLivePhotoControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditLivePhotoController : NSObject <PUViewModelChangeObserver>
{
    struct {
        BOOL respondsToRenderedLivePhotoDidChange;
        BOOL respondsToRenderingProgressDidChange;
        BOOL respondsToIsRenderingDidChange;
        BOOL respondsToShouldRender;
    } _delegateFlags;
    id _notificationObserver;
    NSObject<OS_dispatch_queue> *_renderQueue;
    BOOL _rendering;
    BOOL __needsUpdateRenderedLivePhoto;
    float _renderingProgress;
    PHLivePhoto *_baseLivePhoto;
    PLPhotoEditRenderer *_photoEditRenderer;
    PHLivePhoto *_renderedLivePhoto;
    id<PUPhotoEditLivePhotoControllerDelegate> _delegate;
    PLPhotoEditModel *__lastRenderedPhotoEditModel;
    PHLivePhoto *__lastRenderedLivePhoto;
    PUVideoEditRenderer *__videoRenderer;
    NSURL *__renderURL;
}

@property (strong, nonatomic, setter=_setLastRenderedLivePhoto:) PHLivePhoto *_lastRenderedLivePhoto; // @synthesize _lastRenderedLivePhoto=__lastRenderedLivePhoto;
@property (copy, nonatomic, setter=_setLastRenderedPhotoEditModel:) PLPhotoEditModel *_lastRenderedPhotoEditModel; // @synthesize _lastRenderedPhotoEditModel=__lastRenderedPhotoEditModel;
@property (nonatomic, setter=_setNeedsUpdateRenderedLivePhoto:) BOOL _needsUpdateRenderedLivePhoto; // @synthesize _needsUpdateRenderedLivePhoto=__needsUpdateRenderedLivePhoto;
@property (strong, nonatomic, setter=_setRenderURL:) NSURL *_renderURL; // @synthesize _renderURL=__renderURL;
@property (strong, nonatomic, setter=_setVideoRenderer:) PUVideoEditRenderer *_videoRenderer; // @synthesize _videoRenderer=__videoRenderer;
@property (readonly, nonatomic) PHLivePhoto *baseLivePhoto; // @synthesize baseLivePhoto=_baseLivePhoto;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUPhotoEditLivePhotoControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PLPhotoEditRenderer *photoEditRenderer; // @synthesize photoEditRenderer=_photoEditRenderer;
@property (strong, nonatomic, setter=_setRenderedLivePhoto:) PHLivePhoto *renderedLivePhoto; // @synthesize renderedLivePhoto=_renderedLivePhoto;
@property (nonatomic, getter=isRendering, setter=_setRendering:) BOOL rendering; // @synthesize rendering=_rendering;
@property (nonatomic, setter=_setRenderingProgress:) float renderingProgress; // @synthesize renderingProgress=_renderingProgress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleRenderCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 photoEditModel:(id)arg3;
- (void)_invalidateRenderedLivePhoto;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)_updateRenderedLivePhotoIfNeeded;
- (void)dealloc;
- (id)initWithBaseLivePhoto:(id)arg1 editRenderer:(id)arg2;
- (void)renderIfNeeded;

@end


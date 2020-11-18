//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NeutrinoKit/NUAVPlayerControllerDelegate-Protocol.h>
#import <NeutrinoKit/NUAVPlayerViewDelegate-Protocol.h>

@class NSArray, NSString, NUAVPlayerController, NUAVPlayerView, NUComposition, NUMediaViewRenderer, NURenderView, NUScrollView;
@protocol NUMediaViewDelegate;

@interface NUMediaView : UIView <NUAVPlayerControllerDelegate, NUAVPlayerViewDelegate>
{
    NURenderView *_renderView;
    NUScrollView *_scrollView;
    NUComposition *_composition;
    NUMediaViewRenderer *_renderer;
    struct UIEdgeInsets _edgeInsets;
    NUAVPlayerController *_nuAVPlayerController;
    NUAVPlayerView *_playerView;
    UIView *_livePhotoView;
    struct {
        BOOL hasDidFinishRendering;
        BOOL hasDidUpdateLivePhoto;
        BOOL hasDidFinishRenderingWithStatistics;
        BOOL hasDidZoom;
        BOOL hasWillBeginZooming;
        BOOL hasDidEndZooming;
        BOOL hasIsReadyForVideoPlayback;
        BOOL hasDidStartPreparingVideo;
        BOOL hasDidFinishPreparingVideo;
    } _delegateFlags;
    BOOL _loopsVideo;
    BOOL _inTransition;
    BOOL _centerContent;
    BOOL _muted;
    BOOL _videoPlayerVisible;
    id<NUMediaViewDelegate> _delegate;
    double _angle;
    struct CGSize __masterSizeWithoutGeometry;
    struct CGRect _cropRect;
}

@property (nonatomic) struct CGSize _masterSizeWithoutGeometry; // @synthesize _masterSizeWithoutGeometry=__masterSizeWithoutGeometry;
@property (nonatomic) double angle; // @synthesize angle=_angle;
@property (nonatomic) BOOL centerContent; // @synthesize centerContent=_centerContent;
@property (strong, nonatomic) NUComposition *composition; // @synthesize composition=_composition;
@property (nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NUMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGRect imageFrame;
@property (nonatomic) BOOL loopsVideoPlayback;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property (nonatomic) NSArray *pipelineFilters;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isVideoPlayerVisible) BOOL videoPlayerVisible; // @synthesize videoPlayerVisible=_videoPlayerVisible;
@property (nonatomic) double zoomScale;

+ (struct UIEdgeInsets)_proposedInsetsForInsets:(struct UIEdgeInsets)arg1 contentSize:(struct CGSize)arg2 inFrame:(struct CGRect)arg3 centerContent:(BOOL)arg4;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_edgeInsetsForContentSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2;
- (id)_geometry;
- (id)_imageLayer;
- (struct CGSize)_imageSize;
- (id)_livePhotoView;
- (id)_renderClient;
- (id)_renderView;
- (id)_renderer;
- (void)_rendererDidCreateAVPlayerController:(id)arg1;
- (void)_rendererDidFinishPreparingVideo;
- (void)_rendererDidFinishWithStatistics:(id)arg1;
- (void)_rendererDidStartPreparingVideo;
- (void)_rendererDidUpdateLivePhoto;
- (id)_scrollView;
- (void)_setLayerFilters:(id)arg1;
- (void)_setPipelineFilters:(id)arg1 shouldUpdateContent:(BOOL)arg2;
- (void)_setupViews;
- (void)_startLoopPlayback;
- (void)_stopLoopPlayback;
- (void)_transitionToInsets:(struct UIEdgeInsets)arg1;
- (void)_updateContentInsets;
- (void)_updateRenderContent;
- (void)_updateVideoPlayerAlpha;
- (id)_videoPlayerView;
- (id)_videoPlayerViewWithoutControls;
- (void)_withComposition:(id)arg1 visitRenderClient:(CDUnknownBlockType)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromSpace:(id)arg2 toView:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2 toSpace:(id)arg3;
- (struct CGPoint)convertPointFromImage:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToImage:(struct CGPoint)arg1;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isReady;
- (void)layoutSubviews;
- (void)playerController:(id)arg1 didUpdateElapsedTime:(double)arg2 duration:(double)arg3;
- (void)playerControllerDidFinishPlaying:(id)arg1 duration:(double)arg2;
- (void)playerControllerIsReadyForPlayback:(id)arg1;
- (void)playerViewReadyForDisplayDidChange:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setZoomScaleToFit;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)waitForRender;

@end


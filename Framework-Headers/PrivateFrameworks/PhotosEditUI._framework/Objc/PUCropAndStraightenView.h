//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosEditUI/NUMediaViewDelegate-Protocol.h>
#import <PhotosEditUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosEditUI/UIScrollViewDelegate-Protocol.h>

@class NSString, NUComposition, NUMediaView, PHLivePhoto, PHLivePhotoView, PLImageGeometry, PXImageLayerModulator, PXImageModulationManager, UIImage, UIImageView, UIScrollView;
@protocol PUCropAndStraightenViewDelegate;

__attribute__((visibility("hidden")))
@interface PUCropAndStraightenView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate, NUMediaViewDelegate>
{
    BOOL _tracking;
    BOOL __scrollViewTracking;
    UIImage *_image;
    PHLivePhoto *_livePhoto;
    NUComposition *_autoloopComposition;
    id<PUCropAndStraightenViewDelegate> _delegate;
    double _straightenAngle;
    long long _orientation;
    UIScrollView *__scrollView;
    UIView *__scrollViewReference;
    UIView *__contentView;
    UIImageView *__imageView;
    PHLivePhotoView *__livePhotoView;
    double __preferredZoomScale;
    long long __updateReason;
    PLImageGeometry *__imageGeometry;
    NUMediaView *__mediaView;
    PXImageModulationManager *__imageModulationManager;
    PXImageLayerModulator *__imageLayerModulator;
    CDStruct_910f5d27 _imageModulationOptions;
    struct CGRect _cropRect;
    struct CGRect _canvasFrame;
    struct CGRect __fittingRegion;
}

@property (strong, nonatomic, setter=_setContentView:) UIView *_contentView; // @synthesize _contentView=__contentView;
@property (nonatomic, setter=_setFittingRegion:) struct CGRect _fittingRegion; // @synthesize _fittingRegion=__fittingRegion;
@property (strong, nonatomic, setter=_setImageGeometry:) PLImageGeometry *_imageGeometry; // @synthesize _imageGeometry=__imageGeometry;
@property (strong, nonatomic, setter=_setImageLayerModulator:) PXImageLayerModulator *_imageLayerModulator; // @synthesize _imageLayerModulator=__imageLayerModulator;
@property (strong, nonatomic, setter=_setImageModulationManager:) PXImageModulationManager *_imageModulationManager; // @synthesize _imageModulationManager=__imageModulationManager;
@property (strong, nonatomic, setter=_setImageView:) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property (strong, nonatomic, setter=_setLivePhotoView:) PHLivePhotoView *_livePhotoView; // @synthesize _livePhotoView=__livePhotoView;
@property (strong, nonatomic, setter=_setMediaView:) NUMediaView *_mediaView; // @synthesize _mediaView=__mediaView;
@property (nonatomic, setter=_setPreferredZoomScale:) double _preferredZoomScale; // @synthesize _preferredZoomScale=__preferredZoomScale;
@property (readonly, nonatomic, getter=_isRotationSideways) BOOL _rotationSideways;
@property (readonly, nonatomic) struct CGAffineTransform _rotationTransform;
@property (strong, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property (strong, nonatomic, setter=_setScrollViewReference:) UIView *_scrollViewReference; // @synthesize _scrollViewReference=__scrollViewReference;
@property (nonatomic, getter=_isScrollViewTracking, setter=_setScrollViewTracking:) BOOL _scrollViewTracking; // @synthesize _scrollViewTracking=__scrollViewTracking;
@property (nonatomic, setter=_setUpdateReason:) long long _updateReason; // @synthesize _updateReason=__updateReason;
@property (strong, nonatomic) NUComposition *autoloopComposition; // @synthesize autoloopComposition=_autoloopComposition;
@property (nonatomic) struct CGRect canvasFrame; // @synthesize canvasFrame=_canvasFrame;
@property (nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDecelerating) BOOL decelerating;
@property (weak, nonatomic) id<PUCropAndStraightenViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) struct CGRect imageCropRect;
@property (nonatomic) CDStruct_910f5d27 imageModulationOptions; // @synthesize imageModulationOptions=_imageModulationOptions;
@property (strong, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (nonatomic) double straightenAngle; // @synthesize straightenAngle=_straightenAngle;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTracking, setter=_setTracking:) BOOL tracking; // @synthesize tracking=_tracking;

- (void).cxx_destruct;
- (struct CGSize)_boundingSizeOfStraightenedRectWithSize:(struct CGSize)arg1;
- (struct CGRect)_croppingRect;
- (struct CGRect)_fullCropRect;
- (void)_handleTouchingRecognizer:(id)arg1;
- (struct CGRect)_imageBounds;
- (void)_invalidateImageLayerModulator;
- (void)_invalidateImageModulationManager;
- (struct CGSize)_sizeRotatedIfNeeded:(struct CGSize)arg1;
- (struct CGAffineTransform)_straightenTransform;
- (void)_updateImageModulation;
- (void)_updateLivePhotoScaleOffset;
- (void)_updateScrollInsets;
- (void)_updateScrollOffset;
- (void)_updateScrollView;
- (void)_updateZoomScale;
- (double)_zoomScaleForImageRegion:(struct CGRect)arg1 toFit:(BOOL)arg2 viewBounds:(struct CGRect)arg3;
- (double)_zoomScaleForImageToFit:(BOOL)arg1 viewBounds:(struct CGRect)arg2;
- (double)_zoomScaleToFillCropRect;
- (double)_zoomScaleToFillStraightenedCropRect;
- (double)_zoomScaleToFitCanvas;
- (struct CGRect)denormalizedImageRectForModelRect:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)fitImageRegion:(struct CGRect)arg1 inCropRectAnimated:(BOOL)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGRect)imageCropRectForViewRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)mediaViewDidFinishRendering:(id)arg1;
- (struct CGRect)normalizedCropRectForViewRect:(struct CGRect)arg1;
- (id)resizableSnapshotViewFromRect:(struct CGRect)arg1 afterScreenUpdates:(BOOL)arg2 withCapInsets:(struct UIEdgeInsets)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;

@end


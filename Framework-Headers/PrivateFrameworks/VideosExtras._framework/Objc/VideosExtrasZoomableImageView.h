//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <VideosExtras/UIScrollViewDelegate-Protocol.h>
#import <VideosExtras/VideosExtrasZoomingImageTransitionParticipant-Protocol.h>

@class NSString, UIImage, UIImageView;

@interface VideosExtrasZoomableImageView : UIScrollView <UIScrollViewDelegate, VideosExtrasZoomingImageTransitionParticipant>
{
    UIImage *_image;
    double _scaleToRestoreAfterResize;
    UIImageView *_zoomView;
    struct CGSize _imageSize;
    struct CGPoint _pointToCenterAfterResize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property (nonatomic) struct CGPoint pointToCenterAfterResize; // @synthesize pointToCenterAfterResize=_pointToCenterAfterResize;
@property (nonatomic) double scaleToRestoreAfterResize; // @synthesize scaleToRestoreAfterResize=_scaleToRestoreAfterResize;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIImageView *zoomView; // @synthesize zoomView=_zoomView;

- (void).cxx_destruct;
- (struct CGPoint)_maximumContentOffset;
- (struct CGPoint)_minimumContentOffset;
- (void)_prepareToResize;
- (void)_recoverFromResizing;
- (void)_updateMinimumAndMaximumZoomScalesForCurrentBounds;
- (void)dealloc;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)zoomToPoint:(struct CGPoint)arg1 animated:(BOOL)arg2;

@end

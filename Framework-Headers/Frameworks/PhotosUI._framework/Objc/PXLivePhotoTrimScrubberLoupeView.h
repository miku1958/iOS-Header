//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAsset, AVVideoComposition, CAShapeLayer, NSObject, UIImageView, _PXLivePhotoTrimScrubberLoupeViewImageRequest;
@protocol OS_dispatch_queue;

@interface PXLivePhotoTrimScrubberLoupeView : UIView
{
    UIImageView *_imageView;
    CAShapeLayer *_borderLayer;
    BOOL _imageIsValid;
    NSObject<OS_dispatch_queue> *_workQueue;
    _PXLivePhotoTrimScrubberLoupeViewImageRequest *_currentImageRequest;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    UIView *_playerView;
    double _outerCornerRadius;
    double _innerCornerRadius;
    CDStruct_1b6d18a9 _sourceTime;
}

@property (copy, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property (nonatomic) double innerCornerRadius; // @synthesize innerCornerRadius=_innerCornerRadius;
@property (nonatomic) double outerCornerRadius; // @synthesize outerCornerRadius=_outerCornerRadius;
@property (strong, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property (nonatomic) CDStruct_1b6d18a9 sourceTime; // @synthesize sourceTime=_sourceTime;
@property (copy, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;

- (void).cxx_destruct;
- (void)_PXLivePhotoTrimScrubberLoupeView_commonInit;
- (void)_extractImageFromImageRequest:(id)arg1;
- (void)_invalidateImage;
- (void)_presentImage:(id)arg1 forSourceTime:(CDStruct_1b6d18a9)arg2;
- (void)_updateBorderLayerPath;
- (void)_updateImageIfNeeded;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadImage;
- (void)setFrame:(struct CGRect)arg1;

@end

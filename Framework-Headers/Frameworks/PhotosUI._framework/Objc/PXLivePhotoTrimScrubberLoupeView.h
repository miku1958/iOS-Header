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
    UIView *_container;
    CAShapeLayer *_maskLayer;
    UIImageView *_imageView;
    BOOL _imageIsValid;
    NSObject<OS_dispatch_queue> *_workQueue;
    _PXLivePhotoTrimScrubberLoupeViewImageRequest *_currentImageRequest;
    CDStruct_1b6d18a9 _frameTime;
    CAShapeLayer *_borderLayer;
    BOOL _playheadIsValid;
    double _needleWidth;
    unsigned long long _playheadStyle;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    double _aspectRatio;
    UIView *_playerView;
    double _verticalInset;
    double _outerCornerRadius;
    double _innerCornerRadius;
}

@property (nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property (readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property (nonatomic) CDStruct_1b6d18a9 frameTime; // @synthesize frameTime=_frameTime;
@property (nonatomic) double innerCornerRadius; // @synthesize innerCornerRadius=_innerCornerRadius;
@property (nonatomic) double outerCornerRadius; // @synthesize outerCornerRadius=_outerCornerRadius;
@property (strong, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property (readonly, nonatomic) unsigned long long playheadStyle; // @synthesize playheadStyle=_playheadStyle;
@property (nonatomic) double verticalInset; // @synthesize verticalInset=_verticalInset;
@property (readonly, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;

- (void).cxx_destruct;
- (void)_PXLivePhotoTrimScrubberLoupeView_commonInit;
- (id)_collapsedPathForBounds:(struct CGRect)arg1;
- (id)_expandedPathForBounds:(struct CGRect)arg1 needsCutout:(BOOL)arg2;
- (void)_extractImageFromImageRequest:(id)arg1;
- (void)_invalidateImage;
- (void)_invalidatePlayhead;
- (struct CGRect)_loupeFrameWithBounds:(struct CGRect)arg1;
- (void)_presentImage:(id)arg1;
- (void)_setPlayheadStyle:(unsigned long long)arg1 animate:(BOOL)arg2;
- (id)_transitionPathForBounds:(struct CGRect)arg1 needsCutout:(BOOL)arg2;
- (void)_updateImageIfNeeded;
- (void)_updatePlayheadBorderAnimate:(BOOL)arg1;
- (void)_updatePlayheadIfNeeded;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setAsset:(id)arg1 videoComposition:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setShowLoupePlayerAnimate:(BOOL)arg1;
- (void)setShowLoupeThumbnailWithFrameTime:(CDStruct_1b6d18a9)arg1 animate:(BOOL)arg2;
- (void)setShowNeedleWithWidth:(double)arg1 animate:(BOOL)arg2;
- (void)setShowPlayerView:(BOOL)arg1;
- (BOOL)showPlayerView;

@end


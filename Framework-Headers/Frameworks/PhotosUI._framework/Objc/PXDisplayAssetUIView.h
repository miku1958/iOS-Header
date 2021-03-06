//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>

@class NSArray, NSError, NSString, PXImageRequester, PXLoadingFailureBadgeView, PXRoundProgressView, PXUIMediaProvider, UIImage;
@protocol PXDisplayAsset;

@interface PXDisplayAssetUIView : UIView <PXReusableObject, PXChangeObserver>
{
    CDStruct_d97c9657 _updateFlags;
    BOOL _displayLoadingIndicator;
    BOOL _isDisplayingFullQualityContent;
    BOOL _animatedContentEnabled;
    id<PXDisplayAsset> _asset;
    long long _playbackStyle;
    PXUIMediaProvider *_mediaProvider;
    NSArray *_placeholderImageFilters;
    double _placeholderTransitionDuration;
    NSError *_error;
    UIView *_contentView;
    UIImage *_image;
    PXImageRequester *_imageRequester;
    PXRoundProgressView *_progressView;
    PXLoadingFailureBadgeView *_failureView;
    double _imageProgress;
    double _loadingProgress;
    struct CGSize _targetSize;
    struct CGRect _contentBounds;
    struct CGRect _contentsRect;
}

@property (nonatomic, getter=isAnimatedContentEnabled) BOOL animatedContentEnabled; // @synthesize animatedContentEnabled=_animatedContentEnabled;
@property (strong, nonatomic) id<PXDisplayAsset> asset; // @synthesize asset=_asset;
@property (nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property (readonly, nonatomic) struct CGRect currentContentsRect;
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayLoadingIndicator; // @synthesize displayLoadingIndicator=_displayLoadingIndicator;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) PXLoadingFailureBadgeView *failureView; // @synthesize failureView=_failureView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) double imageProgress; // @synthesize imageProgress=_imageProgress;
@property (strong, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property (nonatomic) BOOL isDisplayingFullQualityContent; // @synthesize isDisplayingFullQualityContent=_isDisplayingFullQualityContent;
@property (readonly, nonatomic) double loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property (strong, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (copy, nonatomic) NSArray *placeholderImageFilters; // @synthesize placeholderImageFilters=_placeholderImageFilters;
@property (nonatomic) double placeholderTransitionDuration; // @synthesize placeholderTransitionDuration=_placeholderTransitionDuration;
@property (readonly, nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property (strong, nonatomic) PXRoundProgressView *progressView; // @synthesize progressView=_progressView;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;

+ (void)checkInView:(id)arg1;
+ (id)checkOutViewForAsset:(id)arg1;
+ (id)checkOutViewForAsset:(id)arg1 withPlaybackStyle:(long long)arg2;
+ (id)viewPool;
- (void).cxx_destruct;
- (void)_loadContentView;
- (void)_updateFailureView;
- (void)_updateIfNeeded;
- (void)_updateProgressView;
- (void)_updateTargetSize;
- (void)animatedContentEnabledDidChange;
- (void)becomeReusable;
- (void)contentModeDidChange;
- (void)contentsRectDidChange;
- (void)didMoveToWindow;
- (void)imageDidChange;
- (void)imageProgressDidChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateLoadingProgress;
- (void)isDisplayingFullQualityContentDidChange;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)placeholderImageFiltersDidChange;
- (void)placeholderTransitionDurationDidChange;
- (void)prepareForReuse;
- (void)setContentMode:(long long)arg1;
- (void)setImageProgress:(double)arg1;
- (void)setNeedsUpdateContent;
- (void)updateContent;

@end


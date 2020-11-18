//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PHLivePhotoViewDelegate-Protocol.h>

@class NSString, PHLivePhoto, PHLivePhotoView, PUAvalancheStackView, PUBackgroundColorView, PUPhotoDecoration, PUTextBannerView, PXAssetBadgeUIView, PXCollectionTileLayoutTemplate, PXFeatureSpec, PXRoundedCornerOverlayView, PXTitleSubtitleUILabel, UIColor, UIImage, UIImageView, UIView;
@protocol PUPhotoViewContentHelperDelegate;

@interface PUPhotoViewContentHelper : NSObject <PHLivePhotoViewDelegate>
{
    PUBackgroundColorView *_photoDecorationBorderView;
    PUBackgroundColorView *_photoDecorationOverlayView;
    BOOL _hasTransform;
    struct {
        BOOL respondsToLivePhotoWillBeginPlaybackWithStyle;
    } _delegateFlags;
    BOOL _hasPendingPlaybackRequest;
    long long _pendingPlaybackRequestStyle;
    UIColor *_layerDefaultBackgroundColor;
    struct {
        BOOL titleSubtitleUILabel;
    } _needsUpdateFlags;
    BOOL _isTextBannerVisible;
    BOOL _avoidsImageViewIfPossible;
    BOOL _flattensBadgeView;
    BOOL _avoidsPhotoDecoration;
    BOOL _animatingRoundedCorners;
    BOOL _useOverlay;
    BOOL _highlighted;
    BOOL _livePhotoHidden;
    BOOL _shouldPrepareForPlayback;
    BOOL _showsLivePhoto;
    BOOL _needsAvalancheStack;
    UIView *_contentView;
    long long _fillMode;
    UIImage *_photoImage;
    UIImage *_placeHolderImage;
    PUPhotoDecoration *_photoDecoration;
    double _cornerRadius;
    UIColor *_overlayColor;
    UIColor *_backgroundColor;
    id<PUPhotoViewContentHelperDelegate> _delegate;
    PHLivePhoto *_livePhoto;
    struct CGColor *_avalancheStackBackgroundColor;
    unsigned long long _badgeTypes;
    double _videoDuration;
    long long _badgeStyle;
    PUTextBannerView *_textBannerView;
    PXFeatureSpec *_featureSpec;
    PXCollectionTileLayoutTemplate *_collectionTileLayoutTemplate;
    NSString *_titleFontName;
    NSString *_title;
    NSString *_subtitle;
    UIImageView *_photoImageView;
    UIImageView *__crossfadeImageView;
    PUAvalancheStackView *_avalancheStackView;
    PHLivePhotoView *_livePhotoView;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    UIView *__highlightOverlayView;
    PXAssetBadgeUIView *__badgeView;
    PXTitleSubtitleUILabel *__titleSubtitleLabel;
    struct CGSize _photoSize;
    struct CGAffineTransform _imageTransform;
}

@property (strong, nonatomic, setter=_setBadgeView:) PXAssetBadgeUIView *_badgeView; // @synthesize _badgeView=__badgeView;
@property (strong, nonatomic) UIImageView *_crossfadeImageView; // @synthesize _crossfadeImageView=__crossfadeImageView;
@property (strong, nonatomic, setter=_setHighlightOverlayView:) UIView *_highlightOverlayView; // @synthesize _highlightOverlayView=__highlightOverlayView;
@property (strong, nonatomic, setter=_setTitleSubtitleUILabel:) PXTitleSubtitleUILabel *_titleSubtitleLabel; // @synthesize _titleSubtitleLabel=__titleSubtitleLabel;
@property (nonatomic, getter=isAnimatingRoundedCorners) BOOL animatingRoundedCorners; // @synthesize animatingRoundedCorners=_animatingRoundedCorners;
@property (nonatomic) struct CGColor *avalancheStackBackgroundColor; // @synthesize avalancheStackBackgroundColor=_avalancheStackBackgroundColor;
@property (strong, nonatomic) PUAvalancheStackView *avalancheStackView; // @synthesize avalancheStackView=_avalancheStackView;
@property (nonatomic) BOOL avoidsImageViewIfPossible; // @synthesize avoidsImageViewIfPossible=_avoidsImageViewIfPossible;
@property (nonatomic) BOOL avoidsPhotoDecoration; // @synthesize avoidsPhotoDecoration=_avoidsPhotoDecoration;
@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (readonly, nonatomic) UIView *badgeContainerView;
@property (readonly, nonatomic) long long badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property (readonly, nonatomic) unsigned long long badgeTypes; // @synthesize badgeTypes=_badgeTypes;
@property (strong, nonatomic) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate; // @synthesize collectionTileLayoutTemplate=_collectionTileLayoutTemplate;
@property (readonly, weak, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUPhotoViewContentHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PXFeatureSpec *featureSpec; // @synthesize featureSpec=_featureSpec;
@property (nonatomic) long long fillMode; // @synthesize fillMode=_fillMode;
@property (nonatomic) BOOL flattensBadgeView; // @synthesize flattensBadgeView=_flattensBadgeView;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (readonly, nonatomic) struct CGRect imageContentFrame;
@property (nonatomic) struct CGAffineTransform imageTransform; // @synthesize imageTransform=_imageTransform;
@property (strong, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property (nonatomic, getter=isLivePhotoHidden) BOOL livePhotoHidden; // @synthesize livePhotoHidden=_livePhotoHidden;
@property (strong, nonatomic) PHLivePhotoView *livePhotoView; // @synthesize livePhotoView=_livePhotoView;
@property (nonatomic) BOOL needsAvalancheStack; // @synthesize needsAvalancheStack=_needsAvalancheStack;
@property (strong, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property (copy, nonatomic) PUPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;
@property (strong, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property (strong, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property (nonatomic) struct CGSize photoSize; // @synthesize photoSize=_photoSize;
@property (strong, nonatomic) UIImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
@property (readonly, nonatomic) BOOL providesVisualFeedbackOnPress;
@property (strong, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView; // @synthesize roundedCornerOverlayView=_roundedCornerOverlayView;
@property (nonatomic) BOOL shouldPrepareForPlayback; // @synthesize shouldPrepareForPlayback=_shouldPrepareForPlayback;
@property (nonatomic) BOOL showsLivePhoto; // @synthesize showsLivePhoto=_showsLivePhoto;
@property (strong, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PUTextBannerView *textBannerView; // @synthesize textBannerView=_textBannerView;
@property (nonatomic, getter=isTextBannerVisible) BOOL textBannerVisible; // @synthesize textBannerVisible=_isTextBannerVisible;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
@property (nonatomic) BOOL useOverlay; // @synthesize useOverlay=_useOverlay;
@property (readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;

+ (struct CGRect)_imageContentFrameForBounds:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 fillMode:(long long)arg3;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 fillMode:(long long)arg3;
- (void).cxx_destruct;
- (void)_addAvalancheStackViewIfNecessary;
- (void)_invalidateTitleSubtitleUILabel;
- (void)_removeAvalancheStackViewIfNecessary;
- (void)_removePhotoImageViewIfNecessary;
- (void)_startPlaybackWhenLivePhotoAvailableWithStyle:(long long)arg1;
- (void)_updateBadgeView;
- (void)_updateContentViewClipsToBounds;
- (void)_updateHighlight;
- (void)_updateImageView;
- (void)_updateLayerCornerRadius;
- (void)_updateLivePhotoView;
- (void)_updateLivePhotoViewPreparing;
- (void)_updateLivePhotoViewVisibility;
- (void)_updatePhotoDecoration;
- (void)_updateRoundedCornersOverlayView;
- (void)_updateSubviewOrdering;
- (void)_updateTextBannerView;
- (void)_updateTitleSubtitleUILabelIfNeeded;
- (void)animateCrossfadeToImage:(id)arg1;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;
- (struct CGRect)imageContentFrameForBounds:(struct CGRect)arg1;
- (id)init;
- (id)initWithContentView:(id)arg1;
- (void)layoutSubviewsOfContentView;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (struct CGRect)photoDecorationBorderViewFrameForImageContentFrame:(struct CGRect)arg1;
- (void)setBadgeTypes:(unsigned long long)arg1 videoDuration:(double)arg2;
- (void)setBadgeTypes:(unsigned long long)arg1 videoDuration:(double)arg2 style:(long long)arg3;
- (void)setCornerRadius:(double)arg1 useOverlay:(BOOL)arg2 overlayColor:(id)arg3;
- (void)startPlaybackWithStyle:(long long)arg1;
- (void)stopPlayback;
- (void)updatePhotoImageWithoutReconfiguring:(id)arg1;

@end


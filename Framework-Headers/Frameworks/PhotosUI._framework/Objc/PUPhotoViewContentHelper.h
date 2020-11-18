//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISPlayerView, PUAvalancheStackView, PUBackgroundColorView, PUBadgeView, PUBrowsingIrisPlayer, PUPhotoDecoration, PUTextBannerView, UICollectionView, UIImage, UIImageView, UIView;
@protocol PUPhotoViewContentHelperIrisDelegate;

@interface PUPhotoViewContentHelper : NSObject
{
    PUBackgroundColorView *_photoDecorationBorderView;
    PUBackgroundColorView *_photoDecorationOverlayView;
    PUBadgeView *_badgeView;
    BOOL _hasTransform;
    struct {
        BOOL respondsToPlaybackStateDidChange;
    } _irisDelegateFlags;
    BOOL _isTextBannerVisible;
    BOOL _avoidsImageViewIfPossible;
    BOOL _flattensBadgeView;
    BOOL _avoidsPhotoDecoration;
    BOOL _irisPlayerHidden;
    BOOL _needsAvalancheStack;
    BOOL __isPerformingIrisPlayerChanges;
    BOOL __isIrisVitalityEnabled;
    UIView *_contentView;
    long long _fillMode;
    UIImage *_photoImage;
    UIImage *_placeHolderImage;
    PUPhotoDecoration *_photoDecoration;
    PUBrowsingIrisPlayer *_irisPlayer;
    double _irisPlayerScrubOffset;
    UICollectionView *_irisContainerScrollView;
    id<PUPhotoViewContentHelperIrisDelegate> _irisDelegate;
    struct CGColor *_avalancheStackBackgroundColor;
    long long _badgeType;
    double _videoDuration;
    PUTextBannerView *_textBannerView;
    UIImageView *_photoImageView;
    UIImageView *__crossfadeImageView;
    PUAvalancheStackView *_avalancheStackView;
    ISPlayerView *_irisPlayerView;
    struct CGSize _photoSize;
    struct CGAffineTransform _imageTransform;
}

@property (strong, nonatomic) UIImageView *_crossfadeImageView; // @synthesize _crossfadeImageView=__crossfadeImageView;
@property (nonatomic, setter=_setIrisVitalityEnabled:) BOOL _isIrisVitalityEnabled; // @synthesize _isIrisVitalityEnabled=__isIrisVitalityEnabled;
@property (nonatomic, setter=_setPerformingIrisPlayerChanges:) BOOL _isPerformingIrisPlayerChanges; // @synthesize _isPerformingIrisPlayerChanges=__isPerformingIrisPlayerChanges;
@property (nonatomic) struct CGColor *avalancheStackBackgroundColor; // @synthesize avalancheStackBackgroundColor=_avalancheStackBackgroundColor;
@property (strong, nonatomic) PUAvalancheStackView *avalancheStackView; // @synthesize avalancheStackView=_avalancheStackView;
@property (nonatomic) BOOL avoidsImageViewIfPossible; // @synthesize avoidsImageViewIfPossible=_avoidsImageViewIfPossible;
@property (nonatomic) BOOL avoidsPhotoDecoration; // @synthesize avoidsPhotoDecoration=_avoidsPhotoDecoration;
@property (readonly, nonatomic) UIView *badgeContainerView;
@property (readonly, nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
@property (readonly, weak, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (nonatomic) long long fillMode; // @synthesize fillMode=_fillMode;
@property (nonatomic) BOOL flattensBadgeView; // @synthesize flattensBadgeView=_flattensBadgeView;
@property (readonly, nonatomic) struct CGRect imageContentFrame;
@property (nonatomic) struct CGAffineTransform imageTransform; // @synthesize imageTransform=_imageTransform;
@property (weak, nonatomic) UICollectionView *irisContainerScrollView; // @synthesize irisContainerScrollView=_irisContainerScrollView;
@property (weak, nonatomic) id<PUPhotoViewContentHelperIrisDelegate> irisDelegate; // @synthesize irisDelegate=_irisDelegate;
@property (strong, nonatomic) PUBrowsingIrisPlayer *irisPlayer; // @synthesize irisPlayer=_irisPlayer;
@property (nonatomic, getter=isIrisPlayerHidden) BOOL irisPlayerHidden; // @synthesize irisPlayerHidden=_irisPlayerHidden;
@property (nonatomic) double irisPlayerScrubOffset; // @synthesize irisPlayerScrubOffset=_irisPlayerScrubOffset;
@property (strong, nonatomic) ISPlayerView *irisPlayerView; // @synthesize irisPlayerView=_irisPlayerView;
@property (nonatomic) BOOL needsAvalancheStack; // @synthesize needsAvalancheStack=_needsAvalancheStack;
@property (copy, nonatomic) PUPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;
@property (strong, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property (strong, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property (nonatomic) struct CGSize photoSize; // @synthesize photoSize=_photoSize;
@property (strong, nonatomic) UIImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
@property (readonly, nonatomic) BOOL providesVisualFeedbackOnPress;
@property (readonly, nonatomic) PUTextBannerView *textBannerView; // @synthesize textBannerView=_textBannerView;
@property (nonatomic, getter=isTextBannerVisible) BOOL textBannerVisible; // @synthesize textBannerVisible=_isTextBannerVisible;
@property (readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;

+ (struct CGRect)_imageContentFrameForBounds:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 fillMode:(long long)arg3;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 fillMode:(long long)arg3;
- (void).cxx_destruct;
- (void)_addAvalancheStackViewIfNecessary;
- (void)_addIrisPlayerViewIfNecessary;
- (void)_assertInsideIrisPlayerChanges;
- (void)_playerPlaybackStateDidChange;
- (void)_removeAvalancheStackViewIfNecessary;
- (void)_removeIrisPlayerViewIfNecessary;
- (void)_removePhotoImageViewIfNecessary;
- (void)_updateBadgeView;
- (void)_updateContentViewClipsToBounds;
- (void)_updateImageView;
- (void)_updateIrisVitalityEnabled;
- (void)_updatePhotoDecoration;
- (void)_updateSubviewOrdering;
- (void)_updateTextBannerView;
- (void)animateCrossfadeToImage:(id)arg1;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (struct CGRect)imageContentFrameForBounds:(struct CGRect)arg1;
- (id)init;
- (id)initWithContentView:(id)arg1;
- (void)layoutSubviewsOfContentView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)performIrisPlayerChanges:(CDUnknownBlockType)arg1;
- (struct CGRect)photoDecorationBorderViewFrameForImageContentFrame:(struct CGRect)arg1;
- (void)setBadgeType:(long long)arg1 videoDuration:(double)arg2;
- (void)updatePhotoImageWithoutReconfiguring:(id)arg1;

@end

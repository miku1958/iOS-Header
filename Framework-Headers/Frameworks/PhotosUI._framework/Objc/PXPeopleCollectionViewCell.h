//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <PhotosUICore/PXUIAssetBadgeViewDelegate-Protocol.h>

@class NSString, PXRoundedCornerOverlayView, UIButton, UIImage, UIImageView, UILabel, UIView, UIVisualEffectView;
@protocol PXPeopleCollectionViewCellDelegate;

@interface PXPeopleCollectionViewCell : UICollectionViewCell <PXUIAssetBadgeViewDelegate>
{
    struct CGRect _unitRect;
    BOOL _titleUsesAllCaps;
    BOOL _favorite;
    BOOL _isReordering;
    BOOL _ppt_fullImageLoaded;
    BOOL _blurApplied;
    UIImageView *_avatarView;
    NSString *_name;
    double _textAlpha;
    unsigned long long _selectionStyle;
    id<PXPeopleCollectionViewCellDelegate> _delegate;
    UILabel *_nameLabel;
    UIView *_selectionView;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
    UIButton *_favoriteBadge;
    UIView *_highlightOverlayView;
    UIView *_checkmarkView;
    UIView *_gradientView;
    UIImageView *_mirrorView;
    UIVisualEffectView *_blurView;
    struct CGSize _avatarSize;
}

@property (nonatomic) struct CGSize avatarSize; // @synthesize avatarSize=_avatarSize;
@property (readonly, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property (nonatomic) BOOL blurApplied; // @synthesize blurApplied=_blurApplied;
@property (strong, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property (strong, nonatomic) UIView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPeopleCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property (strong, nonatomic) UIButton *favoriteBadge; // @synthesize favoriteBadge=_favoriteBadge;
@property (strong, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *highlightOverlayView; // @synthesize highlightOverlayView=_highlightOverlayView;
@property (strong, nonatomic) UIImage *image;
@property (nonatomic, setter=setReordering:) BOOL isReordering; // @synthesize isReordering=_isReordering;
@property (strong, nonatomic) UIImageView *mirrorView; // @synthesize mirrorView=_mirrorView;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property (nonatomic) BOOL ppt_fullImageLoaded; // @synthesize ppt_fullImageLoaded=_ppt_fullImageLoaded;
@property (strong, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay; // @synthesize roundCornerOverlay=_roundCornerOverlay;
@property (nonatomic) unsigned long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property (strong, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
@property (readonly) Class superclass;
@property (nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property (nonatomic) BOOL titleUsesAllCaps; // @synthesize titleUsesAllCaps=_titleUsesAllCaps;

- (void).cxx_destruct;
- (struct CGSize)_avatarSizeForImageSize:(struct CGSize)arg1;
- (void)_favoriteBadgePressed:(id)arg1;
- (long long)_preferredSizeClass;
- (id)_stretchableGradientImageWithSize:(struct CGSize)arg1 scale:(double)arg2 gradientColor:(id)arg3;
- (void)_updateSelection;
- (void)_updateTitleAndFavoriteBadgeForLayoutChange;
- (void)_updateType;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setImage:(id)arg1 normalizedFaceRect:(struct CGRect)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end


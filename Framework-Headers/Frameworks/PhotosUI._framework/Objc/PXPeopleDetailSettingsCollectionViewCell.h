//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSNumberFormatter, NSString, PXRoundedCornerOverlayView, UIImage, UIImageView, UILabel, UIView;

@interface PXPeopleDetailSettingsCollectionViewCell : UICollectionViewCell
{
    NSNumberFormatter *_quantityNumberFormatter;
    struct CGRect _unitRect;
    BOOL _isFavorite;
    BOOL _isReordering;
    UIImageView *_avatarView;
    NSString *_name;
    unsigned long long _photoQuantity;
    double _textAlpha;
    UILabel *_quantityLabel;
    UILabel *_nameLabel;
    UIView *_actionIndicatorView;
    UIView *_selectionView;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
}

@property (nonatomic, getter=isActionIndicatorHidden) BOOL actionIndicatorHidden;
@property (strong, nonatomic) UIView *actionIndicatorView; // @synthesize actionIndicatorView=_actionIndicatorView;
@property (readonly, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property (strong, nonatomic) UIImage *image;
@property (nonatomic) BOOL isFavorite; // @synthesize isFavorite=_isFavorite;
@property (nonatomic, setter=setReordering:) BOOL isReordering; // @synthesize isReordering=_isReordering;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property (nonatomic) unsigned long long photoQuantity; // @synthesize photoQuantity=_photoQuantity;
@property (strong, nonatomic) UILabel *quantityLabel; // @synthesize quantityLabel=_quantityLabel;
@property (strong, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay; // @synthesize roundCornerOverlay=_roundCornerOverlay;
@property (strong, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
@property (nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;

+ (double)preferredHeightForWidth:(double)arg1 forAvatarPercentage:(double)arg2 withSizeClass:(long long)arg3 isFavorite:(BOOL)arg4;
- (void).cxx_destruct;
- (id)_placeHolderColor;
- (long long)_preferredSizeClass;
- (void)_updateType;
- (double)avatarCenterYOffset;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setImage:(id)arg1 normalizedFaceRect:(struct CGRect)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end


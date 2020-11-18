//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PXPersonImageRequest, PXRoundedCornerOverlayView, UIImage, UIImageView;

@interface PXPeopleBootstrapCollectionViewCell : UICollectionViewCell
{
    BOOL _confirmed;
    BOOL _isMergeCandidate;
    BOOL _isVerified;
    unsigned long long _presentationStatus;
    PXPersonImageRequest *_imageRequest;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
    UIImageView *_checkmark;
    UIImageView *_badgeView;
    UIImageView *_imageView;
    UIImage *_confirmedImage;
    UIImage *_unconfirmedImage;
    struct CGSize _checkmarkImageSize;
}

@property (readonly, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property (readonly, nonatomic) UIImageView *checkmark; // @synthesize checkmark=_checkmark;
@property (readonly, nonatomic) struct CGSize checkmarkImageSize; // @synthesize checkmarkImageSize=_checkmarkImageSize;
@property (nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property (readonly, nonatomic) UIImage *confirmedImage; // @synthesize confirmedImage=_confirmedImage;
@property (strong, nonatomic) UIImage *image;
@property (strong, nonatomic) PXPersonImageRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
@property (readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) BOOL isMergeCandidate; // @synthesize isMergeCandidate=_isMergeCandidate;
@property (nonatomic) BOOL isVerified; // @synthesize isVerified=_isVerified;
@property (nonatomic) unsigned long long presentationStatus; // @synthesize presentationStatus=_presentationStatus;
@property (readonly, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay; // @synthesize roundCornerOverlay=_roundCornerOverlay;
@property (readonly, nonatomic) UIImage *unconfirmedImage; // @synthesize unconfirmedImage=_unconfirmedImage;

+ (id)cloudBadgeImage;
+ (id)cloudErrorBadgeImage;
- (void).cxx_destruct;
- (BOOL)_isRTL;
- (void)_updateCellSizing;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect)arg1;

@end


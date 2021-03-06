//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PXPersonImageRequest, PXRoundedCornerOverlayView, UIImage, UIImageView, UIView;

@interface PXPeopleBootstrapCollectionViewCell : UICollectionViewCell
{
    BOOL _confirmed;
    BOOL _isMergeCandidate;
    BOOL _isVerified;
    unsigned long long _presentationStatus;
    PXPersonImageRequest *_imageRequest;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
    UIView *_selectedCheckmarkView;
    UIView *_unselectedCheckmarkView;
    UIImageView *_badgeView;
    UIImageView *_imageView;
    struct CGSize _checkmarkImageSize;
}

@property (readonly, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property (readonly, nonatomic) struct CGSize checkmarkImageSize; // @synthesize checkmarkImageSize=_checkmarkImageSize;
@property (nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property (strong, nonatomic) UIImage *image;
@property (strong, nonatomic) PXPersonImageRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
@property (readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) BOOL isMergeCandidate; // @synthesize isMergeCandidate=_isMergeCandidate;
@property (nonatomic) BOOL isVerified; // @synthesize isVerified=_isVerified;
@property (nonatomic) unsigned long long presentationStatus; // @synthesize presentationStatus=_presentationStatus;
@property (readonly, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay; // @synthesize roundCornerOverlay=_roundCornerOverlay;
@property (readonly, nonatomic) UIView *selectedCheckmarkView; // @synthesize selectedCheckmarkView=_selectedCheckmarkView;
@property (readonly, nonatomic) UIView *unselectedCheckmarkView; // @synthesize unselectedCheckmarkView=_unselectedCheckmarkView;

+ (id)cloudErrorBadgeImage;
- (void).cxx_destruct;
- (BOOL)_isRTL;
- (void)_updateCellSizing;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect)arg1;

@end


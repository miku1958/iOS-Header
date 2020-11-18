//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, NSUUID, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselCell : UICollectionViewCell
{
    NSUUID *_displaySessionUUID;
    double _imageInsetPercentage;
    UIImageView *_imageView;
    UILabel *_label;
}

@property (strong, nonatomic) NSUUID *displaySessionUUID; // @synthesize displaySessionUUID=_displaySessionUUID;
@property (strong, nonatomic) UIImage *image;
@property (nonatomic) double imageInsetPercentage; // @synthesize imageInsetPercentage=_imageInsetPercentage;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (strong, nonatomic) UILabel *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *title;

+ (id)cellIdentifier;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

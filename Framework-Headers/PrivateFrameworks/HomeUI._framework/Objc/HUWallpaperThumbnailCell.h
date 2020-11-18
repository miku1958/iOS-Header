//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImage, UIImageView;

@interface HUWallpaperThumbnailCell : UITableViewCell
{
    UIImageView *_imageThumbnailView;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
    struct CGSize _imageSize;
}

@property (strong, nonatomic) UIImage *image;
@property (strong, nonatomic) NSLayoutConstraint *imageHeightConstraint; // @synthesize imageHeightConstraint=_imageHeightConstraint;
@property (nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property (strong, nonatomic) UIImageView *imageThumbnailView; // @synthesize imageThumbnailView=_imageThumbnailView;
@property (strong, nonatomic) NSLayoutConstraint *imageWidthConstraint; // @synthesize imageWidthConstraint=_imageWidthConstraint;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end

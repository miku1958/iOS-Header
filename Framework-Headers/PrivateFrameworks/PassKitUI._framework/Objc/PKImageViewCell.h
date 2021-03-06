//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImage, UIImageView;

@interface PKImageViewCell : UITableViewCell
{
    BOOL _matchCellBackgroundToImage;
    long long _imageViewContentMode;
}

@property (strong, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImageView *imageView; // @dynamic imageView;
@property (nonatomic) long long imageViewContentMode; // @synthesize imageViewContentMode=_imageViewContentMode;
@property (nonatomic) BOOL matchCellBackgroundToImage; // @synthesize matchCellBackgroundToImage=_matchCellBackgroundToImage;

- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;

@end


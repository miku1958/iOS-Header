//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIIPhoneSlideshowCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImageView *_playIcon;
    struct CGSize _imageSize;
}

@property (strong, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGRect imageFrame;
@property (nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property (nonatomic, getter=isVideo) BOOL video;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;

@end

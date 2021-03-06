//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/MPUStackItemView.h>

@class UIImage, UIImageView;

@interface MPUImageStackItemView : MPUStackItemView
{
    UIImageView *_imageView;
    UIImage *_image;
    double _imageAlpha;
    struct CGRect _imageContentsRect;
    struct CGAffineTransform _imageTransform;
}

@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (nonatomic) double imageAlpha; // @synthesize imageAlpha=_imageAlpha;
@property (nonatomic) struct CGRect imageContentsRect; // @synthesize imageContentsRect=_imageContentsRect;
@property (nonatomic) struct CGAffineTransform imageTransform; // @synthesize imageTransform=_imageTransform;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIClearBackgroundCell.h>

@class CALayer, NSURL, UIImage;

@interface SiriUIPhotoCollectionViewCell : SiriUIClearBackgroundCell
{
    NSURL *_photoURL;
    UIImage *_image;
    CALayer *_imageLayer;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setImage:(id)arg1;
- (void)setImageURL:(id)arg1;

@end


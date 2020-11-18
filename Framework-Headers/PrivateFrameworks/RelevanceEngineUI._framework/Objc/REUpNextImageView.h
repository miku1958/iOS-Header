//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageView;

@interface REUpNextImageView : UIView
{
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
    UIImageView *_foregroundAccentImageView;
    UIColor *_fallbackTintColor;
    UIImage *_overrideImage;
}

@property (strong, nonatomic) UIColor *fallbackTintColor; // @synthesize fallbackTintColor=_fallbackTintColor;
@property (strong, nonatomic) UIImage *overrideImage; // @synthesize overrideImage=_overrideImage;

- (void).cxx_destruct;
- (BOOL)_hasMultipartImages;
- (void)_updateColors;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;

@end


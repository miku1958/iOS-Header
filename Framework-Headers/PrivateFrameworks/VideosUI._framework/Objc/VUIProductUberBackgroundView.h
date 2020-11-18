//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIVisualEffectView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIProductUberBackgroundView : UIView
{
    BOOL _isChannelBanner;
    _TVImageView *_imageView;
    long long _configuredBlurInterfaceStyle;
    CAGradientLayer *_maskGradientLayer;
    UIVisualEffectView *_blurEffectView;
    double _contentOffset;
    struct CGSize _imageSize;
}

@property (strong, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property (nonatomic) long long configuredBlurInterfaceStyle; // @synthesize configuredBlurInterfaceStyle=_configuredBlurInterfaceStyle;
@property (nonatomic) double contentOffset; // @synthesize contentOffset=_contentOffset;
@property (nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property (strong, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) BOOL isChannelBanner; // @synthesize isChannelBanner=_isChannelBanner;
@property (strong, nonatomic) CAGradientLayer *maskGradientLayer; // @synthesize maskGradientLayer=_maskGradientLayer;

- (void).cxx_destruct;
- (void)configureBlurWithInterfaceStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageOffset:(double)arg1;

@end

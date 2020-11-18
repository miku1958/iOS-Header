//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAFilter, UIImage, UIImageView, _UILegibilitySettings;

@interface _UILegibilityView : UIView
{
    BOOL _hidesImage;
    _UILegibilitySettings *_settings;
    UIImage *_image;
    UIImage *_shadowImage;
    double _strength;
    UIImageView *_imageView;
    UIImageView *_shadowImageView;
    CAFilter *_imageColorFilter;
    CAFilter *_shadowImageColorFilter;
    long long _options;
}

@property (nonatomic) BOOL hidesImage; // @synthesize hidesImage=_hidesImage;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) CAFilter *imageColorFilter; // @synthesize imageColorFilter=_imageColorFilter;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) long long options; // @synthesize options=_options;
@property (strong, nonatomic) _UILegibilitySettings *settings; // @synthesize settings=_settings;
@property (strong, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property (strong, nonatomic) CAFilter *shadowImageColorFilter; // @synthesize shadowImageColorFilter=_shadowImageColorFilter;
@property (strong, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property (nonatomic) double strength; // @synthesize strength=_strength;
@property (readonly, nonatomic) long long style; // @dynamic style;
@property (readonly, nonatomic) BOOL usesColorFilters;

- (void)dealloc;
- (id)drawingColor;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(long long)arg5;
- (id)initWithStyle:(long long)arg1 image:(id)arg2;
- (id)initWithStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 shadowImage:(id)arg2;
- (void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)setStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateForChangedSettings:(id)arg1;
- (void)updateImage;
- (BOOL)usesSecondaryColor;

@end


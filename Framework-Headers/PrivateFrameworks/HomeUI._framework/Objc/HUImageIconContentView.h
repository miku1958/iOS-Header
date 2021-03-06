//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUIconContentView.h>

@class UIImageView;

@interface HUImageIconContentView : HUIconContentView
{
    long long _iconContentMode;
    UIImageView *_imageView;
    long long _originalImageRenderingMode;
}

@property (nonatomic) long long iconContentMode; // @synthesize iconContentMode=_iconContentMode;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) long long originalImageRenderingMode; // @synthesize originalImageRenderingMode=_originalImageRenderingMode;

- (void).cxx_destruct;
- (void)_updateIconImage;
- (id)imageForImageIconDescriptor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;
- (void)setIconSize:(unsigned long long)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3;

@end


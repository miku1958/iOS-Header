//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKColoringImageView.h>

@class UIColor, UIImage, UIImageView;

@interface NTKHandView : NTKColoringImageView
{
    UIImageView *_shadowImageView;
    NTKColoringImageView *_inlayView;
    BOOL _shadowsHidden;
    double _zRotation;
    double _scale;
    UIColor *_inlayColor;
    UIImage *_shadowImage;
    struct UIEdgeInsets _inlayInsets;
    struct UIEdgeInsets _shadowInsets;
}

@property (strong, nonatomic) UIColor *inlayColor; // @synthesize inlayColor=_inlayColor;
@property (nonatomic) struct UIEdgeInsets inlayInsets; // @synthesize inlayInsets=_inlayInsets;
@property (readonly, nonatomic) NTKColoringImageView *inlayView;
@property (nonatomic) double scale; // @synthesize scale=_scale;
@property (strong, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property (nonatomic) struct UIEdgeInsets shadowInsets; // @synthesize shadowInsets=_shadowInsets;
@property (nonatomic) BOOL shadowsHidden; // @synthesize shadowsHidden=_shadowsHidden;
@property (nonatomic) double zRotation; // @synthesize zRotation=_zRotation;

+ (id)_resizableInlayImage;
- (void).cxx_destruct;
- (void)_updateShadows;
- (void)_updateTransform;
- (id)initWithImage:(id)arg1;
- (void)layoutSubviews;

@end


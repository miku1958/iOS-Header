//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIBlurEffect.h>

@class UIColor, _UIBackdropViewSettings;

__attribute__((visibility("hidden")))
@interface _UICustomBlurEffect : UIBlurEffect
{
    _UIBackdropViewSettings *_blurEffect;
}

@property (nonatomic) double blurRadius;
@property (nonatomic) double colorBurnTintAlpha;
@property (nonatomic) double colorBurnTintLevel;
@property (strong, nonatomic) UIColor *colorTint;
@property (nonatomic) double colorTintAlpha;
@property (nonatomic) BOOL darkenWithSourceOver;
@property (nonatomic) double darkeningTintAlpha;
@property (nonatomic) double darkeningTintHue;
@property (nonatomic) double darkeningTintSaturation;
@property (nonatomic) double grayscaleTintAlpha;
@property (nonatomic) double grayscaleTintLevel;
@property (nonatomic) BOOL lightenGrayscaleWithSourceOver;
@property (nonatomic) double saturationDeltaFactor;
@property (nonatomic) double scale;
@property (nonatomic) double zoom;

+ (id)effectWithStyle:(long long)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)effectSettings;
- (id)init;

@end

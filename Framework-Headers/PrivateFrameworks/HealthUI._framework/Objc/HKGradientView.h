//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HKGradient;

@interface HKGradientView : UIView
{
    HKGradient *_gradient;
}

@property (strong, nonatomic) HKGradient *gradient; // @synthesize gradient=_gradient;

+ (id)hk_verticalWaveformMaskGradientWithInsetLocation:(double)arg1;
+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_updateGradientLayer;
- (id)initWithGradient:(id)arg1;
- (void)maskAllCornersWithRadius:(double)arg1;
- (void)maskCorners:(unsigned long long)arg1 radius:(double)arg2;

@end


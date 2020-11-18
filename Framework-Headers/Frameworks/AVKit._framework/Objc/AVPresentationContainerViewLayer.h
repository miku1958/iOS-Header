//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class AVPresentationContainerViewAppearanceProxy;

__attribute__((visibility("hidden")))
@interface AVPresentationContainerViewLayer : CALayer
{
    BOOL _wantsAppearanceConfigValues;
    AVPresentationContainerViewAppearanceProxy *_appearanceProxy;
}

@property (readonly, nonatomic) AVPresentationContainerViewAppearanceProxy *appearanceProxy; // @synthesize appearanceProxy=_appearanceProxy;
@property (nonatomic) BOOL wantsAppearanceConfigValues; // @synthesize wantsAppearanceConfigValues=_wantsAppearanceConfigValues;

- (void).cxx_destruct;
- (BOOL)continuousCorners;
- (id)cornerCurve;
- (double)cornerRadius;
- (unsigned long long)maskedCorners;
- (BOOL)masksToBounds;
- (void)setContinuousCorners:(BOOL)arg1;
- (void)setCornerCurve:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setMasksToBounds:(BOOL)arg1;

@end

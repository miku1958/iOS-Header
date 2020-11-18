//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, _UILegibilitySettings;

@interface _SBFVibrantSettings : NSObject
{
    long long _style;
    UIColor *_referenceColor;
    _UILegibilitySettings *_legibilitySettings;
    double _referenceContrast;
    UIColor *_highlightLimitingColor;
    UIColor *_shimmerColor;
    UIColor *_chevronShimmerColor;
    UIColor *_highlightColor;
    UIColor *_tintColor;
}

@property (strong, nonatomic) UIColor *chevronShimmerColor; // @synthesize chevronShimmerColor=_chevronShimmerColor;
@property (strong, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property (strong, nonatomic) UIColor *highlightLimitingColor; // @synthesize highlightLimitingColor=_highlightLimitingColor;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (readonly, nonatomic) UIColor *referenceColor; // @synthesize referenceColor=_referenceColor;
@property (readonly, nonatomic) double referenceContrast; // @synthesize referenceContrast=_referenceContrast;
@property (strong, nonatomic) UIColor *shimmerColor; // @synthesize shimmerColor=_shimmerColor;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

+ (id)vibrantSettingsWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3;
- (void).cxx_destruct;
- (id)_computeSourceColorDodgeColorForDestinationColor:(id)arg1 producingLuminanceChange:(double)arg2;
- (long long)_style;
- (unsigned long long)hash;
- (id)highlightLimitingViewWithFrame:(struct CGRect)arg1;
- (id)initWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)tintViewWithFrame:(struct CGRect)arg1;

@end

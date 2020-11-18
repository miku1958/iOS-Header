//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CLKDevice, NSString, UIColor, _AdjustableLabel;

@interface NTKVictoryDigitsView : UIView
{
    CLKDevice *_device;
    _AdjustableLabel *_mainLabel;
    _AdjustableLabel *_outlineBackgroundLabel;
    BOOL _hasSetAppearance;
    CAGradientLayer *_dimmingOverlay;
    BOOL _dimIsUpper;
    BOOL _lastDigitIs7;
    double _scale;
    long long _appearance;
}

@property (nonatomic) long long appearance; // @synthesize appearance=_appearance;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) NSString *digitText;
@property (nonatomic) double scale; // @synthesize scale=_scale;

+ (id)_cachedFontForAppearance:(long long)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
- (id)_makeLabel;
- (void)_updateFonts;
- (id)initForDevice:(id)arg1;
- (void)layoutSubviews;
- (void)prepareAppearance:(long long)arg1;
- (void)setDimmingFactor:(double)arg1 isUpper:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end


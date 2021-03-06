//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CLKDevice, NSString, NTKVictoryLabel, UIColor;

@interface NTKVictoryDigitsView : UIView
{
    CLKDevice *_device;
    NTKVictoryLabel *_label;
    BOOL _hasSetAppearance;
    CAGradientLayer *_dimmingOverlay;
    BOOL _dimIsUpper;
    UIColor *_color;
    double _scale;
    long long _appearance;
    UIColor *_outlineBackgroundColor;
}

@property (nonatomic) long long appearance; // @synthesize appearance=_appearance;
@property (copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property (copy, nonatomic) NSString *digitText;
@property (strong, nonatomic) UIColor *outlineBackgroundColor; // @synthesize outlineBackgroundColor=_outlineBackgroundColor;
@property (nonatomic) double scale; // @synthesize scale=_scale;

+ (id)_fontForAppearance:(long long)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
- (id)_createLabel;
- (void)_updateFonts;
- (void)applyColor;
- (id)initForDevice:(id)arg1;
- (void)layoutSubviews;
- (void)prepareAppearance:(long long)arg1;
- (void)setDimmingFactor:(double)arg1 isUpper:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end


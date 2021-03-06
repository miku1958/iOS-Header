//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>
#import <NanoTimeKitCompanion/CLKMonochromeFilterProvider-Protocol.h>

@class CLKDevice, CLKGaugeProvider, NSArray, NSNumber, NSString, NTKRichComplicationShapeView;
@protocol CLKMonochromeFilterProvider;

@interface NTKRichComplicationProgressView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView>
{
    long long _family;
    CLKDevice *_device;
    NSNumber *_updateToken;
    float _currentBackgroundViewAlphaPercentage;
    BOOL _enabled;
    id<CLKMonochromeFilterProvider> _filterProvider;
    NSArray *_gradientColors;
    double _progress;
    long long _style;
    CLKGaugeProvider *_gaugeProvider;
    NTKRichComplicationShapeView *_backgroundView;
    NTKRichComplicationShapeView *_foregroundView;
    UIView *_ringView;
}

@property (readonly, nonatomic) NTKRichComplicationShapeView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
@property (readonly, nonatomic) NTKRichComplicationShapeView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property (strong, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
@property (strong, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property (readonly) unsigned long long hash;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) UIView *ringView; // @synthesize ringView=_ringView;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_adjustBackgroundViewAlphaWithPercentage:(float)arg1;
- (void)_applyStyle;
- (void)_createRingView;
- (void)_updateUIFromGaugeProvider;
- (void)animateToProgress:(float)arg1 duration:(double)arg2;
- (id)colorForView:(id)arg1 accented:(BOOL)arg2;
- (void)dealloc;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)initForFamily:(long long)arg1 device:(id)arg2 backgroundShapeView:(id)arg3 foregroundShapeView:(id)arg4;
- (void)layoutSubviews;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2;
- (void)setGradientColors:(id)arg1 locations:(id)arg2;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MaterialKit/MTPillView.h>

#import <MaterialKit/CAAnimationDelegate-Protocol.h>

@class MTLumaDodgePillSettings, NSMutableArray, NSString, _MTLumaDodgePillLowQualityEffectView;
@protocol MTLumaDodgePillBackgroundLuminanceObserver;

@interface MTLumaDodgePillView : MTPillView <CAAnimationDelegate>
{
    long long _style;
    MTLumaDodgePillSettings *_settings;
    id<MTLumaDodgePillBackgroundLuminanceObserver> _backgroundLumninanceObserver;
    long long _backgroundLuminance;
    long long _backgroundLuminanceBias;
    long long _graphicsQuality;
    double _luma;
    BOOL _lumaIsValid;
    _MTLumaDodgePillLowQualityEffectView *_lowQualityEffectView;
    unsigned int _bounceAnimationsInFlight;
    NSMutableArray *_bounceAnimationKeys;
}

@property (readonly, nonatomic) long long backgroundLuminance; // @synthesize backgroundLuminance=_backgroundLuminance;
@property (nonatomic) long long backgroundLuminanceBias; // @synthesize backgroundLuminanceBias=_backgroundLuminanceBias;
@property (weak, nonatomic) id<MTLumaDodgePillBackgroundLuminanceObserver> backgroundLumninanceObserver; // @synthesize backgroundLumninanceObserver=_backgroundLumninanceObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (readonly, nonatomic) double suggestedEdgeSpacing;
@property (readonly) Class superclass;

+ (void)initialize;
+ (Class)layerClass;
+ (BOOL)supportsBackgroundLuminanceObserving;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyAdditivelyWithKey:(id)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateStyle;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)bounce;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 settings:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 settings:(id)arg2 graphicsQuality:(long long)arg3;
- (void)layoutSubviews;
- (void)resetBackgroundLuminanceHysteresis;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)suggestedSizeForContentWidth:(double)arg1;

@end

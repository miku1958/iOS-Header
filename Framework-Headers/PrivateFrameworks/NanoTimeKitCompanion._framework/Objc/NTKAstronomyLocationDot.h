//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CLKDevice, UIColor, UIImageView;

@interface NTKAstronomyLocationDot : UIView
{
    UIView *_outerDot;
    UIImageView *_innerDotImageView;
    BOOL _animating;
    CLKDevice *_device;
    UIColor *_outerDotColor;
    double _outerDotDiameter;
    UIColor *_innerDotColor;
    double _innerDotDiameter;
    double _pulseDuration;
    double _pulseAlphaDelay;
}

@property (nonatomic) BOOL animating; // @synthesize animating=_animating;
@property (readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (strong, nonatomic) UIColor *innerDotColor; // @synthesize innerDotColor=_innerDotColor;
@property (nonatomic) double innerDotDiameter; // @synthesize innerDotDiameter=_innerDotDiameter;
@property (strong, nonatomic) UIColor *outerDotColor; // @synthesize outerDotColor=_outerDotColor;
@property (nonatomic) double outerDotDiameter; // @synthesize outerDotDiameter=_outerDotDiameter;
@property (nonatomic) double pulseAlphaDelay; // @synthesize pulseAlphaDelay=_pulseAlphaDelay;
@property (nonatomic) double pulseDuration; // @synthesize pulseDuration=_pulseDuration;

+ (id)_defaultColor;
+ (double)_defaultInnerDotDiameterForSizeClass:(unsigned long long)arg1;
+ (double)_defaultOuterDotDiameterForSizeClass:(unsigned long long)arg1;
+ (struct CGSize)_defaultSize;
+ (double)defaultPulseAlphaDelay;
+ (double)defaultPulseDuration;
- (void).cxx_destruct;
- (void)_generateInnerDotImage;
- (id)initForDevice:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (void)layoutSubviews;
- (void)startAnimation;
- (void)stopAnimation;

@end
